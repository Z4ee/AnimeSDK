#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TravelShipWaitNavigationArrive; }
namespace System { class Object; }

#define CLASS_2_897FA653F5B7ECAE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15917330)
#define CLASS_2_897FA653F5B7ECAE_METHOD_2_5934C7451F9426C2_OFFSET UNITYSDK_OFFSET(0x15917930)
#define CLASS_2_897FA653F5B7ECAE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x159175A0)
#define CLASS_2_897FA653F5B7ECAE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x159174A0)
#define CLASS_2_897FA653F5B7ECAE_TICK_OFFSET UNITYSDK_OFFSET(0x15917850)
#define CLASS_2_897FA653F5B7ECAE__CTOR_OFFSET UNITYSDK_OFFSET(0x159172B0)

inline static constexpr unsigned int Class_2_897FA653F5B7ECAE_TypeDefinitionIndex = 53699;

class Class_2_897FA653F5B7ECAE : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TravelShipWaitNavigationArrive* OFKGLJOAMLD; // 0x18
	::Class_3_07C3C4D2990C49EE* HFOFIODMFGB; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
	::UnityEngine::Vector3 MAJNABOELDH; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TravelShipWaitNavigationArrive* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TravelShipWaitNavigationArrive*))((::PBYTE)hIl2Cpp + CLASS_2_897FA653F5B7ECAE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_897FA653F5B7ECAE_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_897FA653F5B7ECAE_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_897FA653F5B7ECAE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_897FA653F5B7ECAE_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_5934C7451F9426C2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_897FA653F5B7ECAE_METHOD_2_5934C7451F9426C2_OFFSET))(this, a1);
	}
};
