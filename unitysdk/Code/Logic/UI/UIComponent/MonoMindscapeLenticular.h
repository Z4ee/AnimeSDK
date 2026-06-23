#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine::UI::Extension { class UIMindscapeLenticular; }
namespace UnityEngine::UI::Extension { class UIMouseToMaterial; }

#define CODE_LOGIC_UI_UICOMPONENT_MONOMINDSCAPELENTICULAR_GET_MOUSEXCURVE_OFFSET UNITYSDK_OFFSET(0x167415F0)
#define CODE_LOGIC_UI_UICOMPONENT_MONOMINDSCAPELENTICULAR_GET_NORMALIZEDMOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x16741510)
#define CODE_LOGIC_UI_UICOMPONENT_MONOMINDSCAPELENTICULAR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x16741650)
#define CODE_LOGIC_UI_UICOMPONENT_MONOMINDSCAPELENTICULAR_SET_MOUSEXCURVE_OFFSET UNITYSDK_OFFSET(0x16741600)
#define CODE_LOGIC_UI_UICOMPONENT_MONOMINDSCAPELENTICULAR_SET_NORMALIZEDMOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x16741520)
#define CODE_LOGIC_UI_UICOMPONENT_MONOMINDSCAPELENTICULAR_UPDATE_OFFSET UNITYSDK_OFFSET(0x16741750)
#define CODE_LOGIC_UI_UICOMPONENT_MONOMINDSCAPELENTICULAR__CTOR_OFFSET UNITYSDK_OFFSET(0x16741D90)

namespace Code::Logic::UI::UIComponent
{
	inline static constexpr unsigned int MonoMindscapeLenticular_TypeDefinitionIndex = 49953;

	class MonoMindscapeLenticular : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::UnityEngine::UI::Extension::UIMindscapeLenticular*>* RoleGraphics; // 0x18
		::Il2CppArray<::UnityEngine::UI::Extension::UIMouseToMaterial*>* MouseToMaterials; // 0x20
		::UnityEngine::Vector2 m_NormalizedMousePosition; // 0x28
		::UnityEngine::AnimationCurve* m_MouseXCurve; // 0x30
		::UnityEngine::Vector2 m_MaxRotation; // 0x38
		::System::Boolean Field_5_5; // 0x40
		::System::Boolean Field_5_6; // 0x41
		::System::Boolean IsFobidTestModel; // 0x42

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UICOMPONENT_MONOMINDSCAPELENTICULAR__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_NormalizedMousePosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UICOMPONENT_MONOMINDSCAPELENTICULAR_GET_NORMALIZEDMOUSEPOSITION_OFFSET))(this);
		}

		::System::Void set_NormalizedMousePosition(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UICOMPONENT_MONOMINDSCAPELENTICULAR_SET_NORMALIZEDMOUSEPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::AnimationCurve* get_MouseXCurve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UICOMPONENT_MONOMINDSCAPELENTICULAR_GET_MOUSEXCURVE_OFFSET))(this);
		}

		::System::Void set_MouseXCurve(::UnityEngine::AnimationCurve* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UICOMPONENT_MONOMINDSCAPELENTICULAR_SET_MOUSEXCURVE_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UICOMPONENT_MONOMINDSCAPELENTICULAR_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UICOMPONENT_MONOMINDSCAPELENTICULAR_UPDATE_OFFSET))(this);
		}
	};
}
