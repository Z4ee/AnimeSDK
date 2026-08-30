#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UI/Image_Type.h"

namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_DEVUIDEBUGREPORTDATAIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x192E4D10)

namespace RPG::Client
{
	inline static constexpr unsigned int DevUIDebugReportDataImage_TypeDefinitionIndex = 68318;

	class DevUIDebugReportDataImage : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* target; // 0x10
		::UnityEngine::UI::Image_Type type; // 0x18

		::System::Void _ctor(::UnityEngine::GameObject* a1, ::UnityEngine::UI::Image_Type a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::UI::Image_Type))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEVUIDEBUGREPORTDATAIMAGE__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
