#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/DataFormat.h"
#include "unitysdk/System/Object.h"

namespace Sirenix::Serialization { class DeserializationContext; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { class SerializationContext; }
namespace System { class IDisposable; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class Stream; }
namespace UnityEngine { class Object; }

#define SIRENIX_SERIALIZATION_SERIALIZATIONUTILITY_CREATECOPY_OFFSET UNITYSDK_OFFSET(0x1E04D810)
#define SIRENIX_SERIALIZATION_SERIALIZATIONUTILITY_CREATEREADER_OFFSET UNITYSDK_OFFSET(0x1E04B230)
#define SIRENIX_SERIALIZATION_SERIALIZATIONUTILITY_CREATEWRITER_OFFSET UNITYSDK_OFFSET(0x1E04B0E0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONUTILITY_DESERIALIZEVALUEWEAK_1_OFFSET UNITYSDK_OFFSET(0x1E04C930)
#define SIRENIX_SERIALIZATION_SERIALIZATIONUTILITY_DESERIALIZEVALUEWEAK_2_OFFSET UNITYSDK_OFFSET(0x1E04CBE0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONUTILITY_DESERIALIZEVALUEWEAK_3_OFFSET UNITYSDK_OFFSET(0x1E04D060)
#define SIRENIX_SERIALIZATION_SERIALIZATIONUTILITY_DESERIALIZEVALUEWEAK_4_OFFSET UNITYSDK_OFFSET(0x1E04D390)
#define SIRENIX_SERIALIZATION_SERIALIZATIONUTILITY_DESERIALIZEVALUEWEAK_5_OFFSET UNITYSDK_OFFSET(0x1E04D5D0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONUTILITY_DESERIALIZEVALUEWEAK_OFFSET UNITYSDK_OFFSET(0x1E04C890)
#define SIRENIX_SERIALIZATION_SERIALIZATIONUTILITY_GETCACHEDREADER_OFFSET UNITYSDK_OFFSET(0x1E04B600)
#define SIRENIX_SERIALIZATION_SERIALIZATIONUTILITY_GETCACHEDWRITER_OFFSET UNITYSDK_OFFSET(0x1E04B380)
#define SIRENIX_SERIALIZATION_SERIALIZATIONUTILITY_SERIALIZEVALUEWEAK_1_OFFSET UNITYSDK_OFFSET(0x1E04B940)
#define SIRENIX_SERIALIZATION_SERIALIZATIONUTILITY_SERIALIZEVALUEWEAK_2_OFFSET UNITYSDK_OFFSET(0x1E04BC70)
#define SIRENIX_SERIALIZATION_SERIALIZATIONUTILITY_SERIALIZEVALUEWEAK_3_OFFSET UNITYSDK_OFFSET(0x1E04BF10)
#define SIRENIX_SERIALIZATION_SERIALIZATIONUTILITY_SERIALIZEVALUEWEAK_4_OFFSET UNITYSDK_OFFSET(0x1E04C1E0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONUTILITY_SERIALIZEVALUEWEAK_5_OFFSET UNITYSDK_OFFSET(0x1E04C530)
#define SIRENIX_SERIALIZATION_SERIALIZATIONUTILITY_SERIALIZEVALUEWEAK_OFFSET UNITYSDK_OFFSET(0x1E04B800)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int SerializationUtility_TypeDefinitionIndex = 7535;

	class SerializationUtility : public ::System::Object
	{
	public:
		static ::Sirenix::Serialization::IDataWriter* CreateWriter(::System::IO::Stream* stream, ::Sirenix::Serialization::SerializationContext* context, ::Sirenix::Serialization::DataFormat format)
		{
			return ((::Sirenix::Serialization::IDataWriter*(*)(::System::IO::Stream*, ::Sirenix::Serialization::SerializationContext*, ::Sirenix::Serialization::DataFormat))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONUTILITY_CREATEWRITER_OFFSET))(stream, context, format);
		}

