#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_255;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_28484967E6BD60BE_1_METHOD_1_74BBDE38ED8CCF11_OFFSET UNITYSDK_OFFSET(0x18D25900)
#define CLASS_1_28484967E6BD60BE_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18D268B0)

inline static constexpr unsigned int Class_1_28484967E6BD60BE_1_TypeDefinitionIndex = 76907;

class Class_1_28484967E6BD60BE_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28484967E6BD60BE_1__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_1_74BBDE38ED8CCF11(::Class_0_16E4307DCC419505_255* a1, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::Class_0_16E4307DCC419505_255*, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_28484967E6BD60BE_1_METHOD_1_74BBDE38ED8CCF11_OFFSET))(this, a1, a2);
	}
};
