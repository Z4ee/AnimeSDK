#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_45B62668F0BA5CF8.h"
#include "unitysdk/Struct_2_EB409772687773A2_1.h"
#include "unitysdk/System/Object.h"

class Class_3_D92ADC48CDFCC09B_2;

#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x162622C0)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16262300)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT___C__INITNPCNAME_B__39_0_OFFSET UNITYSDK_OFFSET(0x16262310)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigNpcSubTrait___c_TypeDefinitionIndex = 43769;

	class ConfigNpcSubTrait___c : public ::System::Object
	{
	public:
		static ::MoleMole::Config::ConfigNpcSubTrait___c** StaticGet___9()
		{
			return (::MoleMole::Config::ConfigNpcSubTrait___c**)Il2CppClass::FromTypeDefinitionIndex(ConfigNpcSubTrait___c_TypeDefinitionIndex)->GetStaticField(0x32430);
		}
		static ::Class_3_D92ADC48CDFCC09B_2** StaticGet___9__39_0()
		{
			return (::Class_3_D92ADC48CDFCC09B_2**)Il2CppClass::FromTypeDefinitionIndex(ConfigNpcSubTrait___c_TypeDefinitionIndex)->GetStaticField(0x32438);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT___C__CTOR_OFFSET))(this);
		}

		::Struct_2_45B62668F0BA5CF8 _InitNpcName_b__39_0(::Struct_2_EB409772687773A2_1& target)
		{
			return ((::Struct_2_45B62668F0BA5CF8(*)(::PVOID, ::Struct_2_EB409772687773A2_1&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT___C__INITNPCNAME_B__39_0_OFFSET))(this, target);
		}
	};
}
