#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWCHALLENGESUCCESSTOASTUI_METHOD_3_0655D8A6523C648D_OFFSET UNITYSDK_OFFSET(0x176F7CD0)
#define RPG_GAMECORE_SHOWCHALLENGESUCCESSTOASTUI_METHOD_3_D4B41737A1EA4D5C_OFFSET UNITYSDK_OFFSET(0x176F7C50)
#define RPG_GAMECORE_SHOWCHALLENGESUCCESSTOASTUI__CTOR_OFFSET UNITYSDK_OFFSET(0x176F7CA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowChallengeSuccessToastUI_TypeDefinitionIndex = 18594;

	class ShowChallengeSuccessToastUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::Client::TextID MainText; // 0x18
		::RPG::Client::TextID SubText; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWCHALLENGESUCCESSTOASTUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D4B41737A1EA4D5C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowChallengeSuccessToastUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowChallengeSuccessToastUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWCHALLENGESUCCESSTOASTUI_METHOD_3_D4B41737A1EA4D5C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0655D8A6523C648D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowChallengeSuccessToastUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowChallengeSuccessToastUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWCHALLENGESUCCESSTOASTUI_METHOD_3_0655D8A6523C648D_OFFSET))(a1, a2);
		}
	};
}
