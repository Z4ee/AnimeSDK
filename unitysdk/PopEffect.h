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

#define POPEFFECT_AWAKE_OFFSET UNITYSDK_OFFSET(0xF2A6700)
#define POPEFFECT_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0xF2A5B70)
#define POPEFFECT_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0xF2A69C0)
#define POPEFFECT_REGISTERIMG_OFFSET UNITYSDK_OFFSET(0xF2A6320)
#define POPEFFECT_RESETIMG_OFFSET UNITYSDK_OFFSET(0xF2A6530)
#define POPEFFECT_SETDIRTY_OFFSET UNITYSDK_OFFSET(0xF2A60B0)
#define POPEFFECT_SETFINISH_OFFSET UNITYSDK_OFFSET(0xF2A6610)
#define POPEFFECT_SETTEXTWITHOUTANIMATION_OFFSET UNITYSDK_OFFSET(0xF2A5E40)
#define POPEFFECT_SETTEXT_OFFSET UNITYSDK_OFFSET(0xF2A5B80)
#define POPEFFECT_UPDATEIMGSIZE_OFFSET UNITYSDK_OFFSET(0xF2A6110)
#define POPEFFECT_UPDATE_OFFSET UNITYSDK_OFFSET(0xF2A6820)
#define POPEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xF2A73B0)
#define POPEFFECT___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0xF2A7470)

inline static constexpr unsigned int PopEffect_TypeDefinitionIndex = 67066;

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

	::System::Void __base_Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPEFFECT___BASE_AWAKE_OFFSET))(this);
	}
};
