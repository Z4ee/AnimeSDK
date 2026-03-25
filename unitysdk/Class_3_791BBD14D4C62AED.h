#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ChessWaitAnimEvent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_791BBD14D4C62AED_METHOD_3_4AADAF19CDCB660E_OFFSET UNITYSDK_OFFSET(0x10ADCB70)
#define CLASS_3_791BBD14D4C62AED_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10ADCB10)
#define CLASS_3_791BBD14D4C62AED_TICK_OFFSET UNITYSDK_OFFSET(0x10ADCC70)
#define CLASS_3_791BBD14D4C62AED__CTOR_OFFSET UNITYSDK_OFFSET(0x10ADCAE0)
#define CLASS_3_791BBD14D4C62AED___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x10ADCCE0)

inline static constexpr unsigned int Class_3_791BBD14D4C62AED_TypeDefinitionIndex = 45209;

class Class_3_791BBD14D4C62AED : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ChessWaitAnimEvent*>
{
public:
	::RPG::GameCore::FixPoint Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChessWaitAnimEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChessWaitAnimEvent*))((::PBYTE)hIl2Cpp + CLASS_3_791BBD14D4C62AED__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_791BBD14D4C62AED_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_791BBD14D4C62AED_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_4AADAF19CDCB660E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_791BBD14D4C62AED_METHOD_3_4AADAF19CDCB660E_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_791BBD14D4C62AED___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
