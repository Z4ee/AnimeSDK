#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_447ED43F9613F177_METHOD_1_1FA67F2466ED59EC_OFFSET UNITYSDK_OFFSET(0x184733B0)
#define CLASS_1_447ED43F9613F177__CTOR_OFFSET UNITYSDK_OFFSET(0x18473600)

inline static constexpr unsigned int Class_1_447ED43F9613F177_TypeDefinitionIndex = 10790;

class Class_1_447ED43F9613F177 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::RPG::Client::TextID Field_1_3; // 0x18
	::RPG::Client::TextID Field_1_2; // 0x28
	::System::UInt32 Field_1_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_447ED43F9613F177__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_1FA67F2466ED59EC(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_447ED43F9613F177*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_447ED43F9613F177*&))((::PBYTE)hIl2Cpp + CLASS_1_447ED43F9613F177_METHOD_1_1FA67F2466ED59EC_OFFSET))(a1, a2);
	}
};
