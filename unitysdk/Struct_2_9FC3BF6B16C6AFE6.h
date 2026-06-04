#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_34510A46798C627E.h"
#include "unitysdk/Struct_2_395B739A1AC58399.h"
#include "unitysdk/Struct_2_52A902145F5BE513_2.h"
#include "unitysdk/Struct_2_E223907A17AC5B62.h"
#include "unitysdk/Struct_2_FBA4730A60751401_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityChan/SpringManager_BoneTag.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityChan { class SpringCollider; }
namespace UnityChan { class SpringManager; }
namespace UnityChan { class SpringManager_Class_1_44494F1EF855DA72; }
namespace UnityEngine { class Transform; }

#define STRUCT_2_9FC3BF6B16C6AFE6_EXECUTE_OFFSET UNITYSDK_OFFSET(0x132490)
#define STRUCT_2_9FC3BF6B16C6AFE6_METHOD_2_4855D279E0E27DA8_OFFSET UNITYSDK_OFFSET(0x132430)
#define STRUCT_2_9FC3BF6B16C6AFE6_METHOD_2_61909647484BF836_OFFSET UNITYSDK_OFFSET(0x132470)
#define STRUCT_2_9FC3BF6B16C6AFE6_METHOD_2_86214CC42818EBDF_OFFSET UNITYSDK_OFFSET(0x132460)
#define STRUCT_2_9FC3BF6B16C6AFE6_METHOD_2_962DD24A11E58471_OFFSET UNITYSDK_OFFSET(0x132440)
#define STRUCT_2_9FC3BF6B16C6AFE6_METHOD_2_9BC4F885A8B30EA4_OFFSET UNITYSDK_OFFSET(0x1324A0)
#define STRUCT_2_9FC3BF6B16C6AFE6_METHOD_2_D1F7091E98F361B5_OFFSET UNITYSDK_OFFSET(0x132480)
#define STRUCT_2_9FC3BF6B16C6AFE6_METHOD_2_FBF2CB29FD3B55E6_OFFSET UNITYSDK_OFFSET(0x132450)

inline static constexpr unsigned int Struct_2_9FC3BF6B16C6AFE6_TypeDefinitionIndex = 44978;

struct alignas(8) Struct_2_9FC3BF6B16C6AFE6
{
	::Unity::Collections::NativeArray_1<::Struct_2_E223907A17AC5B62> Field_2_0; // 0x10
	::Unity::Collections::NativeArray_1<::Struct_2_52A902145F5BE513_2> Field_2_1; // 0x20
	::Unity::Collections::NativeArray_1<::Struct_2_34510A46798C627E> Field_2_2; // 0x30
	::Unity::Collections::NativeArray_1<::Struct_2_FBA4730A60751401_2> Field_2_3; // 0x40
	::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion> Field_2_4; // 0x50
	::Unity::Collections::NativeArray_1<::Struct_2_395B739A1AC58399> Field_2_5; // 0x60
	::UnityEngine::Vector3 Field_2_6; // 0x70
	::UnityEngine::Vector3 Field_2_7; // 0x7C
	::UnityEngine::Vector3 Field_2_8; // 0x88
	::UnityEngine::Vector3 Field_2_9; // 0x94
	::System::Single Field_2_10; // 0xA0
	::System::Single Field_2_11; // 0xA4
	::System::Boolean Field_2_12; // 0xA8
	::System::Boolean Field_2_13; // 0xA9
	::System::Collections::Generic::Dictionary_2<::UnityChan::SpringManager_BoneTag, ::UnityChan::SpringManager_Class_1_44494F1EF855DA72*>* Field_2_14; // 0xB0
	::System::Boolean Field_2_15; // 0xB8

	::System::Void Method_2_4855D279E0E27DA8(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + STRUCT_2_9FC3BF6B16C6AFE6_METHOD_2_4855D279E0E27DA8_OFFSET))(this, a1);
	}

	::System::Void Method_2_962DD24A11E58471(::System::Collections::Generic::List_1<::UnityChan::SpringCollider*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityChan::SpringCollider*>*))((::PBYTE)hIl2Cpp + STRUCT_2_9FC3BF6B16C6AFE6_METHOD_2_962DD24A11E58471_OFFSET))(this, a1);
	}

	::System::Void Method_2_FBF2CB29FD3B55E6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9FC3BF6B16C6AFE6_METHOD_2_FBF2CB29FD3B55E6_OFFSET))(this);
	}

	::System::Void Method_2_86214CC42818EBDF(::UnityChan::SpringManager* a1, ::System::Collections::Generic::List_1<::UnityChan::SpringCollider*>* a2, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a3, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityChan::SpringManager*, ::System::Collections::Generic::List_1<::UnityChan::SpringCollider*>*, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + STRUCT_2_9FC3BF6B16C6AFE6_METHOD_2_86214CC42818EBDF_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_61909647484BF836(::UnityChan::SpringManager* a1, ::System::Collections::Generic::List_1<::UnityChan::SpringCollider*>* a2, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityChan::SpringManager*, ::System::Collections::Generic::List_1<::UnityChan::SpringCollider*>*, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + STRUCT_2_9FC3BF6B16C6AFE6_METHOD_2_61909647484BF836_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_D1F7091E98F361B5(::UnityChan::SpringManager* a1, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityChan::SpringManager*, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + STRUCT_2_9FC3BF6B16C6AFE6_METHOD_2_D1F7091E98F361B5_OFFSET))(this, a1, a2);
	}

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_9FC3BF6B16C6AFE6_EXECUTE_OFFSET))(this, a1);
	}

	::System::Void Method_2_9BC4F885A8B30EA4(::System::Int32 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_9FC3BF6B16C6AFE6_METHOD_2_9BC4F885A8B30EA4_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
