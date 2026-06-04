#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CLASS_1_84A07760AC2FB46B___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA519280)
#define CLASS_1_84A07760AC2FB46B___C__DISPLAYCLASS3_0__OPENBUFFSELECTWINDOW_B__0_OFFSET UNITYSDK_OFFSET(0xA519BD0)

inline static constexpr unsigned int Class_1_84A07760AC2FB46B___c__DisplayClass3_0_TypeDefinitionIndex = 74170;

class Class_1_84A07760AC2FB46B___c__DisplayClass3_0 : public ::System::Object
{
public:
	::System::Action_1<::System::UInt32>* onSelect; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84A07760AC2FB46B___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Void _OpenBuffSelectWindow_b__0(::System::Object* a1, ::System::Int32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_84A07760AC2FB46B___C__DISPLAYCLASS3_0__OPENBUFFSELECTWINDOW_B__0_OFFSET))(this, a1, a2, a3);
	}
};
