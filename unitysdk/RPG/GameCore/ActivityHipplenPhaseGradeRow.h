#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HipplenStatGradeType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYHIPPLENPHASEGRADEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1861EC70)
#define RPG_GAMECORE_ACTIVITYHIPPLENPHASEGRADEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1861EE50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHipplenPhaseGradeRow_TypeDefinitionIndex = 11075;

	class ActivityHipplenPhaseGradeRow : public ::System::Object
	{
	public:
		::System::String* GradeIcon; // 0x10
		::RPG::GameCore::HipplenStatGradeType GradeType; // 0x18
		::RPG::Client::TextID GradeShowText; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENPHASEGRADEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityHipplenPhaseGradeRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityHipplenPhaseGradeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENPHASEGRADEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
