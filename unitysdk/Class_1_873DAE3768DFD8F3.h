#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_255;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_873DAE3768DFD8F3_METHOD_1_CA4384B74BA188C2_OFFSET UNITYSDK_OFFSET(0x1A0AD5D0)
#define CLASS_1_873DAE3768DFD8F3__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0ADAA0)

inline static constexpr unsigned int Class_1_873DAE3768DFD8F3_TypeDefinitionIndex = 76900;

class Class_1_873DAE3768DFD8F3 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_873DAE3768DFD8F3__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_1_CA4384B74BA188C2(::Class_0_16E4307DCC419505_255* a1, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::Class_0_16E4307DCC419505_255*, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_873DAE3768DFD8F3_METHOD_1_CA4384B74BA188C2_OFFSET))(this, a1, a2);
	}
};
