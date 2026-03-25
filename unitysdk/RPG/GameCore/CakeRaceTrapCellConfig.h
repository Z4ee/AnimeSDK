#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CakeRaceMoveStateConfig; }
namespace RPG::GameCore { class CakeRaceTrapCellParamConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CAKERACETRAPCELLCONFIG_METHOD_2_ACC403A87BF553C7_OFFSET UNITYSDK_OFFSET(0x1704FE80)
#define RPG_GAMECORE_CAKERACETRAPCELLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17050080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceTrapCellConfig_TypeDefinitionIndex = 16911;

	class CakeRaceTrapCellConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Desc; // 0x10
		::RPG::GameCore::CakeRaceCellType CellType; // 0x18
		::System::UInt32 GridChangeOffset; // 0x1C
		::RPG::GameCore::CakeRaceMoveStateConfig* MoveStateConfig; // 0x20
		::Il2CppArray<::RPG::GameCore::CakeRaceTrapCellParamConfig*>* ParamsConfig; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACETRAPCELLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_ACC403A87BF553C7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceTrapCellConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceTrapCellConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACETRAPCELLCONFIG_METHOD_2_ACC403A87BF553C7_OFFSET))(a1, a2);
		}
	};
}
