#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_2_21055A9FA74B791E;
namespace RPG::GameCore { class ST_Side_EnableDialogue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C1C2415706A28CB0_METHOD_3_1A1861DAEDD00E91_OFFSET UNITYSDK_OFFSET(0x1731E8F0)
#define CLASS_3_C1C2415706A28CB0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1731E860)
#define CLASS_3_C1C2415706A28CB0_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1731EA70)
#define CLASS_3_C1C2415706A28CB0__CTOR_OFFSET UNITYSDK_OFFSET(0x1731E7A0)

inline static constexpr unsigned int Class_3_C1C2415706A28CB0_TypeDefinitionIndex = 49854;

class Class_3_C1C2415706A28CB0 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_EnableDialogue*>
{
public:
	::Class_2_21055A9FA74B791E* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_EnableDialogue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_EnableDialogue*))((::PBYTE)hIl2Cpp + CLASS_3_C1C2415706A28CB0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C1C2415706A28CB0_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C1C2415706A28CB0_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_1A1861DAEDD00E91(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_C1C2415706A28CB0_METHOD_3_1A1861DAEDD00E91_OFFSET))(this, a1);
	}
};
