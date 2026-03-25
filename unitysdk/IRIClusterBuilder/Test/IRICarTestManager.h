#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IRIClusterBuilder/Test/IRICarTestManager_ECarType.h"
#include "unitysdk/IRIClusterBuilder/Test/IRICarTestManager_EPositionMode.h"
#include "unitysdk/IRIClusterBuilder/Test/IRICarTestManager_HotReloadCommand.h"
#include "unitysdk/IRIClusterBuilder/Test/IRICarTestManager_LightType.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/ClusterIRIType.h"
#include "unitysdk/UnityEngine/ClusterMeshLodInfo.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/IRIClusterVolumeInfo.h"
#include "unitysdk/UnityEngine/MeshClusterInfo.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_8595EBB95116F4B2;
namespace EnviromentSystem { class EnviromentProfile; }
namespace IRIClusterBuilder { class IRI2VolumeTemplate; }
namespace IRIClusterBuilder { class IRIClusterBuildConfig; }
namespace IRIClusterBuilder::Test { class IRICarTestManager_PlatformInfoMessage; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Net::Sockets { class TcpClient; }
namespace System::Net::Sockets { class TcpListener; }
namespace System::Threading { class Thread; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RPGInstancedItemClusterVolumeManager; }

#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_CLEAR_OFFSET UNITYSDK_OFFSET(0x111D8170)
#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_ENABLEIRISHADOW_OFFSET UNITYSDK_OFFSET(0x111D68B0)
#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_FLASHLIGHT_OFFSET UNITYSDK_OFFSET(0x111D9AB0)
#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x111D60D0)
#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_ISENABLEIRISHADOW_OFFSET UNITYSDK_OFFSET(0x111D68E0)
#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_LOADENVPROFILE_OFFSET UNITYSDK_OFFSET(0x111D6520)
#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_METHOD_5_102A1038C38883F3_OFFSET UNITYSDK_OFFSET(0x111D5650)
#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_METHOD_5_1B9BAFE25893B138_OFFSET UNITYSDK_OFFSET(0x111D7D50)
#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_METHOD_5_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0x111D5070)
#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_METHOD_5_5AFFA079DA8B20AA_OFFSET UNITYSDK_OFFSET(0x111D9B70)
#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_METHOD_5_6DDC67928C034C6F_OFFSET UNITYSDK_OFFSET(0x111D4F90)
#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_METHOD_5_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x111D9870)
#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_METHOD_5_7BF32EC41F6B4DD6_OFFSET UNITYSDK_OFFSET(0x111D5B60)
#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_METHOD_5_813C8FDB3E66B6BF_OFFSET UNITYSDK_OFFSET(0x111D5D80)
#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_METHOD_5_E16066A129C758CD_OFFSET UNITYSDK_OFFSET(0x111D5F70)
#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_METHOD_5_E402C04CEC1622AF_OFFSET UNITYSDK_OFFSET(0x111D6910)
#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_METHOD_5_E67B8EE7D04609D0_OFFSET UNITYSDK_OFFSET(0x111D4EA0)
#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_METHOD_5_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x111D6790)
#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_METHOD_5_EC90259991730611_OFFSET UNITYSDK_OFFSET(0x111D5810)
#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x111D8000)
#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_STARTHOTRELOADSERVER_OFFSET UNITYSDK_OFFSET(0x111D5220)
#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_START_OFFSET UNITYSDK_OFFSET(0x111D6010)
#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_STOPHOTRELOADSERVER_OFFSET UNITYSDK_OFFSET(0x111D5530)
#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_TURNLIGHT_OFFSET UNITYSDK_OFFSET(0x111D9970)
#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x111D6590)
#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x111D9BD0)

namespace IRIClusterBuilder::Test
{
	inline static constexpr unsigned int IRICarTestManager_TypeDefinitionIndex = 38636;

