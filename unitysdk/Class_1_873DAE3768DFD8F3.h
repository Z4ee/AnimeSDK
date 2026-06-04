#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_260;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_873DAE3768DFD8F3_METHOD_1_CA4384B74BA188C2_OFFSET UNITYSDK_OFFSET(0xB2862B0)
#define CLASS_1_873DAE3768DFD8F3__CTOR_OFFSET UNITYSDK_OFFSET(0xB2866B0)

inline static constexpr unsigned int Class_1_873DAE3768DFD8F3_TypeDefinitionIndex = 71896;

class Class_1_873DAE3768DFD8F3 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_873DAE3768DFD8F3__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_1_CA4384B74BA188C2(::Class_0_16E4307DCC419505_260* a1, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::Class_0_16E4307DCC419505_260*, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_873DAE3768DFD8F3_METHOD_1_CA4384B74BA188C2_OFFSET))(this, a1, a2);
	}
};
