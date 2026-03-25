#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenPickingGoodsDisplayType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class HipplenRequireGoodsConfig; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENREQUIREGOODSDATA_GET_CURNUM_OFFSET UNITYSDK_OFFSET(0x8F3FA50)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENREQUIREGOODSDATA_GET_DISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x8F3F1B0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENREQUIREGOODSDATA_GET_FADETIME_OFFSET UNITYSDK_OFFSET(0x8F3F1D0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENREQUIREGOODSDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x8F3F9B0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENREQUIREGOODSDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x8F3B810)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENREQUIREGOODSDATA_GET_REQUIRENUM_OFFSET UNITYSDK_OFFSET(0x8F3B830)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENREQUIREGOODSDATA_SET_CURNUM_OFFSET UNITYSDK_OFFSET(0x8F3FA60)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENREQUIREGOODSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8F3E170)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int HipplenRequireGoodsData_TypeDefinitionIndex = 61743;

	class HipplenRequireGoodsData : public ::System::Object
	{
	public:
		::RPG::GameCore::HipplenRequireGoodsConfig* _RowConfig; // 0x10
		::System::UInt32 _CurNum_k__BackingField; // 0x18

		::System::Void _ctor(::RPG::GameCore::HipplenRequireGoodsConfig* rowConfig)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HipplenRequireGoodsConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENREQUIREGOODSDATA__CTOR_OFFSET))(this, rowConfig);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENREQUIREGOODSDATA_GET_ID_OFFSET))(this);
		}

		::RPG::GameCore::HipplenPickingGoodsDisplayType get_DisplayType()
		{
			return ((::RPG::GameCore::HipplenPickingGoodsDisplayType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENREQUIREGOODSDATA_GET_DISPLAYTYPE_OFFSET))(this);
		}

		::System::Single get_FadeTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENREQUIREGOODSDATA_GET_FADETIME_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENREQUIREGOODSDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_RequireNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENREQUIREGOODSDATA_GET_REQUIRENUM_OFFSET))(this);
		}

		::System::UInt32 get_CurNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENREQUIREGOODSDATA_GET_CURNUM_OFFSET))(this);
		}

		::System::Void set_CurNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENREQUIREGOODSDATA_SET_CURNUM_OFFSET))(this, value);
		}
	};
}
