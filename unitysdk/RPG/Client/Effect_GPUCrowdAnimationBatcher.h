#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_90153E8BD5DB57E2;
namespace RPG::Client { class Effect_GPUCrowdAnimation; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_EFFECT_GPUCROWDANIMATIONBATCHER_AWAKE_OFFSET UNITYSDK_OFFSET(0xA1CF460)
#define RPG_CLIENT_EFFECT_GPUCROWDANIMATIONBATCHER_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0xA1CF660)
#define RPG_CLIENT_EFFECT_GPUCROWDANIMATIONBATCHER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA1CF610)
#define RPG_CLIENT_EFFECT_GPUCROWDANIMATIONBATCHER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA1CF530)
#define RPG_CLIENT_EFFECT_GPUCROWDANIMATIONBATCHER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA1CF5C0)
#define RPG_CLIENT_EFFECT_GPUCROWDANIMATIONBATCHER__CTOR_OFFSET UNITYSDK_OFFSET(0xA1CF670)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_GPUCrowdAnimationBatcher_TypeDefinitionIndex = 64980;

	class Effect_GPUCrowdAnimationBatcher : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_2_90153E8BD5DB57E2* Field_5_0; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::Effect_GPUCrowdAnimation*>* BatchList; // 0x20
		::System::Collections::Generic::List_1<::System::String*>* FloatMPBProperty; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* FloatMaterialProperty; // 0x30
		::System::Collections::Generic::List_1<::System::String*>* VectorMPBProperty; // 0x38
		::System::Boolean hasBeInit; // 0x40
		::UnityEngine::Material* CrowdMaterial; // 0x48
		::System::Boolean EnableBatch; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUCROWDANIMATIONBATCHER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUCROWDANIMATIONBATCHER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUCROWDANIMATIONBATCHER_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUCROWDANIMATIONBATCHER_ONENABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUCROWDANIMATIONBATCHER_LATEUPDATE_OFFSET))(this);
		}

		::Class_2_90153E8BD5DB57E2* get_Behavior()
		{
			return ((::Class_2_90153E8BD5DB57E2*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUCROWDANIMATIONBATCHER_GET_BEHAVIOR_OFFSET))(this);
		}
	};
}
