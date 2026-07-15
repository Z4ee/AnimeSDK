#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PropUnloadHitBox; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_060055BB8A26EF44_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x146F1C90)
#define CLASS_3_060055BB8A26EF44__CTOR_OFFSET UNITYSDK_OFFSET(0x146F1C60)

inline static constexpr unsigned int Class_3_060055BB8A26EF44_TypeDefinitionIndex = 55781;

class Class_3_060055BB8A26EF44 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PropUnloadHitBox*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropUnloadHitBox* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropUnloadHitBox*))((::PBYTE)hIl2Cpp + CLASS_3_060055BB8A26EF44__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_060055BB8A26EF44_ONTASKBEGIN_OFFSET))(this);
	}
};
