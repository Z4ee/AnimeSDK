#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }

#define MONOUILOOPTEXT_AWAKE_OFFSET UNITYSDK_OFFSET(0x11A2FC00)
#define MONOUILOOPTEXT_CLEARLOOPTEXT_OFFSET UNITYSDK_OFFSET(0x11A31B70)
#define MONOUILOOPTEXT_CLEARTEXTKEY_OFFSET UNITYSDK_OFFSET(0x11A31BE0)
#define MONOUILOOPTEXT_GETMOVEDELAY_OFFSET UNITYSDK_OFFSET(0x11A30660)
#define MONOUILOOPTEXT_GETPREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x11A31D80)
#define MONOUILOOPTEXT_GETRAWTEXT_OFFSET UNITYSDK_OFFSET(0x11A30A10)
#define MONOUILOOPTEXT_GETSINGLELOOPTIME_OFFSET UNITYSDK_OFFSET(0x11A306B0)
#define MONOUILOOPTEXT_ISLOOPING_OFFSET UNITYSDK_OFFSET(0x11A30980)
#define MONOUILOOPTEXT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x11A322B0)
#define MONOUILOOPTEXT_ONLANGUAGECHANGE_OFFSET UNITYSDK_OFFSET(0x11A32080)
#define MONOUILOOPTEXT_SETKEY_OFFSET UNITYSDK_OFFSET(0x11A31850)
#define MONOUILOOPTEXT_SETLOOPONCECALL_OFFSET UNITYSDK_OFFSET(0x11A309C0)
#define MONOUILOOPTEXT_SETTEXTINNER_OFFSET UNITYSDK_OFFSET(0x11A30C20)
#define MONOUILOOPTEXT_SETTEXT_OFFSET UNITYSDK_OFFSET(0x11A2FE30)
#define MONOUILOOPTEXT_SHOWTEXT_OFFSET UNITYSDK_OFFSET(0x11A30A50)
#define MONOUILOOPTEXT_UPDATE_OFFSET UNITYSDK_OFFSET(0x11A300A0)
#define MONOUILOOPTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x11A32300)

inline static constexpr unsigned int MonoUILoopText_TypeDefinitionIndex = 78506;

class MonoUILoopText : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::RectTransform* MaxTransform; // 0x18
	::System::Single Left; // 0x20
	::System::Single Right; // 0x24
	::System::Single StartLoopOffset; // 0x28
	::System::Single LoopSpeed; // 0x2C
	::System::Single Delay; // 0x30
	::System::String* rawText; // 0x38
	::System::String* _textKey; // 0x40
	::UnityEngine::UI::Text* m_text; // 0x48
	::System::Boolean _textLooping; // 0x50
	::System::String* space; // 0x58
	::System::Single loopDelta; // 0x60
	::UnityEngine::Vector2 _initPos; // 0x64
	::UnityEngine::RectTransform* m_textRect; // 0x70
	::System::Single _waitMoveTimer; // 0x78
	::System::Single _moveDelay; // 0x7C
	::System::Int32 loopCount; // 0x80
	::System::Action* onLoopOnce; // 0x88
	::System::Single _originalX; // 0x90
	::UnityEngine::Vector2 _orignalAnchorMin; // 0x94
	::UnityEngine::Vector2 _originalAnchorMax; // 0x9C
	::System::String* _initText; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUILOOPTEXT__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUILOOPTEXT_AWAKE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUILOOPTEXT_UPDATE_OFFSET))(this);
	}

	::System::Single GetMoveDelay()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUILOOPTEXT_GETMOVEDELAY_OFFSET))(this);
	}

	::System::Single GetSingleLoopTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUILOOPTEXT_GETSINGLELOOPTIME_OFFSET))(this);
	}

	::System::Boolean IsLooping()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUILOOPTEXT_ISLOOPING_OFFSET))(this);
	}

	::System::Void SetLoopOnceCall(::System::Action* call)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MONOUILOOPTEXT_SETLOOPONCECALL_OFFSET))(this, call);
	}

	::System::String* GetRawText()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUILOOPTEXT_GETRAWTEXT_OFFSET))(this);
	}

	::System::Void ShowText(::System::String* text)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONOUILOOPTEXT_SHOWTEXT_OFFSET))(this, text);
	}

	::System::Void SetKey(::System::String* key)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONOUILOOPTEXT_SETKEY_OFFSET))(this, key);
	}

	::System::Void SetText(::System::String* text, ::System::Single moveDelay, ::System::Action_1<::System::String*>* setTxtFunc, ::System::Action* onNotLoop, ::System::Action_1<::UnityEngine::RectTransform*>* setInitPos, ::System::Action* onLoop)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::Action_1<::UnityEngine::RectTransform*>*, ::System::Action*))((::PBYTE)hIl2Cpp + MONOUILOOPTEXT_SETTEXT_OFFSET))(this, text, moveDelay, setTxtFunc, onNotLoop, setInitPos, onLoop);
	}

	::System::Void ClearLoopText()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUILOOPTEXT_CLEARLOOPTEXT_OFFSET))(this);
	}

	::System::Void SetTextInner(::System::String* text, ::System::Action_1<::System::String*>* setTxtFunc, ::System::Action* onNotLoop, ::System::Action_1<::UnityEngine::RectTransform*>* setInitPos, ::System::Action* onLoop)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::Action_1<::UnityEngine::RectTransform*>*, ::System::Action*))((::PBYTE)hIl2Cpp + MONOUILOOPTEXT_SETTEXTINNER_OFFSET))(this, text, setTxtFunc, onNotLoop, setInitPos, onLoop);
	}

	::System::Void OnLanguageChange(::System::EventArgs* args)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MONOUILOOPTEXT_ONLANGUAGECHANGE_OFFSET))(this, args);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUILOOPTEXT_ONDESTROY_OFFSET))(this);
	}

	::System::Void ClearTextKey()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUILOOPTEXT_CLEARTEXTKEY_OFFSET))(this);
	}

	::System::Single GetPreferredWidth(::UnityEngine::UI::Text* text, ::System::String* str)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::Text*, ::System::String*))((::PBYTE)hIl2Cpp + MONOUILOOPTEXT_GETPREFERREDWIDTH_OFFSET))(this, text, str);
	}
};
