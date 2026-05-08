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

namespace BehaviorDesigner::Runtime { class BinaryDeserializeContext; }
namespace BehaviorDesigner::Runtime { class FieldSerializationData; }
namespace BehaviorDesigner::Runtime { class JsonDeserializeContext; }
namespace BehaviorDesigner::Runtime { class PrecompiledTypeDeserializer_WrongVersionException; }
namespace BehaviorDesigner::Runtime::Tasks { class Task; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Security::Cryptography { class SHA1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Object; }

#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_BYTESTOANIMATIONCURVE_OFFSET UNITYSDK_OFFSET(0x1BDBAB60)
#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_BYTESTOBOOL_OFFSET UNITYSDK_OFFSET(0x1BDB99B0)
#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_BYTESTOBYTE_OFFSET UNITYSDK_OFFSET(0x1BDB9E10)
#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_BYTESTOCOLOR_OFFSET UNITYSDK_OFFSET(0x1BDB9E80)
#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_BYTESTODOUBLE_OFFSET UNITYSDK_OFFSET(0x1BDB97A0)
#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_BYTESTOFLOAT_OFFSET UNITYSDK_OFFSET(0x1BDB9660)
#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_BYTESTOINT_OFFSET UNITYSDK_OFFSET(0x1BDB91D0)
#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_BYTESTOLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1BDBADA0)
#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_BYTESTOLONG_OFFSET UNITYSDK_OFFSET(0x1BDB98E0)
#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_BYTESTOMATRIX4X4_OFFSET UNITYSDK_OFFSET(0x1BDBA800)
#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_BYTESTOQUATERNION_OFFSET UNITYSDK_OFFSET(0x1BDBA580)
#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_BYTESTORECT_OFFSET UNITYSDK_OFFSET(0x1BDBA6D0)
#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_BYTESTOSTRING_OFFSET UNITYSDK_OFFSET(0x1BDB9A00)
#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_BYTESTOUINT_OFFSET UNITYSDK_OFFSET(0x1BDB92E0)
#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_BYTESTOULONG_OFFSET UNITYSDK_OFFSET(0x1BDB9420)
#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_BYTESTOUSHORT_OFFSET UNITYSDK_OFFSET(0x1BDB9550)
#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_BYTESTOVECTOR2INT_OFFSET UNITYSDK_OFFSET(0x1BDBA0E0)
#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_BYTESTOVECTOR2_OFFSET UNITYSDK_OFFSET(0x1BDB9FD0)
#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_BYTESTOVECTOR3INT_OFFSET UNITYSDK_OFFSET(0x1BDBA310)
#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_BYTESTOVECTOR3_OFFSET UNITYSDK_OFFSET(0x1BDBA1D0)
#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_BYTESTOVECTOR4_OFFSET UNITYSDK_OFFSET(0x1BDBA430)
#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_CRC32_OFFSET UNITYSDK_OFFSET(0x1BDB9C90)
#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_GETFIELDSIZE_OFFSET UNITYSDK_OFFSET(0x1BDB9130)
#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_GET_CRCTABLE_OFFSET UNITYSDK_OFFSET(0x1BDB8DD0)
#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_INDEXTOUNITYOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1BDBD410)
#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_INDEXTOUNITYOBJECT_OFFSET UNITYSDK_OFFSET(0x1BDBAE60)
#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_STRINGHASH_OFFSET UNITYSDK_OFFSET(0x1BDB8E30)
#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_STRINGTOCOLOR_OFFSET UNITYSDK_OFFSET(0x1BDBC6A0)
#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_STRINGTOMATRIX4X4_OFFSET UNITYSDK_OFFSET(0x1BDBC030)
#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_STRINGTOQUATERNION_OFFSET UNITYSDK_OFFSET(0x1BDBBDD0)
#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_STRINGTORECT_OFFSET UNITYSDK_OFFSET(0x1BDBC910)
#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_STRINGTOVECTOR2INT_OFFSET UNITYSDK_OFFSET(0x1BDBB5A0)
#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_STRINGTOVECTOR2_OFFSET UNITYSDK_OFFSET(0x1BDBB3F0)
#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_STRINGTOVECTOR3INT_OFFSET UNITYSDK_OFFSET(0x1BDBB960)
#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_STRINGTOVECTOR3_OFFSET UNITYSDK_OFFSET(0x1BDBB740)
#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_STRINGTOVECTOR4_OFFSET UNITYSDK_OFFSET(0x1BDBBB60)
#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_TRYGETFIELDINDEX_1_OFFSET UNITYSDK_OFFSET(0x1BDBB180)
#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_TRYGETFIELDINDEX_OFFSET UNITYSDK_OFFSET(0x1BDBAF00)
#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_VALUETOANIMATIONCURVE_OFFSET UNITYSDK_OFFSET(0x1BDBCC50)
#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_VALUETOLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1BDBCC10)
#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BDBD4B0)
#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDBD4A0)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int PrecompiledTypeDeserializer_TypeDefinitionIndex = 31703;

