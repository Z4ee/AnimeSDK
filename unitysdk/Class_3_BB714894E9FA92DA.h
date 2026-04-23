#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetPropCablelineVisible; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BB714894E9FA92DA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11A00C50)
#define CLASS_3_BB714894E9FA92DA__CTOR_OFFSET UNITYSDK_OFFSET(0x11A00C20)

inline static constexpr unsigned int Class_3_BB714894E9FA92DA_TypeDefinitionIndex = 53994;

class Class_3_BB714894E9FA92DA : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetPropCablelineVisible*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetPropCablelineVisible* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetPropCablelineVisible*))((::PBYTE)hIl2Cpp + CLASS_3_BB714894E9FA92DA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BB714894E9FA92DA_ONTASKBEGIN_OFFSET))(this);
	}
};
