#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEMANAGERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17618870)
#define RPG_GAMECORE_ROGUEMANAGERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17618F60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueManagerRow_TypeDefinitionIndex = 13441;

	class RogueManagerRow : public ::System::Object
	{
	public:
		::System::String* BeginTime; // 0x10
		::Il2CppArray<::System::UInt32>* RogueAreaIDList; // 0x18
		::System::String* EndTime; // 0x20
		::System::UInt32 ScheduleDataID; // 0x28
		::System::UInt32 RogueSeason; // 0x2C
		::System::UInt32 RogueVersion; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMANAGERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueManagerRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueManagerRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMANAGERROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
