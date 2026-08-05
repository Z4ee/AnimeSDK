#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_45B62668F0BA5CF8.h"
#include "unitysdk/Struct_2_EB409772687773A2_1.h"
#include "unitysdk/System/Object.h"

class Class_3_D92ADC48CDFCC09B_2;

#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B910130)
#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B910170)
#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT___C__ONPOSTENTITYREADY_B__21_0_OFFSET UNITYSDK_OFFSET(0x1B910180)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMonsterDefaultTrait___c_TypeDefinitionIndex = 89913;

	class ConfigMonsterDefaultTrait___c : public ::System::Object
	{
	public:
		static ::MoleMole::Config::ConfigMonsterDefaultTrait___c** StaticGet___9()
		{
			return (::MoleMole::Config::ConfigMonsterDefaultTrait___c**)Il2CppClass::FromTypeDefinitionIndex(ConfigMonsterDefaultTrait___c_TypeDefinitionIndex)->GetStaticField(0x39C90);
		}
		static ::Class_3_D92ADC48CDFCC09B_2** StaticGet___9__21_0()
		{
			return (::Class_3_D92ADC48CDFCC09B_2**)Il2CppClass::FromTypeDefinitionIndex(ConfigMonsterDefaultTrait___c_TypeDefinitionIndex)->GetStaticField(0x39C98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT___C__CTOR_OFFSET))(this);
		}

		::Struct_2_45B62668F0BA5CF8 _OnPostEntityReady_b__21_0(::Struct_2_EB409772687773A2_1& target)
		{
			return ((::Struct_2_45B62668F0BA5CF8(*)(::PVOID, ::Struct_2_EB409772687773A2_1&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT___C__ONPOSTENTITYREADY_B__21_0_OFFSET))(this, target);
		}
	};
}
