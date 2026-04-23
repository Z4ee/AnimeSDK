#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueOptionTalkInfo; }

#define RPG_GAMECORE_PLAYROGUEOPTIONTALK_METHOD_3_35F83E3DD7A8F894_OFFSET UNITYSDK_OFFSET(0x18C110B0)
#define RPG_GAMECORE_PLAYROGUEOPTIONTALK_METHOD_3_CED91AA63F05EC85_OFFSET UNITYSDK_OFFSET(0x18C11130)
#define RPG_GAMECORE_PLAYROGUEOPTIONTALK__CTOR_OFFSET UNITYSDK_OFFSET(0x18C11100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayRogueOptionTalk_TypeDefinitionIndex = 20091;

	class PlayRogueOptionTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::RogueOptionTalkInfo*>* OptionList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYROGUEOPTIONTALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_35F83E3DD7A8F894(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayRogueOptionTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayRogueOptionTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYROGUEOPTIONTALK_METHOD_3_35F83E3DD7A8F894_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CED91AA63F05EC85(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayRogueOptionTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayRogueOptionTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYROGUEOPTIONTALK_METHOD_3_CED91AA63F05EC85_OFFSET))(a1, a2);
		}
	};
}
