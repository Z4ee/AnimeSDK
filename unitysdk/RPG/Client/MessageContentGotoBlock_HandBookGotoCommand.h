#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_HANDBOOKGOTOCOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA88AF70)
#define RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_HANDBOOKGOTOCOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0xA88A640)
#define RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_HANDBOOKGOTOCOMMAND__GETFARMTYPEID_OFFSET UNITYSDK_OFFSET(0xA88AE40)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentGotoBlock_HandBookGotoCommand_TypeDefinitionIndex = 58255;

	class MessageContentGotoBlock_HandBookGotoCommand : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _HANDBOOK_MATERIAL_FARM_TYPE = 0x3; // 0x0
		::System::UInt32 _FarmTypeID; // 0x10

		::System::Void _ctor(::System::UInt32 farmType)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_HANDBOOKGOTOCOMMAND__CTOR_OFFSET))(this, farmType);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_HANDBOOKGOTOCOMMAND_EXECUTE_OFFSET))(this);
		}

		::System::UInt32 _GetFarmTypeID(::System::UInt32 farmType)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_HANDBOOKGOTOCOMMAND__GETFARMTYPEID_OFFSET))(this, farmType);
		}
	};
}
