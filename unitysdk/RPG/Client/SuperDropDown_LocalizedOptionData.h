#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/UnityEngine/UI/Dropdown_OptionData.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Sprite; }

#define RPG_CLIENT_SUPERDROPDOWN_LOCALIZEDOPTIONDATA_GET_LOCALIZEDTEXTID_OFFSET UNITYSDK_OFFSET(0xA4FB1F0)
#define RPG_CLIENT_SUPERDROPDOWN_LOCALIZEDOPTIONDATA_SET_LOCALIZEDTEXTID_OFFSET UNITYSDK_OFFSET(0xA4FB200)
#define RPG_CLIENT_SUPERDROPDOWN_LOCALIZEDOPTIONDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA4FB210)
#define RPG_CLIENT_SUPERDROPDOWN_LOCALIZEDOPTIONDATA__CTOR_2_OFFSET UNITYSDK_OFFSET(0xA4FB260)
#define RPG_CLIENT_SUPERDROPDOWN_LOCALIZEDOPTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA4FA3E0)

namespace RPG::Client
{
	inline static constexpr unsigned int SuperDropDown_LocalizedOptionData_TypeDefinitionIndex = 59563;

	class SuperDropDown_LocalizedOptionData : public ::UnityEngine::UI::Dropdown_OptionData
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* LocalizedParams; // 0x28
		::RPG::Client::TextID _localizedTextID_k__BackingField; // 0x30

		::System::Void _ctor(::RPG::Client::TextID id)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_LOCALIZEDOPTIONDATA__CTOR_OFFSET))(this, id);
		}

		::System::Void _ctor_1(::RPG::Client::TextID id, ::UnityEngine::Sprite* image)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_LOCALIZEDOPTIONDATA__CTOR_1_OFFSET))(this, id, image);
		}

		::System::Void _ctor_2(::RPG::Client::TextID id, ::Il2CppArray<::System::String*>* list)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_LOCALIZEDOPTIONDATA__CTOR_2_OFFSET))(this, id, list);
		}

		::RPG::Client::TextID get_localizedTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_LOCALIZEDOPTIONDATA_GET_LOCALIZEDTEXTID_OFFSET))(this);
		}

		::System::Void set_localizedTextID(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_LOCALIZEDOPTIONDATA_SET_LOCALIZEDTEXTID_OFFSET))(this, value);
		}
	};
}
