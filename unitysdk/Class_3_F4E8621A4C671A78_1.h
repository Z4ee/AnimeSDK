#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_F2FEBAAB4D6BBF75;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F4E8621A4C671A78_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15139430)
#define CLASS_3_F4E8621A4C671A78_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15139470)
#define CLASS_3_F4E8621A4C671A78_1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15139550)
#define CLASS_3_F4E8621A4C671A78_1_TICK_OFFSET UNITYSDK_OFFSET(0x151395A0)
#define CLASS_3_F4E8621A4C671A78_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15139400)

inline static constexpr unsigned int Class_3_F4E8621A4C671A78_1_TypeDefinitionIndex = 50488;

class Class_3_F4E8621A4C671A78_1 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_F2FEBAAB4D6BBF75*>
{
public:
	::Class_3_F2FEBAAB4D6BBF75* Field_3_0; // 0x28
	::RPG::GameCore::TaskContext* Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_F2FEBAAB4D6BBF75* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_F2FEBAAB4D6BBF75*))((::PBYTE)hIl2Cpp + CLASS_3_F4E8621A4C671A78_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F4E8621A4C671A78_1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F4E8621A4C671A78_1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F4E8621A4C671A78_1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F4E8621A4C671A78_1_TICK_OFFSET))(this, a1);
	}
};
