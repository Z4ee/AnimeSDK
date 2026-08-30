#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_75A1C8C41006A504.h"
#include "unitysdk/RPG/Client/GridFightPlayerPropertyType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_GRIDFIGHTPLAYERCHANGEDATA_GET_FROMAUGMENT_OFFSET UNITYSDK_OFFSET(0xD2E5AF0)
#define RPG_CLIENT_GRIDFIGHTPLAYERCHANGEDATA_GET_FROMBATTLE_OFFSET UNITYSDK_OFFSET(0xD2E5B40)
#define RPG_CLIENT_GRIDFIGHTPLAYERCHANGEDATA_GET_UNKNOWNREASON_OFFSET UNITYSDK_OFFSET(0xD2E5B90)
#define RPG_CLIENT_GRIDFIGHTPLAYERCHANGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD2E5BE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPlayerChangeData_TypeDefinitionIndex = 65127;

	class GridFightPlayerChangeData : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* Params; // 0x10
		::Enum_3_75A1C8C41006A504 SrcType; // 0x18
		::RPG::Client::GridFightPlayerPropertyType PropertyType; // 0x1C
		::System::Int32 ChangeValue; // 0x20
		::System::Int32 OldValue; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYERCHANGEDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean get_FromAugment()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYERCHANGEDATA_GET_FROMAUGMENT_OFFSET))(this);
		}

		::System::Boolean get_FromBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYERCHANGEDATA_GET_FROMBATTLE_OFFSET))(this);
		}

		::System::Boolean get_UnknownReason()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYERCHANGEDATA_GET_UNKNOWNREASON_OFFSET))(this);
		}
	};
}
