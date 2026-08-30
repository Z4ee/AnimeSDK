#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }

#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS34_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5AC520)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS34_0__GETEQUIPBYUID_B__0_OFFSET UNITYSDK_OFFSET(0x1C5AEF70)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSettleRecord___c__DisplayClass34_0_TypeDefinitionIndex = 65275;

	class GridFightSettleRecord___c__DisplayClass34_0 : public ::System::Object
	{
	public:
		::System::UInt32 uid; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS34_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetEquipByUID_b__0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS34_0__GETEQUIPBYUID_B__0_OFFSET))(this, a1);
		}
	};
}
