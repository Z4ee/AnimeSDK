#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6348EB2BB7BBE450.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_164;
class Class_0_16E4307DCC419505_443;
namespace System { class Action; }

#define STRUCT_2_F0FCAFD40DAC2A75_METHOD_2_00565767C0636F17_OFFSET UNITYSDK_OFFSET(0x74E940)
#define STRUCT_2_F0FCAFD40DAC2A75_METHOD_2_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x50A4B0)
#define STRUCT_2_F0FCAFD40DAC2A75_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x2F0420)
#define STRUCT_2_F0FCAFD40DAC2A75_METHOD_2_E6A35D4A4480F7CF_OFFSET UNITYSDK_OFFSET(0x74E9A0)
#define STRUCT_2_F0FCAFD40DAC2A75__CTOR_OFFSET UNITYSDK_OFFSET(0x74E930)

inline static constexpr unsigned int Struct_2_F0FCAFD40DAC2A75_TypeDefinitionIndex = 78338;

struct alignas(8) Struct_2_F0FCAFD40DAC2A75
{
	// static const ::System::Int32 Field_2_0 = 0x1; // 0x0
	::Struct_2_6348EB2BB7BBE450 Field_2_1; // 0x10
	::System::Int32 Field_2_2; // 0x18

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_F0FCAFD40DAC2A75__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_00565767C0636F17(::Class_0_16E4307DCC419505_164* a1, ::Class_0_16E4307DCC419505_443*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_164*, ::Class_0_16E4307DCC419505_443*&))((::PBYTE)hIl2Cpp + STRUCT_2_F0FCAFD40DAC2A75_METHOD_2_00565767C0636F17_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F0FCAFD40DAC2A75_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean Method_2_E6A35D4A4480F7CF(::Class_0_16E4307DCC419505_443* a1, ::System::Action* a2, ::System::Action* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_443*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + STRUCT_2_F0FCAFD40DAC2A75_METHOD_2_E6A35D4A4480F7CF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_F0FCAFD40DAC2A75_METHOD_2_C114A1F8E08B6F92_OFFSET))(this, a1);
	}
};
