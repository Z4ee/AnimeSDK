#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EvolveBuildTagConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_EVOLVEBUILDTAG_CREATE_OFFSET UNITYSDK_OFFSET(0xA306E50)
#define RPG_CLIENT_EVOLVEBUILDTAG_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xA307070)
#define RPG_CLIENT_EVOLVEBUILDTAG_GET_ID_OFFSET UNITYSDK_OFFSET(0xA306EF0)
#define RPG_CLIENT_EVOLVEBUILDTAG_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA306FA0)
#define RPG_CLIENT_EVOLVEBUILDTAG_GET_ROW_OFFSET UNITYSDK_OFFSET(0xA306F30)
#define RPG_CLIENT_EVOLVEBUILDTAG_GET_SEASON_OFFSET UNITYSDK_OFFSET(0xA306F10)
#define RPG_CLIENT_EVOLVEBUILDTAG_SET_ID_OFFSET UNITYSDK_OFFSET(0xA306F00)
#define RPG_CLIENT_EVOLVEBUILDTAG_SET_SEASON_OFFSET UNITYSDK_OFFSET(0xA306F20)
#define RPG_CLIENT_EVOLVEBUILDTAG__CTOR_OFFSET UNITYSDK_OFFSET(0xA306EE0)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildTag_TypeDefinitionIndex = 58804;

	class EvolveBuildTag : public ::System::Object
	{
	public:
		::RPG::GameCore::EvolveBuildSeason _Season_k__BackingField; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDTAG__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::EvolveBuildTag* Create(::System::UInt32 id, ::RPG::GameCore::EvolveBuildSeason season)
		{
			return ((::RPG::Client::EvolveBuildTag*(*)(::System::UInt32, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDTAG_CREATE_OFFSET))(id, season);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDTAG_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDTAG_SET_ID_OFFSET))(this, value);
		}

		::RPG::GameCore::EvolveBuildSeason get_Season()
		{
			return ((::RPG::GameCore::EvolveBuildSeason(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDTAG_GET_SEASON_OFFSET))(this);
		}

		::System::Void set_Season(::RPG::GameCore::EvolveBuildSeason value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDTAG_SET_SEASON_OFFSET))(this, value);
		}

		::RPG::GameCore::EvolveBuildTagConfigRow* get_Row()
		{
			return ((::RPG::GameCore::EvolveBuildTagConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDTAG_GET_ROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDTAG_GET_NAME_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDTAG_GET_ICONPATH_OFFSET))(this);
		}
	};
}
