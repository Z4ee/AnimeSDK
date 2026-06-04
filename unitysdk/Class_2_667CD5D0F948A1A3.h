#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/BaseEventActionSystem_1.h"
#include "unitysdk/RPG/GCFreeClosure/ActionClosure_1.h"
#include "unitysdk/RPG/GCFreeClosure/FuncClosureR_2.h"
#include "unitysdk/RPG/GameCore/FiveDimTriggerTargetType.h"
#include "unitysdk/Struct_2_DF3F1B8142DB3648.h"

class Class_1_B4357A1C72BABC6B;
class Class_2_B9E8C2EEAA5C96EC;
class Class_3_1E4F9B0ED3BF21DE;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace Entitas { template <typename T> class ICollector_1; }
namespace RPG::GameCore { class FiveDimTriggerEventEmitterConfig; }
namespace UnityEngine { class Collider; }

#define CLASS_2_667CD5D0F948A1A3_DESTROYENTITY_OFFSET UNITYSDK_OFFSET(0x12A98F10)
#define CLASS_2_667CD5D0F948A1A3_EXECUTE_OFFSET UNITYSDK_OFFSET(0x12A97F30)
#define CLASS_2_667CD5D0F948A1A3_GETENTITYBYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x12A98EB0)
#define CLASS_2_667CD5D0F948A1A3_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x12A97DB0)
#define CLASS_2_667CD5D0F948A1A3_METHOD_2_04BCA3530BFAFEC8_1_OFFSET UNITYSDK_OFFSET(0x12A9A330)
#define CLASS_2_667CD5D0F948A1A3_METHOD_2_04BCA3530BFAFEC8_OFFSET UNITYSDK_OFFSET(0x12A99A10)
#define CLASS_2_667CD5D0F948A1A3_METHOD_2_2B1B8815158EC095_OFFSET UNITYSDK_OFFSET(0x12A99610)
#define CLASS_2_667CD5D0F948A1A3_METHOD_2_2BBE680C6BB0DDD5_OFFSET UNITYSDK_OFFSET(0x12A98B60)
#define CLASS_2_667CD5D0F948A1A3_METHOD_2_674F73509924BD16_OFFSET UNITYSDK_OFFSET(0x12A97BD0)
#define CLASS_2_667CD5D0F948A1A3_METHOD_2_B7D91EE9EA9F1730_OFFSET UNITYSDK_OFFSET(0x12A98130)
#define CLASS_2_667CD5D0F948A1A3_METHOD_2_C7DC8D1E27773822_1_OFFSET UNITYSDK_OFFSET(0x12A994E0)
#define CLASS_2_667CD5D0F948A1A3_METHOD_2_C7DC8D1E27773822_OFFSET UNITYSDK_OFFSET(0x12A993B0)
#define CLASS_2_667CD5D0F948A1A3_METHOD_2_C90E1F90D339319B_OFFSET UNITYSDK_OFFSET(0x12A99C00)
#define CLASS_2_667CD5D0F948A1A3_METHOD_2_D286528770AE74A7_OFFSET UNITYSDK_OFFSET(0x12A98C40)
#define CLASS_2_667CD5D0F948A1A3_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x12A987B0)
#define CLASS_2_667CD5D0F948A1A3__ADDEVENTEMITTER_OFFSET UNITYSDK_OFFSET(0x12A98F70)
#define CLASS_2_667CD5D0F948A1A3__CTOR_OFFSET UNITYSDK_OFFSET(0x12A97630)
#define CLASS_2_667CD5D0F948A1A3__GETDELTATIME_OFFSET UNITYSDK_OFFSET(0x12A99980)
#define CLASS_2_667CD5D0F948A1A3__REMOVEEVENTEMITTER_OFFSET UNITYSDK_OFFSET(0x12A99840)
#define CLASS_2_667CD5D0F948A1A3__TEARDOWN_OFFSET UNITYSDK_OFFSET(0x12A98980)
#define CLASS_2_667CD5D0F948A1A3___IFIXBASEPROXY_EXECUTE_OFFSET UNITYSDK_OFFSET(0x12A9A530)
#define CLASS_2_667CD5D0F948A1A3___IFIXBASEPROXY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x12A9A520)
#define CLASS_2_667CD5D0F948A1A3___IFIXBASEPROXY_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x12A9A540)
#define CLASS_2_667CD5D0F948A1A3___IFIXBASEPROXY__TEARDOWN_OFFSET UNITYSDK_OFFSET(0x12A9A550)

