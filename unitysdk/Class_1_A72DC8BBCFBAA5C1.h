#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A72DC8BBCFBAA5C1_RF_PredicateComponent.h"
#include "unitysdk/RPG/Client/LittleGameShare/ReplicationFlag.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_25;
class Class_0_16E4307DCC419505_26;

#define CLASS_1_A72DC8BBCFBAA5C1_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x18A91110)
#define CLASS_1_A72DC8BBCFBAA5C1_METHOD_1_51A463E3760BEF5A_OFFSET UNITYSDK_OFFSET(0x18A91070)
#define CLASS_1_A72DC8BBCFBAA5C1_METHOD_1_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x18A910C0)
#define CLASS_1_A72DC8BBCFBAA5C1_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18A91030)
#define CLASS_1_A72DC8BBCFBAA5C1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x18A91020)
#define CLASS_1_A72DC8BBCFBAA5C1__CTOR_OFFSET UNITYSDK_OFFSET(0x18A91160)

inline static constexpr unsigned int Class_1_A72DC8BBCFBAA5C1_TypeDefinitionIndex = 34622;

class Class_1_A72DC8BBCFBAA5C1 : public ::System::Object
{
public:
	::Class_1_A72DC8BBCFBAA5C1_RF_PredicateComponent Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A72DC8BBCFBAA5C1__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A72DC8BBCFBAA5C1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A72DC8BBCFBAA5C1_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_51A463E3760BEF5A(::Class_0_16E4307DCC419505_25* a1, ::RPG::Client::LittleGameShare::ReplicationFlag a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_25*, ::RPG::Client::LittleGameShare::ReplicationFlag))((::PBYTE)hIl2Cpp + CLASS_1_A72DC8BBCFBAA5C1_METHOD_1_51A463E3760BEF5A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C50B93169B85DAEA(::Class_0_16E4307DCC419505_26* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_26*))((::PBYTE)hIl2Cpp + CLASS_1_A72DC8BBCFBAA5C1_METHOD_1_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A72DC8BBCFBAA5C1_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};
