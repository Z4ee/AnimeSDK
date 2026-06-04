#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HipplenGameGradeType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYHIPPLENGAMEGRADEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x193ED650)
#define RPG_GAMECORE_ACTIVITYHIPPLENGAMEGRADEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x193ED7D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHipplenGameGradeRow_TypeDefinitionIndex = 11133;

	class ActivityHipplenGameGradeRow : public ::System::Object
	{
	public:
		::RPG::GameCore::HipplenGameGradeType GradeType; // 0x10
		::RPG::Client::TextID GradeText; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENGAMEGRADEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityHipplenGameGradeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityHipplenGameGradeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENGAMEGRADEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
