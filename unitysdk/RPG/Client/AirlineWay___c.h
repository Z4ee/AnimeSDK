#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AirlineVariableScalePoint; }
namespace RPG::Client { class AirlineWay_Class_1_5F7BD4F39335B2FB; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_AIRLINEWAY___C__AWAKE_B__54_0_OFFSET UNITYSDK_OFFSET(0x19C53D30)
#define RPG_CLIENT_AIRLINEWAY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C53CF0)
#define RPG_CLIENT_AIRLINEWAY___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19C53D20)
#define RPG_CLIENT_AIRLINEWAY___C__INITRACINGBOOSTRINGS_B__63_0_OFFSET UNITYSDK_OFFSET(0x19C53D70)

namespace RPG::Client
{
	inline static constexpr unsigned int AirlineWay___c_TypeDefinitionIndex = 59914;

	class AirlineWay___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::AirlineWay_Class_1_5F7BD4F39335B2FB*>** StaticGet___9__63_0()
		{
			return (::System::Comparison_1<::RPG::Client::AirlineWay_Class_1_5F7BD4F39335B2FB*>**)Il2CppClass::FromTypeDefinitionIndex(AirlineWay___c_TypeDefinitionIndex)->GetStaticField(0x64A10);
		}
		static ::RPG::Client::AirlineWay___c** StaticGet___9()
		{
			return (::RPG::Client::AirlineWay___c**)Il2CppClass::FromTypeDefinitionIndex(AirlineWay___c_TypeDefinitionIndex)->GetStaticField(0x64A18);
		}
		static ::System::Comparison_1<::RPG::Client::AirlineVariableScalePoint*>** StaticGet___9__54_0()
		{
			return (::System::Comparison_1<::RPG::Client::AirlineVariableScalePoint*>**)Il2CppClass::FromTypeDefinitionIndex(AirlineWay___c_TypeDefinitionIndex)->GetStaticField(0x64A20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _Awake_b__54_0(::RPG::Client::AirlineVariableScalePoint* a1, ::RPG::Client::AirlineVariableScalePoint* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AirlineVariableScalePoint*, ::RPG::Client::AirlineVariableScalePoint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY___C__AWAKE_B__54_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _InitRacingBoostRings_b__63_0(::RPG::Client::AirlineWay_Class_1_5F7BD4F39335B2FB* a1, ::RPG::Client::AirlineWay_Class_1_5F7BD4F39335B2FB* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AirlineWay_Class_1_5F7BD4F39335B2FB*, ::RPG::Client::AirlineWay_Class_1_5F7BD4F39335B2FB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY___C__INITRACINGBOOSTRINGS_B__63_0_OFFSET))(this, a1, a2);
		}
	};
}
