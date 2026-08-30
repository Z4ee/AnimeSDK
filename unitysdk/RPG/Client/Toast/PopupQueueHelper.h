#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_TOAST_POPUPQUEUEHELPER_ISSOFAWINDOW_OFFSET UNITYSDK_OFFSET(0xE22AEE0)

namespace RPG::Client::Toast
{
	inline static constexpr unsigned int PopupQueueHelper_TypeDefinitionIndex = 78532;

	class PopupQueueHelper : public ::System::Object
	{
	public:
		static ::System::Boolean IsSofaWindow(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOAST_POPUPQUEUEHELPER_ISSOFAWINDOW_OFFSET))(a1);
		}
	};
}
