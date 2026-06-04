#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

class Class_2_CB25D7A6FABF07EF;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitAnimStateChangeV2; }

#define CLASS_3_D78480420FD2A443_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1419AD10)
#define CLASS_3_D78480420FD2A443_METHOD_3_A2AC2E0FF37103AB_OFFSET UNITYSDK_OFFSET(0x1419B250)
#define CLASS_3_D78480420FD2A443_METHOD_3_AF29D9D849AE3973_OFFSET UNITYSDK_OFFSET(0x1419AF80)
#define CLASS_3_D78480420FD2A443_METHOD_3_BED35D89A6A10D7A_OFFSET UNITYSDK_OFFSET(0x1419B390)
#define CLASS_3_D78480420FD2A443_TICK_OFFSET UNITYSDK_OFFSET(0x1419AD60)
#define CLASS_3_D78480420FD2A443__CTOR_OFFSET UNITYSDK_OFFSET(0x1419AAF0)
#define CLASS_3_D78480420FD2A443__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x1419AF20)
#define CLASS_3_D78480420FD2A443__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1419B080)
#define CLASS_3_D78480420FD2A443__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1419B170)
#define CLASS_3_D78480420FD2A443___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1419B5D0)
#define CLASS_3_D78480420FD2A443___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x1419B620)
#define CLASS_3_D78480420FD2A443___IFIXBASEPROXY__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x1419B630)
#define CLASS_3_D78480420FD2A443___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1419B690)
#define CLASS_3_D78480420FD2A443___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1419B6A0)

inline static constexpr unsigned int Class_3_D78480420FD2A443_TypeDefinitionIndex = 54984;

class Class_3_D78480420FD2A443 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitAnimStateChangeV2*>
{
public:
	::Class_2_CB25D7A6FABF07EF* Field_3_0; // 0x68
	::System::Int32 Field_3_1; // 0x70
	::System::Int32 Field_3_2; // 0x74

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitAnimStateChangeV2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitAnimStateChangeV2*))((::PBYTE)hIl2Cpp + CLASS_3_D78480420FD2A443__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D78480420FD2A443_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_D78480420FD2A443_TICK_OFFSET))(this, a1);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D78480420FD2A443__PREPAREDATA_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D78480420FD2A443__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D78480420FD2A443__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_A2AC2E0FF37103AB(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D78480420FD2A443_METHOD_3_A2AC2E0FF37103AB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_BED35D89A6A10D7A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D78480420FD2A443_METHOD_3_BED35D89A6A10D7A_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_AF29D9D849AE3973(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_D78480420FD2A443_METHOD_3_AF29D9D849AE3973_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D78480420FD2A443___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_D78480420FD2A443___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}

	::System::Boolean __iFixBaseProxy__PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D78480420FD2A443___IFIXBASEPROXY__PREPAREDATA_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D78480420FD2A443___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D78480420FD2A443___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};
