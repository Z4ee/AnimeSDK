#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoLevelDoorWidthSync_Enum_3_7463D7B85D1A6308.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class MonoLevelDoorWidthSync_Class_1_991BEB3714D9D0F5; }
namespace MoleMole { class MonoOneWayDoorSensor; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::AI { class NavMeshObstacle; }

#define MOLEMOLE_MONOLEVELDOORWIDTHSYNC_APPLYPROJECTIONTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1807D410)
#define MOLEMOLE_MONOLEVELDOORWIDTHSYNC_AWAKE_OFFSET UNITYSDK_OFFSET(0x1807C580)
#define MOLEMOLE_MONOLEVELDOORWIDTHSYNC_METHOD_5_218124418542E081_OFFSET UNITYSDK_OFFSET(0x1807F9C0)
#define MOLEMOLE_MONOLEVELDOORWIDTHSYNC_METHOD_5_332E8DA02BCCBD12_OFFSET UNITYSDK_OFFSET(0x1807DCE0)
#define MOLEMOLE_MONOLEVELDOORWIDTHSYNC_METHOD_5_4200CD8D3A56BF83_OFFSET UNITYSDK_OFFSET(0x1807EE20)
#define MOLEMOLE_MONOLEVELDOORWIDTHSYNC_METHOD_5_6BA7BB45F0BA72F4_OFFSET UNITYSDK_OFFSET(0x1807E500)
#define MOLEMOLE_MONOLEVELDOORWIDTHSYNC_METHOD_5_7B0A407379BA27E7_OFFSET UNITYSDK_OFFSET(0x1807FE90)
#define MOLEMOLE_MONOLEVELDOORWIDTHSYNC_METHOD_5_AE80CBC984AADFD5_OFFSET UNITYSDK_OFFSET(0x1807C840)
#define MOLEMOLE_MONOLEVELDOORWIDTHSYNC_METHOD_5_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1807FD40)
#define MOLEMOLE_MONOLEVELDOORWIDTHSYNC_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1807FE50)
#define MOLEMOLE_MONOLEVELDOORWIDTHSYNC_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1807ECF0)
#define MOLEMOLE_MONOLEVELDOORWIDTHSYNC_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1807D100)
#define MOLEMOLE_MONOLEVELDOORWIDTHSYNC_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1807D0B0)
#define MOLEMOLE_MONOLEVELDOORWIDTHSYNC_RUNTIMESYNCSIZE_1_OFFSET UNITYSDK_OFFSET(0x1807EA70)
#define MOLEMOLE_MONOLEVELDOORWIDTHSYNC_RUNTIMESYNCSIZE_OFFSET UNITYSDK_OFFSET(0x1807E840)
#define MOLEMOLE_MONOLEVELDOORWIDTHSYNC_RUNTIMESYNCWIDTH_OFFSET UNITYSDK_OFFSET(0x1807D1D0)
#define MOLEMOLE_MONOLEVELDOORWIDTHSYNC_SETONEWAYDOORSENSORACTIVE_OFFSET UNITYSDK_OFFSET(0x1807D150)
#define MOLEMOLE_MONOLEVELDOORWIDTHSYNC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1807F4E0)
#define MOLEMOLE_MONOLEVELDOORWIDTHSYNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1807F1B0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoLevelDoorWidthSync_TypeDefinitionIndex = 84231;

