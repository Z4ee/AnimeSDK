#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_D395F85669A37940_METHOD_1_41227539288E5252_OFFSET UNITYSDK_OFFSET(0x18F71620)
#define CLASS_1_D395F85669A37940_METHOD_1_BC71F75F8E31144B_OFFSET UNITYSDK_OFFSET(0x18F715C0)
#define CLASS_1_D395F85669A37940_METHOD_1_D730FAA68D83EE18_OFFSET UNITYSDK_OFFSET(0x18F714B0)
#define CLASS_1_D395F85669A37940__CTOR_OFFSET UNITYSDK_OFFSET(0x18F716C0)

inline static constexpr unsigned int Class_1_D395F85669A37940_TypeDefinitionIndex = 59779;

class Class_1_D395F85669A37940 : public ::System::Object
{
public:
	::System::Int64 KLKMBODEDDP; // 0x10
	::System::Double KBDPMBDJIOF; // 0x18
	::System::Int64 AKNJBPANGMD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D395F85669A37940__CTOR_OFFSET))(this);
	}

	static ::System::Double Method_1_D730FAA68D83EE18()
	{
		return ((::System::Double(*)())((::PBYTE)hIl2Cpp + CLASS_1_D395F85669A37940_METHOD_1_D730FAA68D83EE18_OFFSET))();
	}

	::System::Void Method_1_BC71F75F8E31144B(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_D395F85669A37940_METHOD_1_BC71F75F8E31144B_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_41227539288E5252(::System::Int64 a1)
	{
		return ((::System::Int64(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_D395F85669A37940_METHOD_1_41227539288E5252_OFFSET))(this, a1);
	}
};
