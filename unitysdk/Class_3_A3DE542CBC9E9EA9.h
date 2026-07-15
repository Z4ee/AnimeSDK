#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByLocalPlayerIsHero; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A3DE542CBC9E9EA9_EVALUATE_OFFSET UNITYSDK_OFFSET(0x17EF4530)
#define CLASS_3_A3DE542CBC9E9EA9_METHOD_3_4E887005285DFE43_OFFSET UNITYSDK_OFFSET(0x17EF45C0)
#define CLASS_3_A3DE542CBC9E9EA9_METHOD_3_7B9D052C06E961F6_OFFSET UNITYSDK_OFFSET(0x17EF47C0)
#define CLASS_3_A3DE542CBC9E9EA9__CTOR_OFFSET UNITYSDK_OFFSET(0x17EF4500)

inline static constexpr unsigned int Class_3_A3DE542CBC9E9EA9_TypeDefinitionIndex = 50728;

class Class_3_A3DE542CBC9E9EA9 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByLocalPlayerIsHero*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByLocalPlayerIsHero* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByLocalPlayerIsHero*))((::PBYTE)hIl2Cpp + CLASS_3_A3DE542CBC9E9EA9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A3DE542CBC9E9EA9_EVALUATE_OFFSET))(this);
	}

	::System::UInt32 Method_3_4E887005285DFE43()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A3DE542CBC9E9EA9_METHOD_3_4E887005285DFE43_OFFSET))(this);
	}

	::System::Boolean Method_3_7B9D052C06E961F6(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_A3DE542CBC9E9EA9_METHOD_3_7B9D052C06E961F6_OFFSET))(this, a1);
	}
};
