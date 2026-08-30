#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/EventSystems/MoveDirection.h"

namespace InControl { class IInControlGetter; }

#define INCONTROL_INCONTROLGETTERUTILS_NAVIGATIONFAILPROCESS_OFFSET UNITYSDK_OFFSET(0x18E7D630)
#define INCONTROL_INCONTROLGETTERUTILS_PLAYNAVIGATIONAUDIO_OFFSET UNITYSDK_OFFSET(0x18E7D610)
#define INCONTROL_INCONTROLGETTERUTILS_SETINCONTROLGETTERIMPL_OFFSET UNITYSDK_OFFSET(0x18E7D600)

namespace InControl
{
	inline static constexpr unsigned int InControlGetterUtils_TypeDefinitionIndex = 39553;

	class InControlGetterUtils : public ::System::Object
	{
	public:
		static ::InControl::IInControlGetter** StaticGet_mGetter()
		{
			return (::InControl::IInControlGetter**)Il2CppClass::FromTypeDefinitionIndex(InControlGetterUtils_TypeDefinitionIndex)->GetStaticField(0x1E00);
		}

		static ::System::Void SetInControlGetterImpl(::InControl::IInControlGetter* a1)
		{
			return ((::System::Void(*)(::InControl::IInControlGetter*))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLGETTERUTILS_SETINCONTROLGETTERIMPL_OFFSET))(a1);
		}

		static ::System::Void PlayNavigationAudio()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLGETTERUTILS_PLAYNAVIGATIONAUDIO_OFFSET))();
		}

		static ::System::Void NavigationFailProcess(::UnityEngine::EventSystems::MoveDirection a1)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::MoveDirection))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLGETTERUTILS_NAVIGATIONFAILPROCESS_OFFSET))(a1);
		}
	};
}
