#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_0_16E4307DCC419505_460;
class Class_2_469A56953483CA0D;
class Class_2_A0580152EB393340;
namespace RPG::GameCore { class ST_Main_NavigateToAward; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7DD06A4879A20DA9_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC072B00)
#define CLASS_3_7DD06A4879A20DA9_METHOD_3_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0xC0733B0)
#define CLASS_3_7DD06A4879A20DA9_METHOD_3_29622B5284E27113_OFFSET UNITYSDK_OFFSET(0xC073460)
#define CLASS_3_7DD06A4879A20DA9_METHOD_3_80FAA9362EEF1B35_OFFSET UNITYSDK_OFFSET(0xC0731E0)
#define CLASS_3_7DD06A4879A20DA9_METHOD_3_B732DC7FA82BA621_OFFSET UNITYSDK_OFFSET(0xC073510)
#define CLASS_3_7DD06A4879A20DA9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC072C70)
#define CLASS_3_7DD06A4879A20DA9_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC073070)
#define CLASS_3_7DD06A4879A20DA9__CTOR_OFFSET UNITYSDK_OFFSET(0xC072AD0)

inline static constexpr unsigned int Class_3_7DD06A4879A20DA9_TypeDefinitionIndex = 52498;

class Class_3_7DD06A4879A20DA9 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_NavigateToAward*>
{
public:
	::Class_2_469A56953483CA0D* FEOHEEMDCGN; // 0x28
	::Class_2_A0580152EB393340* AGJDABDMMEH; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_NavigateToAward* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_NavigateToAward*))((::PBYTE)hIl2Cpp + CLASS_3_7DD06A4879A20DA9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7DD06A4879A20DA9_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7DD06A4879A20DA9_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7DD06A4879A20DA9_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_80FAA9362EEF1B35(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_3_7DD06A4879A20DA9_METHOD_3_80FAA9362EEF1B35_OFFSET))(this, a1);
	}

	::System::Void Method_3_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7DD06A4879A20DA9_METHOD_3_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_3_29622B5284E27113(::RPG::GameCore::AdvNavigationFailReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + CLASS_3_7DD06A4879A20DA9_METHOD_3_29622B5284E27113_OFFSET))(this, a1);
	}

	::System::Void Method_3_B732DC7FA82BA621()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7DD06A4879A20DA9_METHOD_3_B732DC7FA82BA621_OFFSET))(this);
	}
};
