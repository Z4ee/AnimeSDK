#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"

#define CLASS_2_4993EF21E5C1FE23_METHOD_2_2FE034579E1C08A7_OFFSET UNITYSDK_OFFSET(0x1430D340)
#define CLASS_2_4993EF21E5C1FE23_METHOD_2_41F8B8ACD2DFAAFE_OFFSET UNITYSDK_OFFSET(0x1430D160)
#define CLASS_2_4993EF21E5C1FE23_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x1430D220)
#define CLASS_2_4993EF21E5C1FE23_METHOD_2_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1430D120)
#define CLASS_2_4993EF21E5C1FE23_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1430D2B0)
#define CLASS_2_4993EF21E5C1FE23__CCTOR_OFFSET UNITYSDK_OFFSET(0x1430D1A0)
#define CLASS_2_4993EF21E5C1FE23__CTOR_OFFSET UNITYSDK_OFFSET(0x1430D210)

inline static constexpr unsigned int Class_2_4993EF21E5C1FE23_TypeDefinitionIndex = 91355;

class Class_2_4993EF21E5C1FE23 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_0 = 0x38; // 0x0
	::System::Int32 Field_2_2; // 0x20
	::MoleMole::Config::BuffGroupName Field_2_1; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4993EF21E5C1FE23__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4993EF21E5C1FE23__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_2_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4993EF21E5C1FE23_METHOD_2_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::MoleMole::Config::BuffGroupName Method_2_41F8B8ACD2DFAAFE()
	{
		return ((::MoleMole::Config::BuffGroupName(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4993EF21E5C1FE23_METHOD_2_41F8B8ACD2DFAAFE_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4993EF21E5C1FE23_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4993EF21E5C1FE23_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_2FE034579E1C08A7(::MoleMole::Config::BuffGroupName a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::BuffGroupName, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4993EF21E5C1FE23_METHOD_2_2FE034579E1C08A7_OFFSET))(this, a1, a2);
	}
};
