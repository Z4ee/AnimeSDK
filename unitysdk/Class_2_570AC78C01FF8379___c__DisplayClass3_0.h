#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_570AC78C01FF8379___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCA4DDF0)
#define CLASS_2_570AC78C01FF8379___C__DISPLAYCLASS3_0___DOACTION_B__0_OFFSET UNITYSDK_OFFSET(0xCA4DE00)

inline static constexpr unsigned int Class_2_570AC78C01FF8379___c__DisplayClass3_0_TypeDefinitionIndex = 59720;

class Class_2_570AC78C01FF8379___c__DisplayClass3_0 : public ::System::Object
{
public:
	::System::Func_1<::System::String*>* __9__0; // 0x10
	::System::Int32 totalCount; // 0x18
	::System::Int32 i; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_570AC78C01FF8379___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::String* __DoAction_b__0()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_570AC78C01FF8379___C__DISPLAYCLASS3_0___DOACTION_B__0_OFFSET))(this);
	}
};
