#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitMusicRhythmNotify; }
namespace System { class Object; }

#define CLASS_2_FCE3EB708CE258DE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11BC6D10)
#define CLASS_2_FCE3EB708CE258DE_METHOD_2_3A37670C2827DA9B_OFFSET UNITYSDK_OFFSET(0x11BC6DE0)
#define CLASS_2_FCE3EB708CE258DE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11BC6C10)
#define CLASS_2_FCE3EB708CE258DE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11BC6CC0)
#define CLASS_2_FCE3EB708CE258DE_TICK_OFFSET UNITYSDK_OFFSET(0x11BC6F30)
#define CLASS_2_FCE3EB708CE258DE__CTOR_OFFSET UNITYSDK_OFFSET(0x11BC6B80)

inline static constexpr unsigned int Class_2_FCE3EB708CE258DE_TypeDefinitionIndex = 49308;

class Class_2_FCE3EB708CE258DE : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitMusicRhythmNotify* Field_2_1; // 0x18
	::Class_3_E21F6DE9B7FA4D05* Field_2_2; // 0x20
	::RPG::GameCore::TaskContext* Field_2_0; // 0x28
	::System::Boolean Field_2_3; // 0x30

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
