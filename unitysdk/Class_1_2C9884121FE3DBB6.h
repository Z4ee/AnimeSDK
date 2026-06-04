#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_260;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_2C9884121FE3DBB6_METHOD_1_248BA9580A142F7B_OFFSET UNITYSDK_OFFSET(0xB0659F0)
#define CLASS_1_2C9884121FE3DBB6__CTOR_OFFSET UNITYSDK_OFFSET(0xB065BC0)

inline static constexpr unsigned int Class_1_2C9884121FE3DBB6_TypeDefinitionIndex = 71906;

class Class_1_2C9884121FE3DBB6 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C9884121FE3DBB6__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_1_248BA9580A142F7B(::Class_0_16E4307DCC419505_260* a1, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::Class_0_16E4307DCC419505_260*, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_2C9884121FE3DBB6_METHOD_1_248BA9580A142F7B_OFFSET))(this, a1, a2);
	}
};
