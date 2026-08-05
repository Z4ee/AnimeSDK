#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine::UI { class Text; }

#define MONOUILOOPBGTEXT_AUTOREPAIR_OFFSET UNITYSDK_OFFSET(0x14DB6860)
#define MONOUILOOPBGTEXT_AWAKE_OFFSET UNITYSDK_OFFSET(0x14DB64F0)
#define MONOUILOOPBGTEXT_GETRUNINGTIME_OFFSET UNITYSDK_OFFSET(0x14DB6F60)
#define MONOUILOOPBGTEXT_GET__INITPOS_OFFSET UNITYSDK_OFFSET(0x14DB5D70)
#define MONOUILOOPBGTEXT_INIT_OFFSET UNITYSDK_OFFSET(0x14DB5E20)
#define MONOUILOOPBGTEXT_INNERUPDATE_OFFSET UNITYSDK_OFFSET(0x14DB7000)
#define MONOUILOOPBGTEXT_RESETANIMATION_OFFSET UNITYSDK_OFFSET(0x14DB69D0)
#define MONOUILOOPBGTEXT_SETTEXT_OFFSET UNITYSDK_OFFSET(0x14DB6960)
#define MONOUILOOPBGTEXT_START_OFFSET UNITYSDK_OFFSET(0x14DB65C0)
#define MONOUILOOPBGTEXT_UPDATE_OFFSET UNITYSDK_OFFSET(0x14DB6FB0)
#define MONOUILOOPBGTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14DB7410)

inline static constexpr unsigned int MonoUILoopBGText_TypeDefinitionIndex = 52473;

class MonoUILoopBGText : public ::UnityEngine::MonoBehaviour
{
public:
	::System::String* LoopText; // 0x18
	::System::Boolean Left; // 0x20
	::System::Single Speed; // 0x24
	::System::Int32 LoopCount; // 0x28
	::System::Nullable_1<::UnityEngine::Vector2> __initPos; // 0x2C
	::System::Single loopDelta; // 0x38
	::UnityEngine::UI::Text* m_txt; // 0x40
	::System::Single runingTime; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUILOOPBGTEXT__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector2 get__initPos()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUILOOPBGTEXT_GET__INITPOS_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUILOOPBGTEXT_AWAKE_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUILOOPBGTEXT_START_OFFSET))(this);
	}

	::System::Void AutoRepair()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUILOOPBGTEXT_AUTOREPAIR_OFFSET))(this);
	}

	::System::Void SetText(::System::String* txt)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONOUILOOPBGTEXT_SETTEXT_OFFSET))(this, txt);
	}

	::System::Single GetRuningTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUILOOPBGTEXT_GETRUNINGTIME_OFFSET))(this);
	}

	::System::Void ResetAnimation(::System::Single time)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MONOUILOOPBGTEXT_RESETANIMATION_OFFSET))(this, time);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUILOOPBGTEXT_INIT_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUILOOPBGTEXT_UPDATE_OFFSET))(this);
	}

	::System::Void InnerUpdate(::System::Single time)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MONOUILOOPBGTEXT_INNERUPDATE_OFFSET))(this, time);
	}
};
