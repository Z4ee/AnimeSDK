#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_3_2BE5039CEA912003;
namespace RPG::Client { class ST_Parkour_SwitchRoad; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_EF8E97171AE05EFE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16262360)
#define CLASS_3_EF8E97171AE05EFE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x162623B0)
#define CLASS_3_EF8E97171AE05EFE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x162627C0)
#define CLASS_3_EF8E97171AE05EFE_TICK_OFFSET UNITYSDK_OFFSET(0x162625B0)
#define CLASS_3_EF8E97171AE05EFE__CTOR_OFFSET UNITYSDK_OFFSET(0x16262330)

inline static constexpr unsigned int Class_3_EF8E97171AE05EFE_TypeDefinitionIndex = 49763;

class Class_3_EF8E97171AE05EFE : public ::RPG::GameCore::ST_Task_1<::RPG::Client::ST_Parkour_SwitchRoad*>
{
public:
	::Class_3_2BE5039CEA912003* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::ST_Parkour_SwitchRoad* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::ST_Parkour_SwitchRoad*))((::PBYTE)hIl2Cpp + CLASS_3_EF8E97171AE05EFE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EF8E97171AE05EFE_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EF8E97171AE05EFE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EF8E97171AE05EFE_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_EF8E97171AE05EFE_TICK_OFFSET))(this, a1);
	}
};
