#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CEBATTLEAREAINFO_METHOD_2_4A955310D4F05E36_OFFSET UNITYSDK_OFFSET(0x1B2C6450)
#define RPG_GAMECORE_CEBATTLEAREAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2C6600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CEBattleAreaInfo_TypeDefinitionIndex = 17410;

	class CEBattleAreaInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 PlaneId; // 0x10
		::System::UInt32 FloorId; // 0x14
		::System::UInt32 GroupId; // 0x18
		::System::UInt32 BattleAreaId; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CEBATTLEAREAINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4A955310D4F05E36(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CEBattleAreaInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CEBattleAreaInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CEBATTLEAREAINFO_METHOD_2_4A955310D4F05E36_OFFSET))(a1, a2);
		}
	};
}
