#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_884CDB9D0FDFAF0D_8.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_62FAE4C515F0D7E5___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0xEBAD020)
#define CLASS_1_62FAE4C515F0D7E5___C__DISPLAYCLASS20_0___ONSELFMARBLESELECTEDREQUESTED_B__0_OFFSET UNITYSDK_OFFSET(0xEBADDB0)

inline static constexpr unsigned int Class_1_62FAE4C515F0D7E5___c__DisplayClass20_0_TypeDefinitionIndex = 74726;

class Class_1_62FAE4C515F0D7E5___c__DisplayClass20_0 : public ::System::Object
{
public:
	::System::UInt32 marbleID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62FAE4C515F0D7E5___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __OnSelfMarbleSelectedRequested_b__0(::Struct_2_884CDB9D0FDFAF0D_8 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_884CDB9D0FDFAF0D_8))((::PBYTE)hIl2Cpp + CLASS_1_62FAE4C515F0D7E5___C__DISPLAYCLASS20_0___ONSELFMARBLESELECTEDREQUESTED_B__0_OFFSET))(this, a1);
	}
};
