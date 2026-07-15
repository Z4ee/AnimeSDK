#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYMULTIPLAYERCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AAFB480)
#define RPG_GAMECORE_ACTIVITYMULTIPLAYERCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAFBBE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityMultiplayerConfigRow_TypeDefinitionIndex = 10830;

	class ActivityMultiplayerConfigRow : public ::System::Object
	{
	public:
		::System::String* CardColor; // 0x10
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* CompleteCondition; // 0x18
		::System::String* CardImgPath; // 0x20
		::System::UInt32 ActivityModuleID; // 0x28
		::System::UInt32 CurrentModuleID; // 0x2C
		::System::UInt32 GuideVideoID; // 0x30
		::System::UInt32 DisplayModuleID; // 0x34
		::System::UInt32 ActivityID; // 0x38
		::System::UInt32 ProgramGroupID; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYMULTIPLAYERCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityMultiplayerConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityMultiplayerConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYMULTIPLAYERCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
