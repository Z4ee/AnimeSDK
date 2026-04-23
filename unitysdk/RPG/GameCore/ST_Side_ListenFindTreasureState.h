#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ST_SIDE_LISTENFINDTREASURESTATE_METHOD_4_AF741CAD25A79E7C_OFFSET UNITYSDK_OFFSET(0x18DF94D0)
#define RPG_GAMECORE_ST_SIDE_LISTENFINDTREASURESTATE_METHOD_4_D3C431E1AD8077EC_OFFSET UNITYSDK_OFFSET(0x18DF93F0)
#define RPG_GAMECORE_ST_SIDE_LISTENFINDTREASURESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18DF9470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_ListenFindTreasureState_TypeDefinitionIndex = 19072;

	class ST_Side_ListenFindTreasureState : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::String* SetBoolVariableName; // 0x18
		::System::Boolean SetBoolVairableValue; // 0x20
		::System::Single SampleRadius; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_LISTENFINDTREASURESTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D3C431E1AD8077EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_ListenFindTreasureState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_ListenFindTreasureState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_LISTENFINDTREASURESTATE_METHOD_4_D3C431E1AD8077EC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AF741CAD25A79E7C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_ListenFindTreasureState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_ListenFindTreasureState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_LISTENFINDTREASURESTATE_METHOD_4_AF741CAD25A79E7C_OFFSET))(a1, a2);
		}
	};
}
