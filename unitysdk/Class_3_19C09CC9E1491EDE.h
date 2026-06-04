#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class CharacterModelScaleEventParam; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ScaleCharacterModel; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_19C09CC9E1491EDE_METHOD_3_866FD2514707B023_OFFSET UNITYSDK_OFFSET(0xA4542E0)
#define CLASS_3_19C09CC9E1491EDE_METHOD_3_94B3F9FF68595670_OFFSET UNITYSDK_OFFSET(0xA454480)
#define CLASS_3_19C09CC9E1491EDE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA453930)
#define CLASS_3_19C09CC9E1491EDE__CTOR_OFFSET UNITYSDK_OFFSET(0xA4538F0)

inline static constexpr unsigned int Class_3_19C09CC9E1491EDE_TypeDefinitionIndex = 51686;

class Class_3_19C09CC9E1491EDE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ScaleCharacterModel*>
{
public:
	::RPG::GameCore::CharacterModelScaleEventParam* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ScaleCharacterModel* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ScaleCharacterModel*))((::PBYTE)hIl2Cpp + CLASS_3_19C09CC9E1491EDE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_19C09CC9E1491EDE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Single Method_3_866FD2514707B023(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_19C09CC9E1491EDE_METHOD_3_866FD2514707B023_OFFSET))(this, a1);
	}

	::System::Void Method_3_94B3F9FF68595670(::RPG::GameCore::GameEntity* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_19C09CC9E1491EDE_METHOD_3_94B3F9FF68595670_OFFSET))(this, a1, a2, a3);
	}
};
