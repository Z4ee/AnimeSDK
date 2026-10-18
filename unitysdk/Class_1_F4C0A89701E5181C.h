#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_123;
namespace System { class Action; }

#define CLASS_1_F4C0A89701E5181C_ADD_ONCURRENTCOUNTCHANGED_OFFSET UNITYSDK_OFFSET(0xB3CDF20)
#define CLASS_1_F4C0A89701E5181C_ADD_ONISCHECKEDCHANGED_OFFSET UNITYSDK_OFFSET(0xB3CDD70)
#define CLASS_1_F4C0A89701E5181C_GET_ISLAST_OFFSET UNITYSDK_OFFSET(0xB3CDFE0)
#define CLASS_1_F4C0A89701E5181C_GET_TARGETCOUNT_OFFSET UNITYSDK_OFFSET(0xB3CDE30)
#define CLASS_1_F4C0A89701E5181C_GET_TRAIT_OFFSET UNITYSDK_OFFSET(0xB3CDCA0)
#define CLASS_1_F4C0A89701E5181C_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0xB3CDD00)
#define CLASS_1_F4C0A89701E5181C_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xB3CDCC0)
#define CLASS_1_F4C0A89701E5181C_METHOD_1_6B41BE7E4514AB9F_OFFSET UNITYSDK_OFFSET(0xB3CDE50)
#define CLASS_1_F4C0A89701E5181C_METHOD_1_B1FEA5613A1B91EC_OFFSET UNITYSDK_OFFSET(0xB3CDE90)
#define CLASS_1_F4C0A89701E5181C_REMOVE_ONCURRENTCOUNTCHANGED_OFFSET UNITYSDK_OFFSET(0xB3CDF80)
#define CLASS_1_F4C0A89701E5181C_REMOVE_ONISCHECKEDCHANGED_OFFSET UNITYSDK_OFFSET(0xB3CDDD0)
#define CLASS_1_F4C0A89701E5181C_SET_ISLAST_OFFSET UNITYSDK_OFFSET(0xB3CDFF0)
#define CLASS_1_F4C0A89701E5181C_SET_TARGETCOUNT_OFFSET UNITYSDK_OFFSET(0xB3CDE40)
#define CLASS_1_F4C0A89701E5181C_SET_TRAIT_OFFSET UNITYSDK_OFFSET(0xB3CDCB0)
#define CLASS_1_F4C0A89701E5181C__CTOR_OFFSET UNITYSDK_OFFSET(0xB3CE000)

inline static constexpr unsigned int Class_1_F4C0A89701E5181C_TypeDefinitionIndex = 79429;

class Class_1_F4C0A89701E5181C : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_123* _Trait_k__BackingField; // 0x10
	::System::Action* OnCurrentCountChanged; // 0x18
	::System::Action* OnIsCheckedChanged; // 0x20
	::System::Int32 _TargetCount_k__BackingField; // 0x28
	::System::Nullable_1<::System::Int32> ADGBLJLHPPJ; // 0x2C
	::System::Boolean _IsLast_k__BackingField; // 0x34
	::System::Boolean PGNIIDNPONO; // 0x35

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4C0A89701E5181C__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_123* get_Trait()
	{
		return ((::Class_0_16E4307DCC419505_123*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4C0A89701E5181C_GET_TRAIT_OFFSET))(this);
	}

	::System::Void set_Trait(::Class_0_16E4307DCC419505_123* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_123*))((::PBYTE)hIl2Cpp + CLASS_1_F4C0A89701E5181C_SET_TRAIT_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4C0A89701E5181C_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F4C0A89701E5181C_METHOD_1_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void add_OnIsCheckedChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F4C0A89701E5181C_ADD_ONISCHECKEDCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnIsCheckedChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F4C0A89701E5181C_REMOVE_ONISCHECKEDCHANGED_OFFSET))(this, a1);
	}

	::System::Int32 get_TargetCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4C0A89701E5181C_GET_TARGETCOUNT_OFFSET))(this);
	}

	::System::Void set_TargetCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F4C0A89701E5181C_SET_TARGETCOUNT_OFFSET))(this, a1);
	}

	::System::Nullable_1<::System::Int32> Method_1_6B41BE7E4514AB9F()
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4C0A89701E5181C_METHOD_1_6B41BE7E4514AB9F_OFFSET))(this);
	}

	::System::Void Method_1_B1FEA5613A1B91EC(::System::Nullable_1<::System::Int32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_F4C0A89701E5181C_METHOD_1_B1FEA5613A1B91EC_OFFSET))(this, a1);
	}

	::System::Void add_OnCurrentCountChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F4C0A89701E5181C_ADD_ONCURRENTCOUNTCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnCurrentCountChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F4C0A89701E5181C_REMOVE_ONCURRENTCOUNTCHANGED_OFFSET))(this, a1);
	}

	::System::Boolean get_IsLast()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4C0A89701E5181C_GET_ISLAST_OFFSET))(this);
	}

	::System::Void set_IsLast(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F4C0A89701E5181C_SET_ISLAST_OFFSET))(this, a1);
	}
};
