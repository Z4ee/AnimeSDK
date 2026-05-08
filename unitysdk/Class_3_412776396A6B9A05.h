#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_785FDC7D0DA58280.h"
#include "unitysdk/Enum_3_DBB7511427FD4D1E.h"

class Class_1_E591DF54310AABF5;
namespace System { class String; }

#define CLASS_3_412776396A6B9A05_METHOD_3_3364E236FA111E2B_OFFSET UNITYSDK_OFFSET(0x1BF5A300)
#define CLASS_3_412776396A6B9A05_METHOD_3_7096862AB9981A26_OFFSET UNITYSDK_OFFSET(0x1BF5A260)
#define CLASS_3_412776396A6B9A05__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF5A2F0)

inline static constexpr unsigned int Class_3_412776396A6B9A05_TypeDefinitionIndex = 83202;

class Class_3_412776396A6B9A05 : public ::Class_2_785FDC7D0DA58280
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_412776396A6B9A05__CTOR_OFFSET))(this);
	}

	::Class_2_785FDC7D0DA58280* Method_3_7096862AB9981A26(::Class_1_E591DF54310AABF5* a1, ::Enum_3_DBB7511427FD4D1E a2, ::System::String* a3, ::System::String* a4)
	{
		return ((::Class_2_785FDC7D0DA58280*(*)(::PVOID, ::Class_1_E591DF54310AABF5*, ::Enum_3_DBB7511427FD4D1E, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_412776396A6B9A05_METHOD_3_7096862AB9981A26_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_2_785FDC7D0DA58280* Method_3_3364E236FA111E2B(::Class_1_E591DF54310AABF5* a1, ::Enum_3_DBB7511427FD4D1E a2, ::System::String* a3, ::System::String* a4)
	{
		return ((::Class_2_785FDC7D0DA58280*(*)(::PVOID, ::Class_1_E591DF54310AABF5*, ::Enum_3_DBB7511427FD4D1E, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_412776396A6B9A05_METHOD_3_3364E236FA111E2B_OFFSET))(this, a1, a2, a3, a4);
	}
};
