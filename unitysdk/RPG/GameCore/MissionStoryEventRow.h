#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MISSIONSTORYEVENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AF6BF80)
#define RPG_GAMECORE_MISSIONSTORYEVENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF6C690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionStoryEventRow_TypeDefinitionIndex = 13621;

	class MissionStoryEventRow : public ::System::Object
	{
	public:
		::System::String* ConditionExpression; // 0x10
		::RPG::Client::TextID EventName; // 0x18
		::RPG::Client::TextID EventDesc; // 0x28
		::System::UInt32 ID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONSTORYEVENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MissionStoryEventRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MissionStoryEventRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONSTORYEVENTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
