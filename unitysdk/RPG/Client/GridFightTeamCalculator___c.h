#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BAF2C60)
#define RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAF2CA0)
#define RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR___C___CALCULATEEMBLEMSCORE_B__28_0_OFFSET UNITYSDK_OFFSET(0x1BAF2CB0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTeamCalculator___c_TypeDefinitionIndex = 64885;

	class GridFightTeamCalculator___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>** StaticGet___9__28_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeamCalculator___c_TypeDefinitionIndex)->GetStaticField(0x47A40);
		}
		static ::RPG::Client::GridFightTeamCalculator___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightTeamCalculator___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeamCalculator___c_TypeDefinitionIndex)->GetStaticField(0x47A48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __CalculateEmblemScore_b__28_0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR___C___CALCULATEEMBLEMSCORE_B__28_0_OFFSET))(this, a1);
		}
	};
}