inline static constexpr unsigned int Class_2_667CD5D0F948A1A3_TypeDefinitionIndex = 71616;

class Class_2_667CD5D0F948A1A3 : public ::RPG::Client::LittleGame::FiveDim::BaseEventActionSystem_1<::Class_2_B9E8C2EEAA5C96EC*>
{
public:
	::Class_1_B4357A1C72BABC6B* Field_2_0; // 0x50
	::Entitas::ICollector_1<::Class_2_B9E8C2EEAA5C96EC*>* Field_2_1; // 0x58
	::Class_3_1E4F9B0ED3BF21DE* Field_2_2; // 0x60

	::System::Void _ctor(::Class_1_B4357A1C72BABC6B* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4357A1C72BABC6B*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_EXECUTE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_TEARDOWN_OFFSET))(this);
	}

	::System::Void _TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3__TEARDOWN_OFFSET))(this);
	}

	::System::Void Method_2_674F73509924BD16()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_METHOD_2_674F73509924BD16_OFFSET))(this);
	}

	::System::Void Method_2_2BBE680C6BB0DDD5(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_METHOD_2_2BBE680C6BB0DDD5_OFFSET))(this, a1, a2);
	}

	::Class_2_B9E8C2EEAA5C96EC* GetEntityByRuntimeID(::System::Int32 a1)
	{
		return ((::Class_2_B9E8C2EEAA5C96EC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_GETENTITYBYRUNTIMEID_OFFSET))(this, a1);
	}

	::System::Void DestroyEntity(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_DESTROYENTITY_OFFSET))(this, a1);
	}

	::System::Void _AddEventEmitter(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3__ADDEVENTEMITTER_OFFSET))(this, a1);
	}

	::System::Void _RemoveEventEmitter(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3__REMOVEEVENTEMITTER_OFFSET))(this, a1);
	}

	::System::Single _GetDeltaTime(::Class_2_B9E8C2EEAA5C96EC* a1, ::Struct_2_DF3F1B8142DB3648& a2)
	{
		return ((::System::Single(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Struct_2_DF3F1B8142DB3648&))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3__GETDELTATIME_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B7D91EE9EA9F1730(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_METHOD_2_B7D91EE9EA9F1730_OFFSET))(this, a1);
	}

	::System::Void Method_2_D286528770AE74A7(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_METHOD_2_D286528770AE74A7_OFFSET))(this, a1);
	}

	::RPG::GCFreeClosure::ActionClosure_1<::UnityEngine::Collider*> Method_2_C7DC8D1E27773822(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig* a2)
	{
		return ((::RPG::GCFreeClosure::ActionClosure_1<::UnityEngine::Collider*>(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig*))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_METHOD_2_C7DC8D1E27773822_OFFSET))(this, a1, a2);
	}

	::RPG::GCFreeClosure::ActionClosure_1<::UnityEngine::Collider*> Method_2_C7DC8D1E27773822_1(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig* a2)
	{
		return ((::RPG::GCFreeClosure::ActionClosure_1<::UnityEngine::Collider*>(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig*))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_METHOD_2_C7DC8D1E27773822_1_OFFSET))(this, a1, a2);
	}

	::RPG::GCFreeClosure::FuncClosureR_2<::UnityEngine::Collider*, ::System::Boolean> Method_2_2B1B8815158EC095(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimTriggerTargetType a2)
	{
		return ((::RPG::GCFreeClosure::FuncClosureR_2<::UnityEngine::Collider*, ::System::Boolean>(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimTriggerTargetType))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_METHOD_2_2B1B8815158EC095_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_04BCA3530BFAFEC8(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig* a2, ::UnityEngine::Collider* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_METHOD_2_04BCA3530BFAFEC8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_04BCA3530BFAFEC8_1(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig* a2, ::UnityEngine::Collider* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_METHOD_2_04BCA3530BFAFEC8_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_C90E1F90D339319B(::Class_2_B9E8C2EEAA5C96EC* a1, ::UnityEngine::Collider* a2, ::RPG::GameCore::FiveDimTriggerTargetType a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*, ::RPG::GameCore::FiveDimTriggerTargetType))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3_METHOD_2_C90E1F90D339319B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __iFixBaseProxy_Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3___IFIXBASEPROXY_INITIALIZE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3___IFIXBASEPROXY_EXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3___IFIXBASEPROXY_TEARDOWN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3___IFIXBASEPROXY__TEARDOWN_OFFSET))(this);
	}
};
