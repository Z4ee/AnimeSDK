#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LittleGameAbilityAttributeType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_260;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class BaseLittleGameAbilityEffectConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F9E645BC9F734AB9_1_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBA0F090)
#define CLASS_1_F9E645BC9F734AB9_1_METHOD_1_9AFB1F3E511990E8_OFFSET UNITYSDK_OFFSET(0xBA0F410)
#define CLASS_1_F9E645BC9F734AB9_1__CTOR_OFFSET UNITYSDK_OFFSET(0xBA0FB00)

inline static constexpr unsigned int Class_1_F9E645BC9F734AB9_1_TypeDefinitionIndex = 71871;

class Class_1_F9E645BC9F734AB9_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9E645BC9F734AB9_1__CTOR_OFFSET))(this);
	}

	::System::Void Execute(::Class_0_16E4307DCC419505_260* a1, ::System::Collections::Generic::List_1<::Entitas::IEntity*>* a2, ::RPG::GameCore::BaseLittleGameAbilityEffectConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_260*, ::System::Collections::Generic::List_1<::Entitas::IEntity*>*, ::RPG::GameCore::BaseLittleGameAbilityEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_1_F9E645BC9F734AB9_1_EXECUTE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_9AFB1F3E511990E8(::Class_0_16E4307DCC419505_260* a1, ::Entitas::IEntity* a2, ::RPG::GameCore::LittleGameAbilityAttributeType a3, ::RPG::GameCore::FixPoint a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_260*, ::Entitas::IEntity*, ::RPG::GameCore::LittleGameAbilityAttributeType, ::RPG::GameCore::FixPoint, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9E645BC9F734AB9_1_METHOD_1_9AFB1F3E511990E8_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