		static ::Sirenix::Serialization::IDataReader* CreateReader(::System::IO::Stream* stream, ::Sirenix::Serialization::DeserializationContext* context, ::Sirenix::Serialization::DataFormat format)
		{
			return ((::Sirenix::Serialization::IDataReader*(*)(::System::IO::Stream*, ::Sirenix::Serialization::DeserializationContext*, ::Sirenix::Serialization::DataFormat))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONUTILITY_CREATEREADER_OFFSET))(stream, context, format);
		}

		static ::Sirenix::Serialization::IDataWriter* GetCachedWriter(::System::IDisposable*& cache, ::Sirenix::Serialization::DataFormat format, ::System::IO::Stream* stream, ::Sirenix::Serialization::SerializationContext* context)
		{
			return ((::Sirenix::Serialization::IDataWriter*(*)(::System::IDisposable*&, ::Sirenix::Serialization::DataFormat, ::System::IO::Stream*, ::Sirenix::Serialization::SerializationContext*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONUTILITY_GETCACHEDWRITER_OFFSET))(cache, format, stream, context);
		}

		static ::Sirenix::Serialization::IDataReader* GetCachedReader(::System::IDisposable*& cache, ::Sirenix::Serialization::DataFormat format, ::System::IO::Stream* stream, ::Sirenix::Serialization::DeserializationContext* context)
		{
			return ((::Sirenix::Serialization::IDataReader*(*)(::System::IDisposable*&, ::Sirenix::Serialization::DataFormat, ::System::IO::Stream*, ::Sirenix::Serialization::DeserializationContext*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONUTILITY_GETCACHEDREADER_OFFSET))(cache, format, stream, context);
		}

		static ::System::Void SerializeValueWeak(::System::Object* value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::System::Object*, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONUTILITY_SERIALIZEVALUEWEAK_OFFSET))(value, writer);
		}

		static ::System::Void SerializeValueWeak_1(::System::Object* value, ::Sirenix::Serialization::IDataWriter* writer, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*& unityObjects)
		{
			return ((::System::Void(*)(::System::Object*, ::Sirenix::Serialization::IDataWriter*, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONUTILITY_SERIALIZEVALUEWEAK_1_OFFSET))(value, writer, unityObjects);
		}

		static ::System::Void SerializeValueWeak_2(::System::Object* value, ::System::IO::Stream* stream, ::Sirenix::Serialization::DataFormat format, ::Sirenix::Serialization::SerializationContext* context)
		{
			return ((::System::Void(*)(::System::Object*, ::System::IO::Stream*, ::Sirenix::Serialization::DataFormat, ::Sirenix::Serialization::SerializationContext*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONUTILITY_SERIALIZEVALUEWEAK_2_OFFSET))(value, stream, format, context);
		}

		static ::System::Void SerializeValueWeak_3(::System::Object* value, ::System::IO::Stream* stream, ::Sirenix::Serialization::DataFormat format, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*& unityObjects, ::Sirenix::Serialization::SerializationContext* context)
		{
			return ((::System::Void(*)(::System::Object*, ::System::IO::Stream*, ::Sirenix::Serialization::DataFormat, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*&, ::Sirenix::Serialization::SerializationContext*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONUTILITY_SERIALIZEVALUEWEAK_3_OFFSET))(value, stream, format, unityObjects, context);
		}

		static ::Il2CppArray<::System::Byte>* SerializeValueWeak_4(::System::Object* value, ::Sirenix::Serialization::DataFormat format, ::Sirenix::Serialization::SerializationContext* context)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Object*, ::Sirenix::Serialization::DataFormat, ::Sirenix::Serialization::SerializationContext*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONUTILITY_SERIALIZEVALUEWEAK_4_OFFSET))(value, format, context);
		}

		static ::Il2CppArray<::System::Byte>* SerializeValueWeak_5(::System::Object* value, ::Sirenix::Serialization::DataFormat format, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*& unityObjects)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Object*, ::Sirenix::Serialization::DataFormat, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONUTILITY_SERIALIZEVALUEWEAK_5_OFFSET))(value, format, unityObjects);
		}

		static ::System::Object* DeserializeValueWeak(::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::Object*(*)(::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONUTILITY_DESERIALIZEVALUEWEAK_OFFSET))(reader);
		}

		static ::System::Object* DeserializeValueWeak_1(::Sirenix::Serialization::IDataReader* reader, ::System::Collections::Generic::List_1<::UnityEngine::Object*>* referencedUnityObjects)
		{
			return ((::System::Object*(*)(::Sirenix::Serialization::IDataReader*, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONUTILITY_DESERIALIZEVALUEWEAK_1_OFFSET))(reader, referencedUnityObjects);
		}

		static ::System::Object* DeserializeValueWeak_2(::System::IO::Stream* stream, ::Sirenix::Serialization::DataFormat format, ::Sirenix::Serialization::DeserializationContext* context)
		{
			return ((::System::Object*(*)(::System::IO::Stream*, ::Sirenix::Serialization::DataFormat, ::Sirenix::Serialization::DeserializationContext*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONUTILITY_DESERIALIZEVALUEWEAK_2_OFFSET))(stream, format, context);
		}

		static ::System::Object* DeserializeValueWeak_3(::System::IO::Stream* stream, ::Sirenix::Serialization::DataFormat format, ::System::Collections::Generic::List_1<::UnityEngine::Object*>* referencedUnityObjects, ::Sirenix::Serialization::DeserializationContext* context)
		{
			return ((::System::Object*(*)(::System::IO::Stream*, ::Sirenix::Serialization::DataFormat, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*, ::Sirenix::Serialization::DeserializationContext*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONUTILITY_DESERIALIZEVALUEWEAK_3_OFFSET))(stream, format, referencedUnityObjects, context);
		}

		static ::System::Object* DeserializeValueWeak_4(::Il2CppArray<::System::Byte>* bytes, ::Sirenix::Serialization::DataFormat format, ::Sirenix::Serialization::DeserializationContext* context)
		{
			return ((::System::Object*(*)(::Il2CppArray<::System::Byte>*, ::Sirenix::Serialization::DataFormat, ::Sirenix::Serialization::DeserializationContext*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONUTILITY_DESERIALIZEVALUEWEAK_4_OFFSET))(bytes, format, context);
		}

		static ::System::Object* DeserializeValueWeak_5(::Il2CppArray<::System::Byte>* bytes, ::Sirenix::Serialization::DataFormat format, ::System::Collections::Generic::List_1<::UnityEngine::Object*>* referencedUnityObjects)
		{
			return ((::System::Object*(*)(::Il2CppArray<::System::Byte>*, ::Sirenix::Serialization::DataFormat, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONUTILITY_DESERIALIZEVALUEWEAK_5_OFFSET))(bytes, format, referencedUnityObjects);
		}

		static ::System::Object* CreateCopy(::System::Object* obj)
		{
			return ((::System::Object*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONUTILITY_CREATECOPY_OFFSET))(obj);
		}
	};
}
