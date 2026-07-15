#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class StageMonsterRewardItem; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_GAMECORE_GAMEPLAYSTATIC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1550C490)
#define RPG_GAMECORE_GAMEPLAYSTATIC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1550C4D0)
#define RPG_GAMECORE_GAMEPLAYSTATIC___C__GETMONSTERDROPREWARDDATA_B__73_0_OFFSET UNITYSDK_OFFSET(0x1550C4E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GamePlayStatic___c_TypeDefinitionIndex = 56416;

	class GamePlayStatic___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::GameCore::StageMonsterRewardItem*>** StaticGet___9__73_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::StageMonsterRewardItem*>**)Il2CppClass::FromTypeDefinitionIndex(GamePlayStatic___c_TypeDefinitionIndex)->GetStaticField(0x63A80);
		}
		static ::RPG::GameCore::GamePlayStatic___c** StaticGet___9()
		{
			return (::RPG::GameCore::GamePlayStatic___c**)Il2CppClass::FromTypeDefinitionIndex(GamePlayStatic___c_TypeDefinitionIndex)->GetStaticField(0x63A88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetMonsterDropRewardData_b__73_0(::RPG::GameCore::StageMonsterRewardItem* a1, ::RPG::GameCore::StageMonsterRewardItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::StageMonsterRewardItem*, ::RPG::GameCore::StageMonsterRewardItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC___C__GETMONSTERDROPREWARDDATA_B__73_0_OFFSET))(this, a1, a2);
		}
	};
}
