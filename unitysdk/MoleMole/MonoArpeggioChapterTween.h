#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMonoController.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace DG::Tweening { class Tween; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_MONOARPEGGIOCHAPTERTWEEN_PLAYCHAPTERTWEEN_OFFSET UNITYSDK_OFFSET(0x16058C20)
#define MOLEMOLE_MONOARPEGGIOCHAPTERTWEEN_PLAYCONTENTRECTTWEEN_OFFSET UNITYSDK_OFFSET(0x16058D80)
#define MOLEMOLE_MONOARPEGGIOCHAPTERTWEEN_RECOVERCHAPTER_OFFSET UNITYSDK_OFFSET(0x16059110)
#define MOLEMOLE_MONOARPEGGIOCHAPTERTWEEN__CTOR_OFFSET UNITYSDK_OFFSET(0x160591B0)
#define MOLEMOLE_MONOARPEGGIOCHAPTERTWEEN__PLAYCONTENTRECTTWEEN_B__8_0_OFFSET UNITYSDK_OFFSET(0x16059260)
#define MOLEMOLE_MONOARPEGGIOCHAPTERTWEEN__PLAYCONTENTRECTTWEEN_B__8_1_OFFSET UNITYSDK_OFFSET(0x160592A0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoArpeggioChapterTween_TypeDefinitionIndex = 45080;

	class MonoArpeggioChapterTween : public ::MoleMole::UIMonoController
	{
	public:
		::UnityEngine::RectTransform* PageRect; // 0x80
		::UnityEngine::RectTransform* ContentRect; // 0x88
		::System::Single SelectItemRightLen; // 0x90
		::System::Single Duration; // 0x94
		::UnityEngine::AnimationCurve* AniCuve; // 0x98
		::DG::Tweening::Tween* _barHandler; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOARPEGGIOCHAPTERTWEEN__CTOR_OFFSET))(this);
		}

		::System::Single PlayChapterTween(::UnityEngine::RectTransform* chapterRect)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOARPEGGIOCHAPTERTWEEN_PLAYCHAPTERTWEEN_OFFSET))(this, chapterRect);
		}

		::System::Single RecoverChapter()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOARPEGGIOCHAPTERTWEEN_RECOVERCHAPTER_OFFSET))(this);
		}

		::System::Void PlayContentRectTween(::UnityEngine::Vector3 endPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOARPEGGIOCHAPTERTWEEN_PLAYCONTENTRECTTWEEN_OFFSET))(this, endPos);
		}

		::System::Single _PlayContentRectTween_b__8_0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOARPEGGIOCHAPTERTWEEN__PLAYCONTENTRECTTWEEN_B__8_0_OFFSET))(this);
		}

		::System::Void _PlayContentRectTween_b__8_1(::System::Single val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOARPEGGIOCHAPTERTWEEN__PLAYCONTENTRECTTWEEN_B__8_1_OFFSET))(this, val);
		}
	};
}
