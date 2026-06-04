#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropFastDeliverInitEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_6E447A28B1BBD2DE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB03DFE0)
#define CLASS_2_6E447A28B1BBD2DE_ONAFTERMODELARTLOAD_OFFSET UNITYSDK_OFFSET(0xB03DB40)
#define CLASS_2_6E447A28B1BBD2DE_ONBEFOREMODELARTUNLOAD_OFFSET UNITYSDK_OFFSET(0xB03E100)
#define CLASS_2_6E447A28B1BBD2DE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB03D7B0)
#define CLASS_2_6E447A28B1BBD2DE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB03DF40)
#define CLASS_2_6E447A28B1BBD2DE_TICK_OFFSET UNITYSDK_OFFSET(0xB03E0A0)
#define CLASS_2_6E447A28B1BBD2DE__CTOR_OFFSET UNITYSDK_OFFSET(0xB03D790)

inline static constexpr unsigned int Class_2_6E447A28B1BBD2DE_TypeDefinitionIndex = 54517;

class Class_2_6E447A28B1BBD2DE : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::PropFastDeliverInitEntity* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::UnityEngine::Quaternion Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropFastDeliverInitEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropFastDeliverInitEntity*))((::PBYTE)hIl2Cpp + CLASS_2_6E447A28B1BBD2DE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E447A28B1BBD2DE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E447A28B1BBD2DE_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E447A28B1BBD2DE_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6E447A28B1BBD2DE_TICK_OFFSET))(this, a1);
	}

	::System::Void OnBeforeModelArtUnload(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_6E447A28B1BBD2DE_ONBEFOREMODELARTUNLOAD_OFFSET))(this, a1);
	}

	::System::Void OnAfterModelArtLoad(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_6E447A28B1BBD2DE_ONAFTERMODELARTLOAD_OFFSET))(this, a1);
	}
};
