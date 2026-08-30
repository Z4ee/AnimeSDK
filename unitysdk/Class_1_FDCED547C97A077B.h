#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_255;
class Class_2_68CB91321C3E76A7;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class BaseLittleGameAbilityEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FDCED547C97A077B_EXECUTE_OFFSET UNITYSDK_OFFSET(0x17BC2F30)
#define CLASS_1_FDCED547C97A077B_METHOD_1_F0A53289AA528499_OFFSET UNITYSDK_OFFSET(0x17BC3530)
#define CLASS_1_FDCED547C97A077B__CTOR_OFFSET UNITYSDK_OFFSET(0x17BC3B60)

inline static constexpr unsigned int Class_1_FDCED547C97A077B_TypeDefinitionIndex = 76867;

class Class_1_FDCED547C97A077B : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDCED547C97A077B__CTOR_OFFSET))(this);
	}

	::System::Void Execute(::Class_0_16E4307DCC419505_255* a1, ::System::Collections::Generic::List_1<::Entitas::IEntity*>* a2, ::RPG::GameCore::BaseLittleGameAbilityEffectConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_255*, ::System::Collections::Generic::List_1<::Entitas::IEntity*>*, ::RPG::GameCore::BaseLittleGameAbilityEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_1_FDCED547C97A077B_EXECUTE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F0A53289AA528499(::Class_0_16E4307DCC419505_255* a1, ::Class_2_68CB91321C3E76A7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_255*, ::Class_2_68CB91321C3E76A7*))((::PBYTE)hIl2Cpp + CLASS_1_FDCED547C97A077B_METHOD_1_F0A53289AA528499_OFFSET))(this, a1, a2);
	}
};
