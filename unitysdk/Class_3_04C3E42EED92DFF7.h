#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_0_16E4307DCC419505_382;
namespace RPG::GameCore { class ByLevelLoseCheck; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { template <typename T> class Predicate_1; }

#define CLASS_3_04C3E42EED92DFF7_EVALUATE_OFFSET UNITYSDK_OFFSET(0x12333330)
#define CLASS_3_04C3E42EED92DFF7_METHOD_3_51DEC44B986280C0_OFFSET UNITYSDK_OFFSET(0x123337C0)
#define CLASS_3_04C3E42EED92DFF7_METHOD_3_CE551728EAD0702F_OFFSET UNITYSDK_OFFSET(0x12333490)
#define CLASS_3_04C3E42EED92DFF7_METHOD_3_D91F0C4AA6EBFC97_OFFSET UNITYSDK_OFFSET(0x123339A0)
#define CLASS_3_04C3E42EED92DFF7_METHOD_3_EC03CA9E955E9BA4_OFFSET UNITYSDK_OFFSET(0x123338F0)
#define CLASS_3_04C3E42EED92DFF7_METHOD_3_F00FC502F7150C33_OFFSET UNITYSDK_OFFSET(0x12333660)
#define CLASS_3_04C3E42EED92DFF7__CTOR_OFFSET UNITYSDK_OFFSET(0x123331F0)

inline static constexpr unsigned int Class_3_04C3E42EED92DFF7_TypeDefinitionIndex = 53475;

class Class_3_04C3E42EED92DFF7 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByLevelLoseCheck*>
{
public:
	::System::Predicate_1<::RPG::GameCore::GameEntity*>* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByLevelLoseCheck* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByLevelLoseCheck*))((::PBYTE)hIl2Cpp + CLASS_3_04C3E42EED92DFF7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_04C3E42EED92DFF7_EVALUATE_OFFSET))(this);
	}

	::System::Boolean Method_3_CE551728EAD0702F(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_04C3E42EED92DFF7_METHOD_3_CE551728EAD0702F_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F00FC502F7150C33(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_04C3E42EED92DFF7_METHOD_3_F00FC502F7150C33_OFFSET))(this, a1);
	}

	::System::Void Method_3_51DEC44B986280C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_04C3E42EED92DFF7_METHOD_3_51DEC44B986280C0_OFFSET))(this);
	}

	::System::Void Method_3_EC03CA9E955E9BA4(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_3_04C3E42EED92DFF7_METHOD_3_EC03CA9E955E9BA4_OFFSET))(this, a1);
	}

	::System::Void Method_3_D91F0C4AA6EBFC97(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_3_04C3E42EED92DFF7_METHOD_3_D91F0C4AA6EBFC97_OFFSET))(this, a1);
	}
};
