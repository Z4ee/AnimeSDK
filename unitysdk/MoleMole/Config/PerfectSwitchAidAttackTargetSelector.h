#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigTargetSelector.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_PERFECTSWITCHAIDATTACKTARGETSELECTOR_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x1A075120)
#define MOLEMOLE_CONFIG_PERFECTSWITCHAIDATTACKTARGETSELECTOR_METHOD_2_77080AF97C54AF23_OFFSET UNITYSDK_OFFSET(0x1A074F30)
#define MOLEMOLE_CONFIG_PERFECTSWITCHAIDATTACKTARGETSELECTOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0751C0)
#define MOLEMOLE_CONFIG_PERFECTSWITCHAIDATTACKTARGETSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0751B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int PerfectSwitchAidAttackTargetSelector_TypeDefinitionIndex = 78990;

	class PerfectSwitchAidAttackTargetSelector : public ::MoleMole::Config::ConfigTargetSelector
	{
	public:
		static ::System::String** StaticGet_PerfectSwitchForceLockConfigTag()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PerfectSwitchAidAttackTargetSelector_TypeDefinitionIndex)->GetStaticField(0x39AB0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PERFECTSWITCHAIDATTACKTARGETSELECTOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PERFECTSWITCHAIDATTACKTARGETSELECTOR__CCTOR_OFFSET))();
		}

		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Method_2_77080AF97C54AF23(::MoleMole::Battle::Entity* a1)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PERFECTSWITCHAIDATTACKTARGETSELECTOR_METHOD_2_77080AF97C54AF23_OFFSET))(this, a1);
		}

		::System::String* Method_2_35EA095E1AFDD9C8()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PERFECTSWITCHAIDATTACKTARGETSELECTOR_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
		}
	};
}
