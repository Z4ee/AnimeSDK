#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ActiveActionCountDown; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_89C940C18C4E90D7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x170779C0)
#define CLASS_3_89C940C18C4E90D7__CTOR_OFFSET UNITYSDK_OFFSET(0x17077990)

inline static constexpr unsigned int Class_3_89C940C18C4E90D7_TypeDefinitionIndex = 52320;

class Class_3_89C940C18C4E90D7 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ActiveActionCountDown*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ActiveActionCountDown* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ActiveActionCountDown*))((::PBYTE)hIl2Cpp + CLASS_3_89C940C18C4E90D7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_89C940C18C4E90D7_ONTASKBEGIN_OFFSET))(this);
	}
};
