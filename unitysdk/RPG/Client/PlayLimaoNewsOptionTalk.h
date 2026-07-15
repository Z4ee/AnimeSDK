#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class OptionTalkInfo; }

#define RPG_CLIENT_PLAYLIMAONEWSOPTIONTALK_METHOD_3_936C50083A1FD7D4_OFFSET UNITYSDK_OFFSET(0x1B9EE960)
#define RPG_CLIENT_PLAYLIMAONEWSOPTIONTALK_METHOD_3_FA1FA81F6F6DF62F_OFFSET UNITYSDK_OFFSET(0x1B9EE920)
#define RPG_CLIENT_PLAYLIMAONEWSOPTIONTALK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9EE950)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayLimaoNewsOptionTalk_TypeDefinitionIndex = 9939;

	class PlayLimaoNewsOptionTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::OptionTalkInfo*>* OptionList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYLIMAONEWSOPTIONTALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FA1FA81F6F6DF62F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::PlayLimaoNewsOptionTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::PlayLimaoNewsOptionTalk*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYLIMAONEWSOPTIONTALK_METHOD_3_FA1FA81F6F6DF62F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_936C50083A1FD7D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::PlayLimaoNewsOptionTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::PlayLimaoNewsOptionTalk*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYLIMAONEWSOPTIONTALK_METHOD_3_936C50083A1FD7D4_OFFSET))(a1, a2);
		}
	};
}
