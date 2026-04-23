#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_DA5E269DBF62B292;
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVECHAPTERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A0E7A0)
#define RPG_GAMECORE_IDLELIVECHAPTERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A0EC70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveChapterRow_TypeDefinitionIndex = 11130;

	class IdleLiveChapterRow : public ::System::Object
	{
	public:
		::Il2CppArray<::Class_1_DA5E269DBF62B292*>* FSVList; // 0x10
		::System::String* IconPath; // 0x18
		::System::String* BackgroundState; // 0x20
		::RPG::Client::TextID Number; // 0x28
		::System::UInt32 ActivityModuleID; // 0x38
		::System::UInt32 FinalActChatPhase; // 0x3C
		::System::UInt32 FinalAct; // 0x40
		::System::Boolean ReturntoMaze; // 0x44
		::System::Boolean IsHardMode; // 0x45
		::System::UInt32 ChapterIndex; // 0x48
		::System::UInt32 BossID; // 0x4C
		::RPG::Client::TextID Name; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVECHAPTERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::IdleLiveChapterRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveChapterRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVECHAPTERROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
