#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightVictoryBonusConfigRow; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_GRIDFIGHTPLAYER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA524760)
#define RPG_CLIENT_GRIDFIGHTPLAYER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA5247A0)
#define RPG_CLIENT_GRIDFIGHTPLAYER___C__GETVICTORYRULES_B__37_0_OFFSET UNITYSDK_OFFSET(0xA5247B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPlayer___c_TypeDefinitionIndex = 59914;

	class GridFightPlayer___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::GameCore::GridFightVictoryBonusConfigRow*>** StaticGet___9__37_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::GridFightVictoryBonusConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightPlayer___c_TypeDefinitionIndex)->GetStaticField(0x15920);
		}
		static ::RPG::Client::GridFightPlayer___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightPlayer___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightPlayer___c_TypeDefinitionIndex)->GetStaticField(0x15928);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetVictoryRules_b__37_0(::RPG::GameCore::GridFightVictoryBonusConfigRow* x1, ::RPG::GameCore::GridFightVictoryBonusConfigRow* x2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GridFightVictoryBonusConfigRow*, ::RPG::GameCore::GridFightVictoryBonusConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER___C__GETVICTORYRULES_B__37_0_OFFSET))(this, x1, x2);
		}
	};
}
