#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LittleGameAbilityAttributeType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_260;
class Class_2_68CB91321C3E76A7;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class BaseLittleGameAbilityEffectConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4FDAE5DD547F91CF_EXECUTE_OFFSET UNITYSDK_OFFSET(0x13C76FF0)
#define CLASS_1_4FDAE5DD547F91CF_METHOD_1_4965C4EB9AEE2067_OFFSET UNITYSDK_OFFSET(0x13C77370)
#define CLASS_1_4FDAE5DD547F91CF__CTOR_OFFSET UNITYSDK_OFFSET(0x13C77920)

inline static constexpr unsigned int Class_1_4FDAE5DD547F91CF_TypeDefinitionIndex = 71869;

class Class_1_4FDAE5DD547F91CF : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4FDAE5DD547F91CF__CTOR_OFFSET))(this);
	}

	::System::Void Execute(::Class_0_16E4307DCC419505_260* a1, ::System::Collections::Generic::List_1<::Entitas::IEntity*>* a2, ::RPG::GameCore::BaseLittleGameAbilityEffectConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_260*, ::System::Collections::Generic::List_1<::Entitas::IEntity*>*, ::RPG::GameCore::BaseLittleGameAbilityEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_1_4FDAE5DD547F91CF_EXECUTE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4965C4EB9AEE2067(::Class_0_16E4307DCC419505_260* a1, ::Class_2_68CB91321C3E76A7* a2, ::Entitas::IEntity* a3, ::RPG::GameCore::LittleGameAbilityAttributeType a4, ::RPG::GameCore::FixPoint a5, ::System::String* a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_260*, ::Class_2_68CB91321C3E76A7*, ::Entitas::IEntity*, ::RPG::GameCore::LittleGameAbilityAttributeType, ::RPG::GameCore::FixPoint, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4FDAE5DD547F91CF_METHOD_1_4965C4EB9AEE2067_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
};
