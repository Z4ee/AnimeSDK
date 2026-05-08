#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigTargetSelector.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_PLAYERSELECTOR_METHOD_2_C2750097377FC541_OFFSET UNITYSDK_OFFSET(0x16B47EC0)
#define MOLEMOLE_CONFIG_PLAYERSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x16B481B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int PlayerSelector_TypeDefinitionIndex = 47456;

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
	};
}
