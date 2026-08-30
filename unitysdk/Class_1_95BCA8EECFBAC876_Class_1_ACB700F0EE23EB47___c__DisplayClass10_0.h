#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_95BCA8EECFBAC876_CLASS_1_ACB700F0EE23EB47___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBB30360)

inline static constexpr unsigned int Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47___c__DisplayClass10_0_TypeDefinitionIndex = 49601;

class Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47___c__DisplayClass10_0 : public ::System::Object
{
public:
	::System::Action* onAllLoadingfinish; // 0x10
	::System::Int32 loadedCount; // 0x18
	::System::Int32 totalCount; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95BCA8EECFBAC876_CLASS_1_ACB700F0EE23EB47___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
	}
};
