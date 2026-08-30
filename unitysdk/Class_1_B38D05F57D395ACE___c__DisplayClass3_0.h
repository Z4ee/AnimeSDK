#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B38D05F57D395ACE_Class_1_341DCA219041A25A;
namespace System { class String; }

#define CLASS_1_B38D05F57D395ACE___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18943DB0)
#define CLASS_1_B38D05F57D395ACE___C__DISPLAYCLASS3_0__GETMCVINFO_B__0_OFFSET UNITYSDK_OFFSET(0x18943E40)

inline static constexpr unsigned int Class_1_B38D05F57D395ACE___c__DisplayClass3_0_TypeDefinitionIndex = 72859;

class Class_1_B38D05F57D395ACE___c__DisplayClass3_0 : public ::System::Object
{
public:
	::System::String* name; // 0x10
	::System::UInt32 missionID; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B38D05F57D395ACE___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetMCVInfo_b__0(::Class_1_B38D05F57D395ACE_Class_1_341DCA219041A25A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B38D05F57D395ACE_Class_1_341DCA219041A25A*))((::PBYTE)hIl2Cpp + CLASS_1_B38D05F57D395ACE___C__DISPLAYCLASS3_0__GETMCVINFO_B__0_OFFSET))(this, a1);
	}
};