	class PrecompiledTypeDeserializer : public ::System::Object
	{
	public:
		static ::BehaviorDesigner::Runtime::PrecompiledTypeDeserializer_WrongVersionException** StaticGet_ErrorVersionException()
		{
			return (::BehaviorDesigner::Runtime::PrecompiledTypeDeserializer_WrongVersionException**)Il2CppClass::FromTypeDefinitionIndex(PrecompiledTypeDeserializer_TypeDefinitionIndex)->GetStaticField(0x25B00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER__CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::System::UInt32>* get_crcTable()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_GET_CRCTABLE_OFFSET))();
		}

		static ::System::Int32 StringHash(::System::String* value, ::System::Boolean fastHash, ::System::Security::Cryptography::SHA1* sha1)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Boolean, ::System::Security::Cryptography::SHA1*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_STRINGHASH_OFFSET))(value, fastHash, sha1);
		}

		static ::System::Int32 GetFieldSize(::BehaviorDesigner::Runtime::FieldSerializationData* fieldSerializationData, ::System::Int32 fieldIndex)
		{
			return ((::System::Int32(*)(::BehaviorDesigner::Runtime::FieldSerializationData*, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_GETFIELDSIZE_OFFSET))(fieldSerializationData, fieldIndex);
		}

		static ::System::Int32 BytesToInt(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 dataPosition, ::Il2CppArray<::System::Byte>* bigEndianFourByteArrayBuffer)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_BYTESTOINT_OFFSET))(bytes, dataPosition, bigEndianFourByteArrayBuffer);
		}

		static ::System::UInt32 BytesToUInt(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 dataPosition, ::Il2CppArray<::System::Byte>* bigEndianFourByteArrayBuffer)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_BYTESTOUINT_OFFSET))(bytes, dataPosition, bigEndianFourByteArrayBuffer);
		}

		static ::System::UInt64 BytesToULong(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 dataPosition, ::Il2CppArray<::System::Byte>* bigEndianEightByteArrayBuffer)
		{
			return ((::System::UInt64(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_BYTESTOULONG_OFFSET))(bytes, dataPosition, bigEndianEightByteArrayBuffer);
		}

		static ::System::UInt16 BytesToUShort(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 dataPosition, ::Il2CppArray<::System::Byte>* bigEndianTwoByteArrayBuffer)
		{
			return ((::System::UInt16(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_BYTESTOUSHORT_OFFSET))(bytes, dataPosition, bigEndianTwoByteArrayBuffer);
		}

		static ::System::Single BytesToFloat(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 dataPosition, ::Il2CppArray<::System::Byte>* bigEndianFourByteArrayBuffer)
		{
			return ((::System::Single(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_BYTESTOFLOAT_OFFSET))(bytes, dataPosition, bigEndianFourByteArrayBuffer);
		}

		static ::System::Double BytesToDouble(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 dataPosition, ::Il2CppArray<::System::Byte>* bigEndianEightByteArrayBuffer)
		{
			return ((::System::Double(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_BYTESTODOUBLE_OFFSET))(bytes, dataPosition, bigEndianEightByteArrayBuffer);
		}

		static ::System::Int64 BytesToLong(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 dataPosition, ::Il2CppArray<::System::Byte>* bigEndianEightByteArrayBuffer)
		{
			return ((::System::Int64(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_BYTESTOLONG_OFFSET))(bytes, dataPosition, bigEndianEightByteArrayBuffer);
		}

		static ::System::Boolean BytesToBool(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 dataPosition)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_BYTESTOBOOL_OFFSET))(bytes, dataPosition);
		}

		static ::System::String* BytesToString(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 dataPosition, ::System::Int32 dataSize, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* stringCache)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_BYTESTOSTRING_OFFSET))(bytes, dataPosition, dataSize, stringCache);
		}

		static ::System::UInt32 crc32(::Il2CppArray<::System::Byte>* input, ::System::Int32 dataPosition, ::System::Int32 dataSize)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_CRC32_OFFSET))(input, dataPosition, dataSize);
		}

		static ::System::Byte BytesToByte(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 dataPosition)
		{
			return ((::System::Byte(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_BYTESTOBYTE_OFFSET))(bytes, dataPosition);
		}

		static ::UnityEngine::Color BytesToColor(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 dataPosition, ::Il2CppArray<::System::Byte>* bigEndianFourByteArrayBuffer)
		{
			return ((::UnityEngine::Color(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_BYTESTOCOLOR_OFFSET))(bytes, dataPosition, bigEndianFourByteArrayBuffer);
		}

		static ::UnityEngine::Vector2 BytesToVector2(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 dataPosition, ::Il2CppArray<::System::Byte>* bigEndianFourByteArrayBuffer)
		{
			return ((::UnityEngine::Vector2(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_BYTESTOVECTOR2_OFFSET))(bytes, dataPosition, bigEndianFourByteArrayBuffer);
		}

		static ::UnityEngine::Vector2Int BytesToVector2Int(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 dataPosition, ::Il2CppArray<::System::Byte>* bigEndianFourByteArrayBuffer)
		{
			return ((::UnityEngine::Vector2Int(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_BYTESTOVECTOR2INT_OFFSET))(bytes, dataPosition, bigEndianFourByteArrayBuffer);
		}

		static ::UnityEngine::Vector3 BytesToVector3(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 dataPosition, ::Il2CppArray<::System::Byte>* bigEndianFourByteArrayBuffer)
		{
			return ((::UnityEngine::Vector3(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_BYTESTOVECTOR3_OFFSET))(bytes, dataPosition, bigEndianFourByteArrayBuffer);
		}

		static ::UnityEngine::Vector3Int BytesToVector3Int(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 dataPosition, ::Il2CppArray<::System::Byte>* bigEndianFourByteArrayBuffer)
		{
			return ((::UnityEngine::Vector3Int(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_BYTESTOVECTOR3INT_OFFSET))(bytes, dataPosition, bigEndianFourByteArrayBuffer);
		}

		static ::UnityEngine::Vector4 BytesToVector4(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 dataPosition, ::Il2CppArray<::System::Byte>* bigEndianFourByteArrayBuffer)
		{
			return ((::UnityEngine::Vector4(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_BYTESTOVECTOR4_OFFSET))(bytes, dataPosition, bigEndianFourByteArrayBuffer);
		}

		static ::UnityEngine::Quaternion BytesToQuaternion(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 dataPosition, ::Il2CppArray<::System::Byte>* bigEndianFourByteArrayBuffer)
		{
			return ((::UnityEngine::Quaternion(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_BYTESTOQUATERNION_OFFSET))(bytes, dataPosition, bigEndianFourByteArrayBuffer);
		}

		static ::UnityEngine::Rect BytesToRect(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 dataPosition, ::Il2CppArray<::System::Byte>* bigEndianFourByteArrayBuffer)
		{
			return ((::UnityEngine::Rect(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_BYTESTORECT_OFFSET))(bytes, dataPosition, bigEndianFourByteArrayBuffer);
		}

		static ::UnityEngine::Matrix4x4 BytesToMatrix4x4(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 dataPosition, ::Il2CppArray<::System::Byte>* bigEndianFourByteArrayBuffer)
		{
			return ((::UnityEngine::Matrix4x4(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_BYTESTOMATRIX4X4_OFFSET))(bytes, dataPosition, bigEndianFourByteArrayBuffer);
		}

		static ::UnityEngine::AnimationCurve* BytesToAnimationCurve(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 dataPosition, ::System::Int32 animationCurveAdvance, ::Il2CppArray<::System::Byte>* bigEndianFourByteArrayBuffer)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_BYTESTOANIMATIONCURVE_OFFSET))(bytes, dataPosition, animationCurveAdvance, bigEndianFourByteArrayBuffer);
		}

		static ::UnityEngine::LayerMask BytesToLayerMask(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 dataPosition, ::Il2CppArray<::System::Byte>* bigEndianFourByteArrayBuffer)
		{
			return ((::UnityEngine::LayerMask(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_BYTESTOLAYERMASK_OFFSET))(bytes, dataPosition, bigEndianFourByteArrayBuffer);
		}

		static ::UnityEngine::Object* IndexToUnityObject(::System::Int32 index, ::BehaviorDesigner::Runtime::FieldSerializationData* activeFieldSerializationData)
		{
			return ((::UnityEngine::Object*(*)(::System::Int32, ::BehaviorDesigner::Runtime::FieldSerializationData*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_INDEXTOUNITYOBJECT_OFFSET))(index, activeFieldSerializationData);
		}

		static ::System::Boolean TryGetFieldIndex(::System::Int32 hashPrefix, ::System::String* fieldTypeName, ::System::String* fieldName, ::BehaviorDesigner::Runtime::BinaryDeserializeContext* context, ::System::Int32& fieldHash, ::System::Int32& fieldIndex)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::String*, ::System::String*, ::BehaviorDesigner::Runtime::BinaryDeserializeContext*, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_TRYGETFIELDINDEX_OFFSET))(hashPrefix, fieldTypeName, fieldName, context, fieldHash, fieldIndex);
		}

		static ::System::Boolean TryGetFieldIndex_1(::System::Int32 hashPrefix, ::System::String* fieldTypeName, ::System::String* fieldName, ::BehaviorDesigner::Runtime::BinaryDeserializeContext* context, ::System::Int32& fieldIndex)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::String*, ::System::String*, ::BehaviorDesigner::Runtime::BinaryDeserializeContext*, ::System::Int32&))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_TRYGETFIELDINDEX_1_OFFSET))(hashPrefix, fieldTypeName, fieldName, context, fieldIndex);
		}

		static ::UnityEngine::Vector2 StringToVector2(::System::String* vector2String)
		{
			return ((::UnityEngine::Vector2(*)(::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_STRINGTOVECTOR2_OFFSET))(vector2String);
		}

		static ::UnityEngine::Vector2Int StringToVector2Int(::System::String* vector2String)
		{
			return ((::UnityEngine::Vector2Int(*)(::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_STRINGTOVECTOR2INT_OFFSET))(vector2String);
		}

		static ::UnityEngine::Vector3 StringToVector3(::System::String* vector3String)
		{
			return ((::UnityEngine::Vector3(*)(::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_STRINGTOVECTOR3_OFFSET))(vector3String);
		}

		static ::UnityEngine::Vector3Int StringToVector3Int(::System::String* vector3String)
		{
			return ((::UnityEngine::Vector3Int(*)(::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_STRINGTOVECTOR3INT_OFFSET))(vector3String);
		}

		static ::UnityEngine::Vector4 StringToVector4(::System::String* vector4String)
		{
			return ((::UnityEngine::Vector4(*)(::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_STRINGTOVECTOR4_OFFSET))(vector4String);
		}

		static ::UnityEngine::Quaternion StringToQuaternion(::System::String* quaternionString)
		{
			return ((::UnityEngine::Quaternion(*)(::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_STRINGTOQUATERNION_OFFSET))(quaternionString);
		}

		static ::UnityEngine::Matrix4x4 StringToMatrix4X4(::System::String* matrixString)
		{
			return ((::UnityEngine::Matrix4x4(*)(::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_STRINGTOMATRIX4X4_OFFSET))(matrixString);
		}

		static ::UnityEngine::Color StringToColor(::System::String* colorString)
		{
			return ((::UnityEngine::Color(*)(::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_STRINGTOCOLOR_OFFSET))(colorString);
		}

		static ::UnityEngine::Rect StringToRect(::System::String* rectString)
		{
			return ((::UnityEngine::Rect(*)(::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_STRINGTORECT_OFFSET))(rectString);
		}

		static ::UnityEngine::LayerMask ValueToLayerMask(::System::Int32 value)
		{
			return ((::UnityEngine::LayerMask(*)(::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_VALUETOLAYERMASK_OFFSET))(value);
		}

		static ::UnityEngine::AnimationCurve* ValueToAnimationCurve(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* value)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_VALUETOANIMATIONCURVE_OFFSET))(value);
		}

		static ::UnityEngine::Object* IndexToUnityObject_1(::System::Int32 index, ::System::Collections::Generic::List_1<::UnityEngine::Object*>* unityObjects)
		{
			return ((::UnityEngine::Object*(*)(::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_INDEXTOUNITYOBJECT_1_OFFSET))(index, unityObjects);
		}
	};
}
