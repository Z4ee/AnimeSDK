#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ReplayCheckpointElement;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define REPLAYCHECKPOINT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A62C1D0)
#define REPLAYCHECKPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6221E0)
#define REPLAYCHECKPOINT___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A6417E0)

inline static constexpr unsigned int ReplayCheckpoint_TypeDefinitionIndex = 33008;

class ReplayCheckpoint : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::ReplayCheckpointElement*>* elements; // 0x10
	::System::Int32 timeCursor; // 0x18
	::System::String* format; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REPLAYCHECKPOINT__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + REPLAYCHECKPOINT_TOSTRING_OFFSET))(this);
	}

	::System::String* __base_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + REPLAYCHECKPOINT___BASE_TOSTRING_OFFSET))(this);
	}
};
