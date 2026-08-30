#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_IDLELIVEQUESTIONTEAMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D1A2D50)
#define RPG_GAMECORE_IDLELIVEQUESTIONTEAMROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1A2E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveQuestionTeamRow_TypeDefinitionIndex = 11808;

	class IdleLiveQuestionTeamRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TeamRecommendIDList; // 0x10
		::System::UInt32 ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEQUESTIONTEAMROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IdleLiveQuestionTeamRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveQuestionTeamRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEQUESTIONTEAMROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
