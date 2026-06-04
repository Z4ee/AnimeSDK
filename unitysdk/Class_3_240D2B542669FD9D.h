#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class ST_Main_ElfEntityDestory; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_240D2B542669FD9D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA616040)
#define CLASS_3_240D2B542669FD9D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA6161E0)
#define CLASS_3_240D2B542669FD9D__CTOR_OFFSET UNITYSDK_OFFSET(0xA616010)

inline static constexpr unsigned int Class_3_240D2B542669FD9D_TypeDefinitionIndex = 48776;

class Class_3_240D2B542669FD9D : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_ElfEntityDestory*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_ElfEntityDestory* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_ElfEntityDestory*))((::PBYTE)hIl2Cpp + CLASS_3_240D2B542669FD9D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_240D2B542669FD9D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_240D2B542669FD9D_ONTASKRESET_OFFSET))(this);
	}
};
