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

#define RPG_CLIENT_LOOPGENERATOR_AWAKE_OFFSET UNITYSDK_OFFSET(0xD58D2C0)
#define RPG_CLIENT_LOOPGENERATOR_COLLECTALLREFASSETPATH_OFFSET UNITYSDK_OFFSET(0xD58D040)
#define RPG_CLIENT_LOOPGENERATOR_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0xD58D0D0)
#define RPG_CLIENT_LOOPGENERATOR_METHOD_5_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xD58EDA0)
#define RPG_CLIENT_LOOPGENERATOR_METHOD_5_44E2E78A5C2D0384_OFFSET UNITYSDK_OFFSET(0xD58E820)
#define RPG_CLIENT_LOOPGENERATOR_METHOD_5_45FDB639B4E97210_OFFSET UNITYSDK_OFFSET(0xD58D7D0)
#define RPG_CLIENT_LOOPGENERATOR_METHOD_5_77577333B4681208_OFFSET UNITYSDK_OFFSET(0xD58D220)
#define RPG_CLIENT_LOOPGENERATOR_METHOD_5_879E4116B6BD3AF1_OFFSET UNITYSDK_OFFSET(0xD58F1B0)
#define RPG_CLIENT_LOOPGENERATOR_METHOD_5_9D81CE85FF63522D_OFFSET UNITYSDK_OFFSET(0xD58EE10)
#define RPG_CLIENT_LOOPGENERATOR_METHOD_5_B357AE5DB3A8BC4F_OFFSET UNITYSDK_OFFSET(0xD58EED0)
#define RPG_CLIENT_LOOPGENERATOR_METHOD_5_E10635F67939DD2E_OFFSET UNITYSDK_OFFSET(0xD58E570)
#define RPG_CLIENT_LOOPGENERATOR_METHOD_5_E960A56BD2EFC162_OFFSET UNITYSDK_OFFSET(0xD58D0F0)
#define RPG_CLIENT_LOOPGENERATOR_METHOD_5_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0xD58D1A0)
#define RPG_CLIENT_LOOPGENERATOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD58E3A0)
#define RPG_CLIENT_LOOPGENERATOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD58DF20)
#define RPG_CLIENT_LOOPGENERATOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD58D6F0)
#define RPG_CLIENT_LOOPGENERATOR_RELEASEALLSLIDERS_OFFSET UNITYSDK_OFFSET(0xD58DF70)
#define RPG_CLIENT_LOOPGENERATOR_RESETSTATE_OFFSET UNITYSDK_OFFSET(0xD58D5C0)
#define RPG_CLIENT_LOOPGENERATOR_SETTEMPSPEED_OFFSET UNITYSDK_OFFSET(0xD58F960)
#define RPG_CLIENT_LOOPGENERATOR_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0xD58D0E0)
#define RPG_CLIENT_LOOPGENERATOR_SWITCHCONFIG_OFFSET UNITYSDK_OFFSET(0xD58F650)
#define RPG_CLIENT_LOOPGENERATOR_UPDATE_OFFSET UNITYSDK_OFFSET(0xD58D760)
#define RPG_CLIENT_LOOPGENERATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xD58FB50)
#define RPG_CLIENT_LOOPGENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xD58F9C0)

namespace RPG::Client
{
	inline static constexpr unsigned int LoopGenerator_TypeDefinitionIndex = 72887;

	class LoopGenerator : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_CIFEKCAKFPL()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LoopGenerator_TypeDefinitionIndex)->GetStaticField(0x14A70);
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
		::System::Boolean ALJDNKEIFEE; // 0x5C
		::System::Single FOPFCEMDIIE; // 0x60
		::System::Boolean BJAPLEMCIOE; // 0x64
		::System::Single LPKLCGLBJDB; // 0x68
		::System::Collections::Generic::List_1<::RPG::Client::LoopGenerator_RuntimeSlider*>* GGMEFHDMNDO; // 0x70
		::System::Collections::Generic::List_1<::RPG::Client::LoopGenerator_RuntimeSlider*>* CIPHCLCEAHN; // 0x78
		::System::Collections::Generic::List_1<::RPG::Client::LoopGenerator_RuntimeSlider*>* LDJPMFFAELF; // 0x80
		::UnityEngine::Vector2 EILIBDFLGMP; // 0x88
		::System::Int32 PAHLFAKCIEN; // 0x90
		::System::Int32 GEPLFDHECJK; // 0x94
		::System::Int32 BKGDBEACJJN; // 0x98
		::System::Boolean EMBGOMBBAJD; // 0x9C

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

		::System::Boolean Method_5_77577333B4681208()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_METHOD_5_77577333B4681208_OFFSET))(this);
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

		::System::Void Method_5_45FDB639B4E97210(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_METHOD_5_45FDB639B4E97210_OFFSET))(this, a1);
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

		::System::Void Method_5_879E4116B6BD3AF1(::UnityEngine::GameObject* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_METHOD_5_879E4116B6BD3AF1_OFFSET))(this, a1, a2);
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
