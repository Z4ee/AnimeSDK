#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/RtBattleUltraInsertPhase.h"

#define CLASS_2_5AFCABCF3F4D20C2_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x95E8FE0)
#define CLASS_2_5AFCABCF3F4D20C2_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x95E8F90)
#define CLASS_2_5AFCABCF3F4D20C2_METHOD_2_1D3572C54A6CB01D_OFFSET UNITYSDK_OFFSET(0x95E8F40)
#define CLASS_2_5AFCABCF3F4D20C2__CTOR_OFFSET UNITYSDK_OFFSET(0x95E9030)

inline static constexpr unsigned int Class_2_5AFCABCF3F4D20C2_TypeDefinitionIndex = 49997;

class Class_2_5AFCABCF3F4D20C2 : public ::Class_1_9988289E7F8AA214
{
public:
	::RPG::GameCore::RtBattleUltraInsertPhase Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AFCABCF3F4D20C2__CTOR_OFFSET))(this);
	}

	::Class_2_5AFCABCF3F4D20C2* Method_2_1D3572C54A6CB01D(::RPG::GameCore::RtBattleUltraInsertPhase a1)
	{
		return ((::Class_2_5AFCABCF3F4D20C2*(*)(::PVOID, ::RPG::GameCore::RtBattleUltraInsertPhase))((::PBYTE)hIl2Cpp + CLASS_2_5AFCABCF3F4D20C2_METHOD_2_1D3572C54A6CB01D_OFFSET))(this, a1);
	}

	::System::UInt32 GetSourceRuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AFCABCF3F4D20C2_GETSOURCERUNTIMEID_OFFSET))(this);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AFCABCF3F4D20C2_GETEVENTTYPE_OFFSET))(this);
	}
};