	class IRICarTestManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::IRIClusterBuilder::Test::IRICarTestManager** StaticGet_Instance()
		{
			return (::IRIClusterBuilder::Test::IRICarTestManager**)Il2CppClass::FromTypeDefinitionIndex(IRICarTestManager_TypeDefinitionIndex)->GetStaticField(0x47A50);
		}
		::System::Int32 HotReloadPort; // 0x18
		::System::Net::Sockets::TcpListener* Field_5_1; // 0x20
		::System::Threading::Thread* Field_5_2; // 0x28
		::System::Boolean Field_5_3; // 0x30
		::System::Collections::Generic::Queue_1<::System::Action*>* Field_5_4; // 0x38
		::IRIClusterBuilder::Test::IRICarTestManager_PlatformInfoMessage* Field_5_5; // 0x40
		::EnviromentSystem::EnviromentProfile* EnvProfile; // 0x48
		::System::Int32 CarCount; // 0x50
		::System::Boolean CarMove; // 0x54
		::UnityEngine::Rect SpawnArea; // 0x58
		::IRIClusterBuilder::Test::IRICarTestManager_ECarType CarType; // 0x68
		::IRIClusterBuilder::Test::IRICarTestManager_EPositionMode PositionMode; // 0x6C
		::UnityEngine::Vector3 FixedPosition; // 0x70
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* CarNPRResource; // 0x80
		::UnityEngine::RPGInstancedItemClusterVolumeManager* Field_5_14; // 0x88
		::IRIClusterBuilder::IRIClusterBuildConfig* IRIClusterBuildConfig; // 0x90
		::UnityEngine::Material* IRI2CarClusterMaterial; // 0x98
		::System::Collections::Generic::List_1<::IRIClusterBuilder::IRI2VolumeTemplate*>* IRI2VolumeTemplate; // 0xA0
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::IRIClusterBuilder::IRI2VolumeTemplate*, ::UnityEngine::IRIClusterVolumeInfo>>* Field_5_18; // 0xA8
		::System::Collections::Generic::Dictionary_2<::IRIClusterBuilder::IRI2VolumeTemplate*, ::Unity::Collections::NativeArray_1<::UnityEngine::ClusterIRIType>>* Field_5_19; // 0xB0
		::System::Collections::Generic::Dictionary_2<::IRIClusterBuilder::IRI2VolumeTemplate*, ::System::Collections::Generic::List_1<::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>>*>* Field_5_20; // 0xB8
		::System::Collections::Generic::Dictionary_2<::IRIClusterBuilder::IRI2VolumeTemplate*, ::System::Collections::Generic::List_1<::Unity::Collections::NativeArray_1<::UnityEngine::ClusterMeshLodInfo>>*>* Field_5_21; // 0xC0
		::System::Collections::Generic::Dictionary_2<::IRIClusterBuilder::IRI2VolumeTemplate*, ::System::Collections::Generic::List_1<::Unity::Collections::NativeArray_1<::UnityEngine::MeshClusterInfo>>*>* Field_5_22; // 0xC8
		::System::Collections::Generic::Dictionary_2<::IRIClusterBuilder::IRI2VolumeTemplate*, ::System::Collections::Generic::List_1<::Unity::Collections::NativeArray_1<::System::UInt32>>*>* Field_5_23; // 0xD0
		::System::Collections::Generic::Dictionary_2<::IRIClusterBuilder::IRI2VolumeTemplate*, ::System::Collections::Generic::List_1<::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>>*>* Field_5_24; // 0xD8
		::System::Collections::Generic::List_1<::Class_1_8595EBB95116F4B2*>* Field_5_25; // 0xE0
		::UnityEngine::Coroutine* Field_5_26; // 0xE8
		::UnityEngine::Color EmissionColor; // 0xF0
		::System::Single LightStrength; // 0x100
		::System::Int32 ID; // 0x104
		::System::Single FlashFrequency; // 0x108
		::System::Int32 HeadLightID; // 0x10C
		::System::Int32 RearLightID; // 0x110
		::System::Int32 TailLightID; // 0x114
		::System::Int32 TurnLightRightID; // 0x118
		::System::Int32 TurnLightLeftID; // 0x11C
		::System::Collections::Generic::List_1<::System::Int32>* Field_5_37; // 0x120

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_E67B8EE7D04609D0(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_METHOD_5_E67B8EE7D04609D0_OFFSET))(this, a1);
		}

		::System::Void Method_5_6DDC67928C034C6F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_METHOD_5_6DDC67928C034C6F_OFFSET))(this);
		}

		::System::Void Method_5_2B9D478141E0F891()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_METHOD_5_2B9D478141E0F891_OFFSET))(this);
		}

		::System::Void StartHotReloadServer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_STARTHOTRELOADSERVER_OFFSET))(this);
		}

		::System::Void StopHotReloadServer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_STOPHOTRELOADSERVER_OFFSET))(this);
		}

		::System::Void Method_5_102A1038C38883F3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_METHOD_5_102A1038C38883F3_OFFSET))(this);
		}

		::System::Void Method_5_EC90259991730611(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_METHOD_5_EC90259991730611_OFFSET))(this, a1);
		}

		::System::Void Method_5_813C8FDB3E66B6BF(::IRIClusterBuilder::Test::IRICarTestManager_HotReloadCommand a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IRIClusterBuilder::Test::IRICarTestManager_HotReloadCommand, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_METHOD_5_813C8FDB3E66B6BF_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_E16066A129C758CD(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_METHOD_5_E16066A129C758CD_OFFSET))(this, a1);
		}

		::System::Void Method_5_7BF32EC41F6B4DD6(::System::Net::Sockets::TcpClient* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::TcpClient*))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_METHOD_5_7BF32EC41F6B4DD6_OFFSET))(this, a1);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_UPDATE_OFFSET))(this);
		}

		::System::Void Method_5_E7EF6BC52B28648C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_METHOD_5_E7EF6BC52B28648C_OFFSET))(this);
		}

		::System::Void LoadEnvProfile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_LOADENVPROFILE_OFFSET))(this);
		}

		::System::Void EnableIRIShadow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_ENABLEIRISHADOW_OFFSET))(this, a1);
		}

		::System::Boolean IsEnableIRIShadow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_ISENABLEIRISHADOW_OFFSET))(this);
		}

		::UnityEngine::IRIClusterVolumeInfo Method_5_E402C04CEC1622AF(::IRIClusterBuilder::IRI2VolumeTemplate* a1)
		{
			return ((::UnityEngine::IRIClusterVolumeInfo(*)(::PVOID, ::IRIClusterBuilder::IRI2VolumeTemplate*))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_METHOD_5_E402C04CEC1622AF_OFFSET))(this, a1);
		}

		::System::Void Method_5_1B9BAFE25893B138()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_METHOD_5_1B9BAFE25893B138_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_CLEAR_OFFSET))(this);
		}

		::System::Void Method_5_737220D2233A9067()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_METHOD_5_737220D2233A9067_OFFSET))(this);
		}

		::System::Void TurnLight(::IRIClusterBuilder::Test::IRICarTestManager_LightType a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::IRIClusterBuilder::Test::IRICarTestManager_LightType, ::System::Boolean))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_TURNLIGHT_OFFSET))(this, a1, a2);
		}

		::System::Void FlashLight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_FLASHLIGHT_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* Method_5_5AFFA079DA8B20AA()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_METHOD_5_5AFFA079DA8B20AA_OFFSET))(this);
		}
	};
}
