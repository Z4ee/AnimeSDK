#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/JSONDeserialization_TaskField.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace BehaviorDesigner::Runtime { class BehaviorSource; }
namespace BehaviorDesigner::Runtime { class GlobalVariables; }
namespace BehaviorDesigner::Runtime { class IVariableSource; }
namespace BehaviorDesigner::Runtime { class SharedVariable; }
namespace BehaviorDesigner::Runtime { class TaskSerializationData; }
namespace BehaviorDesigner::Runtime::Tasks { class Task; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_DESERIALIZEOBJECT_OFFSET UNITYSDK_OFFSET(0x1BA73E40)
#define BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_DESERIALIZESHAREDVARIABLE_OFFSET UNITYSDK_OFFSET(0x1BA730D0)
#define BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_DESERIALIZETASK_OFFSET UNITYSDK_OFFSET(0x1BA72180)
#define BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_DESERIALIZEVARIABLES_OFFSET UNITYSDK_OFFSET(0x1BA71D80)
#define BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_GET_TASKIDS_OFFSET UNITYSDK_OFFSET(0x1BA704D0)
#define BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_INDEXTOUNITYOBJECT_OFFSET UNITYSDK_OFFSET(0x1BA76330)
#define BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_LOAD_1_OFFSET UNITYSDK_OFFSET(0x1BA72C80)
#define BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_LOAD_OFFSET UNITYSDK_OFFSET(0x1BA70590)
#define BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_SET_TASKIDS_OFFSET UNITYSDK_OFFSET(0x1BA70530)
#define BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_STRINGTOCOLOR_OFFSET UNITYSDK_OFFSET(0x1BA781E0)
#define BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_STRINGTOMATRIX4X4_OFFSET UNITYSDK_OFFSET(0x1BA77B70)
#define BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_STRINGTOQUATERNION_OFFSET UNITYSDK_OFFSET(0x1BA77910)
#define BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_STRINGTORECT_OFFSET UNITYSDK_OFFSET(0x1BA78450)
#define BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_STRINGTOVECTOR2INT_OFFSET UNITYSDK_OFFSET(0x1BA770E0)
#define BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_STRINGTOVECTOR2_OFFSET UNITYSDK_OFFSET(0x1BA76F30)
#define BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_STRINGTOVECTOR3INT_OFFSET UNITYSDK_OFFSET(0x1BA774A0)
#define BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_STRINGTOVECTOR3_OFFSET UNITYSDK_OFFSET(0x1BA77280)
#define BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_STRINGTOVECTOR4_OFFSET UNITYSDK_OFFSET(0x1BA776A0)
#define BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_VALUETOANIMATIONCURVE_OFFSET UNITYSDK_OFFSET(0x1BA78790)
#define BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_VALUETOLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1BA78750)
#define BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_VALUETOOBJECT_OFFSET UNITYSDK_OFFSET(0x1BA764C0)
#define BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA78FA0)
#define BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA78F50)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int JSONDeserialization_TypeDefinitionIndex = 31694;

