#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/UnityEngine/UI/Dropdown_OptionData.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Sprite; }

#define RPG_CLIENT_SUPERDROPDOWN_LOCALIZEDOPTIONDATA_GET_LOCALIZEDTEXTID_OFFSET UNITYSDK_OFFSET(0x19C51AD0)
#define RPG_CLIENT_SUPERDROPDOWN_LOCALIZEDOPTIONDATA_SET_LOCALIZEDTEXTID_OFFSET UNITYSDK_OFFSET(0x19C51AE0)
#define RPG_CLIENT_SUPERDROPDOWN_LOCALIZEDOPTIONDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19C51AF0)
#define RPG_CLIENT_SUPERDROPDOWN_LOCALIZEDOPTIONDATA__CTOR_2_OFFSET UNITYSDK_OFFSET(0x19C51B40)
#define RPG_CLIENT_SUPERDROPDOWN_LOCALIZEDOPTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19C50FF0)

namespace RPG::Client
{
	inline static constexpr unsigned int SuperDropDown_LocalizedOptionData_TypeDefinitionIndex = 69384;

	class SuperDropDown_LocalizedOptionData : public ::UnityEngine::UI::Dropdown_OptionData
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* LocalizedParams; // 0x28
		::RPG::Client::TextID _localizedTextID_k__BackingField; // 0x30

		::System::Void _ctor(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_LOCALIZEDOPTIONDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::RPG::Client::TextID a1, ::UnityEngine::Sprite* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_LOCALIZEDOPTIONDATA__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::RPG::Client::TextID a1, ::Il2CppArray<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_LOCALIZEDOPTIONDATA__CTOR_2_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TextID get_localizedTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_LOCALIZEDOPTIONDATA_GET_LOCALIZEDTEXTID_OFFSET))(this);
		}

		::System::Void set_localizedTextID(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPERDROPDOWN_LOCALIZEDOPTIONDATA_SET_LOCALIZEDTEXTID_OFFSET))(this, a1);
		}
	};
}
