#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUECANDYCRASHCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9158F0)
#define RPG_GAMECORE_ROGUECANDYCRASHCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D915FB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCandyCrashConfigRow_TypeDefinitionIndex = 14513;

	class RogueCandyCrashConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RoundRange; // 0x10
		::System::UInt32 ParamGroupID; // 0x18
		::System::UInt32 TotalRounds; // 0x1C
		::System::UInt32 TotalTime; // 0x20
		::System::UInt32 PrepareTime; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECANDYCRASHCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCandyCrashConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCandyCrashConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECANDYCRASHCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
