#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/UI/BaseMeshEffect.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class VertexHelper; }

#define POPEFFECT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1DE8BAA0)
#define POPEFFECT_EXECUTEPOSTREBUILD_OFFSET UNITYSDK_OFFSET(0x1DE8C7C0)
#define POPEFFECT_GET_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1DE8C7B0)
#define POPEFFECT_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x1DE8AEC0)
#define POPEFFECT_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x1DE8BDB0)
#define POPEFFECT_REGISTERIMG_OFFSET UNITYSDK_OFFSET(0x1DE8B6A0)
#define POPEFFECT_RESETIMG_OFFSET UNITYSDK_OFFSET(0x1DE8B8E0)
#define POPEFFECT_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x1DE8B430)
#define POPEFFECT_SETFINISH_OFFSET UNITYSDK_OFFSET(0x1DE8B9C0)
#define POPEFFECT_SETTEXTWITHOUTANIMATION_OFFSET UNITYSDK_OFFSET(0x1DE8B1B0)
#define POPEFFECT_SETTEXT_OFFSET UNITYSDK_OFFSET(0x1DE8AED0)
#define POPEFFECT_UPDATEIMGSIZE_OFFSET UNITYSDK_OFFSET(0x1DE8B490)
#define POPEFFECT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1DE8BBC0)
#define POPEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE8C810)
#define POPEFFECT___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1DE8C8D0)

inline static constexpr unsigned int PopEffect_TypeDefinitionIndex = 79048;

class PopEffect : public ::UnityEngine::UI::BaseMeshEffect
{
public:
	::System::Boolean PlayAwake; // 0x20
	::System::Single Speed; // 0x24
	::System::Collections::Generic::List_1<::System::Single>* timer; // 0x28
	::System::Boolean finish; // 0x30
	::UnityEngine::UI::Text* m_text; // 0x38
	::UnityEngine::AnimationCurve* Curve; // 0x40
	::System::Action* m_callback; // 0x48
	::System::Boolean hasImg; // 0x50
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::RectTransform*, ::System::Single>>* imgRectList; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* imgIndexDict; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPEFFECT__CTOR_OFFSET))(this);
	}

	::System::Boolean get_IsFinish()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POPEFFECT_GET_ISFINISH_OFFSET))(this);
	}

	::System::Void SetText(::System::String* str, ::System::Action* callback, ::System::Single time)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + POPEFFECT_SETTEXT_OFFSET))(this, str, callback, time);
	}

	::System::Void SetTextWithOutAnimation(::System::String* str, ::System::Action* callback)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + POPEFFECT_SETTEXTWITHOUTANIMATION_OFFSET))(this, str, callback);
	}

	::System::Void SetDirty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPEFFECT_SETDIRTY_OFFSET))(this);
	}

	::System::Void RegisterImg(::UnityEngine::RectTransform* img, ::System::Int32 imgIndex, ::System::Int32 txtIndex, ::System::Single defaultScale)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + POPEFFECT_REGISTERIMG_OFFSET))(this, img, imgIndex, txtIndex, defaultScale);
	}

	::System::Void ResetImg()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPEFFECT_RESETIMG_OFFSET))(this);
	}

	::System::Void SetFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPEFFECT_SETFINISH_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPEFFECT_AWAKE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPEFFECT_UPDATE_OFFSET))(this);
	}

	::System::Void UpdateImgSize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPEFFECT_UPDATEIMGSIZE_OFFSET))(this);
	}

	::System::Void ModifyMesh(::UnityEngine::UI::VertexHelper* vh)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + POPEFFECT_MODIFYMESH_OFFSET))(this, vh);
	}

	::System::Boolean get_CanExecute()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POPEFFECT_GET_CANEXECUTE_OFFSET))(this);
	}

	::System::Void ExecutePostRebuild()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPEFFECT_EXECUTEPOSTREBUILD_OFFSET))(this);
	}

	::System::Void __base_Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPEFFECT___BASE_AWAKE_OFFSET))(this);
	}
};
