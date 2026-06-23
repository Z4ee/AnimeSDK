#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_UIQUESTIONSANSWERCONFIGMONO_EMOJIPOSINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x15DC5A90)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerConfigMono_EmojiPosInfo_TypeDefinitionIndex = 60745;

	class UIQuestionsAnswerConfigMono_EmojiPosInfo : public ::System::Object
	{
	public:
		::System::Int32 NpcTag; // 0x10
		::UnityEngine::Vector3 OffsetPos; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERCONFIGMONO_EMOJIPOSINFO__CTOR_OFFSET))(this);
		}
	};
}
