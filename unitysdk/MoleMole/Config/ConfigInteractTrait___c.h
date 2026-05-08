#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class InteractTraitData; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT___C_METHOD_1_9BE6A38BAC9C82E3_OFFSET UNITYSDK_OFFSET(0x183C2F10)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x183C2EC0)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x183C2F00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigInteractTrait___c_TypeDefinitionIndex = 57356;

	class ConfigInteractTrait___c : public ::System::Object
	{
	public:
		static ::MoleMole::Config::ConfigInteractTrait___c** StaticGet___9()
		{
			return (::MoleMole::Config::ConfigInteractTrait___c**)Il2CppClass::FromTypeDefinitionIndex(ConfigInteractTrait___c_TypeDefinitionIndex)->GetStaticField(0x3E780);
		}
		static ::System::Action_1<::MoleMole::InteractTraitData*>** StaticGet___9__24_0()
		{
			return (::System::Action_1<::MoleMole::InteractTraitData*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigInteractTrait___c_TypeDefinitionIndex)->GetStaticField(0x3E788);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT___C__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_9BE6A38BAC9C82E3(::MoleMole::InteractTraitData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::InteractTraitData*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT___C_METHOD_1_9BE6A38BAC9C82E3_OFFSET))(this, a1);
		}
	};
}
