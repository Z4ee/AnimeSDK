#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChimeraData.h"

class Class_1_3E926525914B2E70;
class Class_1_E01A66D05D835284;

#define RPG_CLIENT_CHIMERAENDLESSDATA_CLEARENDLESSATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1B5F18D0)
#define RPG_CLIENT_CHIMERAENDLESSDATA_GET_CURRENTATK_OFFSET UNITYSDK_OFFSET(0x1B5F19E0)
#define RPG_CLIENT_CHIMERAENDLESSDATA_GET_CURRENTHP_OFFSET UNITYSDK_OFFSET(0x1B5F1920)
#define RPG_CLIENT_CHIMERAENDLESSDATA_GET_ISDEAD_OFFSET UNITYSDK_OFFSET(0x1B5F1AA0)
#define RPG_CLIENT_CHIMERAENDLESSDATA_SYNCENDLESSATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1B5F17F0)
#define RPG_CLIENT_CHIMERAENDLESSDATA_UPDATEAFTERBATTLEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1B5F1720)
#define RPG_CLIENT_CHIMERAENDLESSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5F1710)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraEndlessData_TypeDefinitionIndex = 63482;

	class ChimeraEndlessData : public ::RPG::Client::ChimeraData
	{
	public:
		::Class_1_E01A66D05D835284* _EndlessAttribute; // 0x40

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void UpdateAfterBattleAttribute(::Class_1_E01A66D05D835284* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E01A66D05D835284*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSDATA_UPDATEAFTERBATTLEATTRIBUTE_OFFSET))(this, a1);
		}

		::System::Void SyncEndlessAttribute(::Class_1_3E926525914B2E70* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3E926525914B2E70*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSDATA_SYNCENDLESSATTRIBUTE_OFFSET))(this, a1);
		}

		::System::Void ClearEndlessAttribute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSDATA_CLEARENDLESSATTRIBUTE_OFFSET))(this);
		}

		::System::Int32 get_CurrentHP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSDATA_GET_CURRENTHP_OFFSET))(this);
		}

		::System::Int32 get_CurrentAtk()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSDATA_GET_CURRENTATK_OFFSET))(this);
		}

		::System::Boolean get_IsDead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSDATA_GET_ISDEAD_OFFSET))(this);
		}
	};
}
