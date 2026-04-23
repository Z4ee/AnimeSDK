#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/QTEMixer_QTEState.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_1_36264895A759B0FF;
class Class_1_4B703F2764047929;
namespace RPGTools::Timeline { class QTEData; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define RPGTOOLS_TIMELINE_QTEMIXER_METHOD_2_1D9AD08B174D2098_OFFSET UNITYSDK_OFFSET(0xB90C540)
#define RPGTOOLS_TIMELINE_QTEMIXER_METHOD_2_80815E4435FD1EE6_OFFSET UNITYSDK_OFFSET(0xB90BC40)
#define RPGTOOLS_TIMELINE_QTEMIXER_METHOD_2_AD23FDCC7576BB32_OFFSET UNITYSDK_OFFSET(0xB90B8C0)
#define RPGTOOLS_TIMELINE_QTEMIXER_METHOD_2_C7B58231E4F61838_OFFSET UNITYSDK_OFFSET(0xB90BE40)
#define RPGTOOLS_TIMELINE_QTEMIXER_METHOD_2_CBBFB9A6CF88C9DD_OFFSET UNITYSDK_OFFSET(0xB90AAC0)
#define RPGTOOLS_TIMELINE_QTEMIXER_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xB90B7E0)
#define RPGTOOLS_TIMELINE_QTEMIXER_METHOD_2_EA6C019B25856AE1_OFFSET UNITYSDK_OFFSET(0xB90B970)
#define RPGTOOLS_TIMELINE_QTEMIXER_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xB90AFA0)
#define RPGTOOLS_TIMELINE_QTEMIXER_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xB90B560)
#define RPGTOOLS_TIMELINE_QTEMIXER__CTOR_OFFSET UNITYSDK_OFFSET(0xB90C5D0)
#define RPGTOOLS_TIMELINE_QTEMIXER___IFIXBASEPROXY_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xB90C760)
#define RPGTOOLS_TIMELINE_QTEMIXER___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xB90C770)
#define RPGTOOLS_TIMELINE_QTEMIXER___ONFAIL_B__4_0_OFFSET UNITYSDK_OFFSET(0xB90C5E0)
#define RPGTOOLS_TIMELINE_QTEMIXER___ONFAIL_B__4_1_OFFSET UNITYSDK_OFFSET(0xB90C6A0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int QTEMixer_TypeDefinitionIndex = 45007;

	class QTEMixer : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::QTEData* _QTEData; // 0x10
		::UnityEngine::Playables::PlayableDirector* _Director; // 0x18
		::Class_1_36264895A759B0FF* _DirectorState; // 0x20
		::Class_1_4B703F2764047929* _EffectMgr; // 0x28
		::UnityEngine::Coroutine* _FailScreenTransferCoroutine; // 0x30
		::RPGTools::Timeline::QTEMixer_QTEState _State; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEMIXER__CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEMIXER_ONGRAPHSTART_OFFSET))(this, a1);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEMIXER_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void Method_2_CBBFB9A6CF88C9DD(::RPGTools::Timeline::QTEData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::QTEData*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEMIXER_METHOD_2_CBBFB9A6CF88C9DD_OFFSET))(this, a1);
		}

		::System::Void Method_2_EA6C019B25856AE1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEMIXER_METHOD_2_EA6C019B25856AE1_OFFSET))(this, a1);
		}

		::System::Void Method_2_C7B58231E4F61838(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEMIXER_METHOD_2_C7B58231E4F61838_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* Method_2_1D9AD08B174D2098(::System::Action* a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEMIXER_METHOD_2_1D9AD08B174D2098_OFFSET))(this, a1);
		}

		::System::Void Method_2_E3DE31A03057E055()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEMIXER_METHOD_2_E3DE31A03057E055_OFFSET))(this);
		}

		::System::Void Method_2_AD23FDCC7576BB32(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEMIXER_METHOD_2_AD23FDCC7576BB32_OFFSET))(this, a1);
		}

		::System::Void Method_2_80815E4435FD1EE6(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEMIXER_METHOD_2_80815E4435FD1EE6_OFFSET))(this, a1);
		}

		::System::Void __OnFail_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEMIXER___ONFAIL_B__4_0_OFFSET))(this);
		}

		::System::Void __OnFail_b__4_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEMIXER___ONFAIL_B__4_1_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnGraphStart(::UnityEngine::Playables::Playable P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEMIXER___IFIXBASEPROXY_ONGRAPHSTART_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnGraphStop(::UnityEngine::Playables::Playable P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEMIXER___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET))(this, P0);
		}
	};
}
