#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7CFE31C413D3A3C3.h"
#include "unitysdk/RPG/GameCore/ChenLingEffectType.h"
#include "unitysdk/System/Object.h"

class Class_1_97F76DB9187C3D43;
class Class_1_D2520FBD61B50E07;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameSession; }
namespace RPG::GameCore { class ChenLingEffectRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGBATTLE_EFFECT_CREATE_OFFSET UNITYSDK_OFFSET(0x1B94E8B0)
#define RPG_CLIENT_CHENLINGBATTLE_EFFECT_GETEFFECTPARAMS_OFFSET UNITYSDK_OFFSET(0x1B95A0C0)
#define RPG_CLIENT_CHENLINGBATTLE_EFFECT_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x1B95A440)
#define RPG_CLIENT_CHENLINGBATTLE_EFFECT_GET_EFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x1B95A480)
#define RPG_CLIENT_CHENLINGBATTLE_EFFECT_GET_SOURCEID_OFFSET UNITYSDK_OFFSET(0x1B95A470)
#define RPG_CLIENT_CHENLINGBATTLE_EFFECT_GET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x1B95A460)
#define RPG_CLIENT_CHENLINGBATTLE_EFFECT_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1B95A450)
#define RPG_CLIENT_CHENLINGBATTLE_EFFECT_GET__CONFIG_OFFSET UNITYSDK_OFFSET(0x1B959800)
#define RPG_CLIENT_CHENLINGBATTLE_EFFECT_SYNC_OFFSET UNITYSDK_OFFSET(0x1B95A070)
#define RPG_CLIENT_CHENLINGBATTLE_EFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B959860)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int Effect_TypeDefinitionIndex = 75878;

	class Effect : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _EffectParams; // 0x10
		::System::UInt64 _UniqueId_k__BackingField; // 0x18
		::Enum_3_7CFE31C413D3A3C3 _SourceType_k__BackingField; // 0x20
		::System::UInt32 _ConfigId_k__BackingField; // 0x24
		::System::UInt64 _SourceID_k__BackingField; // 0x28

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt64 a2, ::Class_1_D2520FBD61B50E07* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt64, ::Class_1_D2520FBD61B50E07*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_EFFECT__CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::RPG::Client::ChenLingBattle::Effect* Create(::Class_1_97F76DB9187C3D43* a1, ::RPG::Client::ChenLingBattle::ChenLingBattleGameSession* a2)
		{
			return ((::RPG::Client::ChenLingBattle::Effect*(*)(::Class_1_97F76DB9187C3D43*, ::RPG::Client::ChenLingBattle::ChenLingBattleGameSession*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_EFFECT_CREATE_OFFSET))(a1, a2);
		}

		::System::Void Sync(::Class_1_97F76DB9187C3D43* a1, ::Class_1_D2520FBD61B50E07* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_97F76DB9187C3D43*, ::Class_1_D2520FBD61B50E07*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_EFFECT_SYNC_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetEffectParams()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_EFFECT_GETEFFECTPARAMS_OFFSET))(this);
		}

		::System::UInt32 get_ConfigId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_EFFECT_GET_CONFIGID_OFFSET))(this);
		}

		::System::UInt64 get_UniqueId()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_EFFECT_GET_UNIQUEID_OFFSET))(this);
		}

		::Enum_3_7CFE31C413D3A3C3 get_SourceType()
		{
			return ((::Enum_3_7CFE31C413D3A3C3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_EFFECT_GET_SOURCETYPE_OFFSET))(this);
		}

		::System::UInt64 get_SourceID()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_EFFECT_GET_SOURCEID_OFFSET))(this);
		}

		::RPG::GameCore::ChenLingEffectType get_EffectType()
		{
			return ((::RPG::GameCore::ChenLingEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_EFFECT_GET_EFFECTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::ChenLingEffectRow* get__Config()
		{
			return ((::RPG::GameCore::ChenLingEffectRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_EFFECT_GET__CONFIG_OFFSET))(this);
		}
	};
}
