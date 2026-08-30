#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_BF927CBEA754F6BE;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT___C__DISPLAYCLASS168_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11CB5E70)
#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT___C__DISPLAYCLASS168_0___REARRANGEPUPPETCHARACTERS_B__0_OFFSET UNITYSDK_OFFSET(0x11CB5E80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamFormationComponent___c__DisplayClass168_0_TypeDefinitionIndex = 57865;

	class TeamFormationComponent___c__DisplayClass168_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_2_BF927CBEA754F6BE*>* rowDatas; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT___C__DISPLAYCLASS168_0__CTOR_OFFSET))(this);
		}

		::System::Int32 __RearrangePuppetCharacters_b__0(::Class_2_BF927CBEA754F6BE* a1, ::Class_2_BF927CBEA754F6BE* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_BF927CBEA754F6BE*, ::Class_2_BF927CBEA754F6BE*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT___C__DISPLAYCLASS168_0___REARRANGEPUPPETCHARACTERS_B__0_OFFSET))(this, a1, a2);
		}
	};
}
