#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYSTARTHINTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CDAA8B0)
#define RPG_GAMECORE_ACTIVITYSTARTHINTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDAAF00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityStartHintConfigRow_TypeDefinitionIndex = 11193;

	class ActivityStartHintConfigRow : public ::System::Object
	{
	public:
		::System::String* UIPrefab; // 0x10
		::System::UInt32 ActivityStartHintID; // 0x18
		::System::UInt32 ActivityModuleID; // 0x1C
		::RPG::Client::TextID ToastDesc; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYSTARTHINTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityStartHintConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityStartHintConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYSTARTHINTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
