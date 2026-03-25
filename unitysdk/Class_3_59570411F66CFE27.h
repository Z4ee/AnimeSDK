#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PinballPuzzleEnableControlMode; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_59570411F66CFE27_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8987030)
#define CLASS_3_59570411F66CFE27__CTOR_OFFSET UNITYSDK_OFFSET(0x8987000)

inline static constexpr unsigned int Class_3_59570411F66CFE27_TypeDefinitionIndex = 46994;

class Class_3_59570411F66CFE27 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PinballPuzzleEnableControlMode*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PinballPuzzleEnableControlMode* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PinballPuzzleEnableControlMode*))((::PBYTE)hIl2Cpp + CLASS_3_59570411F66CFE27__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_59570411F66CFE27_ONTASKBEGIN_OFFSET))(this);
	}
};
