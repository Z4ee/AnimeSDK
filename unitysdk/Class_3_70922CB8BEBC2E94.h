#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_688FBF6C0FC439E7_Class_2_2B2DA72811ABBD65.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"

namespace System { class String; }

#define CLASS_3_70922CB8BEBC2E94_METHOD_3_0D771ED379BBF670_OFFSET UNITYSDK_OFFSET(0x12C59110)
#define CLASS_3_70922CB8BEBC2E94_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x12C59480)
#define CLASS_3_70922CB8BEBC2E94_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x12C593E0)
#define CLASS_3_70922CB8BEBC2E94_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x12C595A0)
#define CLASS_3_70922CB8BEBC2E94_METHOD_3_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x12C590A0)
#define CLASS_3_70922CB8BEBC2E94__CTOR_OFFSET UNITYSDK_OFFSET(0x12C59080)

inline static constexpr unsigned int Class_3_70922CB8BEBC2E94_TypeDefinitionIndex = 66583;

class Class_3_70922CB8BEBC2E94 : public ::Class_1_688FBF6C0FC439E7_Class_2_2B2DA72811ABBD65
{
public:
	::System::String* Field_3_0; // 0x28
	::MoleMole::Config::ValueCompareType Field_3_1; // 0x30
	::System::Int32 Field_3_2; // 0x34

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ValueCompareType a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ValueCompareType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_70922CB8BEBC2E94__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_3_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70922CB8BEBC2E94_METHOD_3_F026F9F94BAA5E1F_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70922CB8BEBC2E94_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Boolean Method_3_0D771ED379BBF670()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70922CB8BEBC2E94_METHOD_3_0D771ED379BBF670_OFFSET))(this);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70922CB8BEBC2E94_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70922CB8BEBC2E94_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
