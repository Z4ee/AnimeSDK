#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/InwardBubbleTalkType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Billboard { class IBillboardTypeData; }

#define RPG_CLIENT_BILLBOARD_INWARDBUBBLETALKBILLBOARDDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x91F0F20)
#define RPG_CLIENT_BILLBOARD_INWARDBUBBLETALKBILLBOARDDATA_GET_INWARDTYPE_OFFSET UNITYSDK_OFFSET(0x91F0EB0)
#define RPG_CLIENT_BILLBOARD_INWARDBUBBLETALKBILLBOARDDATA_ISVALID_OFFSET UNITYSDK_OFFSET(0x91F0ED0)
#define RPG_CLIENT_BILLBOARD_INWARDBUBBLETALKBILLBOARDDATA_SET_INWARDTYPE_OFFSET UNITYSDK_OFFSET(0x91F0EC0)
#define RPG_CLIENT_BILLBOARD_INWARDBUBBLETALKBILLBOARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x91EE630)

namespace RPG::Client::Billboard
{
	inline static constexpr unsigned int InwardBubbleTalkBillboardData_TypeDefinitionIndex = 61537;

	class InwardBubbleTalkBillboardData : public ::System::Object
	{
	public:
		::RPG::GameCore::InwardBubbleTalkType _InwardType_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_INWARDBUBBLETALKBILLBOARDDATA__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::InwardBubbleTalkType get_InwardType()
		{
			return ((::RPG::GameCore::InwardBubbleTalkType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_INWARDBUBBLETALKBILLBOARDDATA_GET_INWARDTYPE_OFFSET))(this);
		}

		::System::Void set_InwardType(::RPG::GameCore::InwardBubbleTalkType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::InwardBubbleTalkType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_INWARDBUBBLETALKBILLBOARDDATA_SET_INWARDTYPE_OFFSET))(this, value);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_INWARDBUBBLETALKBILLBOARDDATA_ISVALID_OFFSET))(this);
		}

		::RPG::Client::Billboard::IBillboardTypeData* Clone()
		{
			return ((::RPG::Client::Billboard::IBillboardTypeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_INWARDBUBBLETALKBILLBOARDDATA_CLONE_OFFSET))(this);
		}
	};
}
