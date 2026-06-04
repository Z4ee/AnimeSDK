#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7D0B754E2D8CECAF;
class Class_1_E4E2AE39E24CB0F9;
class Class_3_FA020C2C23A72B3F;
namespace RPG::Client::CakeRace { class CakeRaceTriggerEventDataItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BB4E40BB81EEDE3B_METHOD_1_34BC8282ADEBDD26_OFFSET UNITYSDK_OFFSET(0x13BDBFC0)
#define CLASS_1_BB4E40BB81EEDE3B_METHOD_1_AFB750A8C52EF41D_OFFSET UNITYSDK_OFFSET(0x13BDC090)
#define CLASS_1_BB4E40BB81EEDE3B_METHOD_1_B06F516E4459C742_OFFSET UNITYSDK_OFFSET(0x13BDC1C0)
#define CLASS_1_BB4E40BB81EEDE3B_METHOD_1_CA431E6C10DB852F_OFFSET UNITYSDK_OFFSET(0x13BDC760)
#define CLASS_1_BB4E40BB81EEDE3B_METHOD_1_CEA7C5E1B46DA618_OFFSET UNITYSDK_OFFSET(0x13BDC3B0)
#define CLASS_1_BB4E40BB81EEDE3B_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0x13BDC070)
#define CLASS_1_BB4E40BB81EEDE3B__CTOR_OFFSET UNITYSDK_OFFSET(0x13BDC160)

inline static constexpr unsigned int Class_1_BB4E40BB81EEDE3B_TypeDefinitionIndex = 72626;

class Class_1_BB4E40BB81EEDE3B : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_E4E2AE39E24CB0F9*>* Field_1_0; // 0x10
	::RPG::Client::CakeRace::CakeRaceTriggerEventDataItem* Field_1_1; // 0x18

	::System::Void _ctor(::RPG::Client::CakeRace::CakeRaceTriggerEventDataItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceTriggerEventDataItem*))((::PBYTE)hIl2Cpp + CLASS_1_BB4E40BB81EEDE3B__CTOR_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::UInt32>* Method_1_34BC8282ADEBDD26()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4E40BB81EEDE3B_METHOD_1_34BC8282ADEBDD26_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4E40BB81EEDE3B_METHOD_1_D978819B0A4871A0_OFFSET))(this);
	}

	static ::Class_1_BB4E40BB81EEDE3B* Method_1_AFB750A8C52EF41D(::RPG::Client::CakeRace::CakeRaceTriggerEventDataItem* a1)
	{
		return ((::Class_1_BB4E40BB81EEDE3B*(*)(::RPG::Client::CakeRace::CakeRaceTriggerEventDataItem*))((::PBYTE)hIl2Cpp + CLASS_1_BB4E40BB81EEDE3B_METHOD_1_AFB750A8C52EF41D_OFFSET))(a1);
	}

	::System::Void Method_1_B06F516E4459C742()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4E40BB81EEDE3B_METHOD_1_B06F516E4459C742_OFFSET))(this);
	}

	::System::Void Method_1_CEA7C5E1B46DA618(::Class_3_FA020C2C23A72B3F* a1, ::Class_1_7D0B754E2D8CECAF* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_FA020C2C23A72B3F*, ::Class_1_7D0B754E2D8CECAF*))((::PBYTE)hIl2Cpp + CLASS_1_BB4E40BB81EEDE3B_METHOD_1_CEA7C5E1B46DA618_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_CA431E6C10DB852F(::Class_3_FA020C2C23A72B3F* a1, ::Class_1_7D0B754E2D8CECAF* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_FA020C2C23A72B3F*, ::Class_1_7D0B754E2D8CECAF*))((::PBYTE)hIl2Cpp + CLASS_1_BB4E40BB81EEDE3B_METHOD_1_CA431E6C10DB852F_OFFSET))(this, a1, a2);
	}
};
