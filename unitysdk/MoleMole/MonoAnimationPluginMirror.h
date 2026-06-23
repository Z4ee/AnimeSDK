#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/MonoAnimationPluginBase.h"
#include "unitysdk/MoleMole/MonoAnimationPluginMirror_MirrorAnim.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOANIMATIONPLUGINMIRROR_METHOD_6_0089E869E2D4144B_OFFSET UNITYSDK_OFFSET(0x1A03EE60)
#define MOLEMOLE_MONOANIMATIONPLUGINMIRROR_METHOD_6_4DFE64B6A1B8E9ED_OFFSET UNITYSDK_OFFSET(0x1A03EC90)
#define MOLEMOLE_MONOANIMATIONPLUGINMIRROR_METHOD_6_896FA9EAB4C29FB4_OFFSET UNITYSDK_OFFSET(0x1A03F320)
#define MOLEMOLE_MONOANIMATIONPLUGINMIRROR_METHOD_6_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A03F310)
#define MOLEMOLE_MONOANIMATIONPLUGINMIRROR_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x1A03F100)
#define MOLEMOLE_MONOANIMATIONPLUGINMIRROR_PLAY_1_OFFSET UNITYSDK_OFFSET(0x1A03E7B0)
#define MOLEMOLE_MONOANIMATIONPLUGINMIRROR_PLAY_OFFSET UNITYSDK_OFFSET(0x1A03E520)
#define MOLEMOLE_MONOANIMATIONPLUGINMIRROR_SAMPLEANIMATION_OFFSET UNITYSDK_OFFSET(0x1A03EEF0)
#define MOLEMOLE_MONOANIMATIONPLUGINMIRROR_STOPCURFADE_OFFSET UNITYSDK_OFFSET(0x1A03E6C0)
#define MOLEMOLE_MONOANIMATIONPLUGINMIRROR_STOP_OFFSET UNITYSDK_OFFSET(0x1A03F480)
#define MOLEMOLE_MONOANIMATIONPLUGINMIRROR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A03F5C0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoAnimationPluginMirror_TypeDefinitionIndex = 49490;

	class MonoAnimationPluginMirror : public ::MoleMole::MonoAnimationPluginBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::MonoAnimationPluginMirror_MirrorAnim>* _mirrorAnims; // 0x20
		::System::Action* Field_6_1; // 0x28
		::Foundation::Coroutine::CoroutineHandle Field_6_2; // 0x30
		::System::String* Field_6_3; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATIONPLUGINMIRROR__CTOR_OFFSET))(this);
		}

		::System::Boolean Play()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATIONPLUGINMIRROR_PLAY_OFFSET))(this);
		}

		::System::Boolean Play_1(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATIONPLUGINMIRROR_PLAY_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean SampleAnimation(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATIONPLUGINMIRROR_SAMPLEANIMATION_OFFSET))(this, a1, a2);
		}

		::System::Boolean PlayAnimation(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATIONPLUGINMIRROR_PLAYANIMATION_OFFSET))(this, a1, a2);
		}

		::System::Void StopCurFade()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATIONPLUGINMIRROR_STOPCURFADE_OFFSET))(this);
		}

		::System::Void Stop(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATIONPLUGINMIRROR_STOP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_6_0089E869E2D4144B(::System::Single a1)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATIONPLUGINMIRROR_METHOD_6_0089E869E2D4144B_OFFSET))(this, a1);
		}

		::System::Boolean Method_6_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATIONPLUGINMIRROR_METHOD_6_F0088C88851A7DFB_OFFSET))(this);
		}

		::System::String* Method_6_4DFE64B6A1B8E9ED(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATIONPLUGINMIRROR_METHOD_6_4DFE64B6A1B8E9ED_OFFSET))(this, a1);
		}

		::System::Void Method_6_896FA9EAB4C29FB4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATIONPLUGINMIRROR_METHOD_6_896FA9EAB4C29FB4_OFFSET))(this);
		}
	};
}
