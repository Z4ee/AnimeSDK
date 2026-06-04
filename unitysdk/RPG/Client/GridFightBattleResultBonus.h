#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_75A5C8C4100A8E33_1.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTBATTLERESULTBONUS_CLEAR_OFFSET UNITYSDK_OFFSET(0xBAEE3D0)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTBONUS_GET_HASREWARD_OFFSET UNITYSDK_OFFSET(0xBAEE430)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTBONUS_GET_SRCTYPE_OFFSET UNITYSDK_OFFSET(0xBAEE3C0)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTBONUS__CTOR_OFFSET UNITYSDK_OFFSET(0xBAEE490)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBattleResultBonus_TypeDefinitionIndex = 60216;

	class GridFightBattleResultBonus : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* OrbAdds; // 0x10
		::System::Int32 RoleNumAdd; // 0x18
		::System::Int32 ExpAdd; // 0x1C
		::System::Int32 GoldAdd; // 0x20
		::System::Int32 LevelAdd; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTBONUS__CTOR_OFFSET))(this);
		}

		::Enum_3_75A5C8C4100A8E33_1 get_SrcType()
		{
			return ((::Enum_3_75A5C8C4100A8E33_1(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTBONUS_GET_SRCTYPE_OFFSET))(this);
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
