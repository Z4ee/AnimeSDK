#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlanetFesSkillBuffState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PlanetFesLandType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class NetworkManager; }
namespace RPG::Client { class PlanetFesModule; }
namespace RPG::Client { class PlanetFesSkill; }
namespace RPG::Client { class PlanetFesSkillBuffData; }
namespace RPG::Client { class PlanetFesSkillPhase; }
namespace RPG::GameCore { class PlanetFesFunctionRow; }
namespace System { class String; }

#define RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_CANUPGRADE_OFFSET UNITYSDK_OFFSET(0xDB847C0)
#define RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xDB83F20)
#define RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_DOUPGRADE_OFFSET UNITYSDK_OFFSET(0xDB84920)
#define RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GETBUFFLANDTYPE_OFFSET UNITYSDK_OFFSET(0xDB853C0)
#define RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GETDESC_1_OFFSET UNITYSDK_OFFSET(0xDB84DA0)
#define RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GETDESC_OFFSET UNITYSDK_OFFSET(0xDB84D00)
#define RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GETISPHASEUNLOCK_OFFSET UNITYSDK_OFFSET(0xDB846A0)
#define RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GETISUNLOCK_OFFSET UNITYSDK_OFFSET(0xDB84300)
#define RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GETLOCKREASON_OFFSET UNITYSDK_OFFSET(0xDB83FC0)
#define RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GETSTATE_OFFSET UNITYSDK_OFFSET(0xDB844A0)
#define RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GET_BUFFDATA_OFFSET UNITYSDK_OFFSET(0xDB84650)
#define RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0xDB855D0)
#define RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GET_NEXTDESC_OFFSET UNITYSDK_OFFSET(0xDB85620)
#define RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GET_SKILLITEMID_OFFSET UNITYSDK_OFFSET(0xDB85700)
#define RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GET_SKILLITEMNUM_OFFSET UNITYSDK_OFFSET(0xDB84B00)
#define RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GET__COLLECTSKILLID_OFFSET UNITYSDK_OFFSET(0xDB857E0)
#define RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GET__LEVELUPSKILLID_OFFSET UNITYSDK_OFFSET(0xDB858F0)
#define RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GET__MODULE_OFFSET UNITYSDK_OFFSET(0xDB84EE0)
#define RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GET__NET_OFFSET UNITYSDK_OFFSET(0xDB84C90)
#define RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xDB84C00)
#define RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_ISNEWUNLOCK_OFFSET UNITYSDK_OFFSET(0xDB846F0)
#define RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_TRYUPGRADE_OFFSET UNITYSDK_OFFSET(0xDB84760)
#define RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDB83FB0)
#define RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA__PHASEFUNCTION_OFFSET UNITYSDK_OFFSET(0xDB84F70)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesSkillBuffDisplayData_TypeDefinitionIndex = 66666;

	class PlanetFesSkillBuffDisplayData : public ::System::Object
	{
	public:
		::RPG::Client::PlanetFesSkill* _SkillData; // 0x10
		::RPG::Client::PlanetFesSkillPhase* _PhaseData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlanetFesSkillBuffDisplayData* Create(::RPG::Client::PlanetFesSkillPhase* a1, ::RPG::Client::PlanetFesSkill* a2)
		{
			return ((::RPG::Client::PlanetFesSkillBuffDisplayData*(*)(::RPG::Client::PlanetFesSkillPhase*, ::RPG::Client::PlanetFesSkill*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_CREATE_OFFSET))(a1, a2);
		}

		::RPG::Client::TextID GetLockReason()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GETLOCKREASON_OFFSET))(this);
		}

		::System::Boolean GetIsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GETISUNLOCK_OFFSET))(this);
		}

		::RPG::Client::PlanetFesSkillBuffState GetState()
		{
			return ((::RPG::Client::PlanetFesSkillBuffState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GETSTATE_OFFSET))(this);
		}

		::System::Boolean GetIsPhaseUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GETISPHASEUNLOCK_OFFSET))(this);
		}

		::System::Boolean IsNewUnlock(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_ISNEWUNLOCK_OFFSET))(this, a1);
		}

		::System::Void TryUpgrade()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_TRYUPGRADE_OFFSET))(this);
		}

		::System::Boolean CanUpgrade()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_CANUPGRADE_OFFSET))(this);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_ISACTIVE_OFFSET))(this);
		}

		::System::Void DoUpgrade()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_DOUPGRADE_OFFSET))(this);
		}

		::System::String* GetDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GETDESC_OFFSET))(this);
		}

		::System::String* GetDesc_1(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GETDESC_1_OFFSET))(this, a1);
		}

		::RPG::GameCore::PlanetFesLandType GetBuffLandType()
		{
			return ((::RPG::GameCore::PlanetFesLandType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GETBUFFLANDTYPE_OFFSET))(this);
		}

		::System::String* _PhaseFunction(::RPG::GameCore::PlanetFesFunctionRow* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::PlanetFesFunctionRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA__PHASEFUNCTION_OFFSET))(this, a1);
		}

		::RPG::Client::PlanetFesSkillBuffData* get_BuffData()
		{
			return ((::RPG::Client::PlanetFesSkillBuffData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GET_BUFFDATA_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GET_DESC_OFFSET))(this);
		}

		::System::String* get_NextDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GET_NEXTDESC_OFFSET))(this);
		}

		::System::UInt32 get_SkillItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GET_SKILLITEMID_OFFSET))(this);
		}

		::System::UInt32 get_SkillItemNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GET_SKILLITEMNUM_OFFSET))(this);
		}

		::RPG::Client::PlanetFesModule* get__Module()
		{
			return ((::RPG::Client::PlanetFesModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GET__MODULE_OFFSET))(this);
		}

		::RPG::Client::NetworkManager* get__Net()
		{
			return ((::RPG::Client::NetworkManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GET__NET_OFFSET))(this);
		}

		::System::UInt32 get__CollectSkillID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GET__COLLECTSKILLID_OFFSET))(this);
		}

		::System::UInt32 get__LevelUpSkillID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GET__LEVELUPSKILLID_OFFSET))(this);
		}
	};
}
