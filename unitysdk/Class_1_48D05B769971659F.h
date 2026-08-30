#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_255;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace RPG::GameCore { class LittleGameAbilityTargetSelectorLaserTargetConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_48D05B769971659F_METHOD_1_8102FF8F4CDC6FCE_OFFSET UNITYSDK_OFFSET(0x184B4960)
#define CLASS_1_48D05B769971659F_METHOD_1_8977C80BCE1C878B_OFFSET UNITYSDK_OFFSET(0x184B48A0)
#define CLASS_1_48D05B769971659F__CTOR_OFFSET UNITYSDK_OFFSET(0x184B4A20)

inline static constexpr unsigned int Class_1_48D05B769971659F_TypeDefinitionIndex = 76915;

class Class_1_48D05B769971659F : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48D05B769971659F__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_1_8977C80BCE1C878B(::Class_0_16E4307DCC419505_255* a1, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::Class_0_16E4307DCC419505_255*, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_48D05B769971659F_METHOD_1_8977C80BCE1C878B_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_1_8102FF8F4CDC6FCE(::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorLaserTargetConfig*& a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*, ::RPG::GameCore::LittleGameAbilityTargetSelectorLaserTargetConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_48D05B769971659F_METHOD_1_8102FF8F4CDC6FCE_OFFSET))(a1, a2);
	}
};
