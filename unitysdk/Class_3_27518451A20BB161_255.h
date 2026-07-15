#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_7AA0663B46C8586F_16;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_255_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x16EBABB0)
#define CLASS_3_27518451A20BB161_255_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16EBAB20)
#define CLASS_3_27518451A20BB161_255__CTOR_OFFSET UNITYSDK_OFFSET(0x16EBAAF0)

inline static constexpr unsigned int Class_3_27518451A20BB161_255_TypeDefinitionIndex = 55319;

class Class_3_27518451A20BB161_255 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_7AA0663B46C8586F_16*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_7AA0663B46C8586F_16* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_7AA0663B46C8586F_16*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_255__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_255_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_255_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}
};
