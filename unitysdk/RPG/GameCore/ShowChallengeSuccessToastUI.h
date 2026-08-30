#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWCHALLENGESUCCESSTOASTUI_METHOD_3_0655D8A6523C648D_OFFSET UNITYSDK_OFFSET(0x1D525620)
#define RPG_GAMECORE_SHOWCHALLENGESUCCESSTOASTUI_METHOD_3_9C2120D505B813C4_OFFSET UNITYSDK_OFFSET(0x1D5255E0)
#define RPG_GAMECORE_SHOWCHALLENGESUCCESSTOASTUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1D525610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowChallengeSuccessToastUI_TypeDefinitionIndex = 20072;

	class ShowChallengeSuccessToastUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::Client::TextID MainText; // 0x18
		::RPG::Client::TextID SubText; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWCHALLENGESUCCESSTOASTUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9C2120D505B813C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowChallengeSuccessToastUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowChallengeSuccessToastUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWCHALLENGESUCCESSTOASTUI_METHOD_3_9C2120D505B813C4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0655D8A6523C648D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowChallengeSuccessToastUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowChallengeSuccessToastUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWCHALLENGESUCCESSTOASTUI_METHOD_3_0655D8A6523C648D_OFFSET))(a1, a2);
		}
	};
}
