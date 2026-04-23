#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournUnderlineParamInfo; }

#define RPG_CLIENT_ROGUETOURNUNDERLINEVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xB115FE0)
#define RPG_CLIENT_ROGUETOURNUNDERLINEVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB1160E0)
#define RPG_CLIENT_ROGUETOURNUNDERLINEVIEWMODEL_GET_UNDERLINEINFO_OFFSET UNITYSDK_OFFSET(0xB115EB0)
#define RPG_CLIENT_ROGUETOURNUNDERLINEVIEWMODEL_SET_UNDERLINEINFO_OFFSET UNITYSDK_OFFSET(0xB115EC0)
#define RPG_CLIENT_ROGUETOURNUNDERLINEVIEWMODEL_SHOWDIALOG_OFFSET UNITYSDK_OFFSET(0xB115ED0)
#define RPG_CLIENT_ROGUETOURNUNDERLINEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xB116090)
#define RPG_CLIENT_ROGUETOURNUNDERLINEVIEWMODEL__INIT_OFFSET UNITYSDK_OFFSET(0xB1160A0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournUnderlineViewModel_TypeDefinitionIndex = 67169;

	class RogueTournUnderlineViewModel : public ::System::Object
	{
	public:
		::RPG::Client::RogueTournUnderlineParamInfo* _UnderlineInfo_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUNDERLINEVIEWMODEL__CTOR_OFFSET))(this);
		}

		::RPG::Client::RogueTournUnderlineParamInfo* get_UnderlineInfo()
		{
			return ((::RPG::Client::RogueTournUnderlineParamInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUNDERLINEVIEWMODEL_GET_UNDERLINEINFO_OFFSET))(this);
		}

		::System::Void set_UnderlineInfo(::RPG::Client::RogueTournUnderlineParamInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournUnderlineParamInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUNDERLINEVIEWMODEL_SET_UNDERLINEINFO_OFFSET))(this, value);
		}

		static ::System::Void ShowDialog(::RPG::Client::RogueTournUnderlineParamInfo* underlineInfo)
		{
			return ((::System::Void(*)(::RPG::Client::RogueTournUnderlineParamInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUNDERLINEVIEWMODEL_SHOWDIALOG_OFFSET))(underlineInfo);
		}

		static ::RPG::Client::RogueTournUnderlineViewModel* Create(::RPG::Client::RogueTournUnderlineParamInfo* underlineInfo)
		{
			return ((::RPG::Client::RogueTournUnderlineViewModel*(*)(::RPG::Client::RogueTournUnderlineParamInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUNDERLINEVIEWMODEL_CREATE_OFFSET))(underlineInfo);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUNDERLINEVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUNDERLINEVIEWMODEL__INIT_OFFSET))(this);
		}
	};
}
