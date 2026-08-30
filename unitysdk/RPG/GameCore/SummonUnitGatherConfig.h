#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SUMMONUNITGATHERCONFIG_METHOD_2_AC7ED80FB052894F_OFFSET UNITYSDK_OFFSET(0x1CB13EB0)
#define RPG_GAMECORE_SUMMONUNITGATHERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB14F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SummonUnitGatherConfig_TypeDefinitionIndex = 17392;

	class SummonUnitGatherConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single RegionOffset; // 0x10
		::System::Single RegionRadius; // 0x14
		::System::Single ConstraintRadius; // 0x18
		::System::Boolean UpdateOnce; // 0x1C
		::System::Single DampSmoothTime; // 0x20
		::System::String* CentripetalSpeedCurve; // 0x28
		::System::Single CentripetalFactorX; // 0x30
		::System::Single CentripetalFactorY; // 0x34
		::System::String* TangentSpeedCurve; // 0x38
		::System::Single TangentSpeedFactorX; // 0x40
		::System::Single TangentSpeedFactorY; // 0x44
		::System::Single AddSinFactorTime; // 0x48
		::System::Single AddSinFactorValue; // 0x4C
		::System::Single MinRadius; // 0x50
		::System::Single MaxRadius; // 0x54
		::System::Int32 RingCount; // 0x58
		::System::Boolean IsClockwise; // 0x5C
		::System::Boolean UpdateDirection; // 0x5D
		::System::Boolean CollideIgnorePlayer; // 0x5E
		::System::Boolean ForAttack; // 0x5F
		::Il2CppArray<::System::String*>* FilterModifiers; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITGATHERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_AC7ED80FB052894F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SummonUnitGatherConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SummonUnitGatherConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITGATHERCONFIG_METHOD_2_AC7ED80FB052894F_OFFSET))(a1, a2);
		}
	};
}
