#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_74B3C7F8777664B7___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10B1E850)
#define CLASS_2_74B3C7F8777664B7___C__DISPLAYCLASS3_0___DOACTION_B__0_OFFSET UNITYSDK_OFFSET(0x10B1F960)

inline static constexpr unsigned int Class_2_74B3C7F8777664B7___c__DisplayClass3_0_TypeDefinitionIndex = 48216;

class Class_2_74B3C7F8777664B7___c__DisplayClass3_0 : public ::System::Object
{
public:
	::System::Func_1<::System::String*>* __9__0; // 0x10
	::System::Int32 i; // 0x18
	::System::Int32 totalCount; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74B3C7F8777664B7___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::String* __DoAction_b__0()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74B3C7F8777664B7___C__DISPLAYCLASS3_0___DOACTION_B__0_OFFSET))(this);
	}
};
