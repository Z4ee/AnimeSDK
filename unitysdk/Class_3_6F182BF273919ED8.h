#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ModifyActivityElationPower; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6F182BF273919ED8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18C7E3A0)
#define CLASS_3_6F182BF273919ED8__CTOR_OFFSET UNITYSDK_OFFSET(0x18C7E370)

inline static constexpr unsigned int Class_3_6F182BF273919ED8_TypeDefinitionIndex = 52325;

class Class_3_6F182BF273919ED8 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ModifyActivityElationPower*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyActivityElationPower* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyActivityElationPower*))((::PBYTE)hIl2Cpp + CLASS_3_6F182BF273919ED8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6F182BF273919ED8_ONTASKBEGIN_OFFSET))(this);
	}
};
