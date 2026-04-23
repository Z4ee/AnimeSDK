#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7CFE31C413D3A3C3_1.h"
#include "unitysdk/RPG/GameCore/ChenLingEffectType.h"
#include "unitysdk/System/Object.h"

class Class_1_BE8B780D54F2A10A;
class Class_1_F158EBB544151B42;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameSession; }
namespace RPG::GameCore { class ChenLingEffectRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGBATTLE_EFFECT_CREATE_OFFSET UNITYSDK_OFFSET(0x9F9B0E0)
#define RPG_CLIENT_CHENLINGBATTLE_EFFECT_GETEFFECTPARAMS_OFFSET UNITYSDK_OFFSET(0x9FA6560)
#define RPG_CLIENT_CHENLINGBATTLE_EFFECT_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x9FA6870)
#define RPG_CLIENT_CHENLINGBATTLE_EFFECT_GET_EFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x9FA68B0)
#define RPG_CLIENT_CHENLINGBATTLE_EFFECT_GET_SOURCEID_OFFSET UNITYSDK_OFFSET(0x9FA68A0)
#define RPG_CLIENT_CHENLINGBATTLE_EFFECT_GET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x9FA6890)
#define RPG_CLIENT_CHENLINGBATTLE_EFFECT_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x9FA6880)
#define RPG_CLIENT_CHENLINGBATTLE_EFFECT_GET__CONFIG_OFFSET UNITYSDK_OFFSET(0x9FA5E20)
#define RPG_CLIENT_CHENLINGBATTLE_EFFECT_SYNC_OFFSET UNITYSDK_OFFSET(0x9FA6500)
#define RPG_CLIENT_CHENLINGBATTLE_EFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x9FA5E80)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int Effect_TypeDefinitionIndex = 70117;

	class Effect : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _EffectParams; // 0x10
		::Enum_3_7CFE31C413D3A3C3_1 _SourceType_k__BackingField; // 0x18
		::System::UInt32 _ConfigId_k__BackingField; // 0x1C
		::System::UInt64 _SourceID_k__BackingField; // 0x20
		::System::UInt64 _UniqueId_k__BackingField; // 0x28

		::System::Void _ctor(::System::UInt32 configId, ::System::UInt64 uniqueId, ::Class_1_BE8B780D54F2A10A* source)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt64, ::Class_1_BE8B780D54F2A10A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_EFFECT__CTOR_OFFSET))(this, configId, uniqueId, source);
		}

		static ::RPG::Client::ChenLingBattle::Effect* Create(::Class_1_F158EBB544151B42* effectProto, ::RPG::Client::ChenLingBattle::ChenLingBattleGameSession* gameSession)
		{
			return ((::RPG::Client::ChenLingBattle::Effect*(*)(::Class_1_F158EBB544151B42*, ::RPG::Client::ChenLingBattle::ChenLingBattleGameSession*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_EFFECT_CREATE_OFFSET))(effectProto, gameSession);
		}

		::System::Void Sync(::Class_1_F158EBB544151B42* effectProto, ::Class_1_BE8B780D54F2A10A* changeSource)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F158EBB544151B42*, ::Class_1_BE8B780D54F2A10A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_EFFECT_SYNC_OFFSET))(this, effectProto, changeSource);
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

		::Enum_3_7CFE31C413D3A3C3_1 get_SourceType()
		{
			return ((::Enum_3_7CFE31C413D3A3C3_1(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_EFFECT_GET_SOURCETYPE_OFFSET))(this);
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
