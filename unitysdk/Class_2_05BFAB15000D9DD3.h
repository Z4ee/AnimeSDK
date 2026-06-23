#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Class_2_15880D2539860D46_Enum_3_9DBA21A6F4C405AF.h"

#define CLASS_2_05BFAB15000D9DD3_METHOD_2_319E67987A023D08_OFFSET UNITYSDK_OFFSET(0x1900CDC0)
#define CLASS_2_05BFAB15000D9DD3_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x1900CCA0)
#define CLASS_2_05BFAB15000D9DD3_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1900CD30)
#define CLASS_2_05BFAB15000D9DD3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1900CC20)
#define CLASS_2_05BFAB15000D9DD3__CTOR_OFFSET UNITYSDK_OFFSET(0x1900CC90)

inline static constexpr unsigned int Class_2_05BFAB15000D9DD3_TypeDefinitionIndex = 83063;

class Class_2_05BFAB15000D9DD3 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_3 = 0xE9; // 0x0
	::Class_2_15880D2539860D46_Enum_3_9DBA21A6F4C405AF Field_2_2; // 0x20
	::System::Boolean Field_2_0; // 0x24
	::System::Int32 Field_2_1; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_05BFAB15000D9DD3__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05BFAB15000D9DD3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05BFAB15000D9DD3_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05BFAB15000D9DD3_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_319E67987A023D08(::System::UInt32 a1, ::System::Boolean a2, ::System::Int32 a3, ::Class_2_15880D2539860D46_Enum_3_9DBA21A6F4C405AF a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Int32, ::Class_2_15880D2539860D46_Enum_3_9DBA21A6F4C405AF))((::PBYTE)hIl2Cpp + CLASS_2_05BFAB15000D9DD3_METHOD_2_319E67987A023D08_OFFSET))(this, a1, a2, a3, a4);
	}
};
