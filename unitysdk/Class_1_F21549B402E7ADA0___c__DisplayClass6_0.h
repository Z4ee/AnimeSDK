#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_1_F21549B402E7ADA0___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBE41100)
#define CLASS_1_F21549B402E7ADA0___C__DISPLAYCLASS6_0__FOREACHPETAPPEARANCE_B__0_OFFSET UNITYSDK_OFFSET(0xBE41320)

inline static constexpr unsigned int Class_1_F21549B402E7ADA0___c__DisplayClass6_0_TypeDefinitionIndex = 75727;

class Class_1_F21549B402E7ADA0___c__DisplayClass6_0 : public ::System::Object
{
public:
	::System::Action_2<::System::UInt32, ::System::UInt32>* action; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F21549B402E7ADA0___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _ForeachPetAppearance_b__0(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F21549B402E7ADA0___C__DISPLAYCLASS6_0__FOREACHPETAPPEARANCE_B__0_OFFSET))(this, a1, a2);
	}
};
