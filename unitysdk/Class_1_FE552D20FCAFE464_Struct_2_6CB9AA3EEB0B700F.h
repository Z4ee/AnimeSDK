#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_FE552D20FCAFE464;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_FE552D20FCAFE464_STRUCT_2_6CB9AA3EEB0B700F_ONAFTERMODELARTLOAD_OFFSET UNITYSDK_OFFSET(0x397D950)
#define CLASS_1_FE552D20FCAFE464_STRUCT_2_6CB9AA3EEB0B700F_ONBEFOREMODELARTUNLOAD_OFFSET UNITYSDK_OFFSET(0x397D9B0)

inline static constexpr unsigned int Class_1_FE552D20FCAFE464_Struct_2_6CB9AA3EEB0B700F_TypeDefinitionIndex = 72934;

struct alignas(8) Class_1_FE552D20FCAFE464_Struct_2_6CB9AA3EEB0B700F
{
	::Class_1_FE552D20FCAFE464* Field_2_0; // 0x10

	::System::Void OnAfterModelArtLoad(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_FE552D20FCAFE464_STRUCT_2_6CB9AA3EEB0B700F_ONAFTERMODELARTLOAD_OFFSET))(this, a1);
	}

	::System::Void OnBeforeModelArtUnload(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_FE552D20FCAFE464_STRUCT_2_6CB9AA3EEB0B700F_ONBEFOREMODELARTUNLOAD_OFFSET))(this, a1);
	}
};
