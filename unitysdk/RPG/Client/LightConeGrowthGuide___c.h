#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_836;
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_LIGHTCONEGROWTHGUIDE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C6D2F0)
#define RPG_CLIENT_LIGHTCONEGROWTHGUIDE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16C6D330)
#define RPG_CLIENT_LIGHTCONEGROWTHGUIDE___C__GET_ISGROWABLE_B__2_0_OFFSET UNITYSDK_OFFSET(0x16C6D340)

namespace RPG::Client
{
	inline static constexpr unsigned int LightConeGrowthGuide___c_TypeDefinitionIndex = 62626;

	class LightConeGrowthGuide___c : public ::System::Object
	{
	public:
		static ::RPG::Client::LightConeGrowthGuide___c** StaticGet___9()
		{
			return (::RPG::Client::LightConeGrowthGuide___c**)Il2CppClass::FromTypeDefinitionIndex(LightConeGrowthGuide___c_TypeDefinitionIndex)->GetStaticField(0x34EF0);
		}
		static ::System::Predicate_1<::Class_0_16E4307DCC419505_836*>** StaticGet___9__2_0()
		{
			return (::System::Predicate_1<::Class_0_16E4307DCC419505_836*>**)Il2CppClass::FromTypeDefinitionIndex(LightConeGrowthGuide___c_TypeDefinitionIndex)->GetStaticField(0x34EF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWTHGUIDE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWTHGUIDE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_IsGrowable_b__2_0(::Class_0_16E4307DCC419505_836* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_836*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWTHGUIDE___C__GET_ISGROWABLE_B__2_0_OFFSET))(this, a1);
		}
	};
}
