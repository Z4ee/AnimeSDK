#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SHOWENTERPASSWORDPAGE_METHOD_3_4BF7F001F01CC6C4_OFFSET UNITYSDK_OFFSET(0x176F8BC0)
#define RPG_GAMECORE_SHOWENTERPASSWORDPAGE_METHOD_3_8FEE103B7CAE3861_OFFSET UNITYSDK_OFFSET(0x176F8B40)
#define RPG_GAMECORE_SHOWENTERPASSWORDPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x176F8B90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowEnterPasswordPage_TypeDefinitionIndex = 20125;

	class ShowEnterPasswordPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* Password; // 0x18
		::RPG::Client::TextID TitleText; // 0x20
		::RPG::Client::TextID DescText; // 0x30
		::System::UInt32 TalkSentenceID; // 0x40
		::System::Boolean MustSucceed; // 0x44
		::System::Boolean SkipResultTips; // 0x45
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSuccess; // 0x48
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFail; // 0x50
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCancel; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWENTERPASSWORDPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8FEE103B7CAE3861(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowEnterPasswordPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowEnterPasswordPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWENTERPASSWORDPAGE_METHOD_3_8FEE103B7CAE3861_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4BF7F001F01CC6C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowEnterPasswordPage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowEnterPasswordPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWENTERPASSWORDPAGE_METHOD_3_4BF7F001F01CC6C4_OFFSET))(a1, a2);
		}
	};
}
