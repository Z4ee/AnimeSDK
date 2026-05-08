#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BinaryTracingFramework/Serialize/WriteLinker_SerializeObjectCompose.h"
#include "unitysdk/System/Object.h"

namespace BinaryTracingFramework::Serialize { class ISerializableObject; }
namespace BinaryTracingFramework::Serialize { class MemoryWriteArchive; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::IO { class Stream; }
namespace System::Threading::Tasks { class Task; }

#define BINARYTRACINGFRAMEWORK_SERIALIZE_WRITELINKER_FLUSH_OFFSET UNITYSDK_OFFSET(0x1BF03F30)
#define BINARYTRACINGFRAMEWORK_SERIALIZE_WRITELINKER_PUSHSERIALIZEOBJ_OFFSET UNITYSDK_OFFSET(0x1BF04040)
#define BINARYTRACINGFRAMEWORK_SERIALIZE_WRITELINKER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BF03B70)
#define BINARYTRACINGFRAMEWORK_SERIALIZE_WRITELINKER_WRITETOFILE_OFFSET UNITYSDK_OFFSET(0x1BF05BF0)
#define BINARYTRACINGFRAMEWORK_SERIALIZE_WRITELINKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF03790)

namespace BinaryTracingFramework::Serialize
{
	inline static constexpr unsigned int WriteLinker_TypeDefinitionIndex = 32436;

	class WriteLinker : public ::System::Object
	{
	public:
		::System::Collections::Generic::Queue_1<::BinaryTracingFramework::Serialize::WriteLinker_SerializeObjectCompose>* WaitWriteList; // 0x10
		::System::Threading::Tasks::Task* WriteTask; // 0x18
		::BinaryTracingFramework::Serialize::MemoryWriteArchive* Archive; // 0x20
		::System::IO::Stream* WriteStream; // 0x28
		::System::Collections::Generic::List_1<::BinaryTracingFramework::Serialize::WriteLinker_SerializeObjectCompose>* CurWriteList; // 0x30

		::System::Void _ctor(::System::IO::Stream* stream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_WRITELINKER__CTOR_OFFSET))(this, stream);
		}

		::System::Void PushSerializeObj(::BinaryTracingFramework::Serialize::ISerializableObject* target, ::System::Action_1<::BinaryTracingFramework::Serialize::ISerializableObject*>* onUsingComplete)
		{
			return ((::System::Void(*)(::PVOID, ::BinaryTracingFramework::Serialize::ISerializableObject*, ::System::Action_1<::BinaryTracingFramework::Serialize::ISerializableObject*>*))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_WRITELINKER_PUSHSERIALIZEOBJ_OFFSET))(this, target, onUsingComplete);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_WRITELINKER_UPDATE_OFFSET))(this);
		}

		::System::Void WriteToFile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_WRITELINKER_WRITETOFILE_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_WRITELINKER_FLUSH_OFFSET))(this);
		}
	};
}
