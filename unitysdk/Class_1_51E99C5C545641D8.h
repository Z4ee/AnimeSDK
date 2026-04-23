#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AttackData; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_1_51E99C5C545641D8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x123D9980)
#define CLASS_1_51E99C5C545641D8__CTOR_OFFSET UNITYSDK_OFFSET(0x123D9910)

inline static constexpr unsigned int Class_1_51E99C5C545641D8_TypeDefinitionIndex = 52072;

class Class_1_51E99C5C545641D8 : public ::System::Object
{
public:
	::RPG::GameCore::AttackData* Field_1_0; // 0x10
	::RPG::GameCore::AttackDamageType Field_1_1; // 0x18
	::RPG::GameCore::AttackDamageType Field_1_2; // 0x1C

	::System::Void _ctor(::RPG::GameCore::AttackData* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_51E99C5C545641D8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51E99C5C545641D8_DISPOSE_OFFSET))(this);
	}
};
