#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI { class ScrollRect; }

#define RPG_CLIENT_SCROLLRECTEXTENSIONS_FORCEUPDATECANSCROLL_OFFSET UNITYSDK_OFFSET(0xB15A0B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ScrollRectExtensions_TypeDefinitionIndex = 67046;

	class ScrollRectExtensions : public ::System::Object
	{
	public:
		static ::System::Void ForceUpdateCanScroll(::UnityEngine::UI::ScrollRect* scrollRect)
		{
			return ((::System::Void(*)(::UnityEngine::UI::ScrollRect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCROLLRECTEXTENSIONS_FORCEUPDATECANSCROLL_OFFSET))(scrollRect);
		}
	};
}
