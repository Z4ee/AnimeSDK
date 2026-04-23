#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/EventSystems/MoveDirection.h"

namespace InControl { class IInControlGetter; }

#define INCONTROL_INCONTROLGETTERUTILS_NAVIGATIONFAILPROCESS_OFFSET UNITYSDK_OFFSET(0x17165D70)
#define INCONTROL_INCONTROLGETTERUTILS_PLAYNAVIGATIONAUDIO_OFFSET UNITYSDK_OFFSET(0x17165D50)
#define INCONTROL_INCONTROLGETTERUTILS_SETINCONTROLGETTERIMPL_OFFSET UNITYSDK_OFFSET(0x17165D40)

namespace InControl
{
	inline static constexpr unsigned int InControlGetterUtils_TypeDefinitionIndex = 37154;

	class InControlGetterUtils : public ::System::Object
	{
	public:
		static ::InControl::IInControlGetter** StaticGet_mGetter()
		{
			return (::InControl::IInControlGetter**)Il2CppClass::FromTypeDefinitionIndex(InControlGetterUtils_TypeDefinitionIndex)->GetStaticField(0xBC10);
		}

		static ::System::Void SetInControlGetterImpl(::InControl::IInControlGetter* getter)
		{
			return ((::System::Void(*)(::InControl::IInControlGetter*))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLGETTERUTILS_SETINCONTROLGETTERIMPL_OFFSET))(getter);
		}

		static ::System::Void PlayNavigationAudio()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLGETTERUTILS_PLAYNAVIGATIONAUDIO_OFFSET))();
		}

		static ::System::Void NavigationFailProcess(::UnityEngine::EventSystems::MoveDirection moveDir)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::MoveDirection))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLGETTERUTILS_NAVIGATIONFAILPROCESS_OFFSET))(moveDir);
		}
	};
}
