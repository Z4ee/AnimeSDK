#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CONVERTHELPER_CHARTOINT_OFFSET UNITYSDK_OFFSET(0x130FB600)
#define CONVERTHELPER_STRINGTOINTLIST_OFFSET UNITYSDK_OFFSET(0x130FB650)

inline static constexpr unsigned int ConvertHelper_TypeDefinitionIndex = 73989;

class ConvertHelper : public ::System::Object
{
public:
	static ::System::Int32 CharToInt(::System::Char value)
	{
		return ((::System::Int32(*)(::System::Char))((::PBYTE)hIl2Cpp + CONVERTHELPER_CHARTOINT_OFFSET))(value);
	}

	static ::System::Collections::Generic::List_1<::System::Int32>* StringToIntList(::System::String* data)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CONVERTHELPER_STRINGTOINTLIST_OFFSET))(data);
	}
};
