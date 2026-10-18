#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6930B63361973DE0_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0xB63E180)
#define CLASS_1_6930B63361973DE0_GET_DESC_OFFSET UNITYSDK_OFFSET(0xB63E160)
#define CLASS_1_6930B63361973DE0_GET_ISPERCENTAGE_OFFSET UNITYSDK_OFFSET(0xB63E1C0)
#define CLASS_1_6930B63361973DE0_GET_ISSHOWCURRENCY_OFFSET UNITYSDK_OFFSET(0xB63E1A0)
#define CLASS_1_6930B63361973DE0_METHOD_1_775062C1F458DB56_OFFSET UNITYSDK_OFFSET(0xB63E1E0)
#define CLASS_1_6930B63361973DE0_SET_AMOUNT_OFFSET UNITYSDK_OFFSET(0xB63E190)
#define CLASS_1_6930B63361973DE0_SET_DESC_OFFSET UNITYSDK_OFFSET(0xB63E170)
#define CLASS_1_6930B63361973DE0_SET_ISPERCENTAGE_OFFSET UNITYSDK_OFFSET(0xB63E1D0)
#define CLASS_1_6930B63361973DE0_SET_ISSHOWCURRENCY_OFFSET UNITYSDK_OFFSET(0xB63E1B0)
#define CLASS_1_6930B63361973DE0__CTOR_OFFSET UNITYSDK_OFFSET(0xB63E290)

inline static constexpr unsigned int Class_1_6930B63361973DE0_TypeDefinitionIndex = 80183;

class Class_1_6930B63361973DE0 : public ::System::Object
{
public:
	::System::UInt32 _Amount_k__BackingField; // 0x10
	::System::Boolean _IsPercentage_k__BackingField; // 0x14
	::System::Boolean _IsShowCurrency_k__BackingField; // 0x15
	::RPG::Client::TextID _Desc_k__BackingField; // 0x18

	::System::Void _ctor(::RPG::Client::TextID a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6930B63361973DE0__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::Client::TextID get_Desc()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6930B63361973DE0_GET_DESC_OFFSET))(this);
	}

	::System::Void set_Desc(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_6930B63361973DE0_SET_DESC_OFFSET))(this, a1);
	}

	::System::UInt32 get_Amount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6930B63361973DE0_GET_AMOUNT_OFFSET))(this);
	}

	::System::Void set_Amount(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6930B63361973DE0_SET_AMOUNT_OFFSET))(this, a1);
	}

	::System::Boolean get_IsShowCurrency()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6930B63361973DE0_GET_ISSHOWCURRENCY_OFFSET))(this);
	}

	::System::Void set_IsShowCurrency(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6930B63361973DE0_SET_ISSHOWCURRENCY_OFFSET))(this, a1);
	}

	::System::Boolean get_IsPercentage()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6930B63361973DE0_GET_ISPERCENTAGE_OFFSET))(this);
	}

	::System::Void set_IsPercentage(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6930B63361973DE0_SET_ISPERCENTAGE_OFFSET))(this, a1);
	}

	static ::Class_1_6930B63361973DE0* Method_1_775062C1F458DB56(::RPG::Client::TextID a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::Class_1_6930B63361973DE0*(*)(::RPG::Client::TextID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6930B63361973DE0_METHOD_1_775062C1F458DB56_OFFSET))(a1, a2, a3, a4);
	}
};
