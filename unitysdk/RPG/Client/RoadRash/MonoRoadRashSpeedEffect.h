#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RoadRash/SpeedEffectPartOffset.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ROADRASH_MONOROADRASHSPEEDEFFECT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1BC6AE20)
#define RPG_CLIENT_ROADRASH_MONOROADRASHSPEEDEFFECT_GET_CURRENTPARTID_OFFSET UNITYSDK_OFFSET(0x1BC6AE00)
#define RPG_CLIENT_ROADRASH_MONOROADRASHSPEEDEFFECT_METHOD_5_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1BC6AEB0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHSPEEDEFFECT_METHOD_5_55115737568B83DF_OFFSET UNITYSDK_OFFSET(0x1BC6B2D0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHSPEEDEFFECT_METHOD_5_A3C92D6EE04B1B9D_OFFSET UNITYSDK_OFFSET(0x1BC6B1F0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHSPEEDEFFECT_METHOD_5_EE117CB5227B61F7_OFFSET UNITYSDK_OFFSET(0x1BC6B120)
#define RPG_CLIENT_ROADRASH_MONOROADRASHSPEEDEFFECT_SETPARTID_OFFSET UNITYSDK_OFFSET(0x1BC6AF20)
#define RPG_CLIENT_ROADRASH_MONOROADRASHSPEEDEFFECT_SET_CURRENTPARTID_OFFSET UNITYSDK_OFFSET(0x1BC6AE10)
#define RPG_CLIENT_ROADRASH_MONOROADRASHSPEEDEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC6B4B0)

namespace RPG::Client::RoadRash
{
	inline static constexpr unsigned int MonoRoadRashSpeedEffect_TypeDefinitionIndex = 75467;

	class MonoRoadRashSpeedEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::UnityEngine::Transform*>* LeftChildTransformArray; // 0x18
		::Il2CppArray<::UnityEngine::Transform*>* RightChildTransformArray; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::RoadRash::SpeedEffectPartOffset>* PartOffsetConfigs; // 0x28
		::System::UInt32 _CurrentPartID_k__BackingField; // 0x30
		::Il2CppArray<::UnityEngine::Vector3>* IGJGCGKLIAM; // 0x38
		::Il2CppArray<::UnityEngine::Vector3>* HFJICPICEBD; // 0x40
		::System::Boolean PFABONEPECF; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHSPEEDEFFECT__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_CurrentPartID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHSPEEDEFFECT_GET_CURRENTPARTID_OFFSET))(this);
		}

		::System::Void set_CurrentPartID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHSPEEDEFFECT_SET_CURRENTPARTID_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHSPEEDEFFECT_AWAKE_OFFSET))(this);
		}

		::System::Void SetPartID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHSPEEDEFFECT_SETPARTID_OFFSET))(this, a1);
		}

		::System::Void Method_5_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHSPEEDEFFECT_METHOD_5_4343F372F34C05BF_OFFSET))(this);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>* Method_5_55115737568B83DF(::Il2CppArray<::UnityEngine::Transform*>* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::Il2CppArray<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHSPEEDEFFECT_METHOD_5_55115737568B83DF_OFFSET))(a1);
		}

		static ::System::Void Method_5_EE117CB5227B61F7(::Il2CppArray<::UnityEngine::Transform*>* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Transform*>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHSPEEDEFFECT_METHOD_5_EE117CB5227B61F7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_A3C92D6EE04B1B9D(::Il2CppArray<::UnityEngine::Transform*>* a1, ::Il2CppArray<::UnityEngine::Vector3>* a2)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Transform*>*, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHSPEEDEFFECT_METHOD_5_A3C92D6EE04B1B9D_OFFSET))(a1, a2);
		}
	};
}
