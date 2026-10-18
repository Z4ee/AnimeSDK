#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CLASS_1_4AF5EF0BDDC23B6D___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB812B30)
#define CLASS_1_4AF5EF0BDDC23B6D___C__DISPLAYCLASS3_0__FOREACHPETID_B__0_OFFSET UNITYSDK_OFFSET(0xB812D20)

inline static constexpr unsigned int Class_1_4AF5EF0BDDC23B6D___c__DisplayClass3_0_TypeDefinitionIndex = 75669;

class Class_1_4AF5EF0BDDC23B6D___c__DisplayClass3_0 : public ::System::Object
{
public:
	::System::Action_1<::System::UInt32>* action; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF5EF0BDDC23B6D___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _ForeachPetId_b__0(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AF5EF0BDDC23B6D___C__DISPLAYCLASS3_0__FOREACHPETID_B__0_OFFSET))(this, a1);
	}
};
