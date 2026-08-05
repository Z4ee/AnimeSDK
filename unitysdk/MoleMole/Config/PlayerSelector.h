#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigTargetSelector.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_PLAYERSELECTOR_METHOD_2_C2750097377FC541_OFFSET UNITYSDK_OFFSET(0x16C5D4F0)
#define MOLEMOLE_CONFIG_PLAYERSELECTOR_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x19B9EF20)
#define MOLEMOLE_CONFIG_PLAYERSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19B9EF60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int PlayerSelector_TypeDefinitionIndex = 83280;

	class PlayerSelector : public ::MoleMole::Config::ConfigTargetSelector
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* targetEmptyList; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* targetList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PLAYERSELECTOR__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Method_2_C2750097377FC541(::MoleMole::Battle::Entity* a1)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PLAYERSELECTOR_METHOD_2_C2750097377FC541_OFFSET))(this, a1);
		}

		::System::String* Method_2_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PLAYERSELECTOR_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
		}
	};
}
