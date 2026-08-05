#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_76F536CF0A35A397.h"
#include "unitysdk/Enum_3_A4A195CC0725D652.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_E7122B260F53D226_METHOD_1_4D1D8822041671F9_OFFSET UNITYSDK_OFFSET(0x11FC6BC0)
#define CLASS_1_E7122B260F53D226_METHOD_1_58DAEED9D5C97327_1_OFFSET UNITYSDK_OFFSET(0x11FC6D00)
#define CLASS_1_E7122B260F53D226_METHOD_1_58DAEED9D5C97327_OFFSET UNITYSDK_OFFSET(0x11FC6AE0)
#define CLASS_1_E7122B260F53D226_METHOD_1_5BF0E61BD5CA40A5_OFFSET UNITYSDK_OFFSET(0x11FC6DE0)
#define CLASS_1_E7122B260F53D226__CTOR_OFFSET UNITYSDK_OFFSET(0x11FC6E80)

inline static constexpr unsigned int Class_1_E7122B260F53D226_TypeDefinitionIndex = 40293;

class Class_1_E7122B260F53D226 : public ::System::Object
{
public:
	::System::UInt64 Field_1_6; // 0x10
	::Enum_3_A4A195CC0725D652 Field_1_0; // 0x18
	::Enum_3_76F536CF0A35A397 Field_1_1; // 0x1C
	::System::UInt64 Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7122B260F53D226__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_58DAEED9D5C97327()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7122B260F53D226_METHOD_1_58DAEED9D5C97327_OFFSET))(this);
	}

	::System::String* Method_1_4D1D8822041671F9()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7122B260F53D226_METHOD_1_4D1D8822041671F9_OFFSET))(this);
	}

	::System::String* Method_1_58DAEED9D5C97327_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7122B260F53D226_METHOD_1_58DAEED9D5C97327_1_OFFSET))(this);
	}

	::System::String* Method_1_5BF0E61BD5CA40A5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7122B260F53D226_METHOD_1_5BF0E61BD5CA40A5_OFFSET))(this);
	}
};
