#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BinaryTracingFramework/Serialize/BinaryReadArchive.h"

namespace System::IO { class Stream; }

#define BINARYTRACINGFRAMEWORK_SERIALIZE_COMMONREADARCHIVE_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x1E230160)
#define BINARYTRACINGFRAMEWORK_SERIALIZE_COMMONREADARCHIVE_INIT_OFFSET UNITYSDK_OFFSET(0x1E230090)
#define BINARYTRACINGFRAMEWORK_SERIALIZE_COMMONREADARCHIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E22FFC0)

namespace BinaryTracingFramework::Serialize
{
	inline static constexpr unsigned int CommonReadArchive_TypeDefinitionIndex = 33980;

	class CommonReadArchive : public ::BinaryTracingFramework::Serialize::BinaryReadArchive
	{
	public:
		::System::IO::Stream* Stream; // 0x20

		::System::Void _ctor(::System::IO::Stream* stream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_COMMONREADARCHIVE__CTOR_OFFSET))(this, stream);
		}

		::System::Void Init(::System::IO::Stream* stream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_COMMONREADARCHIVE_INIT_OFFSET))(this, stream);
		}

		::System::Int64 ContentLength()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_COMMONREADARCHIVE_CONTENTLENGTH_OFFSET))(this);
		}
	};
}
