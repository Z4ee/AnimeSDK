#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_280;
class Class_2_68CB91321C3E76A7;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class BaseLittleGameAbilityEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_ADE5759019F8B5D0_EXECUTE_OFFSET UNITYSDK_OFFSET(0x18B69C30)
#define CLASS_1_ADE5759019F8B5D0_METHOD_1_0505AA4D2BAFAE8A_OFFSET UNITYSDK_OFFSET(0x18B6A260)
#define CLASS_1_ADE5759019F8B5D0__CTOR_OFFSET UNITYSDK_OFFSET(0x18B6A420)

inline static constexpr unsigned int Class_1_ADE5759019F8B5D0_TypeDefinitionIndex = 73391;

class Class_1_ADE5759019F8B5D0 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADE5759019F8B5D0__CTOR_OFFSET))(this);
	}

	::System::Void Execute(::Class_0_16E4307DCC419505_280* a1, ::System::Collections::Generic::List_1<::Entitas::IEntity*>* a2, ::RPG::GameCore::BaseLittleGameAbilityEffectConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_280*, ::System::Collections::Generic::List_1<::Entitas::IEntity*>*, ::RPG::GameCore::BaseLittleGameAbilityEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_1_ADE5759019F8B5D0_EXECUTE_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Boolean Method_1_0505AA4D2BAFAE8A(::Class_2_68CB91321C3E76A7* a1, ::RPG::GameCore::FixPoint& a2)
	{
		return ((::System::Boolean(*)(::Class_2_68CB91321C3E76A7*, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_1_ADE5759019F8B5D0_METHOD_1_0505AA4D2BAFAE8A_OFFSET))(a1, a2);
	}
};
