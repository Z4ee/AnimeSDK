#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ReplayChangeEvent;
class ReplayCheckpoint;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define REPLAYFULLDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A641860)
#define REPLAYFULLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A62C0D0)
#define REPLAYFULLDATA___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A6418B0)

inline static constexpr unsigned int ReplayFullData_TypeDefinitionIndex = 33045;

class ReplayFullData : public ::System::Object
{
public:
	::System::Int32 version; // 0x10
	::ReplayCheckpoint* initialState; // 0x18
	::System::Collections::Generic::List_1<::ReplayChangeEvent*>* changes; // 0x20
	::System::Single totalDuration; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REPLAYFULLDATA__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + REPLAYFULLDATA_TOSTRING_OFFSET))(this);
	}

	::System::String* __base_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + REPLAYFULLDATA___BASE_TOSTRING_OFFSET))(this);
	}
};
