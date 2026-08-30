#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PuzzleFunc.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWFUNCBTN_METHOD_3_40DEED2365CA5863_OFFSET UNITYSDK_OFFSET(0x1D092E80)
#define RPG_GAMECORE_SHOWFUNCBTN_METHOD_3_96CF03E4D4A588AE_OFFSET UNITYSDK_OFFSET(0x1D092E10)
#define RPG_GAMECORE_SHOWFUNCBTN__CTOR_OFFSET UNITYSDK_OFFSET(0x1D092E60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowFuncBtn_TypeDefinitionIndex = 20259;

	class ShowFuncBtn : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Show; // 0x18
		::System::Boolean HideWhenGraphFinish; // 0x19
		::System::UInt32 ItemID; // 0x1C
		::RPG::GameCore::PuzzleFunc PuzzleFunc; // 0x20
		::System::Single CDDuration; // 0x24
		::System::Boolean ShowBtnFucHint; // 0x28
		::RPG::GameCore::DynamicString* CustomString; // 0x30
		::System::Boolean ShowBtnEffect; // 0x38
		::System::String* OverrideIconPath; // 0x40
		::RPG::Client::TextID OverrideBtnHint; // 0x48
		::RPG::GameCore::DynamicFloat* MissionID; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFUNCBTN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_96CF03E4D4A588AE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowFuncBtn*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowFuncBtn*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFUNCBTN_METHOD_3_96CF03E4D4A588AE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_40DEED2365CA5863(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowFuncBtn* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowFuncBtn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFUNCBTN_METHOD_3_40DEED2365CA5863_OFFSET))(a1, a2);
		}
	};
}
