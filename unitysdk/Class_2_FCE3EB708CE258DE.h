#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitMusicRhythmNotify; }
namespace System { class Object; }

#define CLASS_2_FCE3EB708CE258DE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB382B0)
#define CLASS_2_FCE3EB708CE258DE_METHOD_2_3A37670C2827DA9B_OFFSET UNITYSDK_OFFSET(0xBB38400)
#define CLASS_2_FCE3EB708CE258DE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB381A0)
#define CLASS_2_FCE3EB708CE258DE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBB38260)
#define CLASS_2_FCE3EB708CE258DE_TICK_OFFSET UNITYSDK_OFFSET(0xBB38550)
#define CLASS_2_FCE3EB708CE258DE__CTOR_OFFSET UNITYSDK_OFFSET(0xBB38110)

inline static constexpr unsigned int Class_2_FCE3EB708CE258DE_TypeDefinitionIndex = 53736;

class Class_2_FCE3EB708CE258DE : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* CMMHAKEAFAC; // 0x18
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
	::RPG::GameCore::WaitMusicRhythmNotify* IGHAHBNLIJA; // 0x28
	::System::Boolean BHEIANKOOPN; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitMusicRhythmNotify* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitMusicRhythmNotify*))((::PBYTE)hIl2Cpp + CLASS_2_FCE3EB708CE258DE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCE3EB708CE258DE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCE3EB708CE258DE_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCE3EB708CE258DE_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_3A37670C2827DA9B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FCE3EB708CE258DE_METHOD_2_3A37670C2827DA9B_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FCE3EB708CE258DE_TICK_OFFSET))(this, a1);
	}
};
