#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class ShowHeartDialUI; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_4079EE3D4DAEAA0C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18813290)
#define CLASS_2_4079EE3D4DAEAA0C_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x18813330)
#define CLASS_2_4079EE3D4DAEAA0C_METHOD_2_EFAE6171FF3CE93B_OFFSET UNITYSDK_OFFSET(0x18813180)
#define CLASS_2_4079EE3D4DAEAA0C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18812FB0)
#define CLASS_2_4079EE3D4DAEAA0C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18813240)
#define CLASS_2_4079EE3D4DAEAA0C_TICK_OFFSET UNITYSDK_OFFSET(0x188132D0)
#define CLASS_2_4079EE3D4DAEAA0C__CTOR_OFFSET UNITYSDK_OFFSET(0x18812FA0)

inline static constexpr unsigned int Class_2_4079EE3D4DAEAA0C_TypeDefinitionIndex = 58811;

class Class_2_4079EE3D4DAEAA0C : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* OMICKFONNDG; // 0x0
	// static const ::System::String* ELKFLMMHOGO; // 0x0
	::RPG::GameCore::ShowHeartDialUI* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::GameEntity* FEECCONDBLP; // 0x20
	::RPG::GameCore::LevelGraphComponent* LJCPCPJJEIB; // 0x28
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30

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

	::RPG::GameCore::LevelGraphComponent* Method_2_EFAE6171FF3CE93B(::System::String* a1)
	{
		return ((::RPG::GameCore::LevelGraphComponent*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4079EE3D4DAEAA0C_METHOD_2_EFAE6171FF3CE93B_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4079EE3D4DAEAA0C_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}
};
