#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8C3A95B582B69105_RF_RPGDemoBlockComponent.h"
#include "unitysdk/RPG/Client/LittleGameShare/ReplicationFlag.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_25;
class Class_0_16E4307DCC419505_26;

#define CLASS_1_8C3A95B582B69105_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x18A0CE20)
#define CLASS_1_8C3A95B582B69105_METHOD_1_51A463E3760BEF5A_OFFSET UNITYSDK_OFFSET(0x18A0CD80)
#define CLASS_1_8C3A95B582B69105_METHOD_1_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x18A0CDD0)
#define CLASS_1_8C3A95B582B69105_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18A0CD40)
#define CLASS_1_8C3A95B582B69105_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x18A0CD30)
#define CLASS_1_8C3A95B582B69105__CTOR_OFFSET UNITYSDK_OFFSET(0x18A0CE70)

inline static constexpr unsigned int Class_1_8C3A95B582B69105_TypeDefinitionIndex = 34852;

class Class_1_8C3A95B582B69105 : public ::System::Object
{
public:
	::Class_1_8C3A95B582B69105_RF_RPGDemoBlockComponent Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C3A95B582B69105__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C3A95B582B69105_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C3A95B582B69105_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_51A463E3760BEF5A(::Class_0_16E4307DCC419505_25* a1, ::RPG::Client::LittleGameShare::ReplicationFlag a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_25*, ::RPG::Client::LittleGameShare::ReplicationFlag))((::PBYTE)hIl2Cpp + CLASS_1_8C3A95B582B69105_METHOD_1_51A463E3760BEF5A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C50B93169B85DAEA(::Class_0_16E4307DCC419505_26* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_26*))((::PBYTE)hIl2Cpp + CLASS_1_8C3A95B582B69105_METHOD_1_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C3A95B582B69105_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};
