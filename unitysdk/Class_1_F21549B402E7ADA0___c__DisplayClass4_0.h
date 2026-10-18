#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CLASS_1_F21549B402E7ADA0___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBE39590)
#define CLASS_1_F21549B402E7ADA0___C__DISPLAYCLASS4_0__FOREACHPETID_B__0_OFFSET UNITYSDK_OFFSET(0xBE39A50)

inline static constexpr unsigned int Class_1_F21549B402E7ADA0___c__DisplayClass4_0_TypeDefinitionIndex = 75725;

class Class_1_F21549B402E7ADA0___c__DisplayClass4_0 : public ::System::Object
{
public:
	::System::Action_1<::System::UInt32>* action; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F21549B402E7ADA0___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _ForeachPetId_b__0(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F21549B402E7ADA0___C__DISPLAYCLASS4_0__FOREACHPETID_B__0_OFFSET))(this, a1);
	}
};
