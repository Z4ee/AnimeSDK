#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DE7552E11FB0BAEE;
namespace System { class Type; }

#define CLASS_1_1AF9C4B0B019563B_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1557E4C0)
#define CLASS_1_1AF9C4B0B019563B__CTOR_OFFSET UNITYSDK_OFFSET(0x1557E3E0)

inline static constexpr unsigned int Class_1_1AF9C4B0B019563B_TypeDefinitionIndex = 44901;

class Class_1_1AF9C4B0B019563B : public ::System::Object
{
public:
	::Class_1_DE7552E11FB0BAEE* Field_1_5; // 0x10
	::System::Type* Field_1_0; // 0x18
	::System::UInt32 Field_1_6; // 0x20
	::System::UInt32 Field_1_7; // 0x24

	::System::Void _ctor(::System::Type* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1AF9C4B0B019563B__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AF9C4B0B019563B_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}
};
