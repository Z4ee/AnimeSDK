#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9460500198FA60FB_Struct_2_C4BACA0F63C490F1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_329;
class Class_2_230F5EDDB35DAEBA;
class Class_2_D55679E3C796A7AF;
namespace RPG::Client { class RoadRashGameAbilityTargetSelector_FireTargetConfig; }
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_9460500198FA60FB_METHOD_1_878FEB34AA2755A2_OFFSET UNITYSDK_OFFSET(0x165880D0)
#define CLASS_1_9460500198FA60FB_METHOD_1_BF2408B96949E841_OFFSET UNITYSDK_OFFSET(0x165872B0)
#define CLASS_1_9460500198FA60FB_METHOD_1_ED131C56B34AE602_OFFSET UNITYSDK_OFFSET(0x16587D60)
#define CLASS_1_9460500198FA60FB__CTOR_OFFSET UNITYSDK_OFFSET(0x165886F0)

inline static constexpr unsigned int Class_1_9460500198FA60FB_TypeDefinitionIndex = 77404;

class Class_1_9460500198FA60FB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9460500198FA60FB__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_1_BF2408B96949E841(::Class_0_16E4307DCC419505_329* a1, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::Class_0_16E4307DCC419505_329*, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_9460500198FA60FB_METHOD_1_BF2408B96949E841_OFFSET))(this, a1, a2);
	}

	static ::Class_2_230F5EDDB35DAEBA* Method_1_878FEB34AA2755A2(::Class_2_230F5EDDB35DAEBA* a1, ::Class_2_D55679E3C796A7AF* a2, ::RPG::Client::RoadRashGameAbilityTargetSelector_FireTargetConfig* a3)
	{
		return ((::Class_2_230F5EDDB35DAEBA*(*)(::Class_2_230F5EDDB35DAEBA*, ::Class_2_D55679E3C796A7AF*, ::RPG::Client::RoadRashGameAbilityTargetSelector_FireTargetConfig*))((::PBYTE)hIl2Cpp + CLASS_1_9460500198FA60FB_METHOD_1_878FEB34AA2755A2_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_9460500198FA60FB_Struct_2_C4BACA0F63C490F1 Method_1_ED131C56B34AE602(::Class_2_230F5EDDB35DAEBA* a1, ::RPG::Client::RoadRashGameAbilityTargetSelector_FireTargetConfig* a2)
	{
		return ((::Class_1_9460500198FA60FB_Struct_2_C4BACA0F63C490F1(*)(::Class_2_230F5EDDB35DAEBA*, ::RPG::Client::RoadRashGameAbilityTargetSelector_FireTargetConfig*))((::PBYTE)hIl2Cpp + CLASS_1_9460500198FA60FB_METHOD_1_ED131C56B34AE602_OFFSET))(a1, a2);
	}
};
