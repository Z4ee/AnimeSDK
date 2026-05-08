#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_785FDC7D0DA58280.h"
#include "unitysdk/Enum_3_DBB7511427FD4D1E.h"

class Class_1_E591DF54310AABF5;
namespace System { class String; }

#define CLASS_3_683292AB9864A557_METHOD_3_22DA4FA4B8D8085F_OFFSET UNITYSDK_OFFSET(0x1B534B90)
#define CLASS_3_683292AB9864A557_METHOD_3_3364E236FA111E2B_OFFSET UNITYSDK_OFFSET(0x1B539320)
#define CLASS_3_683292AB9864A557__CTOR_OFFSET UNITYSDK_OFFSET(0x1B539310)

inline static constexpr unsigned int Class_3_683292AB9864A557_TypeDefinitionIndex = 35794;

class Class_3_683292AB9864A557 : public ::Class_2_785FDC7D0DA58280
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_683292AB9864A557__CTOR_OFFSET))(this);
	}

	::Class_2_785FDC7D0DA58280* Method_3_22DA4FA4B8D8085F(::Class_1_E591DF54310AABF5* a1, ::Enum_3_DBB7511427FD4D1E a2, ::System::String* a3, ::System::String* a4)
	{
		return ((::Class_2_785FDC7D0DA58280*(*)(::PVOID, ::Class_1_E591DF54310AABF5*, ::Enum_3_DBB7511427FD4D1E, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_683292AB9864A557_METHOD_3_22DA4FA4B8D8085F_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_2_785FDC7D0DA58280* Method_3_3364E236FA111E2B(::Class_1_E591DF54310AABF5* a1, ::Enum_3_DBB7511427FD4D1E a2, ::System::String* a3, ::System::String* a4)
	{
		return ((::Class_2_785FDC7D0DA58280*(*)(::PVOID, ::Class_1_E591DF54310AABF5*, ::Enum_3_DBB7511427FD4D1E, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_683292AB9864A557_METHOD_3_3364E236FA111E2B_OFFSET))(this, a1, a2, a3, a4);
	}
};
