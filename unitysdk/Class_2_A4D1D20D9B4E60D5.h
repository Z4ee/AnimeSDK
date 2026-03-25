#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerLeaveChessRogue; }
namespace System { class Object; }

#define CLASS_2_A4D1D20D9B4E60D5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11344F80)
#define CLASS_2_A4D1D20D9B4E60D5_METHOD_2_1A7F9F3B13A09C96_OFFSET UNITYSDK_OFFSET(0x11345010)
#define CLASS_2_A4D1D20D9B4E60D5_METHOD_2_F7300E87EC49A206_OFFSET UNITYSDK_OFFSET(0x11344DE0)
#define CLASS_2_A4D1D20D9B4E60D5_METHOD_2_FB92C5E10C2076F0_OFFSET UNITYSDK_OFFSET(0x11345070)
#define CLASS_2_A4D1D20D9B4E60D5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11344D90)
#define CLASS_2_A4D1D20D9B4E60D5_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11344ED0)
#define CLASS_2_A4D1D20D9B4E60D5_TICK_OFFSET UNITYSDK_OFFSET(0x11344F20)
#define CLASS_2_A4D1D20D9B4E60D5__CTOR_OFFSET UNITYSDK_OFFSET(0x11344D80)

inline static constexpr unsigned int Class_2_A4D1D20D9B4E60D5_TypeDefinitionIndex = 47467;

class Class_2_A4D1D20D9B4E60D5 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::TriggerLeaveChessRogue* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerLeaveChessRogue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerLeaveChessRogue*))((::PBYTE)hIl2Cpp + CLASS_2_A4D1D20D9B4E60D5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A4D1D20D9B4E60D5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A4D1D20D9B4E60D5_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A4D1D20D9B4E60D5_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A4D1D20D9B4E60D5_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_1A7F9F3B13A09C96(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A4D1D20D9B4E60D5_METHOD_2_1A7F9F3B13A09C96_OFFSET))(this, a1);
	}

	::System::Void Method_2_F7300E87EC49A206()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A4D1D20D9B4E60D5_METHOD_2_F7300E87EC49A206_OFFSET))(this);
	}

	::System::Void Method_2_FB92C5E10C2076F0(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A4D1D20D9B4E60D5_METHOD_2_FB92C5E10C2076F0_OFFSET))(this, a1, a2);
	}
};
