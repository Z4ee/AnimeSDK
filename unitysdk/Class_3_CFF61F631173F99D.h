#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_3_2BE5039CEA912003;
namespace RPG::Client { class ST_Parkour_UseSprint; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_CFF61F631173F99D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC74C40)
#define CLASS_3_CFF61F631173F99D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC74C90)
#define CLASS_3_CFF61F631173F99D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBC74F50)
#define CLASS_3_CFF61F631173F99D_TICK_OFFSET UNITYSDK_OFFSET(0xBC74E90)
#define CLASS_3_CFF61F631173F99D__CTOR_OFFSET UNITYSDK_OFFSET(0xBC74C10)

inline static constexpr unsigned int Class_3_CFF61F631173F99D_TypeDefinitionIndex = 52424;

class Class_3_CFF61F631173F99D : public ::RPG::GameCore::ST_Task_1<::RPG::Client::ST_Parkour_UseSprint*>
{
public:
	::Class_3_2BE5039CEA912003* PFECGMGNMEN; // 0x28
	::System::Single DKOFFPPGEFI; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::ST_Parkour_UseSprint* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::ST_Parkour_UseSprint*))((::PBYTE)hIl2Cpp + CLASS_3_CFF61F631173F99D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CFF61F631173F99D_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CFF61F631173F99D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CFF61F631173F99D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_CFF61F631173F99D_TICK_OFFSET))(this, a1);
	}
};
