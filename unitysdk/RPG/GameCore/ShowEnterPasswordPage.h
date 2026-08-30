#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SHOWENTERPASSWORDPAGE_METHOD_3_8E4973BF9C021076_OFFSET UNITYSDK_OFFSET(0x1E0A6440)
#define RPG_GAMECORE_SHOWENTERPASSWORDPAGE_METHOD_3_EECD9ECA405762B9_OFFSET UNITYSDK_OFFSET(0x1E0A6490)
#define RPG_GAMECORE_SHOWENTERPASSWORDPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0A6480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowEnterPasswordPage_TypeDefinitionIndex = 21705;

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

		static ::System::Void Method_3_8E4973BF9C021076(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowEnterPasswordPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowEnterPasswordPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWENTERPASSWORDPAGE_METHOD_3_8E4973BF9C021076_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EECD9ECA405762B9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowEnterPasswordPage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowEnterPasswordPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWENTERPASSWORDPAGE_METHOD_3_EECD9ECA405762B9_OFFSET))(a1, a2);
		}
	};
}
