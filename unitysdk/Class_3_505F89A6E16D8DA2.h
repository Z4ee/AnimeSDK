#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class ST_Main_StandBy; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_505F89A6E16D8DA2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x165A1FF0)
#define CLASS_3_505F89A6E16D8DA2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x165A2240)
#define CLASS_3_505F89A6E16D8DA2_TICK_OFFSET UNITYSDK_OFFSET(0x165A2480)
#define CLASS_3_505F89A6E16D8DA2__CTOR_OFFSET UNITYSDK_OFFSET(0x165A1FC0)

inline static constexpr unsigned int Class_3_505F89A6E16D8DA2_TypeDefinitionIndex = 49843;

class Class_3_505F89A6E16D8DA2 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_StandBy*>
{
public:
	::System::Single Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_StandBy* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_StandBy*))((::PBYTE)hIl2Cpp + CLASS_3_505F89A6E16D8DA2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_505F89A6E16D8DA2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_505F89A6E16D8DA2_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_505F89A6E16D8DA2_TICK_OFFSET))(this, a1);
	}
};
