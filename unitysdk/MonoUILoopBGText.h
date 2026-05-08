#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine::UI { class Text; }

#define MONOUILOOPBGTEXT_AUTOREPAIR_OFFSET UNITYSDK_OFFSET(0xF3AF3A0)
#define MONOUILOOPBGTEXT_AWAKE_OFFSET UNITYSDK_OFFSET(0xF3AF030)
#define MONOUILOOPBGTEXT_GETRUNINGTIME_OFFSET UNITYSDK_OFFSET(0xF3AFAE0)
#define MONOUILOOPBGTEXT_GET__INITPOS_OFFSET UNITYSDK_OFFSET(0xF3AE8B0)
#define MONOUILOOPBGTEXT_INIT_OFFSET UNITYSDK_OFFSET(0xF3AE960)
#define MONOUILOOPBGTEXT_INNERUPDATE_OFFSET UNITYSDK_OFFSET(0xF3AFB80)
#define MONOUILOOPBGTEXT_RESETANIMATION_OFFSET UNITYSDK_OFFSET(0xF3AF510)
#define MONOUILOOPBGTEXT_SETTEXT_OFFSET UNITYSDK_OFFSET(0xF3AF4A0)
#define MONOUILOOPBGTEXT_START_OFFSET UNITYSDK_OFFSET(0xF3AF100)
#define MONOUILOOPBGTEXT_UPDATE_OFFSET UNITYSDK_OFFSET(0xF3AFB30)
#define MONOUILOOPBGTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xF3AFFC0)

inline static constexpr unsigned int MonoUILoopBGText_TypeDefinitionIndex = 48710;

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
