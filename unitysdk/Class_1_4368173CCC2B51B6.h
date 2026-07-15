#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_280;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace RPG::GameCore { class LittleGameAbilityTargetSelectorLastAttackerConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_4368173CCC2B51B6_METHOD_1_9D509D1B0E93B0EB_OFFSET UNITYSDK_OFFSET(0x151626D0)
#define CLASS_1_4368173CCC2B51B6_METHOD_1_EFA435B714E8F494_OFFSET UNITYSDK_OFFSET(0x15162200)
#define CLASS_1_4368173CCC2B51B6__CTOR_OFFSET UNITYSDK_OFFSET(0x15162790)

inline static constexpr unsigned int Class_1_4368173CCC2B51B6_TypeDefinitionIndex = 73434;

class Class_1_4368173CCC2B51B6 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4368173CCC2B51B6__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_1_EFA435B714E8F494(::Class_0_16E4307DCC419505_280* a1, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::Class_0_16E4307DCC419505_280*, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_4368173CCC2B51B6_METHOD_1_EFA435B714E8F494_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_1_9D509D1B0E93B0EB(::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorLastAttackerConfig*& a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*, ::RPG::GameCore::LittleGameAbilityTargetSelectorLastAttackerConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_4368173CCC2B51B6_METHOD_1_9D509D1B0E93B0EB_OFFSET))(a1, a2);
	}
};
