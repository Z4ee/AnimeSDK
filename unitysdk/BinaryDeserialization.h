#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
#include "unitysdk/UnityEngine/Vector4.h"

class BinaryDeserialization_ObjectFieldMap;
namespace BehaviorDesigner::Runtime { class BehaviorSource; }
namespace BehaviorDesigner::Runtime { class FieldSerializationData; }
namespace BehaviorDesigner::Runtime { class GlobalVariables; }
namespace BehaviorDesigner::Runtime { class IVariableSource; }
namespace BehaviorDesigner::Runtime { class SharedVariable; }
namespace BehaviorDesigner::Runtime { class TaskSerializationData; }
namespace BehaviorDesigner::Runtime::Tasks { class Task; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class FieldInfo; }
namespace System::Security::Cryptography { class SHA1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Object; }

#define BINARYDESERIALIZATION_BYTESTOANIMATIONCURVE_OFFSET UNITYSDK_OFFSET(0x1B05E020)
#define BINARYDESERIALIZATION_BYTESTOBOOL_OFFSET UNITYSDK_OFFSET(0x1B05D510)
#define BINARYDESERIALIZATION_BYTESTOBYTE_OFFSET UNITYSDK_OFFSET(0x1B05D560)
#define BINARYDESERIALIZATION_BYTESTOCOLOR_OFFSET UNITYSDK_OFFSET(0x1B05DB30)
#define BINARYDESERIALIZATION_BYTESTODOUBLE_OFFSET UNITYSDK_OFFSET(0x1B05D300)
#define BINARYDESERIALIZATION_BYTESTOFLOAT_OFFSET UNITYSDK_OFFSET(0x1B05D1C0)
#define BINARYDESERIALIZATION_BYTESTOINT_OFFSET UNITYSDK_OFFSET(0x1B05C7C0)
#define BINARYDESERIALIZATION_BYTESTOLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1B05E2B0)
#define BINARYDESERIALIZATION_BYTESTOLONG_OFFSET UNITYSDK_OFFSET(0x1B05D440)
#define BINARYDESERIALIZATION_BYTESTOMATRIX4X4_OFFSET UNITYSDK_OFFSET(0x1B05DD30)
#define BINARYDESERIALIZATION_BYTESTOQUATERNION_OFFSET UNITYSDK_OFFSET(0x1B05DA20)
#define BINARYDESERIALIZATION_BYTESTORECT_OFFSET UNITYSDK_OFFSET(0x1B05DC40)
#define BINARYDESERIALIZATION_BYTESTOSHAREDVARIABLE_OFFSET UNITYSDK_OFFSET(0x1B057990)
#define BINARYDESERIALIZATION_BYTESTOSTRING_OFFSET UNITYSDK_OFFSET(0x1B05C970)
#define BINARYDESERIALIZATION_BYTESTOUINT_OFFSET UNITYSDK_OFFSET(0x1B05CE20)
#define BINARYDESERIALIZATION_BYTESTOULONG_OFFSET UNITYSDK_OFFSET(0x1B05CF60)
#define BINARYDESERIALIZATION_BYTESTOUSHORT_OFFSET UNITYSDK_OFFSET(0x1B05D0A0)
#define BINARYDESERIALIZATION_BYTESTOVECTOR2INT_OFFSET UNITYSDK_OFFSET(0x1B05D690)
#define BINARYDESERIALIZATION_BYTESTOVECTOR2_OFFSET UNITYSDK_OFFSET(0x1B05D5D0)
#define BINARYDESERIALIZATION_BYTESTOVECTOR3INT_OFFSET UNITYSDK_OFFSET(0x1B05D830)
#define BINARYDESERIALIZATION_BYTESTOVECTOR3_OFFSET UNITYSDK_OFFSET(0x1B05D740)
#define BINARYDESERIALIZATION_BYTESTOVECTOR4_OFFSET UNITYSDK_OFFSET(0x1B05D910)
#define BINARYDESERIALIZATION_CRC32_OFFSET UNITYSDK_OFFSET(0x1B05E340)
#define BINARYDESERIALIZATION_GETFIELDSIZE_OFFSET UNITYSDK_OFFSET(0x1B05C8D0)
#define BINARYDESERIALIZATION_GET_BIGENDIANEIGHTBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1B057780)
#define BINARYDESERIALIZATION_GET_BIGENDIANFOURBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1B057610)
#define BINARYDESERIALIZATION_INDEXTOUNITYOBJECT_OFFSET UNITYSDK_OFFSET(0x1B05CC50)
#define BINARYDESERIALIZATION_LOADFIELDS_OFFSET UNITYSDK_OFFSET(0x1B05BDD0)
#define BINARYDESERIALIZATION_LOADFIELD_OFFSET UNITYSDK_OFFSET(0x1B059A20)
#define BINARYDESERIALIZATION_LOADTASK_OFFSET UNITYSDK_OFFSET(0x1B0584B0)
#define BINARYDESERIALIZATION_LOAD_1_OFFSET UNITYSDK_OFFSET(0x1B0445E0)
#define BINARYDESERIALIZATION_LOAD_2_OFFSET UNITYSDK_OFFSET(0x1B058FF0)
#define BINARYDESERIALIZATION_LOAD_OFFSET UNITYSDK_OFFSET(0x1B0578F0)
#define BINARYDESERIALIZATION_SET_BIGENDIANEIGHTBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1B057890)
#define BINARYDESERIALIZATION_SET_BIGENDIANFOURBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1B057720)
#define BINARYDESERIALIZATION_STRINGHASH_OFFSET UNITYSDK_OFFSET(0x1B05C370)
#define BINARYDESERIALIZATION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B05E4F0)

