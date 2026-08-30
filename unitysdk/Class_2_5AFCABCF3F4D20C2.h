#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/RtBattleUltraInsertPhase.h"

#define CLASS_2_5AFCABCF3F4D20C2_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x180F95D0)
#define CLASS_2_5AFCABCF3F4D20C2_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x180F9580)
#define CLASS_2_5AFCABCF3F4D20C2_METHOD_2_1D3572C54A6CB01D_OFFSET UNITYSDK_OFFSET(0x180F9530)
#define CLASS_2_5AFCABCF3F4D20C2__CTOR_OFFSET UNITYSDK_OFFSET(0x180F9620)

inline static constexpr unsigned int Class_2_5AFCABCF3F4D20C2_TypeDefinitionIndex = 54430;

class Class_2_5AFCABCF3F4D20C2 : public ::Class_1_BF7A075734D15E98
{
public:
	::RPG::GameCore::RtBattleUltraInsertPhase COEPLOMIKJG; // 0x18

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
