#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_255;
namespace Entitas { class IEntity; }
namespace RPG::Client::LittleGame::Ability { template <typename T> class ILittleGameAbilityEffect_1; }
namespace RPG::GameCore { class BaseLittleGameAbilityEffectConfig; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_68A245430D17E74A_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC360AF0)
#define CLASS_1_68A245430D17E74A_METHOD_1_1ECBAF93B4C352B2_OFFSET UNITYSDK_OFFSET(0xC360B90)
#define CLASS_1_68A245430D17E74A__CTOR_OFFSET UNITYSDK_OFFSET(0xC360E10)

inline static constexpr unsigned int Class_1_68A245430D17E74A_TypeDefinitionIndex = 76860;

class Class_1_68A245430D17E74A : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::RPG::Client::LittleGame::Ability::ILittleGameAbilityEffect_1<::Entitas::IEntity*>*>* APPIAANONPF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68A245430D17E74A__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68A245430D17E74A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_1ECBAF93B4C352B2(::Class_0_16E4307DCC419505_255* a1, ::System::Collections::Generic::List_1<::Entitas::IEntity*>* a2, ::RPG::GameCore::BaseLittleGameAbilityEffectConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_255*, ::System::Collections::Generic::List_1<::Entitas::IEntity*>*, ::RPG::GameCore::BaseLittleGameAbilityEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_1_68A245430D17E74A_METHOD_1_1ECBAF93B4C352B2_OFFSET))(this, a1, a2, a3);
	}
};
