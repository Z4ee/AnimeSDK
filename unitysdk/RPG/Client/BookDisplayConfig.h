#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/TMPro/TextAlignmentOptions.h"
#include "unitysdk/UnityEngine/TextAnchor.h"

#define RPG_CLIENT_BOOKDISPLAYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x9E9D7E0)

namespace RPG::Client
{
	inline static constexpr unsigned int BookDisplayConfig_TypeDefinitionIndex = 61142;

	class BookDisplayConfig : public ::System::Object
	{
	public:
		::TMPro::TextAlignmentOptions TMPAlignment; // 0x10
		::UnityEngine::TextAnchor Alignment; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKDISPLAYCONFIG__CTOR_OFFSET))(this);
		}
	};
}
