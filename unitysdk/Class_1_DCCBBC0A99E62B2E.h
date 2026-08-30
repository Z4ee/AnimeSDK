#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_255;
class Class_2_230F5EDDB35DAEBA;
class Class_2_D55679E3C796A7AF;
namespace RPG::Client { class RoadRashGameAbilityTargetSelector_SlamTargetConfig; }
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_DCCBBC0A99E62B2E_METHOD_1_6DAF7CD82776EEF3_OFFSET UNITYSDK_OFFSET(0x177EF590)
#define CLASS_1_DCCBBC0A99E62B2E_METHOD_1_9EAC7B52DEF946C8_OFFSET UNITYSDK_OFFSET(0x177F00D0)
#define CLASS_1_DCCBBC0A99E62B2E__CTOR_OFFSET UNITYSDK_OFFSET(0x177F0230)

inline static constexpr unsigned int Class_1_DCCBBC0A99E62B2E_TypeDefinitionIndex = 76935;

class Class_1_DCCBBC0A99E62B2E : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCCBBC0A99E62B2E__CTOR_OFFSET))(this);
	}

	static ::Class_2_230F5EDDB35DAEBA* Method_1_6DAF7CD82776EEF3(::Class_2_230F5EDDB35DAEBA* a1, ::Class_2_D55679E3C796A7AF* a2, ::RPG::Client::RoadRashGameAbilityTargetSelector_SlamTargetConfig* a3)
	{
		return ((::Class_2_230F5EDDB35DAEBA*(*)(::Class_2_230F5EDDB35DAEBA*, ::Class_2_D55679E3C796A7AF*, ::RPG::Client::RoadRashGameAbilityTargetSelector_SlamTargetConfig*))((::PBYTE)hIl2Cpp + CLASS_1_DCCBBC0A99E62B2E_METHOD_1_6DAF7CD82776EEF3_OFFSET))(a1, a2, a3);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_1_9EAC7B52DEF946C8(::Class_0_16E4307DCC419505_255* a1, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::Class_0_16E4307DCC419505_255*, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_DCCBBC0A99E62B2E_METHOD_1_9EAC7B52DEF946C8_OFFSET))(this, a1, a2);
	}
};
