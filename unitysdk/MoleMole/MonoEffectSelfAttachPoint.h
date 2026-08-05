#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectSerializedPluginBase.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOEFFECTSELFATTACHPOINT_SETATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x19096160)
#define MOLEMOLE_MONOEFFECTSELFATTACHPOINT_TRYGETATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x19096040)
#define MOLEMOLE_MONOEFFECTSELFATTACHPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x190963B0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectSelfAttachPoint_TypeDefinitionIndex = 45153;

	class MonoEffectSelfAttachPoint : public ::MoleMole::MonoEffectSerializedPluginBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* SelfAttachPoint; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTSELFATTACHPOINT__CTOR_OFFSET))(this);
		}

		::System::Boolean TryGetAttachPoint(::System::String* a1, ::UnityEngine::Transform*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTSELFATTACHPOINT_TRYGETATTACHPOINT_OFFSET))(this, a1, a2);
		}

		::System::Boolean SetAttachPoint(::System::String* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTSELFATTACHPOINT_SETATTACHPOINT_OFFSET))(this, a1, a2);
		}
	};
}
