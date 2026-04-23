#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class CharacterModelScaleEventParam; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ScaleCharacterModel; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_488601CA81A7B9C6_METHOD_3_4109E94CF6F46D39_OFFSET UNITYSDK_OFFSET(0x11909FB0)
#define CLASS_3_488601CA81A7B9C6_METHOD_3_866FD2514707B023_OFFSET UNITYSDK_OFFSET(0x11909E10)
#define CLASS_3_488601CA81A7B9C6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11909450)
#define CLASS_3_488601CA81A7B9C6__CTOR_OFFSET UNITYSDK_OFFSET(0x11909410)

inline static constexpr unsigned int Class_3_488601CA81A7B9C6_TypeDefinitionIndex = 51016;

class Class_3_488601CA81A7B9C6 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ScaleCharacterModel*>
{
public:
	::RPG::GameCore::CharacterModelScaleEventParam* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ScaleCharacterModel* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ScaleCharacterModel*))((::PBYTE)hIl2Cpp + CLASS_3_488601CA81A7B9C6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_488601CA81A7B9C6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Single Method_3_866FD2514707B023(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_488601CA81A7B9C6_METHOD_3_866FD2514707B023_OFFSET))(this, a1);
	}

	::System::Void Method_3_4109E94CF6F46D39(::RPG::GameCore::GameEntity* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_488601CA81A7B9C6_METHOD_3_4109E94CF6F46D39_OFFSET))(this, a1, a2, a3);
	}
};
