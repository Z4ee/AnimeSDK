#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class ST_Main_LittleGame_DoNothing; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_CF185E9F34510F6E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x105B4F50)
#define CLASS_3_CF185E9F34510F6E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x105B4FD0)
#define CLASS_3_CF185E9F34510F6E_TICK_OFFSET UNITYSDK_OFFSET(0x105B5020)
#define CLASS_3_CF185E9F34510F6E__CTOR_OFFSET UNITYSDK_OFFSET(0x105B4F30)

inline static constexpr unsigned int Class_3_CF185E9F34510F6E_TypeDefinitionIndex = 52431;

class Class_3_CF185E9F34510F6E : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_LittleGame_DoNothing*>
{
public:
	::System::Single HIIGOGNOKGD; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_LittleGame_DoNothing* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_LittleGame_DoNothing*))((::PBYTE)hIl2Cpp + CLASS_3_CF185E9F34510F6E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CF185E9F34510F6E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CF185E9F34510F6E_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_CF185E9F34510F6E_TICK_OFFSET))(this, a1);
	}
};
