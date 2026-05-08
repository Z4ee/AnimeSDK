#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_11;
class Class_1_3056A65E74601914;
namespace System { class Action; }
namespace System { class String; }

#define CLASS_2_51B971E69E38047E_CLASS_1_5D1FA0E2442FF7E7_METHOD_1_865757D02ABCA9FC_OFFSET UNITYSDK_OFFSET(0xEA75470)
#define CLASS_2_51B971E69E38047E_CLASS_1_5D1FA0E2442FF7E7__CTOR_OFFSET UNITYSDK_OFFSET(0xEA75460)

inline static constexpr unsigned int Class_2_51B971E69E38047E_Class_1_5D1FA0E2442FF7E7_TypeDefinitionIndex = 80666;

class Class_2_51B971E69E38047E_Class_1_5D1FA0E2442FF7E7 : public ::System::Object
{
public:
	::System::Action* Field_1_2; // 0x10
	::Class_1_3056A65E74601914* Field_1_0; // 0x18
	::System::String* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51B971E69E38047E_CLASS_1_5D1FA0E2442FF7E7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_865757D02ABCA9FC(::Class_0_16E4307DCC419505_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + CLASS_2_51B971E69E38047E_CLASS_1_5D1FA0E2442FF7E7_METHOD_1_865757D02ABCA9FC_OFFSET))(this, a1);
	}
};
