#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPATHUNLOCKDISPLAYDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0xD66A940)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPATHUNLOCKDISPLAYDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xD66A910)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPATHUNLOCKDISPLAYDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xD66A920)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPATHUNLOCKDISPLAYDATA_GET_TALK_OFFSET UNITYSDK_OFFSET(0xD66A930)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPATHUNLOCKDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD66A950)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftTalentPathUnlockDisplayData_TypeDefinitionIndex = 79981;

	class MechCraftTalentPathUnlockDisplayData : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::RPG::Client::TextID _Desc_k__BackingField; // 0x18
		::RPG::Client::TextID _Name_k__BackingField; // 0x28
		::RPG::Client::TextID _Talk_k__BackingField; // 0x38

		::System::Void _ctor(::System::String* a1, ::RPG::Client::TextID a2, ::RPG::Client::TextID a3, ::RPG::Client::TextID a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::TextID, ::RPG::Client::TextID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPATHUNLOCKDISPLAYDATA__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPATHUNLOCKDISPLAYDATA_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPATHUNLOCKDISPLAYDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Talk()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPATHUNLOCKDISPLAYDATA_GET_TALK_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPATHUNLOCKDISPLAYDATA_GET_DESC_OFFSET))(this);
		}
	};
}
