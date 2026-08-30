#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_597153A2A72E5780_GET_ISINCREASE_OFFSET UNITYSDK_OFFSET(0x1617C260)
#define CLASS_1_597153A2A72E5780_GET_TARGETID_OFFSET UNITYSDK_OFFSET(0x1617C2A0)
#define CLASS_1_597153A2A72E5780_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1617C280)
#define CLASS_1_597153A2A72E5780_SET_ISINCREASE_OFFSET UNITYSDK_OFFSET(0x1617C270)
#define CLASS_1_597153A2A72E5780_SET_TARGETID_OFFSET UNITYSDK_OFFSET(0x1617C2B0)
#define CLASS_1_597153A2A72E5780_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1617C290)
#define CLASS_1_597153A2A72E5780__CTOR_OFFSET UNITYSDK_OFFSET(0x1617C2C0)

inline static constexpr unsigned int Class_1_597153A2A72E5780_TypeDefinitionIndex = 66786;

class Class_1_597153A2A72E5780 : public ::System::Object
{
public:
	::System::UInt32 _Value_k__BackingField; // 0x10
	::System::Boolean _IsIncrease_k__BackingField; // 0x14
	::System::UInt32 _TargetID_k__BackingField; // 0x18

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_597153A2A72E5780__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean get_IsIncrease()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_597153A2A72E5780_GET_ISINCREASE_OFFSET))(this);
	}

	::System::Void set_IsIncrease(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_597153A2A72E5780_SET_ISINCREASE_OFFSET))(this, a1);
	}

	::System::UInt32 get_Value()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_597153A2A72E5780_GET_VALUE_OFFSET))(this);
	}

	::System::Void set_Value(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_597153A2A72E5780_SET_VALUE_OFFSET))(this, a1);
	}

	::System::UInt32 get_TargetID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_597153A2A72E5780_GET_TARGETID_OFFSET))(this);
	}

	::System::Void set_TargetID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_597153A2A72E5780_SET_TARGETID_OFFSET))(this, a1);
	}
};
