#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ChessWaitTimeStamp; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_75E7928D333434E5_METHOD_3_4AADAF19CDCB660E_OFFSET UNITYSDK_OFFSET(0xCB39390)
#define CLASS_3_75E7928D333434E5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCB39310)
#define CLASS_3_75E7928D333434E5_TICK_OFFSET UNITYSDK_OFFSET(0xCB39490)
#define CLASS_3_75E7928D333434E5__CTOR_OFFSET UNITYSDK_OFFSET(0xCB392E0)
#define CLASS_3_75E7928D333434E5___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xCB39500)

inline static constexpr unsigned int Class_3_75E7928D333434E5_TypeDefinitionIndex = 45211;

class Class_3_75E7928D333434E5 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ChessWaitTimeStamp*>
{
public:
	::RPG::GameCore::FixPoint Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChessWaitTimeStamp* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChessWaitTimeStamp*))((::PBYTE)hIl2Cpp + CLASS_3_75E7928D333434E5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_75E7928D333434E5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_75E7928D333434E5_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_4AADAF19CDCB660E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_75E7928D333434E5_METHOD_3_4AADAF19CDCB660E_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_75E7928D333434E5___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
