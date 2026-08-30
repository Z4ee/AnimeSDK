#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

class Class_0_16E4307DCC419505_464_Class_3_363670394F299996;
class Class_2_CB25D7A6FABF07EF;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitTargetAnimStateChange; }

#define CLASS_3_BA97AF5F6BCEBB46_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE8E8C0)
#define CLASS_3_BA97AF5F6BCEBB46_METHOD_3_66F2CCCBB85765BA_OFFSET UNITYSDK_OFFSET(0xBE8EE60)
#define CLASS_3_BA97AF5F6BCEBB46_METHOD_3_AF29D9D849AE3973_OFFSET UNITYSDK_OFFSET(0xBE8EB70)
#define CLASS_3_BA97AF5F6BCEBB46_METHOD_3_C3435D680BA1E779_OFFSET UNITYSDK_OFFSET(0xBE8EFA0)
#define CLASS_3_BA97AF5F6BCEBB46_TICK_OFFSET UNITYSDK_OFFSET(0xBE8E910)
#define CLASS_3_BA97AF5F6BCEBB46__CTOR_OFFSET UNITYSDK_OFFSET(0xBE8E4B0)
#define CLASS_3_BA97AF5F6BCEBB46__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xBE8EA60)
#define CLASS_3_BA97AF5F6BCEBB46__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xBE8EC70)
#define CLASS_3_BA97AF5F6BCEBB46__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xBE8ED70)

inline static constexpr unsigned int Class_3_BA97AF5F6BCEBB46_TypeDefinitionIndex = 59079;

class Class_3_BA97AF5F6BCEBB46 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitTargetAnimStateChange*>
{
public:
	::Class_2_CB25D7A6FABF07EF* KJEGMDFNNNC; // 0x68
	::Il2CppArray<::System::Int32>* LKIHOLGNJNF; // 0x70
	::Class_0_16E4307DCC419505_464_Class_3_363670394F299996* MDKANMOOKBF; // 0x78
	::Il2CppArray<::System::Int32>* EKINBDOHPFH; // 0x80
	::System::Int32 PNBLLILCHAG; // 0x88

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitTargetAnimStateChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitTargetAnimStateChange*))((::PBYTE)hIl2Cpp + CLASS_3_BA97AF5F6BCEBB46__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BA97AF5F6BCEBB46_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_BA97AF5F6BCEBB46_TICK_OFFSET))(this, a1);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BA97AF5F6BCEBB46__PREPAREDATA_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BA97AF5F6BCEBB46__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BA97AF5F6BCEBB46__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_66F2CCCBB85765BA(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_BA97AF5F6BCEBB46_METHOD_3_66F2CCCBB85765BA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_C3435D680BA1E779(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_BA97AF5F6BCEBB46_METHOD_3_C3435D680BA1E779_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_AF29D9D849AE3973(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_BA97AF5F6BCEBB46_METHOD_3_AF29D9D849AE3973_OFFSET))(this, a1);
	}
};
