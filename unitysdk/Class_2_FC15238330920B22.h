#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class MarbleSimulateListener; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_FC15238330920B22_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCCDD8B0)
#define CLASS_2_FC15238330920B22_METHOD_2_6096CA3BC11444EA_OFFSET UNITYSDK_OFFSET(0xCCDDA10)
#define CLASS_2_FC15238330920B22_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCCDD7A0)
#define CLASS_2_FC15238330920B22_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCCDD860)
#define CLASS_2_FC15238330920B22_TICK_OFFSET UNITYSDK_OFFSET(0xCCDDBE0)
#define CLASS_2_FC15238330920B22__CTOR_OFFSET UNITYSDK_OFFSET(0xCCDD710)

inline static constexpr unsigned int Class_2_FC15238330920B22_TypeDefinitionIndex = 52585;

class Class_2_FC15238330920B22 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* BGGKBBLAGKN; // 0x18
	::RPG::GameCore::MarbleSimulateListener* IGHAHBNLIJA; // 0x20
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MarbleSimulateListener* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MarbleSimulateListener*))((::PBYTE)hIl2Cpp + CLASS_2_FC15238330920B22__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC15238330920B22_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC15238330920B22_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC15238330920B22_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_6096CA3BC11444EA(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FC15238330920B22_METHOD_2_6096CA3BC11444EA_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FC15238330920B22_TICK_OFFSET))(this, a1);
	}
};
