#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_ChessTask_1.h"

namespace RPG::GameCore { class ST_Chess_SelectTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B9BE1723F71947BD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8C81FD0)
#define CLASS_3_B9BE1723F71947BD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8C821D0)
#define CLASS_3_B9BE1723F71947BD__CTOR_OFFSET UNITYSDK_OFFSET(0x8C81FA0)

inline static constexpr unsigned int Class_3_B9BE1723F71947BD_TypeDefinitionIndex = 45182;

class Class_3_B9BE1723F71947BD : public ::RPG::GameCore::ST_ChessTask_1<::RPG::GameCore::ST_Chess_SelectTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Chess_SelectTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Chess_SelectTarget*))((::PBYTE)hIl2Cpp + CLASS_3_B9BE1723F71947BD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B9BE1723F71947BD_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B9BE1723F71947BD_ONTASKRESET_OFFSET))(this);
	}
};
