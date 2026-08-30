#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_7BCB0B878B94D77E.h"

class Class_1_A043D803AC652E6E;

#define CLASS_4_7BBF5741760B3DB7_CLONE_OFFSET UNITYSDK_OFFSET(0xBAC1640)
#define CLASS_4_7BBF5741760B3DB7_METHOD_4_0A23FAE48DC5D44D_OFFSET UNITYSDK_OFFSET(0xBAC1460)
#define CLASS_4_7BBF5741760B3DB7_METHOD_4_2CF8608C687C3084_OFFSET UNITYSDK_OFFSET(0xBAC1580)
#define CLASS_4_7BBF5741760B3DB7_METHOD_4_4E907CA2423C42AC_OFFSET UNITYSDK_OFFSET(0xBAC1420)
#define CLASS_4_7BBF5741760B3DB7_METHOD_4_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0xBAC1690)
#define CLASS_4_7BBF5741760B3DB7_REVERSE_OFFSET UNITYSDK_OFFSET(0xBAC15F0)
#define CLASS_4_7BBF5741760B3DB7__CTOR_OFFSET UNITYSDK_OFFSET(0xBAC1560)

inline static constexpr unsigned int Class_4_7BBF5741760B3DB7_TypeDefinitionIndex = 73395;

class Class_4_7BBF5741760B3DB7 : public ::Class_3_7BCB0B878B94D77E
{
public:
	::System::Boolean IJBBMNNLFMH; // 0x38
	::System::Boolean NGFNMEBCAIB; // 0x39
	::System::Single OPPCPHJGDEF; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7BBF5741760B3DB7__CTOR_OFFSET))(this);
	}

	static ::Class_4_7BBF5741760B3DB7* Method_4_4E907CA2423C42AC()
	{
		return ((::Class_4_7BBF5741760B3DB7*(*)())((::PBYTE)hIl2Cpp + CLASS_4_7BBF5741760B3DB7_METHOD_4_4E907CA2423C42AC_OFFSET))();
	}

	static ::Class_4_7BBF5741760B3DB7* Method_4_0A23FAE48DC5D44D(::System::Single a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::Class_4_7BBF5741760B3DB7*(*)(::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_7BBF5741760B3DB7_METHOD_4_0A23FAE48DC5D44D_OFFSET))(a1, a2, a3);
	}

	::System::Boolean Method_4_2CF8608C687C3084(::System::Single a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_7BBF5741760B3DB7_METHOD_4_2CF8608C687C3084_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_A043D803AC652E6E* Reverse()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7BBF5741760B3DB7_REVERSE_OFFSET))(this);
	}

	::Class_1_A043D803AC652E6E* Clone()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7BBF5741760B3DB7_CLONE_OFFSET))(this);
	}

	::System::Void Method_4_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_7BBF5741760B3DB7_METHOD_4_8FAD57395F26ACC4_OFFSET))(this, a1);
	}
};
