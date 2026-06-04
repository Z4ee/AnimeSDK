#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_260;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace RPG::GameCore { class LittleGameAbilityTargetSelectorMissleTargetConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_9532D13254C93940_METHOD_1_0EBDB538CE8E5F14_OFFSET UNITYSDK_OFFSET(0x1362BC70)
#define CLASS_1_9532D13254C93940_METHOD_1_8977C80BCE1C878B_OFFSET UNITYSDK_OFFSET(0x1362BBB0)
#define CLASS_1_9532D13254C93940__CTOR_OFFSET UNITYSDK_OFFSET(0x1362BD30)

inline static constexpr unsigned int Class_1_9532D13254C93940_TypeDefinitionIndex = 71910;

class Class_1_9532D13254C93940 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9532D13254C93940__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_1_8977C80BCE1C878B(::Class_0_16E4307DCC419505_260* a1, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::Class_0_16E4307DCC419505_260*, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_9532D13254C93940_METHOD_1_8977C80BCE1C878B_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_1_0EBDB538CE8E5F14(::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorMissleTargetConfig*& a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*, ::RPG::GameCore::LittleGameAbilityTargetSelectorMissleTargetConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_9532D13254C93940_METHOD_1_0EBDB538CE8E5F14_OFFSET))(a1, a2);
	}
};
