#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class InteractTraitData; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A34D8F0)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A34D930)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT___C__LOADDATA_B__31_0_OFFSET UNITYSDK_OFFSET(0x1A34D940)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigInteractTrait___c_TypeDefinitionIndex = 43587;

	class ConfigInteractTrait___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MoleMole::InteractTraitData*>** StaticGet___9__31_0()
		{
			return (::System::Action_1<::MoleMole::InteractTraitData*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigInteractTrait___c_TypeDefinitionIndex)->GetStaticField(0x40D40);
		}
		static ::MoleMole::Config::ConfigInteractTrait___c** StaticGet___9()
		{
			return (::MoleMole::Config::ConfigInteractTrait___c**)Il2CppClass::FromTypeDefinitionIndex(ConfigInteractTrait___c_TypeDefinitionIndex)->GetStaticField(0x40D48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT___C__CTOR_OFFSET))(this);
		}

		::System::Void _LoadData_b__31_0(::MoleMole::InteractTraitData* interactTraitData)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::InteractTraitData*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT___C__LOADDATA_B__31_0_OFFSET))(this, interactTraitData);
		}
	};
}
