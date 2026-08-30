#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_86A84767BA529BD4_Struct_2_C4BACA0F63C490F1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_255;
class Class_2_230F5EDDB35DAEBA;
class Class_2_8D31566281692B25;
namespace RPG::Client { class RoadRashGameAbilityTargetSelector_FireTargetConfig; }
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_86A84767BA529BD4_METHOD_1_8B5A62FE5C9FD17C_OFFSET UNITYSDK_OFFSET(0x1621DAA0)
#define CLASS_1_86A84767BA529BD4_METHOD_1_AAB5F9BCCA175AFE_OFFSET UNITYSDK_OFFSET(0x1621EB00)
#define CLASS_1_86A84767BA529BD4_METHOD_1_ED131C56B34AE602_OFFSET UNITYSDK_OFFSET(0x1621E790)
#define CLASS_1_86A84767BA529BD4__CTOR_OFFSET UNITYSDK_OFFSET(0x1621F240)

inline static constexpr unsigned int Class_1_86A84767BA529BD4_TypeDefinitionIndex = 76934;

class Class_1_86A84767BA529BD4 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86A84767BA529BD4__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_1_8B5A62FE5C9FD17C(::Class_0_16E4307DCC419505_255* a1, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::Class_0_16E4307DCC419505_255*, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_86A84767BA529BD4_METHOD_1_8B5A62FE5C9FD17C_OFFSET))(this, a1, a2);
	}

	static ::Class_2_230F5EDDB35DAEBA* Method_1_AAB5F9BCCA175AFE(::Class_2_230F5EDDB35DAEBA* a1, ::Class_2_8D31566281692B25* a2, ::RPG::Client::RoadRashGameAbilityTargetSelector_FireTargetConfig* a3)
	{
		return ((::Class_2_230F5EDDB35DAEBA*(*)(::Class_2_230F5EDDB35DAEBA*, ::Class_2_8D31566281692B25*, ::RPG::Client::RoadRashGameAbilityTargetSelector_FireTargetConfig*))((::PBYTE)hIl2Cpp + CLASS_1_86A84767BA529BD4_METHOD_1_AAB5F9BCCA175AFE_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_86A84767BA529BD4_Struct_2_C4BACA0F63C490F1 Method_1_ED131C56B34AE602(::Class_2_230F5EDDB35DAEBA* a1, ::RPG::Client::RoadRashGameAbilityTargetSelector_FireTargetConfig* a2)
	{
		return ((::Class_1_86A84767BA529BD4_Struct_2_C4BACA0F63C490F1(*)(::Class_2_230F5EDDB35DAEBA*, ::RPG::Client::RoadRashGameAbilityTargetSelector_FireTargetConfig*))((::PBYTE)hIl2Cpp + CLASS_1_86A84767BA529BD4_METHOD_1_ED131C56B34AE602_OFFSET))(a1, a2);
	}
};
