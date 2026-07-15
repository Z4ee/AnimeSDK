#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1211;
class Class_0_16E4307DCC419505_280;
class Class_1_5175A8A362457A24;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_C93B67AB1D1BC17A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15EE6170)
#define CLASS_1_C93B67AB1D1BC17A_METHOD_1_4AE7626AFF49D8B4_OFFSET UNITYSDK_OFFSET(0x15EE5FD0)
#define CLASS_1_C93B67AB1D1BC17A_METHOD_1_5AE12134C2F7CD2C_OFFSET UNITYSDK_OFFSET(0x15EE5CB0)
#define CLASS_1_C93B67AB1D1BC17A__CTOR_OFFSET UNITYSDK_OFFSET(0x15EE6210)

inline static constexpr unsigned int Class_1_C93B67AB1D1BC17A_TypeDefinitionIndex = 73418;

class Class_1_C93B67AB1D1BC17A : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_0_16E4307DCC419505_1211*>* Field_1_0; // 0x10
	::Class_1_5175A8A362457A24* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C93B67AB1D1BC17A__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_1_5AE12134C2F7CD2C(::Class_0_16E4307DCC419505_280* a1, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::Class_0_16E4307DCC419505_280*, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_C93B67AB1D1BC17A_METHOD_1_5AE12134C2F7CD2C_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_1211* Method_1_4AE7626AFF49D8B4(::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a1)
	{
		return ((::Class_0_16E4307DCC419505_1211*(*)(::PVOID, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_C93B67AB1D1BC17A_METHOD_1_4AE7626AFF49D8B4_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C93B67AB1D1BC17A_DISPOSE_OFFSET))(this);
	}
};
