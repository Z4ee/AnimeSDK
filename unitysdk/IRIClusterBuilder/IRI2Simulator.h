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

#define IRICLUSTERBUILDER_IRI2SIMULATOR_CLEAR_OFFSET UNITYSDK_OFFSET(0x18E626C0)
#define IRICLUSTERBUILDER_IRI2SIMULATOR_EXECUTE_OFFSET UNITYSDK_OFFSET(0x18E63440)
#define IRICLUSTERBUILDER_IRI2SIMULATOR_GET_KEY_OFFSET UNITYSDK_OFFSET(0x18E634E0)
#define IRICLUSTERBUILDER_IRI2SIMULATOR_INITVOLUME_OFFSET UNITYSDK_OFFSET(0x18E62BA0)
#define IRICLUSTERBUILDER_IRI2SIMULATOR_INIT_1_OFFSET UNITYSDK_OFFSET(0x18E62B60)
#define IRICLUSTERBUILDER_IRI2SIMULATOR_INIT_OFFSET UNITYSDK_OFFSET(0x18E62660)
#define IRICLUSTERBUILDER_IRI2SIMULATOR_METHOD_5_2DFA1DA1AC6AFB6B_OFFSET UNITYSDK_OFFSET(0x18E63840)
#define IRICLUSTERBUILDER_IRI2SIMULATOR_METHOD_5_432C0DCC61B3C2C3_OFFSET UNITYSDK_OFFSET(0x18E63390)
#define IRICLUSTERBUILDER_IRI2SIMULATOR_METHOD_5_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0x18E64CF0)
#define IRICLUSTERBUILDER_IRI2SIMULATOR_METHOD_5_BC53702D3AE2B6AE_OFFSET UNITYSDK_OFFSET(0x18E64720)
#define IRICLUSTERBUILDER_IRI2SIMULATOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18E626B0)
#define IRICLUSTERBUILDER_IRI2SIMULATOR_START_OFFSET UNITYSDK_OFFSET(0x18E625F0)
#define IRICLUSTERBUILDER_IRI2SIMULATOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x18E634F0)
#define IRICLUSTERBUILDER_IRI2SIMULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x18E65030)

namespace IRIClusterBuilder
{
	inline static constexpr unsigned int IRI2Simulator_TypeDefinitionIndex = 48196;

	class IRI2Simulator : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::IRIClusterBuilder::IRI2Simulator** StaticGet_Instance()
		{
			return (::IRIClusterBuilder::IRI2Simulator**)Il2CppClass::FromTypeDefinitionIndex(IRI2Simulator_TypeDefinitionIndex)->GetStaticField(0x46070);
		}
		::UnityEngine::ComputeBuffer* LJDDGLNPNGN; // 0x18
		::UnityEngine::ComputeBuffer* COGBJBCGJPH; // 0x20
		::UnityEngine::ComputeBuffer* NGEDGIJMBMG; // 0x28
		::UnityEngine::ComputeBuffer* LMONILAPPAC; // 0x30
		::UnityEngine::ComputeBuffer* ADLHCKBLDEA; // 0x38
		::UnityEngine::ComputeBuffer* GAELFBGGEIO; // 0x40
		::UnityEngine::Texture2DArray* DKNBPANNPBP; // 0x48
		::UnityEngine::Texture2DArray* PKOMLNPPDOH; // 0x50
		::UnityEngine::Texture2DArray* EOJJHCCCNOE; // 0x58
		::UnityEngine::Transform* GOECGKDKEHO; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::UInt32, ::System::UInt32>*>*>* CAMOCBEEMIF; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Int32>* EFFFPDDFBFK; // 0x70
		::System::Int32 MJDDDMCKLGP; // 0x78
		::System::Int32 MKDDNAPPEJI; // 0x7C
		::System::Int32 IEECGAFHABM; // 0x80
		::System::Int32 NMKCKIJLHKC; // 0x84
		::PipelineCmdSlot PDIECHCNEGC; // 0x88
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

		::System::Void Method_5_432C0DCC61B3C2C3(::UnityEngine::ComputeBuffer*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*&))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRI2SIMULATOR_METHOD_5_432C0DCC61B3C2C3_OFFSET))(this, a1);
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

		::System::Void Method_5_2DFA1DA1AC6AFB6B(::IRI2::IRIClusterVolumeInfo a1)
		{
			return ((::System::Void(*)(::PVOID, ::IRI2::IRIClusterVolumeInfo))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRI2SIMULATOR_METHOD_5_2DFA1DA1AC6AFB6B_OFFSET))(this, a1);
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
