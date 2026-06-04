#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IRI2/IRIClusterVolumeInfo.h"
#include "unitysdk/PipelineCmdSlot.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/CRPMainCameraDesc.h"

namespace IRIClusterBuilder { class IRI2VolumeTemplate; }
namespace IRIClusterBuilder { class IRIClusterBuildConfig; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2DArray; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define IRICLUSTERBUILDER_IRI2SIMULATOR_CLEAR_OFFSET UNITYSDK_OFFSET(0x14233070)
#define IRICLUSTERBUILDER_IRI2SIMULATOR_EXECUTE_OFFSET UNITYSDK_OFFSET(0x14233CE0)
#define IRICLUSTERBUILDER_IRI2SIMULATOR_GET_KEY_OFFSET UNITYSDK_OFFSET(0x14233D80)
#define IRICLUSTERBUILDER_IRI2SIMULATOR_INITVOLUME_OFFSET UNITYSDK_OFFSET(0x14233470)
#define IRICLUSTERBUILDER_IRI2SIMULATOR_INIT_1_OFFSET UNITYSDK_OFFSET(0x14233430)
#define IRICLUSTERBUILDER_IRI2SIMULATOR_INIT_OFFSET UNITYSDK_OFFSET(0x14233010)
#define IRICLUSTERBUILDER_IRI2SIMULATOR_METHOD_5_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0x142354D0)
#define IRICLUSTERBUILDER_IRI2SIMULATOR_METHOD_5_8D633097E91F47BD_OFFSET UNITYSDK_OFFSET(0x142340E0)
#define IRICLUSTERBUILDER_IRI2SIMULATOR_METHOD_5_B87ABFDC088BA9E8_OFFSET UNITYSDK_OFFSET(0x14233C50)
#define IRICLUSTERBUILDER_IRI2SIMULATOR_METHOD_5_BC53702D3AE2B6AE_OFFSET UNITYSDK_OFFSET(0x14234F10)
#define IRICLUSTERBUILDER_IRI2SIMULATOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x14233060)
#define IRICLUSTERBUILDER_IRI2SIMULATOR_START_OFFSET UNITYSDK_OFFSET(0x14232FA0)
#define IRICLUSTERBUILDER_IRI2SIMULATOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x14233D90)
#define IRICLUSTERBUILDER_IRI2SIMULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x14235810)

namespace IRIClusterBuilder
{
	inline static constexpr unsigned int IRI2Simulator_TypeDefinitionIndex = 45055;

	class IRI2Simulator : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::IRIClusterBuilder::IRI2Simulator** StaticGet_Instance()
		{
			return (::IRIClusterBuilder::IRI2Simulator**)Il2CppClass::FromTypeDefinitionIndex(IRI2Simulator_TypeDefinitionIndex)->GetStaticField(0x1AF50);
		}
		::UnityEngine::ComputeBuffer* Field_5_1; // 0x18
		::UnityEngine::ComputeBuffer* Field_5_2; // 0x20
		::UnityEngine::ComputeBuffer* Field_5_3; // 0x28
		::UnityEngine::ComputeBuffer* Field_5_4; // 0x30
		::UnityEngine::ComputeBuffer* Field_5_5; // 0x38
		::UnityEngine::ComputeBuffer* Field_5_6; // 0x40
		::UnityEngine::Texture2DArray* Field_5_7; // 0x48
		::UnityEngine::Texture2DArray* Field_5_8; // 0x50
		::UnityEngine::Texture2DArray* Field_5_9; // 0x58
		::UnityEngine::Transform* Field_5_10; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::UInt32, ::System::UInt32>*>*>* Field_5_11; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Int32>* Field_5_12; // 0x70
		::System::Int32 Field_5_13; // 0x78
		::System::Int32 Field_5_14; // 0x7C
		::System::Int32 Field_5_15; // 0x80
		::System::Int32 Field_5_16; // 0x84
		::PipelineCmdSlot Field_5_17; // 0x88
		::IRIClusterBuilder::IRI2VolumeTemplate* VolumeTemplate; // 0x90
		::IRIClusterBuilder::IRIClusterBuildConfig* Config; // 0x98
		::UnityEngine::Material* Material; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRI2SIMULATOR__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRI2SIMULATOR_START_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRI2SIMULATOR_ONDISABLE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRI2SIMULATOR_INIT_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRI2SIMULATOR_CLEAR_OFFSET))(this);
		}

		::System::Void Method_5_B87ABFDC088BA9E8(::UnityEngine::ComputeBuffer*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*&))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRI2SIMULATOR_METHOD_5_B87ABFDC088BA9E8_OFFSET))(this, a1);
		}

		::System::Void Execute(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::CRPMainCameraDesc& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRI2SIMULATOR_EXECUTE_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_Key()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRI2SIMULATOR_GET_KEY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRI2SIMULATOR_UPDATE_OFFSET))(this);
		}

		::System::Void Init_1(::UnityEngine::Material* a1, ::IRIClusterBuilder::IRIClusterBuildConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::IRIClusterBuilder::IRIClusterBuildConfig*))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRI2SIMULATOR_INIT_1_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_8D633097E91F47BD(::IRI2::IRIClusterVolumeInfo a1)
		{
			return ((::System::Void(*)(::PVOID, ::IRI2::IRIClusterVolumeInfo))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRI2SIMULATOR_METHOD_5_8D633097E91F47BD_OFFSET))(this, a1);
		}

		::System::Void Method_5_BC53702D3AE2B6AE(::IRI2::IRIClusterVolumeInfo a1)
		{
			return ((::System::Void(*)(::PVOID, ::IRI2::IRIClusterVolumeInfo))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRI2SIMULATOR_METHOD_5_BC53702D3AE2B6AE_OFFSET))(this, a1);
		}

		::System::Void InitVolume(::IRIClusterBuilder::IRI2VolumeTemplate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IRIClusterBuilder::IRI2VolumeTemplate*))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRI2SIMULATOR_INITVOLUME_OFFSET))(this, a1);
		}

		::System::Void Method_5_5A124CAF1E48B74F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRI2SIMULATOR_METHOD_5_5A124CAF1E48B74F_OFFSET))(this);
		}
	};
}
