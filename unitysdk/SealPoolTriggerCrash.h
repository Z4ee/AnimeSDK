#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class PBDHandle;
namespace RPG::Client { class MonoEffect; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Collision; }
namespace UnityEngine { class Transform; }

#define SEALPOOLTRIGGERCRASH_METHOD_5_773796562D326B0E_OFFSET UNITYSDK_OFFSET(0xD07E200)
#define SEALPOOLTRIGGERCRASH_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0xD07DC70)
#define SEALPOOLTRIGGERCRASH__CTOR_OFFSET UNITYSDK_OFFSET(0xD07E480)

inline static constexpr unsigned int SealPoolTriggerCrash_TypeDefinitionIndex = 44485;

class SealPoolTriggerCrash : public ::UnityEngine::MonoBehaviour
{
public:
	::Il2CppArray<::PBDHandle*>* SealPBDs; // 0x18
	::System::String* Field_5_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SEALPOOLTRIGGERCRASH__CTOR_OFFSET))(this);
	}

	::System::Void OnCollisionEnter(::UnityEngine::Collision* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + SEALPOOLTRIGGERCRASH_ONCOLLISIONENTER_OFFSET))(this, a1);
	}

	::System::Void Method_5_773796562D326B0E(::System::String* a1, ::System::Nullable_1<::UnityEngine::Vector3> a2, ::System::Nullable_1<::UnityEngine::Quaternion> a3, ::System::Nullable_1<::UnityEngine::Vector3> a4, ::UnityEngine::Transform* a5, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* a6, ::System::String* a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>, ::System::Nullable_1<::UnityEngine::Vector3>, ::UnityEngine::Transform*, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>*, ::System::String*))((::PBYTE)hIl2Cpp + SEALPOOLTRIGGERCRASH_METHOD_5_773796562D326B0E_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}
};
