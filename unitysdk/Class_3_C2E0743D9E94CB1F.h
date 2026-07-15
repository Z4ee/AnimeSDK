#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_0_16E4307DCC419505_425;
namespace RPG::GameCore { class ST_Side_RegisterSpecialEvent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C2E0743D9E94CB1F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16044330)
#define CLASS_3_C2E0743D9E94CB1F_METHOD_3_DFB814365CC3427C_OFFSET UNITYSDK_OFFSET(0x160447D0)
#define CLASS_3_C2E0743D9E94CB1F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x160444B0)
#define CLASS_3_C2E0743D9E94CB1F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16044640)
#define CLASS_3_C2E0743D9E94CB1F__CTOR_OFFSET UNITYSDK_OFFSET(0x16044300)

inline static constexpr unsigned int Class_3_C2E0743D9E94CB1F_TypeDefinitionIndex = 49869;

class Class_3_C2E0743D9E94CB1F : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_RegisterSpecialEvent*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_RegisterSpecialEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_RegisterSpecialEvent*))((::PBYTE)hIl2Cpp + CLASS_3_C2E0743D9E94CB1F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2E0743D9E94CB1F_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2E0743D9E94CB1F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2E0743D9E94CB1F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_DFB814365CC3427C(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_3_C2E0743D9E94CB1F_METHOD_3_DFB814365CC3427C_OFFSET))(this, a1);
	}
};
