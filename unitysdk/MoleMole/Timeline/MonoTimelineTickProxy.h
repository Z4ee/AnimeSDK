#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class WaitForFixedUpdate; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x141B24A0)
#define MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x141B2220)
#define MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_METHOD_5_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x141B1D80)
#define MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_METHOD_5_8B6CCAB22CD6DA6F_OFFSET UNITYSDK_OFFSET(0x141B1FB0)
#define MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_METHOD_5_921C3C3E09D59CD4_OFFSET UNITYSDK_OFFSET(0x141B2670)
#define MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_METHOD_5_AF36EBA0C8D1FBA2_OFFSET UNITYSDK_OFFSET(0x141B2290)
#define MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x141B25E0)
#define MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_METHOD_5_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x141B2630)
#define MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x141B25A0)
#define MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x141B21E0)
#define MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x141B1E00)
#define MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_REFRESHTIMESCALE_OFFSET UNITYSDK_OFFSET(0x141B24E0)
#define MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_START_OFFSET UNITYSDK_OFFSET(0x141B1C90)
#define MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x141B2540)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MonoTimelineTickProxy_TypeDefinitionIndex = 50261;

	class MonoTimelineTickProxy : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean isFixedUpdate; // 0x18
		::System::Single Field_5_1; // 0x1C
		::System::Single Field_5_2; // 0x20
		::System::Single time; // 0x24
		::System::Boolean isPlaying; // 0x28
		::UnityEngine::Playables::PlayableDirector* Field_5_5; // 0x30
		::Il2CppArray<::UnityEngine::ParticleSystem*>* Field_5_6; // 0x38
		::UnityEngine::WaitForFixedUpdate* Field_5_7; // 0x40
		::UnityEngine::Coroutine* Field_5_8; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_ONDISABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_LATEUPDATE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void RefreshTimeScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_REFRESHTIMESCALE_OFFSET))(this, a1);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_AF36EBA0C8D1FBA2(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_METHOD_5_AF36EBA0C8D1FBA2_OFFSET))(this, a1);
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Method_5_627C7524E98F4AC5()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_METHOD_5_627C7524E98F4AC5_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_METHOD_5_CA373AA1C7054598_2_OFFSET))(this);
		}

		::System::Void Method_5_8B6CCAB22CD6DA6F(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_METHOD_5_8B6CCAB22CD6DA6F_OFFSET))(this, a1);
		}

		::System::Void Method_5_921C3C3E09D59CD4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONOTIMELINETICKPROXY_METHOD_5_921C3C3E09D59CD4_OFFSET))(this);
		}
	};
}
