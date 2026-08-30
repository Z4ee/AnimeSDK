#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class SwitchCaseByDynamicValue; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_A2BFE03476989FAC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x189384F0)
#define CLASS_3_A2BFE03476989FAC_METHOD_3_FEF7380CB714A86D_OFFSET UNITYSDK_OFFSET(0x189380E0)
#define CLASS_3_A2BFE03476989FAC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18937D20)
#define CLASS_3_A2BFE03476989FAC__CTOR_OFFSET UNITYSDK_OFFSET(0x18937B00)

inline static constexpr unsigned int Class_3_A2BFE03476989FAC_TypeDefinitionIndex = 56647;

class Class_3_A2BFE03476989FAC : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SwitchCaseByDynamicValue*>
{
public:
	::Il2CppArray<::Class_3_07C3C4D2990C49EE*>* ILPALCPKGHE; // 0x28
	::System::Collections::Generic::List_1<::Class_3_07C3C4D2990C49EE*>* MPHJNIOIFFM; // 0x30
	::Class_3_07C3C4D2990C49EE* IHPPIJOMNAP; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchCaseByDynamicValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchCaseByDynamicValue*))((::PBYTE)hIl2Cpp + CLASS_3_A2BFE03476989FAC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A2BFE03476989FAC_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_3_FEF7380CB714A86D(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::CompareType a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::CompareType))((::PBYTE)hIl2Cpp + CLASS_3_A2BFE03476989FAC_METHOD_3_FEF7380CB714A86D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A2BFE03476989FAC_DISPOSE_OFFSET))(this);
	}
};
