#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class ST_Side_SetVariableBool; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BE49021D54738DB8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x115700C0)
#define CLASS_3_BE49021D54738DB8_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11570150)
#define CLASS_3_BE49021D54738DB8__CTOR_OFFSET UNITYSDK_OFFSET(0x11570090)

inline static constexpr unsigned int Class_3_BE49021D54738DB8_TypeDefinitionIndex = 42275;

class Class_3_BE49021D54738DB8 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_SetVariableBool*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_SetVariableBool* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_SetVariableBool*))((::PBYTE)hIl2Cpp + CLASS_3_BE49021D54738DB8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BE49021D54738DB8_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BE49021D54738DB8_ONTASKRESET_OFFSET))(this);
	}
};
