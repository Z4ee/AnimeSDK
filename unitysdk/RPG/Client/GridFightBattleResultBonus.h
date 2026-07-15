#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_75A1C8C41006A504.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTBATTLERESULTBONUS_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A61A490)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTBONUS_GET_HASREWARD_OFFSET UNITYSDK_OFFSET(0x1A61A500)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTBONUS_GET_SRCTYPE_OFFSET UNITYSDK_OFFSET(0x1A61A440)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTBONUS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A61A560)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBattleResultBonus_TypeDefinitionIndex = 61504;

	class GridFightBattleResultBonus : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* OrbAdds; // 0x10
		::System::Int32 RoleNumAdd; // 0x18
		::System::Int32 ExpAdd; // 0x1C
		::System::Int32 LevelAdd; // 0x20
		::System::Int32 GoldAdd; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTBONUS__CTOR_OFFSET))(this);
		}

		::Enum_3_75A1C8C41006A504 get_SrcType()
		{
			return ((::Enum_3_75A1C8C41006A504(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTBONUS_GET_SRCTYPE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTBONUS_CLEAR_OFFSET))(this);
		}

		::System::Boolean get_HasReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTBONUS_GET_HASREWARD_OFFSET))(this);
		}
	};
}
