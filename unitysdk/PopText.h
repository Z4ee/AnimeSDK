#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Extension/UITextRevealQuadRange.h"
#include "unitysdk/UnityEngine/UI/TextItalicAdobeStyle.h"
#include "unitysdk/UnityEngine/UIVertex.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine::UI { class VertexHelper; }

#define POPTEXT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1CB8FEF0)
#define POPTEXT_BUILDANIMATEDVERTEXSTREAM_OFFSET UNITYSDK_OFFSET(0x1CB902F0)
#define POPTEXT_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x1CB8FBF0)
#define POPTEXT_GET_TIMERINTERVAL_OFFSET UNITYSDK_OFFSET(0x1CB8FBD0)
#define POPTEXT_ONFINISH_OFFSET UNITYSDK_OFFSET(0x1CB8FE50)
#define POPTEXT_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1CB90A80)
#define POPTEXT_REPLAY_OFFSET UNITYSDK_OFFSET(0x1CB90EE0)
#define POPTEXT_RESOLVEREVEALINDEX_OFFSET UNITYSDK_OFFSET(0x1CB90200)
#define POPTEXT_RESOLVESPEED_OFFSET UNITYSDK_OFFSET(0x1CB8FD70)
#define POPTEXT_SETFINISH_OFFSET UNITYSDK_OFFSET(0x1CB8FE00)
#define POPTEXT_SETTEXT_OFFSET UNITYSDK_OFFSET(0x1CB8FC00)
#define POPTEXT_SETTIMER_OFFSET UNITYSDK_OFFSET(0x1CB8FC80)
#define POPTEXT_TRYCOLLECTREVEALRANGES_OFFSET UNITYSDK_OFFSET(0x1CB90180)
#define POPTEXT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1CB8FFB0)
#define POPTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB90F20)
#define POPTEXT___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1CB91020)
#define POPTEXT___BASE_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1CB91030)

inline static constexpr unsigned int PopText_TypeDefinitionIndex = 41907;

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

	::System::Boolean TryCollectRevealRanges(::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UITextRevealQuadRange>* revealQuadRanges)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UITextRevealQuadRange>*))((::PBYTE)hIl2Cpp + POPTEXT_TRYCOLLECTREVEALRANGES_OFFSET))(this, revealQuadRanges);
	}

	static ::System::Int32 ResolveRevealIndex(::System::Int32 quadIndex, ::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UITextRevealQuadRange>* revealQuadRanges, ::System::Int32& rangeCursor)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UITextRevealQuadRange>*, ::System::Int32&))((::PBYTE)hIl2Cpp + POPTEXT_RESOLVEREVEALINDEX_OFFSET))(quadIndex, revealQuadRanges, rangeCursor);
	}

	::System::Void BuildAnimatedVertexStream(::System::Int32 quadCount, ::System::Boolean hasRevealRanges, ::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UITextRevealQuadRange>* revealQuadRanges)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UITextRevealQuadRange>*))((::PBYTE)hIl2Cpp + POPTEXT_BUILDANIMATEDVERTEXSTREAM_OFFSET))(this, quadCount, hasRevealRanges, revealQuadRanges);
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
