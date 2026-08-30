#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/BaseLeverSwitchSystem_1.h"

class Class_1_2CDF619C23140440;
class Class_2_B8E38BF47138A2E5;
class Class_3_912CC478F2B21832;
namespace System { class String; }

#define CLASS_2_9341FA4C770FE8EF_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x17FFEEC0)
#define CLASS_2_9341FA4C770FE8EF__CREATEINTERACTTRIGGER_OFFSET UNITYSDK_OFFSET(0x17FFEF80)
#define CLASS_2_9341FA4C770FE8EF__CREATEPROPMOVETRIGGER_OFFSET UNITYSDK_OFFSET(0x17FFF140)
#define CLASS_2_9341FA4C770FE8EF__CTOR_OFFSET UNITYSDK_OFFSET(0x17FFEC90)
#define CLASS_2_9341FA4C770FE8EF__ONLEVELVARCHANGE_OFFSET UNITYSDK_OFFSET(0x17FFF190)
#define CLASS_2_9341FA4C770FE8EF__TEARDOWN_OFFSET UNITYSDK_OFFSET(0x17FFEF00)
#define CLASS_2_9341FA4C770FE8EF___CREATEINTERACTTRIGGER_B__3_0_OFFSET UNITYSDK_OFFSET(0x17FFF360)

inline static constexpr unsigned int Class_2_9341FA4C770FE8EF_TypeDefinitionIndex = 76303;

class Class_2_9341FA4C770FE8EF : public ::RPG::Client::LittleGame::FiveDim::BaseLeverSwitchSystem_1<::Class_2_B8E38BF47138A2E5*>
{
public:
	::Class_3_912CC478F2B21832* PDENFEFCAGN; // 0x40
	::Class_1_2CDF619C23140440* FKINCGODJEP; // 0x48

	::System::Void _ctor(::Class_1_2CDF619C23140440* a1, ::Class_3_912CC478F2B21832* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2CDF619C23140440*, ::Class_3_912CC478F2B21832*))((::PBYTE)hIl2Cpp + CLASS_2_9341FA4C770FE8EF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9341FA4C770FE8EF_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void _TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9341FA4C770FE8EF__TEARDOWN_OFFSET))(this);
	}

	::System::Void _CreateInteractTrigger(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_2_9341FA4C770FE8EF__CREATEINTERACTTRIGGER_OFFSET))(this, a1);
	}

	::System::Void _CreatePropMoveTrigger(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_2_9341FA4C770FE8EF__CREATEPROPMOVETRIGGER_OFFSET))(this, a1);
	}

	::System::Void _OnLevelVarChange(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_9341FA4C770FE8EF__ONLEVELVARCHANGE_OFFSET))(this, a1, a2);
	}

	::System::Void __CreateInteractTrigger_b__3_0(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_2_9341FA4C770FE8EF___CREATEINTERACTTRIGGER_B__3_0_OFFSET))(this, a1);
	}
};
