#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_260;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class BaseLittleGameAbilityEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F71FFDCF5C13B0F2_EXECUTE_OFFSET UNITYSDK_OFFSET(0x13A24C30)
#define CLASS_1_F71FFDCF5C13B0F2__CTOR_OFFSET UNITYSDK_OFFSET(0x13A250D0)

inline static constexpr unsigned int Class_1_F71FFDCF5C13B0F2_TypeDefinitionIndex = 71864;

class Class_1_F71FFDCF5C13B0F2 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F71FFDCF5C13B0F2__CTOR_OFFSET))(this);
	}

	::System::Void Execute(::Class_0_16E4307DCC419505_260* a1, ::System::Collections::Generic::List_1<::Entitas::IEntity*>* a2, ::RPG::GameCore::BaseLittleGameAbilityEffectConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_260*, ::System::Collections::Generic::List_1<::Entitas::IEntity*>*, ::RPG::GameCore::BaseLittleGameAbilityEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_1_F71FFDCF5C13B0F2_EXECUTE_OFFSET))(this, a1, a2, a3);
	}
};
