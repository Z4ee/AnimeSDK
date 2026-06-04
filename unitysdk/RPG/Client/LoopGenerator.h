#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LoopGenerator_GenerateConfig.h"
#include "unitysdk/RPG/Client/LoopGenerator_SliderTemplate.h"
#include "unitysdk/RPG/Client/LoopGenerator_Struct_2_2AD9EAB8D0AC0300_1.h"
#include "unitysdk/RPG/Client/LoopGenerator_TrackMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class LoopGenerator_RuntimeSlider; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_LOOPGENERATOR_AWAKE_OFFSET UNITYSDK_OFFSET(0xBE7BDD0)
#define RPG_CLIENT_LOOPGENERATOR_COLLECTALLREFASSETPATH_OFFSET UNITYSDK_OFFSET(0xBE7BB80)
#define RPG_CLIENT_LOOPGENERATOR_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0xBE7BC10)
#define RPG_CLIENT_LOOPGENERATOR_METHOD_5_14CC93EEBE7DC8CE_OFFSET UNITYSDK_OFFSET(0xBE7C2B0)
#define RPG_CLIENT_LOOPGENERATOR_METHOD_5_1A28400550A148CC_OFFSET UNITYSDK_OFFSET(0xBE7DD80)
#define RPG_CLIENT_LOOPGENERATOR_METHOD_5_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xBE7D970)
#define RPG_CLIENT_LOOPGENERATOR_METHOD_5_44E2E78A5C2D0384_OFFSET UNITYSDK_OFFSET(0xBE7D390)
#define RPG_CLIENT_LOOPGENERATOR_METHOD_5_9D81CE85FF63522D_OFFSET UNITYSDK_OFFSET(0xBE7D9E0)
#define RPG_CLIENT_LOOPGENERATOR_METHOD_5_B357AE5DB3A8BC4F_OFFSET UNITYSDK_OFFSET(0xBE7DAA0)
#define RPG_CLIENT_LOOPGENERATOR_METHOD_5_CF8BA38996D09531_OFFSET UNITYSDK_OFFSET(0xBE7BD60)
#define RPG_CLIENT_LOOPGENERATOR_METHOD_5_E10635F67939DD2E_OFFSET UNITYSDK_OFFSET(0xBE7D0E0)
#define RPG_CLIENT_LOOPGENERATOR_METHOD_5_E960A56BD2EFC162_OFFSET UNITYSDK_OFFSET(0xBE7BC30)
#define RPG_CLIENT_LOOPGENERATOR_METHOD_5_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0xBE7BCE0)
#define RPG_CLIENT_LOOPGENERATOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xBE7CF10)
#define RPG_CLIENT_LOOPGENERATOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xBE7CA90)
#define RPG_CLIENT_LOOPGENERATOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0xBE7C1D0)
#define RPG_CLIENT_LOOPGENERATOR_RELEASEALLSLIDERS_OFFSET UNITYSDK_OFFSET(0xBE7CAE0)
#define RPG_CLIENT_LOOPGENERATOR_RESETSTATE_OFFSET UNITYSDK_OFFSET(0xBE7C0A0)
#define RPG_CLIENT_LOOPGENERATOR_SETTEMPSPEED_OFFSET UNITYSDK_OFFSET(0xBE7E410)
#define RPG_CLIENT_LOOPGENERATOR_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0xBE7BC20)
#define RPG_CLIENT_LOOPGENERATOR_SWITCHCONFIG_OFFSET UNITYSDK_OFFSET(0xBE7E100)
#define RPG_CLIENT_LOOPGENERATOR_UPDATE_OFFSET UNITYSDK_OFFSET(0xBE7C240)
#define RPG_CLIENT_LOOPGENERATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xBE7E600)
#define RPG_CLIENT_LOOPGENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xBE7E470)

namespace RPG::Client
{
	inline static constexpr unsigned int LoopGenerator_TypeDefinitionIndex = 68161;

