#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RogueDLCADVRoomHideTrotter; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_76F21C1F3AABC407_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11181ED0)
#define CLASS_2_76F21C1F3AABC407_METHOD_2_7B6EC255F45D034F_OFFSET UNITYSDK_OFFSET(0x11182270)
#define CLASS_2_76F21C1F3AABC407_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11181F70)
#define CLASS_2_76F21C1F3AABC407_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x111823B0)
#define CLASS_2_76F21C1F3AABC407_TICK_OFFSET UNITYSDK_OFFSET(0x11181F10)
#define CLASS_2_76F21C1F3AABC407__CTOR_OFFSET UNITYSDK_OFFSET(0x11181EC0)

inline static constexpr unsigned int Class_2_76F21C1F3AABC407_TypeDefinitionIndex = 53895;

class Class_2_76F21C1F3AABC407 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::RogueDLCADVRoomHideTrotter* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueDLCADVRoomHideTrotter* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueDLCADVRoomHideTrotter*))((::PBYTE)hIl2Cpp + CLASS_2_76F21C1F3AABC407__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76F21C1F3AABC407_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_76F21C1F3AABC407_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76F21C1F3AABC407_ONTASKBEGIN_OFFSET))(this);
	}

	static ::System::Void Method_2_7B6EC255F45D034F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_76F21C1F3AABC407_METHOD_2_7B6EC255F45D034F_OFFSET))(a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76F21C1F3AABC407_ONTASKRESET_OFFSET))(this);
	}
};