	class JSONDeserialization : public ::UnityEngine::Object
	{
	public:
		static ::BehaviorDesigner::Runtime::GlobalVariables** StaticGet_globalVariables()
		{
			return (::BehaviorDesigner::Runtime::GlobalVariables**)Il2CppClass::FromTypeDefinitionIndex(JSONDeserialization_TypeDefinitionIndex)->GetStaticField(0x259D0);
		}
		static ::System::Collections::Generic::Dictionary_2<::BehaviorDesigner::Runtime::JSONDeserialization_TaskField, ::System::Collections::Generic::List_1<::System::Int32>*>** StaticGet_taskIDs()
		{
			return (::System::Collections::Generic::Dictionary_2<::BehaviorDesigner::Runtime::JSONDeserialization_TaskField, ::System::Collections::Generic::List_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(JSONDeserialization_TypeDefinitionIndex)->GetStaticField(0x259D8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*>** StaticGet_serializationCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(JSONDeserialization_TypeDefinitionIndex)->GetStaticField(0x259E0);
		}
		static ::System::Boolean* StaticGet_updatedSerialization()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(JSONDeserialization_TypeDefinitionIndex)->GetStaticField(0x7CC0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::BehaviorDesigner::Runtime::JSONDeserialization_TaskField, ::System::Collections::Generic::List_1<::System::Int32>*>* get_TaskIDs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::BehaviorDesigner::Runtime::JSONDeserialization_TaskField, ::System::Collections::Generic::List_1<::System::Int32>*>*(*)())((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_GET_TASKIDS_OFFSET))();
		}

		static ::System::Void set_TaskIDs(::System::Collections::Generic::Dictionary_2<::BehaviorDesigner::Runtime::JSONDeserialization_TaskField, ::System::Collections::Generic::List_1<::System::Int32>*>* value)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::BehaviorDesigner::Runtime::JSONDeserialization_TaskField, ::System::Collections::Generic::List_1<::System::Int32>*>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_SET_TASKIDS_OFFSET))(value);
		}

		static ::System::Void Load(::BehaviorDesigner::Runtime::TaskSerializationData* taskData, ::BehaviorDesigner::Runtime::BehaviorSource* behaviorSource, ::System::Boolean loadTasks)
		{
			return ((::System::Void(*)(::BehaviorDesigner::Runtime::TaskSerializationData*, ::BehaviorDesigner::Runtime::BehaviorSource*, ::System::Boolean))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_LOAD_OFFSET))(taskData, behaviorSource, loadTasks);
		}

		static ::System::Void Load_1(::System::String* serialization, ::BehaviorDesigner::Runtime::GlobalVariables* globalVariables, ::System::String* version)
		{
			return ((::System::Void(*)(::System::String*, ::BehaviorDesigner::Runtime::GlobalVariables*, ::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_LOAD_1_OFFSET))(serialization, globalVariables, version);
		}

		static ::System::Void DeserializeVariables(::BehaviorDesigner::Runtime::IVariableSource* variableSource, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* dict, ::System::Collections::Generic::List_1<::UnityEngine::Object*>* unityObjects)
		{
			return ((::System::Void(*)(::BehaviorDesigner::Runtime::IVariableSource*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_DESERIALIZEVARIABLES_OFFSET))(variableSource, dict, unityObjects);
		}

		static ::BehaviorDesigner::Runtime::Tasks::Task* DeserializeTask(::BehaviorDesigner::Runtime::BehaviorSource* behaviorSource, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* dict, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::BehaviorDesigner::Runtime::Tasks::Task*>*& IDtoTask, ::System::Collections::Generic::List_1<::UnityEngine::Object*>* unityObjects)
		{
			return ((::BehaviorDesigner::Runtime::Tasks::Task*(*)(::BehaviorDesigner::Runtime::BehaviorSource*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::BehaviorDesigner::Runtime::Tasks::Task*>*&, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_DESERIALIZETASK_OFFSET))(behaviorSource, dict, IDtoTask, unityObjects);
		}

		static ::BehaviorDesigner::Runtime::SharedVariable* DeserializeSharedVariable(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* dict, ::BehaviorDesigner::Runtime::IVariableSource* variableSource, ::System::Boolean fromSource, ::System::Collections::Generic::List_1<::UnityEngine::Object*>* unityObjects)
		{
			return ((::BehaviorDesigner::Runtime::SharedVariable*(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::BehaviorDesigner::Runtime::IVariableSource*, ::System::Boolean, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_DESERIALIZESHAREDVARIABLE_OFFSET))(dict, variableSource, fromSource, unityObjects);
		}

		static ::System::Void DeserializeObject(::BehaviorDesigner::Runtime::Tasks::Task* task, ::System::Object* obj, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* dict, ::BehaviorDesigner::Runtime::IVariableSource* variableSource, ::System::Collections::Generic::List_1<::UnityEngine::Object*>* unityObjects)
		{
			return ((::System::Void(*)(::BehaviorDesigner::Runtime::Tasks::Task*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::BehaviorDesigner::Runtime::IVariableSource*, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_DESERIALIZEOBJECT_OFFSET))(task, obj, dict, variableSource, unityObjects);
		}

		static ::System::Object* ValueToObject(::BehaviorDesigner::Runtime::Tasks::Task* task, ::System::Type* type, ::System::Object* obj, ::BehaviorDesigner::Runtime::IVariableSource* variableSource, ::System::Collections::Generic::List_1<::UnityEngine::Object*>* unityObjects)
		{
			return ((::System::Object*(*)(::BehaviorDesigner::Runtime::Tasks::Task*, ::System::Type*, ::System::Object*, ::BehaviorDesigner::Runtime::IVariableSource*, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_VALUETOOBJECT_OFFSET))(task, type, obj, variableSource, unityObjects);
		}

		static ::UnityEngine::Vector2 StringToVector2(::System::String* vector2String)
		{
			return ((::UnityEngine::Vector2(*)(::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_STRINGTOVECTOR2_OFFSET))(vector2String);
		}

		static ::UnityEngine::Vector2Int StringToVector2Int(::System::String* vector2String)
		{
			return ((::UnityEngine::Vector2Int(*)(::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_STRINGTOVECTOR2INT_OFFSET))(vector2String);
		}

		static ::UnityEngine::Vector3 StringToVector3(::System::String* vector3String)
		{
			return ((::UnityEngine::Vector3(*)(::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_STRINGTOVECTOR3_OFFSET))(vector3String);
		}

		static ::UnityEngine::Vector3Int StringToVector3Int(::System::String* vector3String)
		{
			return ((::UnityEngine::Vector3Int(*)(::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_STRINGTOVECTOR3INT_OFFSET))(vector3String);
		}

		static ::UnityEngine::Vector4 StringToVector4(::System::String* vector4String)
		{
			return ((::UnityEngine::Vector4(*)(::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_STRINGTOVECTOR4_OFFSET))(vector4String);
		}

		static ::UnityEngine::Quaternion StringToQuaternion(::System::String* quaternionString)
		{
			return ((::UnityEngine::Quaternion(*)(::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_STRINGTOQUATERNION_OFFSET))(quaternionString);
		}

		static ::UnityEngine::Matrix4x4 StringToMatrix4x4(::System::String* matrixString)
		{
			return ((::UnityEngine::Matrix4x4(*)(::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_STRINGTOMATRIX4X4_OFFSET))(matrixString);
		}

		static ::UnityEngine::Color StringToColor(::System::String* colorString)
		{
			return ((::UnityEngine::Color(*)(::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_STRINGTOCOLOR_OFFSET))(colorString);
		}

		static ::UnityEngine::Rect StringToRect(::System::String* rectString)
		{
			return ((::UnityEngine::Rect(*)(::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_STRINGTORECT_OFFSET))(rectString);
		}

		static ::UnityEngine::LayerMask ValueToLayerMask(::System::Int32 value)
		{
			return ((::UnityEngine::LayerMask(*)(::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_VALUETOLAYERMASK_OFFSET))(value);
		}

		static ::UnityEngine::AnimationCurve* ValueToAnimationCurve(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* value)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_VALUETOANIMATIONCURVE_OFFSET))(value);
		}

		static ::UnityEngine::Object* IndexToUnityObject(::System::Int32 index, ::System::Collections::Generic::List_1<::UnityEngine::Object*>* unityObjects)
		{
			return ((::UnityEngine::Object*(*)(::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_INDEXTOUNITYOBJECT_OFFSET))(index, unityObjects);
		}
	};
}