inline static constexpr unsigned int BinaryDeserialization_TypeDefinitionIndex = 31656;

class BinaryDeserialization : public ::System::Object
{
public:
	static ::BehaviorDesigner::Runtime::GlobalVariables** StaticGet_globalVariables()
	{
		return (::BehaviorDesigner::Runtime::GlobalVariables**)Il2CppClass::FromTypeDefinitionIndex(BinaryDeserialization_TypeDefinitionIndex)->GetStaticField(0x25AC0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>** StaticGet_stringCache()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BinaryDeserialization_TypeDefinitionIndex)->GetStaticField(0x25AC8);
	}
	static ::Il2CppArray<::System::UInt32>** StaticGet_crcTable()
	{
		return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(BinaryDeserialization_TypeDefinitionIndex)->GetStaticField(0x25AD0);
	}
	static ::Il2CppArray<::System::Byte>** StaticGet_sBigEndianFourByteArray()
	{
		return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(BinaryDeserialization_TypeDefinitionIndex)->GetStaticField(0x25AD8);
	}
	static ::Il2CppArray<::System::Byte>** StaticGet_sBigEndianEightByteArray()
	{
		return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(BinaryDeserialization_TypeDefinitionIndex)->GetStaticField(0x25AE0);
	}
	static ::System::Security::Cryptography::SHA1** StaticGet_shaHash()
	{
		return (::System::Security::Cryptography::SHA1**)Il2CppClass::FromTypeDefinitionIndex(BinaryDeserialization_TypeDefinitionIndex)->GetStaticField(0x25AE8);
	}
	static ::System::Collections::Generic::Dictionary_2<::BinaryDeserialization_ObjectFieldMap*, ::System::Collections::Generic::List_1<::System::Int32>*>** StaticGet_taskIDs()
	{
		return (::System::Collections::Generic::Dictionary_2<::BinaryDeserialization_ObjectFieldMap*, ::System::Collections::Generic::List_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(BinaryDeserialization_TypeDefinitionIndex)->GetStaticField(0x25AF0);
	}
	static ::System::Int32* StaticGet_animationCurveAdvance()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BinaryDeserialization_TypeDefinitionIndex)->GetStaticField(0x7D40);
	}
	static ::System::Boolean* StaticGet_updatedSerialization()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BinaryDeserialization_TypeDefinitionIndex)->GetStaticField(0x7D44);
	}
	static ::System::Boolean* StaticGet_enumSerialization()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BinaryDeserialization_TypeDefinitionIndex)->GetStaticField(0x7D45);
	}
	static ::System::Boolean* StaticGet_strHashSerialization()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BinaryDeserialization_TypeDefinitionIndex)->GetStaticField(0x7D46);
	}
	static ::System::Boolean* StaticGet_shaHashSerialization()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BinaryDeserialization_TypeDefinitionIndex)->GetStaticField(0x7D47);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BINARYDESERIALIZATION__CCTOR_OFFSET))();
	}

	static ::Il2CppArray<::System::Byte>* get_BigEndianFourByteArray()
	{
		return ((::Il2CppArray<::System::Byte>*(*)())((::PBYTE)hIl2Cpp + BINARYDESERIALIZATION_GET_BIGENDIANFOURBYTEARRAY_OFFSET))();
	}

	static ::System::Void set_BigEndianFourByteArray(::Il2CppArray<::System::Byte>* value)
	{
		return ((::System::Void(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BINARYDESERIALIZATION_SET_BIGENDIANFOURBYTEARRAY_OFFSET))(value);
	}

	static ::Il2CppArray<::System::Byte>* get_BigEndianEightByteArray()
	{
		return ((::Il2CppArray<::System::Byte>*(*)())((::PBYTE)hIl2Cpp + BINARYDESERIALIZATION_GET_BIGENDIANEIGHTBYTEARRAY_OFFSET))();
	}

	static ::System::Void set_BigEndianEightByteArray(::Il2CppArray<::System::Byte>* value)
	{
		return ((::System::Void(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BINARYDESERIALIZATION_SET_BIGENDIANEIGHTBYTEARRAY_OFFSET))(value);
	}

	static ::System::Void Load(::BehaviorDesigner::Runtime::BehaviorSource* behaviorSource)
	{
		return ((::System::Void(*)(::BehaviorDesigner::Runtime::BehaviorSource*))((::PBYTE)hIl2Cpp + BINARYDESERIALIZATION_LOAD_OFFSET))(behaviorSource);
	}

	static ::System::Void Load_1(::BehaviorDesigner::Runtime::TaskSerializationData* taskData, ::BehaviorDesigner::Runtime::BehaviorSource* behaviorSource, ::System::Boolean loadTasks)
	{
		return ((::System::Void(*)(::BehaviorDesigner::Runtime::TaskSerializationData*, ::BehaviorDesigner::Runtime::BehaviorSource*, ::System::Boolean))((::PBYTE)hIl2Cpp + BINARYDESERIALIZATION_LOAD_1_OFFSET))(taskData, behaviorSource, loadTasks);
	}

	static ::System::Void Load_2(::BehaviorDesigner::Runtime::GlobalVariables* globalVariables, ::System::String* version)
	{
		return ((::System::Void(*)(::BehaviorDesigner::Runtime::GlobalVariables*, ::System::String*))((::PBYTE)hIl2Cpp + BINARYDESERIALIZATION_LOAD_2_OFFSET))(globalVariables, version);
	}

	static ::System::Void LoadTask(::BehaviorDesigner::Runtime::TaskSerializationData* taskSerializationData, ::BehaviorDesigner::Runtime::FieldSerializationData* fieldSerializationData, ::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>*& taskList, ::BehaviorDesigner::Runtime::BehaviorSource*& behaviorSource)
	{
		return ((::System::Void(*)(::BehaviorDesigner::Runtime::TaskSerializationData*, ::BehaviorDesigner::Runtime::FieldSerializationData*, ::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>*&, ::BehaviorDesigner::Runtime::BehaviorSource*&))((::PBYTE)hIl2Cpp + BINARYDESERIALIZATION_LOADTASK_OFFSET))(taskSerializationData, fieldSerializationData, taskList, behaviorSource);
	}

	static ::System::Void LoadFields(::BehaviorDesigner::Runtime::FieldSerializationData* fieldSerializationData, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* fieldIndexMap, ::System::Object* obj, ::System::Int32 hashPrefix, ::BehaviorDesigner::Runtime::IVariableSource* variableSource)
	{
		return ((::System::Void(*)(::BehaviorDesigner::Runtime::FieldSerializationData*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Object*, ::System::Int32, ::BehaviorDesigner::Runtime::IVariableSource*))((::PBYTE)hIl2Cpp + BINARYDESERIALIZATION_LOADFIELDS_OFFSET))(fieldSerializationData, fieldIndexMap, obj, hashPrefix, variableSource);
	}

	static ::System::Object* LoadField(::BehaviorDesigner::Runtime::FieldSerializationData* fieldSerializationData, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* fieldIndexMap, ::System::Type* fieldType, ::System::String* fieldName, ::System::Int32 hashPrefix, ::BehaviorDesigner::Runtime::IVariableSource* variableSource, ::System::Object* obj, ::System::Reflection::FieldInfo* fieldInfo)
	{
		return ((::System::Object*(*)(::BehaviorDesigner::Runtime::FieldSerializationData*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Type*, ::System::String*, ::System::Int32, ::BehaviorDesigner::Runtime::IVariableSource*, ::System::Object*, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + BINARYDESERIALIZATION_LOADFIELD_OFFSET))(fieldSerializationData, fieldIndexMap, fieldType, fieldName, hashPrefix, variableSource, obj, fieldInfo);
	}

	static ::System::Int32 StringHash(::System::String* value, ::System::Boolean fastHash)
	{
		return ((::System::Int32(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + BINARYDESERIALIZATION_STRINGHASH_OFFSET))(value, fastHash);
	}

	static ::System::Int32 GetFieldSize(::BehaviorDesigner::Runtime::FieldSerializationData* fieldSerializationData, ::System::Int32 fieldIndex)
	{
		return ((::System::Int32(*)(::BehaviorDesigner::Runtime::FieldSerializationData*, ::System::Int32))((::PBYTE)hIl2Cpp + BINARYDESERIALIZATION_GETFIELDSIZE_OFFSET))(fieldSerializationData, fieldIndex);
	}

	static ::System::Int32 BytesToInt(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 dataPosition)
	{
		return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + BINARYDESERIALIZATION_BYTESTOINT_OFFSET))(bytes, dataPosition);
	}

	static ::System::UInt32 BytesToUInt(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 dataPosition)
	{
		return ((::System::UInt32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + BINARYDESERIALIZATION_BYTESTOUINT_OFFSET))(bytes, dataPosition);
	}

	static ::System::UInt64 BytesToULong(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 dataPosition)
	{
		return ((::System::UInt64(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + BINARYDESERIALIZATION_BYTESTOULONG_OFFSET))(bytes, dataPosition);
	}

	static ::System::UInt16 BytesToUShort(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 dataPosition)
	{
		return ((::System::UInt16(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + BINARYDESERIALIZATION_BYTESTOUSHORT_OFFSET))(bytes, dataPosition);
	}

	static ::System::Single BytesToFloat(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 dataPosition)
	{
		return ((::System::Single(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + BINARYDESERIALIZATION_BYTESTOFLOAT_OFFSET))(bytes, dataPosition);
	}

	static ::System::Double BytesToDouble(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 dataPosition)
	{
		return ((::System::Double(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + BINARYDESERIALIZATION_BYTESTODOUBLE_OFFSET))(bytes, dataPosition);
	}

	static ::System::Int64 BytesToLong(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 dataPosition)
	{
		return ((::System::Int64(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + BINARYDESERIALIZATION_BYTESTOLONG_OFFSET))(bytes, dataPosition);
	}

	static ::System::Boolean BytesToBool(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 dataPosition)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + BINARYDESERIALIZATION_BYTESTOBOOL_OFFSET))(bytes, dataPosition);
	}

	static ::System::String* BytesToString(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 dataPosition, ::System::Int32 dataSize)
	{
		return ((::System::String*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BINARYDESERIALIZATION_BYTESTOSTRING_OFFSET))(bytes, dataPosition, dataSize);
	}

	static ::System::UInt32 crc32(::Il2CppArray<::System::Byte>* input, ::System::Int32 dataPosition, ::System::Int32 dataSize)
	{
		return ((::System::UInt32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BINARYDESERIALIZATION_CRC32_OFFSET))(input, dataPosition, dataSize);
	}

	static ::System::Byte BytesToByte(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 dataPosition)
	{
		return ((::System::Byte(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + BINARYDESERIALIZATION_BYTESTOBYTE_OFFSET))(bytes, dataPosition);
	}

	static ::UnityEngine::Color BytesToColor(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 dataPosition)
	{
		return ((::UnityEngine::Color(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + BINARYDESERIALIZATION_BYTESTOCOLOR_OFFSET))(bytes, dataPosition);
	}

	static ::UnityEngine::Vector2 BytesToVector2(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 dataPosition)
	{
		return ((::UnityEngine::Vector2(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + BINARYDESERIALIZATION_BYTESTOVECTOR2_OFFSET))(bytes, dataPosition);
	}

	static ::UnityEngine::Vector2Int BytesToVector2Int(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 dataPosition)
	{
		return ((::UnityEngine::Vector2Int(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + BINARYDESERIALIZATION_BYTESTOVECTOR2INT_OFFSET))(bytes, dataPosition);
	}

	static ::UnityEngine::Vector3 BytesToVector3(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 dataPosition)
	{
		return ((::UnityEngine::Vector3(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + BINARYDESERIALIZATION_BYTESTOVECTOR3_OFFSET))(bytes, dataPosition);
	}

	static ::UnityEngine::Vector3Int BytesToVector3Int(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 dataPosition)
	{
		return ((::UnityEngine::Vector3Int(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + BINARYDESERIALIZATION_BYTESTOVECTOR3INT_OFFSET))(bytes, dataPosition);
	}

	static ::UnityEngine::Vector4 BytesToVector4(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 dataPosition)
	{
		return ((::UnityEngine::Vector4(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + BINARYDESERIALIZATION_BYTESTOVECTOR4_OFFSET))(bytes, dataPosition);
	}

	static ::UnityEngine::Quaternion BytesToQuaternion(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 dataPosition)
	{
		return ((::UnityEngine::Quaternion(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + BINARYDESERIALIZATION_BYTESTOQUATERNION_OFFSET))(bytes, dataPosition);
	}

	static ::UnityEngine::Rect BytesToRect(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 dataPosition)
	{
		return ((::UnityEngine::Rect(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + BINARYDESERIALIZATION_BYTESTORECT_OFFSET))(bytes, dataPosition);
	}

	static ::UnityEngine::Matrix4x4 BytesToMatrix4x4(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 dataPosition)
	{
		return ((::UnityEngine::Matrix4x4(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + BINARYDESERIALIZATION_BYTESTOMATRIX4X4_OFFSET))(bytes, dataPosition);
	}

	static ::UnityEngine::AnimationCurve* BytesToAnimationCurve(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 dataPosition)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + BINARYDESERIALIZATION_BYTESTOANIMATIONCURVE_OFFSET))(bytes, dataPosition);
	}

	static ::UnityEngine::LayerMask BytesToLayerMask(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 dataPosition)
	{
		return ((::UnityEngine::LayerMask(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + BINARYDESERIALIZATION_BYTESTOLAYERMASK_OFFSET))(bytes, dataPosition);
	}

	static ::UnityEngine::Object* IndexToUnityObject(::System::Int32 index, ::BehaviorDesigner::Runtime::FieldSerializationData* activeFieldSerializationData)
	{
		return ((::UnityEngine::Object*(*)(::System::Int32, ::BehaviorDesigner::Runtime::FieldSerializationData*))((::PBYTE)hIl2Cpp + BINARYDESERIALIZATION_INDEXTOUNITYOBJECT_OFFSET))(index, activeFieldSerializationData);
	}

	static ::BehaviorDesigner::Runtime::SharedVariable* BytesToSharedVariable(::BehaviorDesigner::Runtime::FieldSerializationData* fieldSerializationData, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* fieldIndexMap, ::Il2CppArray<::System::Byte>* bytes, ::System::Int32 dataPosition, ::BehaviorDesigner::Runtime::IVariableSource* variableSource, ::System::Boolean fromField, ::System::Int32 hashPrefix)
	{
		return ((::BehaviorDesigner::Runtime::SharedVariable*(*)(::BehaviorDesigner::Runtime::FieldSerializationData*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::BehaviorDesigner::Runtime::IVariableSource*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + BINARYDESERIALIZATION_BYTESTOSHAREDVARIABLE_OFFSET))(fieldSerializationData, fieldIndexMap, bytes, dataPosition, variableSource, fromField, hashPrefix);
	}
};
