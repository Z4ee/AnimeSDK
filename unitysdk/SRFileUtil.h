#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SRFILEUTIL_DELETEDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1AD28370)
#define SRFILEUTIL_GETBYTESREADABLE_OFFSET UNITYSDK_OFFSET(0x1AD28430)

inline static constexpr unsigned int SRFileUtil_TypeDefinitionIndex = 33543;

class SRFileUtil : public ::System::Object
{
public:
	static ::System::Void DeleteDirectory(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SRFILEUTIL_DELETEDIRECTORY_OFFSET))(a1);
	}

	static ::System::String* GetBytesReadable(::System::Int64 a1)
	{
		return ((::System::String*(*)(::System::Int64))((::PBYTE)hIl2Cpp + SRFILEUTIL_GETBYTESREADABLE_OFFSET))(a1);
	}
};
