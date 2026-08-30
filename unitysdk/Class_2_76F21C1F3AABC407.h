#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RogueDLCADVRoomHideTrotter; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_76F21C1F3AABC407_DISPOSE_OFFSET UNITYSDK_OFFSET(0x151F1B20)
#define CLASS_2_76F21C1F3AABC407_METHOD_2_7B6EC255F45D034F_OFFSET UNITYSDK_OFFSET(0x151F1EC0)
#define CLASS_2_76F21C1F3AABC407_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x151F1BC0)
#define CLASS_2_76F21C1F3AABC407_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x151F2000)
#define CLASS_2_76F21C1F3AABC407_TICK_OFFSET UNITYSDK_OFFSET(0x151F1B60)
#define CLASS_2_76F21C1F3AABC407__CTOR_OFFSET UNITYSDK_OFFSET(0x151F1B10)

inline static constexpr unsigned int Class_2_76F21C1F3AABC407_TypeDefinitionIndex = 58611;

class Class_2_76F21C1F3AABC407 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::RogueDLCADVRoomHideTrotter* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

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
