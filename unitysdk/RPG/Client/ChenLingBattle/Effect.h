#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7CFE31C413D3A3C3_1.h"
#include "unitysdk/RPG/GameCore/ChenLingEffectType.h"
#include "unitysdk/System/Object.h"

class Class_1_4F2B506A7202947A;
class Class_1_D2520FBD61B50E07;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameSession; }
namespace RPG::GameCore { class ChenLingEffectRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGBATTLE_EFFECT_CREATE_OFFSET UNITYSDK_OFFSET(0x932D4C0)
#define RPG_CLIENT_CHENLINGBATTLE_EFFECT_GETEFFECTPARAMS_OFFSET UNITYSDK_OFFSET(0x9338A30)
#define RPG_CLIENT_CHENLINGBATTLE_EFFECT_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x9338D40)
#define RPG_CLIENT_CHENLINGBATTLE_EFFECT_GET_EFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x9338D80)
#define RPG_CLIENT_CHENLINGBATTLE_EFFECT_GET_SOURCEID_OFFSET UNITYSDK_OFFSET(0x9338D70)
#define RPG_CLIENT_CHENLINGBATTLE_EFFECT_GET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x9338D60)
#define RPG_CLIENT_CHENLINGBATTLE_EFFECT_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x9338D50)
#define RPG_CLIENT_CHENLINGBATTLE_EFFECT_GET__CONFIG_OFFSET UNITYSDK_OFFSET(0x93382F0)
#define RPG_CLIENT_CHENLINGBATTLE_EFFECT_SYNC_OFFSET UNITYSDK_OFFSET(0x93389D0)
#define RPG_CLIENT_CHENLINGBATTLE_EFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x9338350)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int Effect_TypeDefinitionIndex = 62118;

	class Effect : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _EffectParams; // 0x10
		::System::UInt32 _ConfigId_k__BackingField; // 0x18
		::Enum_3_7CFE31C413D3A3C3_1 _SourceType_k__BackingField; // 0x1C
		::System::UInt64 _UniqueId_k__BackingField; // 0x20
		::System::UInt64 _SourceID_k__BackingField; // 0x28

		::System::Void _ctor(::System::UInt32 configId, ::System::UInt64 uniqueId, ::Class_1_D2520FBD61B50E07* source)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt64, ::Class_1_D2520FBD61B50E07*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_EFFECT__CTOR_OFFSET))(this, configId, uniqueId, source);
		}

		static ::RPG::Client::ChenLingBattle::Effect* Create(::Class_1_4F2B506A7202947A* effectProto, ::RPG::Client::ChenLingBattle::ChenLingBattleGameSession* gameSession)
		{
			return ((::RPG::Client::ChenLingBattle::Effect*(*)(::Class_1_4F2B506A7202947A*, ::RPG::Client::ChenLingBattle::ChenLingBattleGameSession*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_EFFECT_CREATE_OFFSET))(effectProto, gameSession);
		}

		::System::Void Sync(::Class_1_4F2B506A7202947A* effectProto, ::Class_1_D2520FBD61B50E07* changeSource)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4F2B506A7202947A*, ::Class_1_D2520FBD61B50E07*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_EFFECT_SYNC_OFFSET))(this, effectProto, changeSource);
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
