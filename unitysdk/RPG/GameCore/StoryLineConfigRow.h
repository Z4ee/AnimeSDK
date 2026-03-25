#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define RPG_GAMECORE_STORYLINECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1777FE30)
#define RPG_GAMECORE_STORYLINECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x177800C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StoryLineConfigRow_TypeDefinitionIndex = 13917;

	class StoryLineConfigRow : public ::System::Object
	{
	public:
		::RPG::GameCore::ConditionParam* BeginCondition; // 0x10
		::System::String* ShowCondition; // 0x18
		::RPG::GameCore::ConditionParam* EndCondition; // 0x20
		::System::String* PerformanceStoryAvatar; // 0x28
		::System::UInt32 EarlyAccessContentID; // 0x30
		::System::UInt32 InitAnchorID; // 0x34
		::System::UInt32 InitGroupID; // 0x38
		::System::UInt32 InitEntranceID; // 0x3C
		::System::UInt32 StoryLineID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::StoryLineConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StoryLineConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
