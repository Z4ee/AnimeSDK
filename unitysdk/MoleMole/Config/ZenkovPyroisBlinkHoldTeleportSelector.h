#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigTargetSelector.h"
#include "unitysdk/MoleMole/Config/TeleportSelectionType.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ZENKOVPYROISBLINKHOLDTELEPORTSELECTOR_METHOD_2_B019EA578D7B20A9_OFFSET UNITYSDK_OFFSET(0x192144B0)
#define MOLEMOLE_CONFIG_ZENKOVPYROISBLINKHOLDTELEPORTSELECTOR_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x19214A10)
#define MOLEMOLE_CONFIG_ZENKOVPYROISBLINKHOLDTELEPORTSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19214A50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ZenkovPyroisBlinkHoldTeleportSelector_TypeDefinitionIndex = 54362;

	class ZenkovPyroisBlinkHoldTeleportSelector : public ::MoleMole::Config::ConfigTargetSelector
	{
	public:
		::MoleMole::Config::TeleportSelectionType TeleportType; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* _cachedSelectList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVPYROISBLINKHOLDTELEPORTSELECTOR__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Method_2_B019EA578D7B20A9(::MoleMole::Battle::Entity* a1)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVPYROISBLINKHOLDTELEPORTSELECTOR_METHOD_2_B019EA578D7B20A9_OFFSET))(this, a1);
		}

		::System::String* Method_2_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVPYROISBLINKHOLDTELEPORTSELECTOR_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
		}
	};
}
