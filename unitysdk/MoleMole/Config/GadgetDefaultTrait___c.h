#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_45B62668F0BA5CF8.h"
#include "unitysdk/Struct_2_EB409772687773A2_1.h"
#include "unitysdk/System/Object.h"

class Class_3_D92ADC48CDFCC09B_2;

#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1350D810)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1350D850)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT___C__ONPOSTENTITYREADY_B__32_0_OFFSET UNITYSDK_OFFSET(0x1350D860)

namespace MoleMole::Config
{
	inline static constexpr unsigned int GadgetDefaultTrait___c_TypeDefinitionIndex = 48140;

	class GadgetDefaultTrait___c : public ::System::Object
	{
	public:
		static ::MoleMole::Config::GadgetDefaultTrait___c** StaticGet___9()
		{
			return (::MoleMole::Config::GadgetDefaultTrait___c**)Il2CppClass::FromTypeDefinitionIndex(GadgetDefaultTrait___c_TypeDefinitionIndex)->GetStaticField(0x39D20);
		}
		static ::Class_3_D92ADC48CDFCC09B_2** StaticGet___9__32_0()
		{
			return (::Class_3_D92ADC48CDFCC09B_2**)Il2CppClass::FromTypeDefinitionIndex(GadgetDefaultTrait___c_TypeDefinitionIndex)->GetStaticField(0x39D28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT___C__CTOR_OFFSET))(this);
		}

		::Struct_2_45B62668F0BA5CF8 _OnPostEntityReady_b__32_0(::Struct_2_EB409772687773A2_1& target)
		{
			return ((::Struct_2_45B62668F0BA5CF8(*)(::PVOID, ::Struct_2_EB409772687773A2_1&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT___C__ONPOSTENTITYREADY_B__32_0_OFFSET))(this, target);
		}
	};
}
