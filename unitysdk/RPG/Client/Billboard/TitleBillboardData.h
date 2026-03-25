#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Billboard { class IBillboardTypeData; }

#define RPG_CLIENT_BILLBOARD_TITLEBILLBOARDDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x91F24E0)
#define RPG_CLIENT_BILLBOARD_TITLEBILLBOARDDATA_GET_TEXTTITLE_OFFSET UNITYSDK_OFFSET(0x91F2400)
#define RPG_CLIENT_BILLBOARD_TITLEBILLBOARDDATA_ISVALID_OFFSET UNITYSDK_OFFSET(0x91F2420)
#define RPG_CLIENT_BILLBOARD_TITLEBILLBOARDDATA_SET_TEXTTITLE_OFFSET UNITYSDK_OFFSET(0x91F2410)
#define RPG_CLIENT_BILLBOARD_TITLEBILLBOARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x91EE3E0)

namespace RPG::Client::Billboard
{
	inline static constexpr unsigned int TitleBillboardData_TypeDefinitionIndex = 61535;

	class TitleBillboardData : public ::System::Object
	{
	public:
		::RPG::Client::TextID _TextTitle_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_TITLEBILLBOARDDATA__CTOR_OFFSET))(this);
		}

		::RPG::Client::TextID get_TextTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_TITLEBILLBOARDDATA_GET_TEXTTITLE_OFFSET))(this);
		}

		::System::Void set_TextTitle(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_TITLEBILLBOARDDATA_SET_TEXTTITLE_OFFSET))(this, value);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_TITLEBILLBOARDDATA_ISVALID_OFFSET))(this);
		}

		::RPG::Client::Billboard::IBillboardTypeData* Clone()
		{
			return ((::RPG::Client::Billboard::IBillboardTypeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_TITLEBILLBOARDDATA_CLONE_OFFSET))(this);
		}
	};
}
