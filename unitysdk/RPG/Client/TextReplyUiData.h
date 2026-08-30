#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_TEXTREPLYUIDATA_GET_MAINTEXT_OFFSET UNITYSDK_OFFSET(0xE1D7390)
#define RPG_CLIENT_TEXTREPLYUIDATA_GET_NEXTCONTENTID_OFFSET UNITYSDK_OFFSET(0xE1D73A0)
#define RPG_CLIENT_TEXTREPLYUIDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE1D73B0)

namespace RPG::Client
{
	inline static constexpr unsigned int TextReplyUiData_TypeDefinitionIndex = 61646;

	class TextReplyUiData : public ::System::Object
	{
	public:
		::RPG::Client::TextID _MainText_k__BackingField; // 0x10
		::System::UInt32 _NextContentId_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::TextID a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTREPLYUIDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TextID get_MainText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTREPLYUIDATA_GET_MAINTEXT_OFFSET))(this);
		}

		::System::UInt32 get_NextContentId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTREPLYUIDATA_GET_NEXTCONTENTID_OFFSET))(this);
		}
	};
}
