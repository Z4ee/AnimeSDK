#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_45B62668F0BA5CF8.h"
#include "unitysdk/Struct_2_EB409772687773A2.h"
#include "unitysdk/System/Object.h"

class Class_3_D92ADC48CDFCC09B_1;

#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT___C_METHOD_1_86843C648953ACC3_OFFSET UNITYSDK_OFFSET(0x159F94C0)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x159F9470)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x159F94B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int GadgetDefaultTrait___c_TypeDefinitionIndex = 78130;

	class GadgetDefaultTrait___c : public ::System::Object
	{
	public:
		static ::MoleMole::Config::GadgetDefaultTrait___c** StaticGet___9()
		{
			return (::MoleMole::Config::GadgetDefaultTrait___c**)Il2CppClass::FromTypeDefinitionIndex(GadgetDefaultTrait___c_TypeDefinitionIndex)->GetStaticField(0x348A0);
		}
		static ::Class_3_D92ADC48CDFCC09B_1** StaticGet___9__29_0()
		{
			return (::Class_3_D92ADC48CDFCC09B_1**)Il2CppClass::FromTypeDefinitionIndex(GadgetDefaultTrait___c_TypeDefinitionIndex)->GetStaticField(0x348A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT___C__CTOR_OFFSET))(this);
		}

		::Struct_2_45B62668F0BA5CF8 Method_1_86843C648953ACC3(::Struct_2_EB409772687773A2& a1)
		{
			return ((::Struct_2_45B62668F0BA5CF8(*)(::PVOID, ::Struct_2_EB409772687773A2&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT___C_METHOD_1_86843C648953ACC3_OFFSET))(this, a1);
		}
	};
}
