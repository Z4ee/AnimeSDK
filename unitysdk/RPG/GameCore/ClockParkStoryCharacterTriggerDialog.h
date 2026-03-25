#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CLOCKPARKSTORYCHARACTERTRIGGERDIALOG_METHOD_3_1779DEF9D1685C68_OFFSET UNITYSDK_OFFSET(0x170C0040)
#define RPG_GAMECORE_CLOCKPARKSTORYCHARACTERTRIGGERDIALOG_METHOD_3_48F2FB11706F5C49_OFFSET UNITYSDK_OFFSET(0x170C00C0)
#define RPG_GAMECORE_CLOCKPARKSTORYCHARACTERTRIGGERDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x170C0090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkStoryCharacterTriggerDialog_TypeDefinitionIndex = 19275;

	class ClockParkStoryCharacterTriggerDialog : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* UniqueName; // 0x18
		::RPG::Client::TextID TextID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYCHARACTERTRIGGERDIALOG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1779DEF9D1685C68(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClockParkStoryCharacterTriggerDialog*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkStoryCharacterTriggerDialog*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYCHARACTERTRIGGERDIALOG_METHOD_3_1779DEF9D1685C68_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_48F2FB11706F5C49(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClockParkStoryCharacterTriggerDialog* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkStoryCharacterTriggerDialog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYCHARACTERTRIGGERDIALOG_METHOD_3_48F2FB11706F5C49_OFFSET))(a1, a2);
		}
	};
}
