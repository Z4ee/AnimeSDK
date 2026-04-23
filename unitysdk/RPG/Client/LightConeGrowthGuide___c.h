#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_747;
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_LIGHTCONEGROWTHGUIDE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA66B360)
#define RPG_CLIENT_LIGHTCONEGROWTHGUIDE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA66B3A0)
#define RPG_CLIENT_LIGHTCONEGROWTHGUIDE___C__GET_ISGROWABLE_B__2_0_OFFSET UNITYSDK_OFFSET(0xA66B3B0)

namespace RPG::Client
{
	inline static constexpr unsigned int LightConeGrowthGuide___c_TypeDefinitionIndex = 60349;

	class LightConeGrowthGuide___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::Class_0_16E4307DCC419505_747*>** StaticGet___9__2_0()
		{
			return (::System::Predicate_1<::Class_0_16E4307DCC419505_747*>**)Il2CppClass::FromTypeDefinitionIndex(LightConeGrowthGuide___c_TypeDefinitionIndex)->GetStaticField(0x27AF0);
		}
		static ::RPG::Client::LightConeGrowthGuide___c** StaticGet___9()
		{
			return (::RPG::Client::LightConeGrowthGuide___c**)Il2CppClass::FromTypeDefinitionIndex(LightConeGrowthGuide___c_TypeDefinitionIndex)->GetStaticField(0x27AF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWTHGUIDE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWTHGUIDE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_IsGrowable_b__2_0(::Class_0_16E4307DCC419505_747* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_747*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWTHGUIDE___C__GET_ISGROWABLE_B__2_0_OFFSET))(this, x);
		}
	};
}
