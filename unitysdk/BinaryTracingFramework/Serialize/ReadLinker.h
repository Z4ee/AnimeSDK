#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace BinaryTracingFramework::Serialize { class BinaryReadArchive; }
namespace BinaryTracingFramework::Serialize { class ISerializableObject; }
namespace System { template <typename T> class Action_1; }
namespace System::IO { class Stream; }

#define BINARYTRACINGFRAMEWORK_SERIALIZE_READLINKER_INIT_OFFSET UNITYSDK_OFFSET(0x1F654480)
#define BINARYTRACINGFRAMEWORK_SERIALIZE_READLINKER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F6545B0)
#define BINARYTRACINGFRAMEWORK_SERIALIZE_READLINKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6546B0)

namespace BinaryTracingFramework::Serialize
{
	inline static constexpr unsigned int ReadLinker_TypeDefinitionIndex = 34617;

	class ReadLinker : public ::System::Object
	{
	public:
		::BinaryTracingFramework::Serialize::BinaryReadArchive* _readArchive; // 0x10
		::System::IO::Stream* _readStream; // 0x18
		::System::Action_1<::BinaryTracingFramework::Serialize::ISerializableObject*>* _onBlockRead; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_READLINKER__CTOR_OFFSET))(this);
		}

		::System::Void Init(::System::IO::Stream* readStream, ::System::Action_1<::BinaryTracingFramework::Serialize::ISerializableObject*>* onBlockRead)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Action_1<::BinaryTracingFramework::Serialize::ISerializableObject*>*))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_READLINKER_INIT_OFFSET))(this, readStream, onBlockRead);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_READLINKER_UPDATE_OFFSET))(this);
		}
	};
}
