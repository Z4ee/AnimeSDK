#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HipplenGameGradeType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYHIPPLENGAMEGRADEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1861D7C0)
#define RPG_GAMECORE_ACTIVITYHIPPLENGAMEGRADEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1861D940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHipplenGameGradeRow_TypeDefinitionIndex = 11085;

	class ActivityHipplenGameGradeRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID GradeText; // 0x10
		::RPG::GameCore::HipplenGameGradeType GradeType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENGAMEGRADEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityHipplenGameGradeRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityHipplenGameGradeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENGAMEGRADEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
