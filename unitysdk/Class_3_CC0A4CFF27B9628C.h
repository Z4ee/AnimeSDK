#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/OpenUIPageTaskBase_1.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class ShowAlleyMainEntrancePage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_CC0A4CFF27B9628C_DISPOSE_OFFSET UNITYSDK_OFFSET(0xED771A0)
#define CLASS_3_CC0A4CFF27B9628C_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xED77380)
#define CLASS_3_CC0A4CFF27B9628C_ONSKIP_OFFSET UNITYSDK_OFFSET(0xED772A0)
#define CLASS_3_CC0A4CFF27B9628C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xED77010)
#define CLASS_3_CC0A4CFF27B9628C__CTOR_OFFSET UNITYSDK_OFFSET(0xED76EF0)
#define CLASS_3_CC0A4CFF27B9628C__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0xED77390)

inline static constexpr unsigned int Class_3_CC0A4CFF27B9628C_TypeDefinitionIndex = 58748;

class Class_3_CC0A4CFF27B9628C : public ::RPG::GameCore::OpenUIPageTaskBase_1<::RPG::GameCore::ShowAlleyMainEntrancePage*>
{
public:
	::Class_3_07C3C4D2990C49EE* NABIDGFGJFJ; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowAlleyMainEntrancePage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowAlleyMainEntrancePage*))((::PBYTE)hIl2Cpp + CLASS_3_CC0A4CFF27B9628C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CC0A4CFF27B9628C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CC0A4CFF27B9628C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CC0A4CFF27B9628C_ONSKIP_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CC0A4CFF27B9628C_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CC0A4CFF27B9628C__ONTASKBEGIN_B__1_0_OFFSET))(this);
	}
};
