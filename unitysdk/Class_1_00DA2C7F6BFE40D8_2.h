#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_260;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_00DA2C7F6BFE40D8_2_METHOD_1_53B731951AA9ACD9_OFFSET UNITYSDK_OFFSET(0xABAD940)
#define CLASS_1_00DA2C7F6BFE40D8_2__CTOR_OFFSET UNITYSDK_OFFSET(0xABADCB0)

inline static constexpr unsigned int Class_1_00DA2C7F6BFE40D8_2_TypeDefinitionIndex = 71900;

class Class_1_00DA2C7F6BFE40D8_2 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00DA2C7F6BFE40D8_2__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_1_53B731951AA9ACD9(::Class_0_16E4307DCC419505_260* a1, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::Class_0_16E4307DCC419505_260*, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_00DA2C7F6BFE40D8_2_METHOD_1_53B731951AA9ACD9_OFFSET))(this, a1, a2);
	}
};
