#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F44524D91BEABB41;

#define CLASS_1_46AC29DEBE45F8A8_3_GET_ENHANCEDCOUNT_OFFSET UNITYSDK_OFFSET(0xF23E0E0)
#define CLASS_1_46AC29DEBE45F8A8_3_GET_MAXENHANCEDCOUNT_OFFSET UNITYSDK_OFFSET(0xF23E100)
#define CLASS_1_46AC29DEBE45F8A8_3_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0xF23E080)
#define CLASS_1_46AC29DEBE45F8A8_3_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xF23E120)
#define CLASS_1_46AC29DEBE45F8A8_3_SET_ENHANCEDCOUNT_OFFSET UNITYSDK_OFFSET(0xF23E0F0)
#define CLASS_1_46AC29DEBE45F8A8_3_SET_MAXENHANCEDCOUNT_OFFSET UNITYSDK_OFFSET(0xF23E110)
#define CLASS_1_46AC29DEBE45F8A8_3__CTOR_OFFSET UNITYSDK_OFFSET(0xF23E170)

inline static constexpr unsigned int Class_1_46AC29DEBE45F8A8_3_TypeDefinitionIndex = 71462;

class Class_1_46AC29DEBE45F8A8_3 : public ::System::Object
{
public:
	::System::UInt32 _MaxEnhancedCount_k__BackingField; // 0x10
	::System::UInt32 _EnhancedCount_k__BackingField; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46AC29DEBE45F8A8_3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_F44524D91BEABB41* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F44524D91BEABB41*))((::PBYTE)hIl2Cpp + CLASS_1_46AC29DEBE45F8A8_3_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::UInt32 get_EnhancedCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46AC29DEBE45F8A8_3_GET_ENHANCEDCOUNT_OFFSET))(this);
	}

	::System::Void set_EnhancedCount(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_46AC29DEBE45F8A8_3_SET_ENHANCEDCOUNT_OFFSET))(this, a1);
	}

	::System::UInt32 get_MaxEnhancedCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46AC29DEBE45F8A8_3_GET_MAXENHANCEDCOUNT_OFFSET))(this);
	}

	::System::Void set_MaxEnhancedCount(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_46AC29DEBE45F8A8_3_SET_MAXENHANCEDCOUNT_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46AC29DEBE45F8A8_3_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};
