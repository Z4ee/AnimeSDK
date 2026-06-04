#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class CustomEventBehaviour; }
namespace System { class Object; }

#define CLASS_2_A200C09FD729958A_METHOD_2_05E8E92944CFD994_OFFSET UNITYSDK_OFFSET(0xAC66BC0)
#define CLASS_2_A200C09FD729958A_METHOD_2_28AFA2CE9FC41832_OFFSET UNITYSDK_OFFSET(0xAC66C50)
#define CLASS_2_A200C09FD729958A_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xAC66CA0)
#define CLASS_2_A200C09FD729958A_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAC66C10)
#define CLASS_2_A200C09FD729958A_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAC666B0)
#define CLASS_2_A200C09FD729958A__CTOR_OFFSET UNITYSDK_OFFSET(0xAC66CE0)
#define CLASS_2_A200C09FD729958A___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAC66CF0)

inline static constexpr unsigned int Class_2_A200C09FD729958A_TypeDefinitionIndex = 45671;

class Class_2_A200C09FD729958A : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::Double Field_2_0; // 0x10
	::System::Double Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A200C09FD729958A__CTOR_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A200C09FD729958A_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_05E8E92944CFD994(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_A200C09FD729958A_METHOD_2_05E8E92944CFD994_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A200C09FD729958A_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_28AFA2CE9FC41832(::RPGTools::Timeline::CustomEventBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::CustomEventBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_A200C09FD729958A_METHOD_2_28AFA2CE9FC41832_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A200C09FD729958A_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A200C09FD729958A___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}
};
