#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A72DC8BBCFBAA5C1_RF_PredicateComponent.h"
#include "unitysdk/RPG/Client/LittleGameShare/ReplicationFlag.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_26;
class Class_0_16E4307DCC419505_27;

#define CLASS_1_A72DC8BBCFBAA5C1_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x165BCF40)
#define CLASS_1_A72DC8BBCFBAA5C1_METHOD_1_51A463E3760BEF5A_OFFSET UNITYSDK_OFFSET(0x165BCEA0)
#define CLASS_1_A72DC8BBCFBAA5C1_METHOD_1_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x165BCEF0)
#define CLASS_1_A72DC8BBCFBAA5C1_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x165BCE60)
#define CLASS_1_A72DC8BBCFBAA5C1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x165BCE50)
#define CLASS_1_A72DC8BBCFBAA5C1__CTOR_OFFSET UNITYSDK_OFFSET(0x165BCF90)

inline static constexpr unsigned int Class_1_A72DC8BBCFBAA5C1_TypeDefinitionIndex = 28611;

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

	::System::Void Method_1_51A463E3760BEF5A(::Class_0_16E4307DCC419505_26* a1, ::RPG::Client::LittleGameShare::ReplicationFlag a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_26*, ::RPG::Client::LittleGameShare::ReplicationFlag))((::PBYTE)hIl2Cpp + CLASS_1_A72DC8BBCFBAA5C1_METHOD_1_51A463E3760BEF5A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C50B93169B85DAEA(::Class_0_16E4307DCC419505_27* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_27*))((::PBYTE)hIl2Cpp + CLASS_1_A72DC8BBCFBAA5C1_METHOD_1_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A72DC8BBCFBAA5C1_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};
