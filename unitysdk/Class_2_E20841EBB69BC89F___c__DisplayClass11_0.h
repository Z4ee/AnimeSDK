#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Unit.h"
#include "unitysdk/System/Object.h"

class Class_2_E20841EBB69BC89F;
namespace R3 { template <typename T> class Observer_1; }

#define CLASS_2_E20841EBB69BC89F___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC87F10)
#define CLASS_2_E20841EBB69BC89F___C__DISPLAYCLASS11_0__SUBSCRIBECORE_B__0_OFFSET UNITYSDK_OFFSET(0x1EC88120)

inline static constexpr unsigned int Class_2_E20841EBB69BC89F___c__DisplayClass11_0_TypeDefinitionIndex = 44242;

class Class_2_E20841EBB69BC89F___c__DisplayClass11_0 : public ::System::Object
{
public:
	::Class_2_E20841EBB69BC89F* __4__this; // 0x10
	::R3::Observer_1<::System::Boolean>* observer; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E20841EBB69BC89F___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
	}

	::System::Void _SubscribeCore_b__0(::R3::Unit a1)
	{
		return ((::System::Void(*)(::PVOID, ::R3::Unit))((::PBYTE)hIl2Cpp + CLASS_2_E20841EBB69BC89F___C__DISPLAYCLASS11_0__SUBSCRIBECORE_B__0_OFFSET))(this, a1);
	}
};
