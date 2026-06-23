#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_76F536CF0A35A397.h"
#include "unitysdk/Enum_3_A4A195CC0725D652.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_E7122B260F53D226_METHOD_1_4D1D8822041671F9_OFFSET UNITYSDK_OFFSET(0x11AF1170)
#define CLASS_1_E7122B260F53D226_METHOD_1_5BF0E61BD5CA40A5_OFFSET UNITYSDK_OFFSET(0x11AF1390)
#define CLASS_1_E7122B260F53D226_METHOD_1_644BB790D5F70195_1_OFFSET UNITYSDK_OFFSET(0x11AF12B0)
#define CLASS_1_E7122B260F53D226_METHOD_1_644BB790D5F70195_OFFSET UNITYSDK_OFFSET(0x11AF1090)
#define CLASS_1_E7122B260F53D226__CTOR_OFFSET UNITYSDK_OFFSET(0x11AF1430)

inline static constexpr unsigned int Class_1_E7122B260F53D226_TypeDefinitionIndex = 83796;

class Class_1_E7122B260F53D226 : public ::System::Object
{
public:
	::System::UInt64 Field_1_2; // 0x10
	::System::UInt64 Field_1_3; // 0x18
	::Enum_3_A4A195CC0725D652 Field_1_1; // 0x20
	::Enum_3_76F536CF0A35A397 Field_1_0; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7122B260F53D226__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_644BB790D5F70195()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7122B260F53D226_METHOD_1_644BB790D5F70195_OFFSET))(this);
	}

	::System::String* Method_1_4D1D8822041671F9()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7122B260F53D226_METHOD_1_4D1D8822041671F9_OFFSET))(this);
	}

	::System::String* Method_1_644BB790D5F70195_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7122B260F53D226_METHOD_1_644BB790D5F70195_1_OFFSET))(this);
	}

	::System::String* Method_1_5BF0E61BD5CA40A5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7122B260F53D226_METHOD_1_5BF0E61BD5CA40A5_OFFSET))(this);
	}
};
