#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_344EBF2097F86C15;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_344EBF2097F86C15_STRUCT_2_2AB2652083820705_ONAFTERMODELARTLOAD_OFFSET UNITYSDK_OFFSET(0x14E9540)
#define CLASS_1_344EBF2097F86C15_STRUCT_2_2AB2652083820705_ONBEFOREMODELARTUNLOAD_OFFSET UNITYSDK_OFFSET(0x14E95A0)

inline static constexpr unsigned int Class_1_344EBF2097F86C15_Struct_2_2AB2652083820705_TypeDefinitionIndex = 62578;

struct alignas(8) Class_1_344EBF2097F86C15_Struct_2_2AB2652083820705
{
	::Class_1_344EBF2097F86C15* Field_2_0; // 0x10

	::System::Void OnAfterModelArtLoad(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_344EBF2097F86C15_STRUCT_2_2AB2652083820705_ONAFTERMODELARTLOAD_OFFSET))(this, a1);
	}

	::System::Void OnBeforeModelArtUnload(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_344EBF2097F86C15_STRUCT_2_2AB2652083820705_ONBEFOREMODELARTUNLOAD_OFFSET))(this, a1);
	}
};
