#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Billboard { class IBillboardTypeData; }

#define RPG_CLIENT_BILLBOARD_FLOATINGTEXTBILLBOARDDATA_CLONE_OFFSET UNITYSDK_OFFSET(0xB435810)
#define RPG_CLIENT_BILLBOARD_FLOATINGTEXTBILLBOARDDATA_GET_FLOATINGTEXT_OFFSET UNITYSDK_OFFSET(0xB435730)
#define RPG_CLIENT_BILLBOARD_FLOATINGTEXTBILLBOARDDATA_ISVALID_OFFSET UNITYSDK_OFFSET(0xB435750)
#define RPG_CLIENT_BILLBOARD_FLOATINGTEXTBILLBOARDDATA_SET_FLOATINGTEXT_OFFSET UNITYSDK_OFFSET(0xB435740)
#define RPG_CLIENT_BILLBOARD_FLOATINGTEXTBILLBOARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB432CC0)

namespace RPG::Client::Billboard
{
	inline static constexpr unsigned int FloatingTextBillboardData_TypeDefinitionIndex = 69861;

	class FloatingTextBillboardData : public ::System::Object
	{
	public:
		::RPG::Client::TextID _FloatingText_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_FLOATINGTEXTBILLBOARDDATA__CTOR_OFFSET))(this);
		}

		::RPG::Client::TextID get_FloatingText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_FLOATINGTEXTBILLBOARDDATA_GET_FLOATINGTEXT_OFFSET))(this);
		}

		::System::Void set_FloatingText(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_FLOATINGTEXTBILLBOARDDATA_SET_FLOATINGTEXT_OFFSET))(this, a1);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_FLOATINGTEXTBILLBOARDDATA_ISVALID_OFFSET))(this);
		}

		::RPG::Client::Billboard::IBillboardTypeData* Clone()
		{
			return ((::RPG::Client::Billboard::IBillboardTypeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_FLOATINGTEXTBILLBOARDDATA_CLONE_OFFSET))(this);
		}
	};
}
