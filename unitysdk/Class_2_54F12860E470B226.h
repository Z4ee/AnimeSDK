#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerLeaveChessRogue; }
namespace System { class Object; }

#define CLASS_2_54F12860E470B226_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA676310)
#define CLASS_2_54F12860E470B226_METHOD_2_3CDD0248353333ED_OFFSET UNITYSDK_OFFSET(0xA6763D0)
#define CLASS_2_54F12860E470B226_METHOD_2_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0xA676140)
#define CLASS_2_54F12860E470B226_METHOD_2_A7E8B52E9ABB8DB9_OFFSET UNITYSDK_OFFSET(0xA676430)
#define CLASS_2_54F12860E470B226_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA6760F0)
#define CLASS_2_54F12860E470B226_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA676260)
#define CLASS_2_54F12860E470B226_TICK_OFFSET UNITYSDK_OFFSET(0xA6762B0)
#define CLASS_2_54F12860E470B226__CTOR_OFFSET UNITYSDK_OFFSET(0xA6760E0)

inline static constexpr unsigned int Class_2_54F12860E470B226_TypeDefinitionIndex = 54928;

class Class_2_54F12860E470B226 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::TriggerLeaveChessRogue* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerLeaveChessRogue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerLeaveChessRogue*))((::PBYTE)hIl2Cpp + CLASS_2_54F12860E470B226__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F12860E470B226_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F12860E470B226_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_54F12860E470B226_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F12860E470B226_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_3CDD0248353333ED(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_54F12860E470B226_METHOD_2_3CDD0248353333ED_OFFSET))(this, a1);
	}

	::System::Void Method_2_749948B663FCCCEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F12860E470B226_METHOD_2_749948B663FCCCEF_OFFSET))(this);
	}

	::System::Void Method_2_A7E8B52E9ABB8DB9(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_54F12860E470B226_METHOD_2_A7E8B52E9ABB8DB9_OFFSET))(this, a1, a2);
	}
};