	class MonoLevelDoorWidthSync : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::String** StaticGet_Field_5_22()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonoLevelDoorWidthSync_TypeDefinitionIndex)->GetStaticField(0x4C3F0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::MonoLevelDoorWidthSync_Class_1_991BEB3714D9D0F5*>** StaticGet_Field_5_3()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::MonoLevelDoorWidthSync_Class_1_991BEB3714D9D0F5*>**)Il2CppClass::FromTypeDefinitionIndex(MonoLevelDoorWidthSync_TypeDefinitionIndex)->GetStaticField(0x4C3F8);
		}
		::System::Boolean autoSync; // 0x18
		::System::Single offsetLeftRight; // 0x1C
		::MoleMole::MonoOneWayDoorSensor* OneWayDoorSensor; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* Field_5_7; // 0x28
		::System::Boolean Field_5_6; // 0x30
		::System::Collections::Generic::List_1<::MoleMole::MonoLevelDoorWidthSync_Class_1_991BEB3714D9D0F5*>* Field_5_5; // 0x38
		::System::Collections::Generic::List_1<::System::String*>* Field_5_4; // 0x40
		::System::Single Field_5_11; // 0x48
		::System::Single Field_5_10; // 0x4C
		::System::Single Field_5_9; // 0x50
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_5_8; // 0x58
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_5_15; // 0x60
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_5_14; // 0x68
		::UnityEngine::Vector3 Field_5_13; // 0x70
		::System::Single Field_5_12; // 0x7C
		::UnityEngine::AI::NavMeshObstacle* Field_5_19; // 0x80
		::UnityEngine::BoxCollider* Field_5_18; // 0x88
		::System::Boolean Field_5_17; // 0x90
		::System::Boolean Field_5_16; // 0x91
		::UnityEngine::Vector3 Field_5_23; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORWIDTHSYNC__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORWIDTHSYNC__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORWIDTHSYNC_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORWIDTHSYNC_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORWIDTHSYNC_ONDISABLE_OFFSET))(this);
		}

		::System::Void SetOneWayDoorSensorActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORWIDTHSYNC_SETONEWAYDOORSENSORACTIVE_OFFSET))(this, a1);
		}

		::System::Void RuntimeSyncWidth(::System::Single a1, ::System::Nullable_1<::System::Single> a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORWIDTHSYNC_RUNTIMESYNCWIDTH_OFFSET))(this, a1, a2);
		}

		::System::Void RuntimeSyncSize(::UnityEngine::Vector3 a1, ::System::Nullable_1<::System::Single> a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORWIDTHSYNC_RUNTIMESYNCSIZE_OFFSET))(this, a1, a2);
		}

		::System::Void RuntimeSyncSize_1(::System::Nullable_1<::System::Single> a1, ::System::Nullable_1<::System::Single> a2, ::System::Nullable_1<::System::Single> a3, ::System::Nullable_1<::System::Single> a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Single>, ::System::Nullable_1<::System::Single>, ::System::Nullable_1<::System::Single>, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORWIDTHSYNC_RUNTIMESYNCSIZE_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORWIDTHSYNC_ONDESTROY_OFFSET))(this);
		}

		::System::Void ApplyProjectionTransform(::UnityEngine::BoxCollider* a1, ::MoleMole::MonoLevelDoorWidthSync_Enum_3_7463D7B85D1A6308 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::BoxCollider*, ::MoleMole::MonoLevelDoorWidthSync_Enum_3_7463D7B85D1A6308))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORWIDTHSYNC_APPLYPROJECTIONTRANSFORM_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_5_4200CD8D3A56BF83(::Il2CppArray<::UnityEngine::Material*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORWIDTHSYNC_METHOD_5_4200CD8D3A56BF83_OFFSET))(this, a1);
		}

		::System::Void Method_5_AE80CBC984AADFD5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORWIDTHSYNC_METHOD_5_AE80CBC984AADFD5_OFFSET))(this);
		}

		::System::Void Method_5_218124418542E081()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORWIDTHSYNC_METHOD_5_218124418542E081_OFFSET))(this);
		}

		::System::Void Method_5_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORWIDTHSYNC_METHOD_5_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Void Method_5_332E8DA02BCCBD12(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORWIDTHSYNC_METHOD_5_332E8DA02BCCBD12_OFFSET))(this, a1);
		}

		::System::Void Method_5_6BA7BB45F0BA72F4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORWIDTHSYNC_METHOD_5_6BA7BB45F0BA72F4_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORWIDTHSYNC_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_7B0A407379BA27E7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORWIDTHSYNC_METHOD_5_7B0A407379BA27E7_OFFSET))(this);
		}
	};
}
