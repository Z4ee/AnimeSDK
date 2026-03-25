#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

class Class_0_16E4307DCC419505_379_Class_3_363670394F299996;
class Class_2_705B862E649BF345;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitTargetAnimStateChange; }

#define CLASS_3_0751A94D040841F6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x106B14F0)
#define CLASS_3_0751A94D040841F6_METHOD_3_7D1E83D5DDC5BFAE_OFFSET UNITYSDK_OFFSET(0x106B1A90)
#define CLASS_3_0751A94D040841F6_METHOD_3_AF29D9D849AE3973_OFFSET UNITYSDK_OFFSET(0x106B17D0)
#define CLASS_3_0751A94D040841F6_METHOD_3_BED35D89A6A10D7A_OFFSET UNITYSDK_OFFSET(0x106B1D20)
#define CLASS_3_0751A94D040841F6_TICK_OFFSET UNITYSDK_OFFSET(0x106B1550)
#define CLASS_3_0751A94D040841F6__CTOR_OFFSET UNITYSDK_OFFSET(0x106B10C0)
#define CLASS_3_0751A94D040841F6__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x106B1720)
#define CLASS_3_0751A94D040841F6__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x106B18D0)
#define CLASS_3_0751A94D040841F6__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x106B19B0)
#define CLASS_3_0751A94D040841F6___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x106B1F60)
#define CLASS_3_0751A94D040841F6___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x106B1FC0)
#define CLASS_3_0751A94D040841F6___IFIXBASEPROXY__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x106B1FD0)
#define CLASS_3_0751A94D040841F6___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x106B1FE0)
#define CLASS_3_0751A94D040841F6___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x106B1FF0)

inline static constexpr unsigned int Class_3_0751A94D040841F6_TypeDefinitionIndex = 47599;

class Class_3_0751A94D040841F6 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitTargetAnimStateChange*>
{
public:
	::Class_0_16E4307DCC419505_379_Class_3_363670394F299996* Field_3_0; // 0x68
	::Il2CppArray<::System::Int32>* Field_3_3; // 0x70
	::Il2CppArray<::System::Int32>* Field_3_2; // 0x78
	::Class_2_705B862E649BF345* Field_3_4; // 0x80
	::System::Int32 Field_3_1; // 0x88

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitTargetAnimStateChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitTargetAnimStateChange*))((::PBYTE)hIl2Cpp + CLASS_3_0751A94D040841F6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0751A94D040841F6_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_0751A94D040841F6_TICK_OFFSET))(this, a1);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0751A94D040841F6__PREPAREDATA_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0751A94D040841F6__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0751A94D040841F6__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_7D1E83D5DDC5BFAE(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_0751A94D040841F6_METHOD_3_7D1E83D5DDC5BFAE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_BED35D89A6A10D7A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_0751A94D040841F6_METHOD_3_BED35D89A6A10D7A_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_AF29D9D849AE3973(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_0751A94D040841F6_METHOD_3_AF29D9D849AE3973_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0751A94D040841F6___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_0751A94D040841F6___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}

	::System::Boolean __iFixBaseProxy__PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0751A94D040841F6___IFIXBASEPROXY__PREPAREDATA_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0751A94D040841F6___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0751A94D040841F6___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};
