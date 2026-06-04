#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1165;
class Class_0_16E4307DCC419505_260;
class Class_1_5175A8A362457A24;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_17EE39DF0930C1B5_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA8F8AF0)
#define CLASS_1_17EE39DF0930C1B5_METHOD_1_4AE7626AFF49D8B4_OFFSET UNITYSDK_OFFSET(0xA8F8950)
#define CLASS_1_17EE39DF0930C1B5_METHOD_1_5B2CE2E4AEBA94F5_OFFSET UNITYSDK_OFFSET(0xA8F8740)
#define CLASS_1_17EE39DF0930C1B5__CTOR_OFFSET UNITYSDK_OFFSET(0xA8F8B90)

inline static constexpr unsigned int Class_1_17EE39DF0930C1B5_TypeDefinitionIndex = 71893;

class Class_1_17EE39DF0930C1B5 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_0_16E4307DCC419505_1165*>* Field_1_0; // 0x10
	::Class_1_5175A8A362457A24* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17EE39DF0930C1B5__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_1_5B2CE2E4AEBA94F5(::Class_0_16E4307DCC419505_260* a1, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::Class_0_16E4307DCC419505_260*, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_17EE39DF0930C1B5_METHOD_1_5B2CE2E4AEBA94F5_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_1165* Method_1_4AE7626AFF49D8B4(::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a1)
	{
		return ((::Class_0_16E4307DCC419505_1165*(*)(::PVOID, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_17EE39DF0930C1B5_METHOD_1_4AE7626AFF49D8B4_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17EE39DF0930C1B5_DISPOSE_OFFSET))(this);
	}
};
