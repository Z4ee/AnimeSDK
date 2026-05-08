#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UIButtonEx; }

#define MOLEMOLE_GENERALINPUT_REGISTERDELETEBTN_OFFSET UNITYSDK_OFFSET(0x138368A0)
#define MOLEMOLE_GENERALINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x13836970)

namespace MoleMole
{
	inline static constexpr unsigned int GeneralInput_TypeDefinitionIndex = 47331;

	class GeneralInput : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::InputField* input; // 0x18
		::UnityEngine::UI::Text* PlaceholderText; // 0x20
		::UnityEngine::UI::Extension::UIButtonEx* deleteBtn; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALINPUT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterDeleteBtn(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALINPUT_REGISTERDELETEBTN_OFFSET))(this, a1);
		}
	};
}
