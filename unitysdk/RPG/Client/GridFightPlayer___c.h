#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightVictoryBonusConfigRow; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_GRIDFIGHTPLAYER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBBCCA00)
#define RPG_CLIENT_GRIDFIGHTPLAYER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBBCCA40)
#define RPG_CLIENT_GRIDFIGHTPLAYER___C__GETVICTORYRULES_B__37_0_OFFSET UNITYSDK_OFFSET(0xBBCCA50)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPlayer___c_TypeDefinitionIndex = 60849;

	class GridFightPlayer___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::GameCore::GridFightVictoryBonusConfigRow*>** StaticGet___9__37_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::GridFightVictoryBonusConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightPlayer___c_TypeDefinitionIndex)->GetStaticField(0x35010);
		}
		static ::RPG::Client::GridFightPlayer___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightPlayer___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightPlayer___c_TypeDefinitionIndex)->GetStaticField(0x35018);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetVictoryRules_b__37_0(::RPG::GameCore::GridFightVictoryBonusConfigRow* a1, ::RPG::GameCore::GridFightVictoryBonusConfigRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GridFightVictoryBonusConfigRow*, ::RPG::GameCore::GridFightVictoryBonusConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER___C__GETVICTORYRULES_B__37_0_OFFSET))(this, a1, a2);
		}
	};
}
