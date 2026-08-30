#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_3_2BE5039CEA912003;
namespace RPG::Client { class ST_Parkour_ShutdownEngine; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_62E5E6097EAC0678_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1886CD90)
#define CLASS_3_62E5E6097EAC0678_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1886CDE0)
#define CLASS_3_62E5E6097EAC0678_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1886D0A0)
#define CLASS_3_62E5E6097EAC0678_TICK_OFFSET UNITYSDK_OFFSET(0x1886D230)
#define CLASS_3_62E5E6097EAC0678__CTOR_OFFSET UNITYSDK_OFFSET(0x1886CD60)

inline static constexpr unsigned int Class_3_62E5E6097EAC0678_TypeDefinitionIndex = 52422;

class Class_3_62E5E6097EAC0678 : public ::RPG::GameCore::ST_Task_1<::RPG::Client::ST_Parkour_ShutdownEngine*>
{
public:
	::Class_3_2BE5039CEA912003* PFECGMGNMEN; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::ST_Parkour_ShutdownEngine* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::ST_Parkour_ShutdownEngine*))((::PBYTE)hIl2Cpp + CLASS_3_62E5E6097EAC0678__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_62E5E6097EAC0678_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_62E5E6097EAC0678_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_62E5E6097EAC0678_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_62E5E6097EAC0678_TICK_OFFSET))(this, a1);
	}
};
