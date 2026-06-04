#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_60.h"
#include "unitysdk/System/Object.h"

class Class_1_01C2B9641EF803B2_2;
class Class_1_2E64892306548DEA_1;
class Class_1_C9DFE5EE7107C629_13;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class IRogueTournGameLevelLayer; }
namespace RPG::Client { class IRogueTournGameLevelLayerLinear; }
namespace RPG::Client { class IRogueTournPersonaGameLevelLayer; }
namespace RPG::Client { class RogueTournPersonaGameLevelLayerData; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC83D9F0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO_GET_CURLAYER_OFFSET UNITYSDK_OFFSET(0xC83CF60)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xC83E440)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO_GET_LAYERCOUNT_OFFSET UNITYSDK_OFFSET(0xC83E7F0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO_GET_LAYERS_OFFSET UNITYSDK_OFFSET(0xC83E840)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xC83E7E0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO_RPG_CLIENT_IROGUETOURNGAMELEVELLINEAR_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xC83E500)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO_RPG_CLIENT_IROGUETOURNGAMELEVEL_GET_CURLAYER_OFFSET UNITYSDK_OFFSET(0xC83E860)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO_RPG_CLIENT_IROGUETOURNGAMELEVEL_GET_LAYERS_OFFSET UNITYSDK_OFFSET(0xC83E850)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO_SYNCFULL_OFFSET UNITYSDK_OFFSET(0xC83D7A0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO_SYNCINCREMENTAL_OFFSET UNITYSDK_OFFSET(0xC83E0C0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC83C540)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO__GETORFILLLAYERTOINDEX_OFFSET UNITYSDK_OFFSET(0xC83E630)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO__SYNCLAYERSFULL_OFFSET UNITYSDK_OFFSET(0xC83DC10)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO__SYNCLAYERSINCREMENTAL_OFFSET UNITYSDK_OFFSET(0xC83E130)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaGameLevelInfo_TypeDefinitionIndex = 63336;

	class RogueTournPersonaGameLevelInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaGameLevelLayer*>* _Layers; // 0x10
		::Enum_3_DB663931210BBC27_60 _Status; // 0x18
		::System::UInt32 _CurLayerIndex; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncFull(::Class_1_C9DFE5EE7107C629_13* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_13*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO_SYNCFULL_OFFSET))(this, a1);
		}

		::System::Void SyncIncremental(::Class_1_01C2B9641EF803B2_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_01C2B9641EF803B2_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO_SYNCINCREMENTAL_OFFSET))(this, a1);
		}

		::RPG::Client::IRogueTournPersonaGameLevelLayer* get_Item(::System::UInt32 a1)
		{
			return ((::RPG::Client::IRogueTournPersonaGameLevelLayer*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO_GET_ITEM_OFFSET))(this, a1);
		}

		::RPG::Client::IRogueTournGameLevelLayerLinear* RPG_Client_IRogueTournGameLevelLinear_get_Item(::System::UInt32 a1)
		{
			return ((::RPG::Client::IRogueTournGameLevelLayerLinear*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO_RPG_CLIENT_IROGUETOURNGAMELEVELLINEAR_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void _SyncLayersFull(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2E64892306548DEA_1*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2E64892306548DEA_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO__SYNCLAYERSFULL_OFFSET))(this, a1);
		}

		::System::Void _SyncLayersIncremental(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2E64892306548DEA_1*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2E64892306548DEA_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO__SYNCLAYERSINCREMENTAL_OFFSET))(this, a1);
		}

		::RPG::Client::RogueTournPersonaGameLevelLayerData* _GetOrFillLayerToIndex(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournPersonaGameLevelLayerData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO__GETORFILLLAYERTOINDEX_OFFSET))(this, a1);
		}

		::Enum_3_DB663931210BBC27_60 get_Status()
		{
			return ((::Enum_3_DB663931210BBC27_60(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO_GET_STATUS_OFFSET))(this);
		}

		::System::UInt32 get_LayerCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO_GET_LAYERCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaGameLevelLayer*>* get_Layers()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaGameLevelLayer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO_GET_LAYERS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournGameLevelLayer*>* RPG_Client_IRogueTournGameLevel_get_Layers()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournGameLevelLayer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO_RPG_CLIENT_IROGUETOURNGAMELEVEL_GET_LAYERS_OFFSET))(this);
		}

		::RPG::Client::IRogueTournPersonaGameLevelLayer* get_CurLayer()
		{
			return ((::RPG::Client::IRogueTournPersonaGameLevelLayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO_GET_CURLAYER_OFFSET))(this);
		}

		::RPG::Client::IRogueTournGameLevelLayer* RPG_Client_IRogueTournGameLevel_get_CurLayer()
		{
			return ((::RPG::Client::IRogueTournGameLevelLayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO_RPG_CLIENT_IROGUETOURNGAMELEVEL_GET_CURLAYER_OFFSET))(this);
		}
	};
}
