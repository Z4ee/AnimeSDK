#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/TextItalicAdobeStyle.h"
#include "unitysdk/UnityEngine/UIVertex.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine::UI { class VertexHelper; }

#define POPTEXT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1BB25510)
#define POPTEXT_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x1BB25210)
#define POPTEXT_GET_TIMERINTERVAL_OFFSET UNITYSDK_OFFSET(0x1BB251F0)
#define POPTEXT_ONFINISH_OFFSET UNITYSDK_OFFSET(0x1BB25470)
#define POPTEXT_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1BB257A0)
#define POPTEXT_REPLAY_OFFSET UNITYSDK_OFFSET(0x1BB26150)
#define POPTEXT_RESOLVESPEED_OFFSET UNITYSDK_OFFSET(0x1BB25390)
#define POPTEXT_SETFINISH_OFFSET UNITYSDK_OFFSET(0x1BB25420)
#define POPTEXT_SETTEXT_OFFSET UNITYSDK_OFFSET(0x1BB25220)
#define POPTEXT_SETTIMER_OFFSET UNITYSDK_OFFSET(0x1BB252A0)
#define POPTEXT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BB255D0)
#define POPTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB26190)
#define POPTEXT___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1BB26290)
#define POPTEXT___BASE_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1BB262A0)

inline static constexpr unsigned int PopText_TypeDefinitionIndex = 85937;

class PopText : public ::UnityEngine::UI::TextItalicAdobeStyle
{
public:
	::System::Boolean PlayAwake; // 0x3C8
	::System::Single Speed; // 0x3CC
	::System::Collections::Generic::List_1<::System::Single>* timer; // 0x3D0
	::System::Action* finishAction; // 0x3D8
	::System::Boolean finish; // 0x3E0
	::UnityEngine::AnimationCurve* Curve; // 0x3E8
	::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* listUIVertex; // 0x3F0
	::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* newUIVertex; // 0x3F8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPTEXT__CTOR_OFFSET))(this);
	}

	::System::Single get_TimerInterval()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + POPTEXT_GET_TIMERINTERVAL_OFFSET))(this);
	}

	::System::Boolean get_IsFinish()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POPTEXT_GET_ISFINISH_OFFSET))(this);
	}

	::System::Void SetText(::System::String* str, ::System::String* realText)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + POPTEXT_SETTEXT_OFFSET))(this, str, realText);
	}

	::System::Void ResolveSpeed(::System::Single wordPerSecond, ::System::Int32 wordCount)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + POPTEXT_RESOLVESPEED_OFFSET))(this, wordPerSecond, wordCount);
	}

	::System::Void SetFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPTEXT_SETFINISH_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPTEXT_AWAKE_OFFSET))(this);
	}

	::System::Void SetTimer(::System::Int32 strLen)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + POPTEXT_SETTIMER_OFFSET))(this, strLen);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPTEXT_UPDATE_OFFSET))(this);
	}

	::System::Void OnFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPTEXT_ONFINISH_OFFSET))(this);
	}

	::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* toFill)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + POPTEXT_ONPOPULATEMESH_OFFSET))(this, toFill);
	}

	::System::Void Replay()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPTEXT_REPLAY_OFFSET))(this);
	}

	::System::Void __base_Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPTEXT___BASE_AWAKE_OFFSET))(this);
	}

	::System::Void __base_OnPopulateMesh(::UnityEngine::UI::VertexHelper* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + POPTEXT___BASE_ONPOPULATEMESH_OFFSET))(this, P0);
	}
};
