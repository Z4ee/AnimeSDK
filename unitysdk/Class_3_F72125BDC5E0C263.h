#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SO_Task_1.h"

namespace RPG::GameCore { class SO_TriggerCustomString; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F72125BDC5E0C263_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10CE05D0)
#define CLASS_3_F72125BDC5E0C263_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10CE07B0)
#define CLASS_3_F72125BDC5E0C263__CTOR_OFFSET UNITYSDK_OFFSET(0x10CE0520)

inline static constexpr unsigned int Class_3_F72125BDC5E0C263_TypeDefinitionIndex = 42148;

class Class_3_F72125BDC5E0C263 : public ::RPG::GameCore::SO_Task_1<::RPG::GameCore::SO_TriggerCustomString*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SO_TriggerCustomString* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SO_TriggerCustomString*))((::PBYTE)hIl2Cpp + CLASS_3_F72125BDC5E0C263__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F72125BDC5E0C263_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F72125BDC5E0C263_ONTASKRESET_OFFSET))(this);
	}
};
