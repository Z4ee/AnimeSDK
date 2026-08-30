#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ModifyAdventureCharacterRunSpeedRatio; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_240DE770DD6D5780_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A862B80)
#define CLASS_3_240DE770DD6D5780__CTOR_OFFSET UNITYSDK_OFFSET(0x1A862B50)

inline static constexpr unsigned int Class_3_240DE770DD6D5780_TypeDefinitionIndex = 53297;

class Class_3_240DE770DD6D5780 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ModifyAdventureCharacterRunSpeedRatio*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyAdventureCharacterRunSpeedRatio* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyAdventureCharacterRunSpeedRatio*))((::PBYTE)hIl2Cpp + CLASS_3_240DE770DD6D5780__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_240DE770DD6D5780_ONTASKBEGIN_OFFSET))(this);
	}
};