	class LoopGenerator : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LoopGenerator_TypeDefinitionIndex)->GetStaticField(0xFAF0);
		}
		::RPG::Client::LoopGenerator_TrackMode _TrackMode; // 0x18
		::System::Single Length; // 0x1C
		::UnityEngine::Vector3 StartPos; // 0x20
		::System::Int32 DefaultConfigIndex; // 0x2C
		::System::Collections::Generic::List_1<::RPG::Client::LoopGenerator_GenerateConfig>* GenerateConfigs; // 0x30
		::System::Int32 CurrentConfigIndex; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::LoopGenerator_RuntimeSlider*>* RuntimeSliders; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::LoopGenerator_RuntimeSlider*>* UnusedRuntimeSliders; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::LoopGenerator_RuntimeSlider*>* LastUsedRuntimeSliders; // 0x50
		::System::Single _TimeScale_k__BackingField; // 0x58
		::System::Boolean Field_5_11; // 0x5C
		::System::Single Field_5_12; // 0x60
		::System::Boolean Field_5_13; // 0x64
		::System::Single Field_5_14; // 0x68
		::System::Collections::Generic::List_1<::RPG::Client::LoopGenerator_RuntimeSlider*>* Field_5_15; // 0x70
		::System::Collections::Generic::List_1<::RPG::Client::LoopGenerator_RuntimeSlider*>* Field_5_16; // 0x78
		::System::Collections::Generic::List_1<::RPG::Client::LoopGenerator_RuntimeSlider*>* Field_5_17; // 0x80
		::UnityEngine::Vector2 Field_5_18; // 0x88
		::System::Int32 Field_5_19; // 0x90
		::System::Int32 Field_5_20; // 0x94
		::System::Int32 Field_5_21; // 0x98
		::System::Boolean Field_5_22; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR__CCTOR_OFFSET))();
		}

		::System::Collections::Generic::IEnumerator_1<::System::String*>* CollectAllRefAssetPath()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_COLLECTALLREFASSETPATH_OFFSET))(this);
		}

		::System::Single get_TimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_GET_TIMESCALE_OFFSET))(this);
		}

		::System::Void set_TimeScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_SET_TIMESCALE_OFFSET))(this, a1);
		}

		::RPG::Client::LoopGenerator_GenerateConfig Method_5_E960A56BD2EFC162()
		{
			return ((::RPG::Client::LoopGenerator_GenerateConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_METHOD_5_E960A56BD2EFC162_OFFSET))(this);
		}

		::System::Single Method_5_FF7B2911BBACA4A9()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_METHOD_5_FF7B2911BBACA4A9_OFFSET))(this);
		}

		::System::Boolean Method_5_CF8BA38996D09531()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_METHOD_5_CF8BA38996D09531_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_UPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_5_14CC93EEBE7DC8CE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_METHOD_5_14CC93EEBE7DC8CE_OFFSET))(this, a1);
		}

		::System::Void Method_5_E10635F67939DD2E(::RPG::Client::LoopGenerator_RuntimeSlider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LoopGenerator_RuntimeSlider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_METHOD_5_E10635F67939DD2E_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_1D4018D4200358D0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_METHOD_5_1D4018D4200358D0_OFFSET))(this);
		}

		::RPG::Client::LoopGenerator_Struct_2_2AD9EAB8D0AC0300_1 Method_5_9D81CE85FF63522D(::System::Single a1)
		{
			return ((::RPG::Client::LoopGenerator_Struct_2_2AD9EAB8D0AC0300_1(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_METHOD_5_9D81CE85FF63522D_OFFSET))(this, a1);
		}

		::RPG::Client::LoopGenerator_RuntimeSlider* Method_5_B357AE5DB3A8BC4F(::RPG::Client::LoopGenerator_SliderTemplate a1)
		{
			return ((::RPG::Client::LoopGenerator_RuntimeSlider*(*)(::PVOID, ::RPG::Client::LoopGenerator_SliderTemplate))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_METHOD_5_B357AE5DB3A8BC4F_OFFSET))(this, a1);
		}

		::System::Void Method_5_1A28400550A148CC(::UnityEngine::GameObject* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_METHOD_5_1A28400550A148CC_OFFSET))(this, a1, a2);
		}

		::RPG::Client::LoopGenerator_RuntimeSlider* Method_5_44E2E78A5C2D0384()
		{
			return ((::RPG::Client::LoopGenerator_RuntimeSlider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_METHOD_5_44E2E78A5C2D0384_OFFSET))(this);
		}

		::System::Void ReleaseAllSliders()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_RELEASEALLSLIDERS_OFFSET))(this);
		}

		::System::Void ResetState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_RESETSTATE_OFFSET))(this);
		}

		::System::Void SwitchConfig(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_SWITCHCONFIG_OFFSET))(this, a1, a2);
		}

		::System::Void SetTempSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_SETTEMPSPEED_OFFSET))(this, a1);
		}
	};
}
