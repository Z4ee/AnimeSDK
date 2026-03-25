#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class ShowHeartDialUI; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_4079EE3D4DAEAA0C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x87E82A0)
#define CLASS_2_4079EE3D4DAEAA0C_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x87E8340)
#define CLASS_2_4079EE3D4DAEAA0C_METHOD_2_FF55884589608AE4_OFFSET UNITYSDK_OFFSET(0x87E8190)
#define CLASS_2_4079EE3D4DAEAA0C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x87E7FE0)
#define CLASS_2_4079EE3D4DAEAA0C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x87E8250)
#define CLASS_2_4079EE3D4DAEAA0C_TICK_OFFSET UNITYSDK_OFFSET(0x87E82E0)
#define CLASS_2_4079EE3D4DAEAA0C__CTOR_OFFSET UNITYSDK_OFFSET(0x87E7FD0)

inline static constexpr unsigned int Class_2_4079EE3D4DAEAA0C_TypeDefinitionIndex = 47349;

class Class_2_4079EE3D4DAEAA0C : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::String* Field_2_5; // 0x0
	::RPG::GameCore::LevelGraphComponent* Field_2_3; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::GameCore::ShowHeartDialUI* Field_2_0; // 0x28
	::RPG::GameCore::GameEntity* Field_2_2; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowHeartDialUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowHeartDialUI*))((::PBYTE)hIl2Cpp + CLASS_2_4079EE3D4DAEAA0C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4079EE3D4DAEAA0C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4079EE3D4DAEAA0C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4079EE3D4DAEAA0C_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4079EE3D4DAEAA0C_TICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::LevelGraphComponent* Method_2_FF55884589608AE4(::System::String* a1)
	{
		return ((::RPG::GameCore::LevelGraphComponent*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4079EE3D4DAEAA0C_METHOD_2_FF55884589608AE4_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4079EE3D4DAEAA0C_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}
};
