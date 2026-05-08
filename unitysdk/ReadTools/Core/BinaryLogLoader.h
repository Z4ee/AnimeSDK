#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace BinaryTracingCore::Source::TracingTools { class LogBlock; }
namespace BinaryTracingCore::Source::TracingTools { class LogMeta; }
namespace BinaryTracingFramework::Serialize { class ISerializableObject; }
namespace BinaryTracingFramework::Serialize { class ReadLinker; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class Stream; }

#define READTOOLS_CORE_BINARYLOGLOADER_ONSERIALIZEDUNIT_OFFSET UNITYSDK_OFFSET(0x1BF05FA0)
#define READTOOLS_CORE_BINARYLOGLOADER_TRYGETLOGMETA_OFFSET UNITYSDK_OFFSET(0x1BEFFAA0)
#define READTOOLS_CORE_BINARYLOGLOADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF05E00)
#define READTOOLS_CORE_BINARYLOGLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF05E40)

namespace ReadTools::Core
{
	inline static constexpr unsigned int BinaryLogLoader_TypeDefinitionIndex = 32420;

	class BinaryLogLoader : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Guid, ::BinaryTracingCore::Source::TracingTools::LogMeta*>* LogMetaMap; // 0x10
		::BinaryTracingFramework::Serialize::ReadLinker* readLinker; // 0x18
		::System::Collections::Generic::List_1<::BinaryTracingCore::Source::TracingTools::LogBlock*>* LogBlocks; // 0x20

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + READTOOLS_CORE_BINARYLOGLOADER__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::IO::Stream* stream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + READTOOLS_CORE_BINARYLOGLOADER__CTOR_OFFSET))(this, stream);
		}

		::System::Boolean TryGetLogMeta(::System::Guid guid, ::BinaryTracingCore::Source::TracingTools::LogMeta*& logMeta)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Guid, ::BinaryTracingCore::Source::TracingTools::LogMeta*&))((::PBYTE)hIl2Cpp + READTOOLS_CORE_BINARYLOGLOADER_TRYGETLOGMETA_OFFSET))(this, guid, logMeta);
		}

		::System::Void OnSerializedUnit(::BinaryTracingFramework::Serialize::ISerializableObject* serializableObject)
		{
			return ((::System::Void(*)(::PVOID, ::BinaryTracingFramework::Serialize::ISerializableObject*))((::PBYTE)hIl2Cpp + READTOOLS_CORE_BINARYLOGLOADER_ONSERIALIZEDUNIT_OFFSET))(this, serializableObject);
		}
	};
}
