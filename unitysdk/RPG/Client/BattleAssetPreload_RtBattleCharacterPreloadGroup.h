#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2C2DA62D5BBB20B1_PreloadType.h"
#include "unitysdk/RPG/Client/BattleAssetPreload_RtCharacterPreloadGroupBase.h"

namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_BATTLEASSETPRELOAD_RTBATTLECHARACTERPRELOADGROUP_REFRESHAFTERENTERBATTLENEW_OFFSET UNITYSDK_OFFSET(0x1748A7D0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_RTBATTLECHARACTERPRELOADGROUP_REFRESHBEFOREENTERBATTLENEW_OFFSET UNITYSDK_OFFSET(0x1748A660)
#define RPG_CLIENT_BATTLEASSETPRELOAD_RTBATTLECHARACTERPRELOADGROUP__COLLECTRESOURCEIMPL_OFFSET UNITYSDK_OFFSET(0x1748A050)
#define RPG_CLIENT_BATTLEASSETPRELOAD_RTBATTLECHARACTERPRELOADGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1748A940)
#define RPG_CLIENT_BATTLEASSETPRELOAD_RTBATTLECHARACTERPRELOADGROUP__GETDEFAULTBATTLEMODELPATH_OFFSET UNITYSDK_OFFSET(0x1748A580)
#define RPG_CLIENT_BATTLEASSETPRELOAD_RTBATTLECHARACTERPRELOADGROUP__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x17489EC0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_RTBATTLECHARACTERPRELOADGROUP__ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0x17489BE0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleAssetPreload_RtBattleCharacterPreloadGroup_TypeDefinitionIndex = 57019;

	class BattleAssetPreload_RtBattleCharacterPreloadGroup : public ::RPG::Client::BattleAssetPreload_RtCharacterPreloadGroupBase
	{
	public:
		// static const ::Class_1_2C2DA62D5BBB20B1_PreloadType UltraDefaultPreloadType; // 0x0
		// static const ::Class_1_2C2DA62D5BBB20B1_PreloadType ActiveUltraPreloadType; // 0x0
		// static const ::Class_1_2C2DA62D5BBB20B1_PreloadType SkillDefaultPreloadType; // 0x0
		// static const ::Class_1_2C2DA62D5BBB20B1_PreloadType ActiveSkillPreloadType; // 0x0
		// static const ::Class_1_2C2DA62D5BBB20B1_PreloadType DefaultPreloadType; // 0x0
		::System::Object* _ExcelRow; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_RTBATTLECHARACTERPRELOADGROUP__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_RTBATTLECHARACTERPRELOADGROUP__ONINITIALIZE_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_RTBATTLECHARACTERPRELOADGROUP__ONDISPOSE_OFFSET))(this);
		}

		::System::Void _CollectResourceImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_RTBATTLECHARACTERPRELOADGROUP__COLLECTRESOURCEIMPL_OFFSET))(this);
		}

		::System::String* _GetDefaultBattleModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_RTBATTLECHARACTERPRELOADGROUP__GETDEFAULTBATTLEMODELPATH_OFFSET))(this);
		}

		::System::Void RefreshBeforeEnterBattleNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_RTBATTLECHARACTERPRELOADGROUP_REFRESHBEFOREENTERBATTLENEW_OFFSET))(this);
		}

		::System::Void RefreshAfterEnterBattleNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_RTBATTLECHARACTERPRELOADGROUP_REFRESHAFTERENTERBATTLENEW_OFFSET))(this);
		}
	};
}
