#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/TMPro/TextAlignmentOptions.h"
#include "unitysdk/UnityEngine/TextAnchor.h"

#define RPG_CLIENT_BOOKDISPLAYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xC960030)

namespace RPG::Client
{
	inline static constexpr unsigned int BookDisplayConfig_TypeDefinitionIndex = 66416;

	class BookDisplayConfig : public ::System::Object
	{
	public:
		::UnityEngine::TextAnchor Alignment; // 0x10
		::TMPro::TextAlignmentOptions TMPAlignment; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKDISPLAYCONFIG__CTOR_OFFSET))(this);
		}
	};
}
