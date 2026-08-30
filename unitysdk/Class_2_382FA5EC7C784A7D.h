#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPropCurveMoveFinish; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_382FA5EC7C784A7D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17BE4CE0)
#define CLASS_2_382FA5EC7C784A7D_METHOD_2_7B12090AF6D76E60_OFFSET UNITYSDK_OFFSET(0x17BE5180)
#define CLASS_2_382FA5EC7C784A7D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17BE4F00)
#define CLASS_2_382FA5EC7C784A7D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17BE4E30)
#define CLASS_2_382FA5EC7C784A7D_TICK_OFFSET UNITYSDK_OFFSET(0x17BE50A0)
#define CLASS_2_382FA5EC7C784A7D__CTOR_OFFSET UNITYSDK_OFFSET(0x17BE4C60)

inline static constexpr unsigned int Class_2_382FA5EC7C784A7D_TypeDefinitionIndex = 59063;

class Class_2_382FA5EC7C784A7D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitPropCurveMoveFinish* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::Class_3_07C3C4D2990C49EE* HFOFIODMFGB; // 0x28
	::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x30
	::System::String* IJMGEMMNNPI; // 0x38
	::System::UInt32 NNGMJFCCMAI; // 0x40
	::System::UInt32 MDFOOOPHGKC; // 0x44

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitPropCurveMoveFinish* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitPropCurveMoveFinish*))((::PBYTE)hIl2Cpp + CLASS_2_382FA5EC7C784A7D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_382FA5EC7C784A7D_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_382FA5EC7C784A7D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_382FA5EC7C784A7D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_382FA5EC7C784A7D_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_7B12090AF6D76E60(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_382FA5EC7C784A7D_METHOD_2_7B12090AF6D76E60_OFFSET))(this, a1);
	}
};
