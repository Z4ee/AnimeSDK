#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace MoleMole::Timeline::AutoGenerateComps { class CompTimelineBaseConfig; }
namespace System { class Object; }

#define CLASS_2_9F0F24998E3FEEF4_METHOD_2_324AEE341AAA7A1B_1_OFFSET UNITYSDK_OFFSET(0x14C93770)
#define CLASS_2_9F0F24998E3FEEF4_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x14C93740)
#define CLASS_2_9F0F24998E3FEEF4_METHOD_2_79ED6854413CA2F4_1_OFFSET UNITYSDK_OFFSET(0x14C93760)
#define CLASS_2_9F0F24998E3FEEF4_METHOD_2_79ED6854413CA2F4_2_OFFSET UNITYSDK_OFFSET(0x14C93780)
#define CLASS_2_9F0F24998E3FEEF4_METHOD_2_79ED6854413CA2F4_OFFSET UNITYSDK_OFFSET(0x14C93750)
#define CLASS_2_9F0F24998E3FEEF4_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x14C93730)
#define CLASS_2_9F0F24998E3FEEF4_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x14C92D60)
#define CLASS_2_9F0F24998E3FEEF4_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x14C92CE0)
#define CLASS_2_9F0F24998E3FEEF4_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x14C92C90)
#define CLASS_2_9F0F24998E3FEEF4_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x14C92E00)
#define CLASS_2_9F0F24998E3FEEF4_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x14C92E70)
#define CLASS_2_9F0F24998E3FEEF4_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x14C92EF0)
#define CLASS_2_9F0F24998E3FEEF4__CTOR_OFFSET UNITYSDK_OFFSET(0x14C93720)

inline static constexpr unsigned int Class_2_9F0F24998E3FEEF4_TypeDefinitionIndex = 43508;

class Class_2_9F0F24998E3FEEF4 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* Field_2_1; // 0x10
	::System::Boolean Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F0F24998E3FEEF4__CTOR_OFFSET))(this);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_9F0F24998E3FEEF4_ONGRAPHSTOP_OFFSET))(this, a1);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_9F0F24998E3FEEF4_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_9F0F24998E3FEEF4_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_9F0F24998E3FEEF4_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void PrepareFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_9F0F24998E3FEEF4_PREPAREFRAME_OFFSET))(this, a1, a2);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_9F0F24998E3FEEF4_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_9F0F24998E3FEEF4_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_9F0F24998E3FEEF4_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_2_79ED6854413CA2F4(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_9F0F24998E3FEEF4_METHOD_2_79ED6854413CA2F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_79ED6854413CA2F4_1(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_9F0F24998E3FEEF4_METHOD_2_79ED6854413CA2F4_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_324AEE341AAA7A1B_1(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_9F0F24998E3FEEF4_METHOD_2_324AEE341AAA7A1B_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_79ED6854413CA2F4_2(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_9F0F24998E3FEEF4_METHOD_2_79ED6854413CA2F4_2_OFFSET))(this, a1, a2);
	}
};
