#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

class Class_2_CB25D7A6FABF07EF;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitAnimStateChangeV2; }

#define CLASS_3_85353E7F10037116_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18B12220)
#define CLASS_3_85353E7F10037116_METHOD_3_80462C4CE7F6D657_OFFSET UNITYSDK_OFFSET(0x18B12750)
#define CLASS_3_85353E7F10037116_METHOD_3_AF29D9D849AE3973_OFFSET UNITYSDK_OFFSET(0x18B12480)
#define CLASS_3_85353E7F10037116_METHOD_3_C3435D680BA1E779_OFFSET UNITYSDK_OFFSET(0x18B12810)
#define CLASS_3_85353E7F10037116_TICK_OFFSET UNITYSDK_OFFSET(0x18B12270)
#define CLASS_3_85353E7F10037116__CTOR_OFFSET UNITYSDK_OFFSET(0x18B12000)
#define CLASS_3_85353E7F10037116__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x18B123B0)
#define CLASS_3_85353E7F10037116__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x18B12580)
#define CLASS_3_85353E7F10037116__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x18B12670)

inline static constexpr unsigned int Class_3_85353E7F10037116_TypeDefinitionIndex = 56217;

class Class_3_85353E7F10037116 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitAnimStateChangeV2*>
{
public:
	::Class_2_CB25D7A6FABF07EF* Field_3_0; // 0x68
	::System::Int32 Field_3_1; // 0x70
	::System::Int32 Field_3_2; // 0x74

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitAnimStateChangeV2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitAnimStateChangeV2*))((::PBYTE)hIl2Cpp + CLASS_3_85353E7F10037116__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_85353E7F10037116_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_85353E7F10037116_TICK_OFFSET))(this, a1);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_85353E7F10037116__PREPAREDATA_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_85353E7F10037116__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_85353E7F10037116__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_80462C4CE7F6D657(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_85353E7F10037116_METHOD_3_80462C4CE7F6D657_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_C3435D680BA1E779(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_85353E7F10037116_METHOD_3_C3435D680BA1E779_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_AF29D9D849AE3973(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_85353E7F10037116_METHOD_3_AF29D9D849AE3973_OFFSET))(this, a1);
	}
};
