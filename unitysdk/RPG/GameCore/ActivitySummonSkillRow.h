#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ActivitySummonSkillType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYSUMMONSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D69A580)
#define RPG_GAMECORE_ACTIVITYSUMMONSKILLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D69A9A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivitySummonSkillRow_TypeDefinitionIndex = 12325;

	class ActivitySummonSkillRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* SimpleSkillParmList; // 0x10
		::System::String* SkillIconPath; // 0x18
		::System::String* SkillTriggerKey; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* SkillParmList; // 0x28
		::RPG::Client::TextID SimpleSkillDesc; // 0x30
		::System::UInt32 SkillID; // 0x40
		::RPG::GameCore::ActivitySummonSkillType SkillType; // 0x44
		::RPG::Client::TextID SkillDesc; // 0x48
		::RPG::Client::TextID SkillName; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYSUMMONSKILLROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivitySummonSkillRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivitySummonSkillRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYSUMMONSKILLROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
