#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_280;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class BaseLittleGameAbilityEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DA2BCFBF7C44B109_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1707C210)
#define CLASS_1_DA2BCFBF7C44B109__CTOR_OFFSET UNITYSDK_OFFSET(0x1707C510)

inline static constexpr unsigned int Class_1_DA2BCFBF7C44B109_TypeDefinitionIndex = 73409;

class Class_1_DA2BCFBF7C44B109 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA2BCFBF7C44B109__CTOR_OFFSET))(this);
	}

	::System::Void Execute(::Class_0_16E4307DCC419505_280* a1, ::System::Collections::Generic::List_1<::Entitas::IEntity*>* a2, ::RPG::GameCore::BaseLittleGameAbilityEffectConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_280*, ::System::Collections::Generic::List_1<::Entitas::IEntity*>*, ::RPG::GameCore::BaseLittleGameAbilityEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_1_DA2BCFBF7C44B109_EXECUTE_OFFSET))(this, a1, a2, a3);
	}
};
