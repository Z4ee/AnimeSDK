#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOSUMMEREVENTSTARTTIP_METHOD_5_1D9AD08B174D2098_OFFSET UNITYSDK_OFFSET(0x1909E230)
#define MOLEMOLE_MONOSUMMEREVENTSTARTTIP_RUN_OFFSET UNITYSDK_OFFSET(0x1909E040)
#define MOLEMOLE_MONOSUMMEREVENTSTARTTIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1909E2C0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSummerEventStartTip_TypeDefinitionIndex = 59752;

	class MonoSummerEventStartTip : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* go; // 0x18
		::UnityEngine::Transform* start; // 0x20
		::UnityEngine::Animation* root; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSUMMEREVENTSTARTTIP__CTOR_OFFSET))(this);
		}

		::System::Void Run(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSUMMEREVENTSTARTTIP_RUN_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* Method_5_1D9AD08B174D2098(::System::Action* a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSUMMEREVENTSTARTTIP_METHOD_5_1D9AD08B174D2098_OFFSET))(this, a1);
		}
	};
}
