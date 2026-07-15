#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGOPTIONVIEWMODEL_GET_DESCTEXT_OFFSET UNITYSDK_OFFSET(0x1946F760)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGOPTIONVIEWMODEL_GET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0x1946F7A0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGOPTIONVIEWMODEL_GET_OPTIONVALUE_OFFSET UNITYSDK_OFFSET(0x1946F780)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGOPTIONVIEWMODEL_REGISTERCLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x1946F5C0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGOPTIONVIEWMODEL_SELECT_OFFSET UNITYSDK_OFFSET(0x1946F700)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGOPTIONVIEWMODEL_SET_DESCTEXT_OFFSET UNITYSDK_OFFSET(0x1946F770)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGOPTIONVIEWMODEL_SET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0x1946F7B0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGOPTIONVIEWMODEL_SET_OPTIONVALUE_OFFSET UNITYSDK_OFFSET(0x1946F790)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGOPTIONVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1946F7C0)

namespace RPG::Client::TeamTowers
{
	inline static constexpr unsigned int TeamTowersSettingOptionViewModel_TypeDefinitionIndex = 75109;

	class TeamTowersSettingOptionViewModel : public ::System::Object
	{
	public:
		::System::Action_1<::System::UInt32>* _OnClick; // 0x10
		::RPG::Client::TextID _DescText_k__BackingField; // 0x18
		::System::UInt32 _OptionValue_k__BackingField; // 0x28
		::System::Boolean _IsSelected_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGOPTIONVIEWMODEL__CTOR_OFFSET))(this);
		}

		::System::Void Select()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGOPTIONVIEWMODEL_SELECT_OFFSET))(this);
		}

		::System::Void RegisterClickCallBack(::System::Action_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGOPTIONVIEWMODEL_REGISTERCLICKCALLBACK_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_DescText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGOPTIONVIEWMODEL_GET_DESCTEXT_OFFSET))(this);
		}

		::System::Void set_DescText(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGOPTIONVIEWMODEL_SET_DESCTEXT_OFFSET))(this, a1);
		}

		::System::UInt32 get_OptionValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGOPTIONVIEWMODEL_GET_OPTIONVALUE_OFFSET))(this);
		}

		::System::Void set_OptionValue(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGOPTIONVIEWMODEL_SET_OPTIONVALUE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGOPTIONVIEWMODEL_GET_ISSELECTED_OFFSET))(this);
		}

		::System::Void set_IsSelected(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGOPTIONVIEWMODEL_SET_ISSELECTED_OFFSET))(this, a1);
		}
	};
}
