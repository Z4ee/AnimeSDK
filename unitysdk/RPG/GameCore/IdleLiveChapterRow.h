#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_DA5E269DBF62B292;
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVECHAPTERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D20E430)
#define RPG_GAMECORE_IDLELIVECHAPTERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D20E8F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveChapterRow_TypeDefinitionIndex = 11667;

	class IdleLiveChapterRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* BackgroundState; // 0x18
		::Il2CppArray<::Class_1_DA5E269DBF62B292*>* FSVList; // 0x20
		::System::UInt32 FinalActChatPhase; // 0x28
		::System::UInt32 FinalAct; // 0x2C
		::System::UInt32 BossID; // 0x30
		::System::UInt32 ChapterIndex; // 0x34
		::System::UInt32 ActivityModuleID; // 0x38
		::System::Boolean ReturntoMaze; // 0x3C
		::System::Boolean IsHardMode; // 0x3D
		::RPG::Client::TextID Name; // 0x40
		::RPG::Client::TextID Number; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVECHAPTERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IdleLiveChapterRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveChapterRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVECHAPTERROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
