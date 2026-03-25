#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/BaseEventActionSystem_1.h"
#include "unitysdk/RPG/GCFreeClosure/ActionClosure_1.h"
#include "unitysdk/RPG/GCFreeClosure/FuncClosureR_2.h"
#include "unitysdk/RPG/GameCore/FiveDimTriggerTargetType.h"

class Class_1_24C2E7EF22229C6A;
class Class_2_9DD8A46984F1AFFD;
class Class_3_1A92845FAFA5EC77;
namespace UnityEngine { class Collider; }

#define CLASS_2_89745FE0E1EC3B52_DESTROYENTITY_OFFSET UNITYSDK_OFFSET(0x10515280)
#define CLASS_2_89745FE0E1EC3B52_GETENTITYBYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x10515220)
#define CLASS_2_89745FE0E1EC3B52_METHOD_2_11B9C4D0DE677000_1_OFFSET UNITYSDK_OFFSET(0x10516950)
#define CLASS_2_89745FE0E1EC3B52_METHOD_2_11B9C4D0DE677000_OFFSET UNITYSDK_OFFSET(0x10515DC0)
#define CLASS_2_89745FE0E1EC3B52_METHOD_2_4A3B1540DEBC3E83_OFFSET UNITYSDK_OFFSET(0x10515A90)
#define CLASS_2_89745FE0E1EC3B52_METHOD_2_7294AF982BB811F5_1_OFFSET UNITYSDK_OFFSET(0x10515950)
#define CLASS_2_89745FE0E1EC3B52_METHOD_2_7294AF982BB811F5_OFFSET UNITYSDK_OFFSET(0x10515810)
#define CLASS_2_89745FE0E1EC3B52_METHOD_2_C90E1F90D339319B_OFFSET UNITYSDK_OFFSET(0x10516070)
#define CLASS_2_89745FE0E1EC3B52__ADDEVENTEMITTER_OFFSET UNITYSDK_OFFSET(0x105152E0)
#define CLASS_2_89745FE0E1EC3B52__CTOR_OFFSET UNITYSDK_OFFSET(0x10514C10)
#define CLASS_2_89745FE0E1EC3B52__REMOVEEVENTEMITTER_OFFSET UNITYSDK_OFFSET(0x10515C70)
#define CLASS_2_89745FE0E1EC3B52__TEARDOWN_OFFSET UNITYSDK_OFFSET(0x10515070)
#define CLASS_2_89745FE0E1EC3B52___IFIXBASEPROXY__TEARDOWN_OFFSET UNITYSDK_OFFSET(0x10516C00)

inline static constexpr unsigned int Class_2_89745FE0E1EC3B52_TypeDefinitionIndex = 62775;

class Class_2_89745FE0E1EC3B52 : public ::RPG::Client::LittleGame::FiveDim::BaseEventActionSystem_1<::Class_2_9DD8A46984F1AFFD*>
{
public:
	::Class_1_24C2E7EF22229C6A* Field_2_0; // 0x50
	::Class_3_1A92845FAFA5EC77* Field_2_1; // 0x58

	::System::Void _ctor(::Class_1_24C2E7EF22229C6A* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24C2E7EF22229C6A*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_2_89745FE0E1EC3B52__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89745FE0E1EC3B52__TEARDOWN_OFFSET))(this);
	}

	::Class_2_9DD8A46984F1AFFD* GetEntityByRuntimeID(::System::Int32 a1)
	{
		return ((::Class_2_9DD8A46984F1AFFD*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_89745FE0E1EC3B52_GETENTITYBYRUNTIMEID_OFFSET))(this, a1);
	}

	::System::Void DestroyEntity(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_2_89745FE0E1EC3B52_DESTROYENTITY_OFFSET))(this, a1);
	}

	::System::Void _AddEventEmitter(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_2_89745FE0E1EC3B52__ADDEVENTEMITTER_OFFSET))(this, a1);
	}

	::System::Void _RemoveEventEmitter(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_2_89745FE0E1EC3B52__REMOVEEVENTEMITTER_OFFSET))(this, a1);
	}

	::RPG::GCFreeClosure::ActionClosure_1<::UnityEngine::Collider*> Method_2_7294AF982BB811F5(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::RPG::GCFreeClosure::ActionClosure_1<::UnityEngine::Collider*>(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_2_89745FE0E1EC3B52_METHOD_2_7294AF982BB811F5_OFFSET))(this, a1);
	}

	::RPG::GCFreeClosure::ActionClosure_1<::UnityEngine::Collider*> Method_2_7294AF982BB811F5_1(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::RPG::GCFreeClosure::ActionClosure_1<::UnityEngine::Collider*>(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_2_89745FE0E1EC3B52_METHOD_2_7294AF982BB811F5_1_OFFSET))(this, a1);
	}

	::RPG::GCFreeClosure::FuncClosureR_2<::UnityEngine::Collider*, ::System::Boolean> Method_2_4A3B1540DEBC3E83(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimTriggerTargetType a2)
	{
		return ((::RPG::GCFreeClosure::FuncClosureR_2<::UnityEngine::Collider*, ::System::Boolean>(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimTriggerTargetType))((::PBYTE)hIl2Cpp + CLASS_2_89745FE0E1EC3B52_METHOD_2_4A3B1540DEBC3E83_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_11B9C4D0DE677000(::Class_2_9DD8A46984F1AFFD* a1, ::UnityEngine::Collider* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_89745FE0E1EC3B52_METHOD_2_11B9C4D0DE677000_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_11B9C4D0DE677000_1(::Class_2_9DD8A46984F1AFFD* a1, ::UnityEngine::Collider* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_89745FE0E1EC3B52_METHOD_2_11B9C4D0DE677000_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_C90E1F90D339319B(::Class_2_9DD8A46984F1AFFD* a1, ::UnityEngine::Collider* a2, ::RPG::GameCore::FiveDimTriggerTargetType a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*, ::RPG::GameCore::FiveDimTriggerTargetType))((::PBYTE)hIl2Cpp + CLASS_2_89745FE0E1EC3B52_METHOD_2_C90E1F90D339319B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __iFixBaseProxy__TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89745FE0E1EC3B52___IFIXBASEPROXY__TEARDOWN_OFFSET))(this);
	}
};
