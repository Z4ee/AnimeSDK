#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ListenTargetUseSkill; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_B6DC0E263F35881D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB837CA0)
#define CLASS_2_B6DC0E263F35881D_METHOD_2_4A48A93CA7A0FA4A_OFFSET UNITYSDK_OFFSET(0xB837EE0)
#define CLASS_2_B6DC0E263F35881D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB837B30)
#define CLASS_2_B6DC0E263F35881D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB837C20)
#define CLASS_2_B6DC0E263F35881D_TICK_OFFSET UNITYSDK_OFFSET(0xB837E00)
#define CLASS_2_B6DC0E263F35881D__CTOR_OFFSET UNITYSDK_OFFSET(0xB837AB0)

inline static constexpr unsigned int Class_2_B6DC0E263F35881D_TypeDefinitionIndex = 53229;

class Class_2_B6DC0E263F35881D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ListenTargetUseSkill* OFKGLJOAMLD; // 0x18
	::Class_3_07C3C4D2990C49EE* HFOFIODMFGB; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
	::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ListenTargetUseSkill* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ListenTargetUseSkill*))((::PBYTE)hIl2Cpp + CLASS_2_B6DC0E263F35881D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6DC0E263F35881D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6DC0E263F35881D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6DC0E263F35881D_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B6DC0E263F35881D_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_4A48A93CA7A0FA4A(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B6DC0E263F35881D_METHOD_2_4A48A93CA7A0FA4A_OFFSET))(this, a1);
	}
};
