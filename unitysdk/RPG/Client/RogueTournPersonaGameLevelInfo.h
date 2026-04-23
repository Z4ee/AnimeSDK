#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_59.h"
#include "unitysdk/System/Object.h"

class Class_1_01C2B9641EF803B2_2;
class Class_1_2E64892306548DEA_1;
class Class_1_C9DFE5EE7107C629_16;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class IRogueTournGameLevelLayer; }
namespace RPG::Client { class IRogueTournGameLevelLayerLinear; }
namespace RPG::Client { class IRogueTournPersonaGameLevelLayer; }
namespace RPG::Client { class RogueTournPersonaGameLevelLayerData; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB0EB4F0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO_GET_CURLAYER_OFFSET UNITYSDK_OFFSET(0xB0EAA70)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xB0EBE90)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO_GET_LAYERCOUNT_OFFSET UNITYSDK_OFFSET(0xB0EC180)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO_GET_LAYERS_OFFSET UNITYSDK_OFFSET(0xB0EC1D0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xB0EC170)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO_RPG_CLIENT_IROGUETOURNGAMELEVELLINEAR_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xB0EBF30)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO_RPG_CLIENT_IROGUETOURNGAMELEVEL_GET_CURLAYER_OFFSET UNITYSDK_OFFSET(0xB0EC1F0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO_RPG_CLIENT_IROGUETOURNGAMELEVEL_GET_LAYERS_OFFSET UNITYSDK_OFFSET(0xB0EC1E0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO_SYNCFULL_OFFSET UNITYSDK_OFFSET(0xB0EB2A0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO_SYNCINCREMENTAL_OFFSET UNITYSDK_OFFSET(0xB0EBB10)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB0E9F80)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO__GETORFILLLAYERTOINDEX_OFFSET UNITYSDK_OFFSET(0xB0EC060)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO__SYNCLAYERSFULL_OFFSET UNITYSDK_OFFSET(0xB0EB6E0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO__SYNCLAYERSINCREMENTAL_OFFSET UNITYSDK_OFFSET(0xB0EBB80)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaGameLevelInfo_TypeDefinitionIndex = 62403;

	class RogueTournPersonaGameLevelInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaGameLevelLayer*>* _Layers; // 0x10
		::System::UInt32 _CurLayerIndex; // 0x18
		::Enum_3_DB663931210BBC27_59 _Status; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncFull(::Class_1_C9DFE5EE7107C629_16* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_16*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO_SYNCFULL_OFFSET))(this, proto);
		}

		::System::Void SyncIncremental(::Class_1_01C2B9641EF803B2_2* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_01C2B9641EF803B2_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO_SYNCINCREMENTAL_OFFSET))(this, proto);
		}

		::RPG::Client::IRogueTournPersonaGameLevelLayer* get_Item(::System::UInt32 layerIndex)
		{
			return ((::RPG::Client::IRogueTournPersonaGameLevelLayer*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO_GET_ITEM_OFFSET))(this, layerIndex);
		}

		::RPG::Client::IRogueTournGameLevelLayerLinear* RPG_Client_IRogueTournGameLevelLinear_get_Item(::System::UInt32 layerIndex)
		{
			return ((::RPG::Client::IRogueTournGameLevelLayerLinear*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO_RPG_CLIENT_IROGUETOURNGAMELEVELLINEAR_GET_ITEM_OFFSET))(this, layerIndex);
		}

		::System::Void _SyncLayersFull(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2E64892306548DEA_1*>* protoLayers)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2E64892306548DEA_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO__SYNCLAYERSFULL_OFFSET))(this, protoLayers);
		}

		::System::Void _SyncLayersIncremental(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2E64892306548DEA_1*>* protoLayers)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2E64892306548DEA_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO__SYNCLAYERSINCREMENTAL_OFFSET))(this, protoLayers);
		}

		::RPG::Client::RogueTournPersonaGameLevelLayerData* _GetOrFillLayerToIndex(::System::UInt32 layerIndex)
		{
			return ((::RPG::Client::RogueTournPersonaGameLevelLayerData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO__GETORFILLLAYERTOINDEX_OFFSET))(this, layerIndex);
		}

		::Enum_3_DB663931210BBC27_59 get_Status()
		{
			return ((::Enum_3_DB663931210BBC27_59(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO_GET_STATUS_OFFSET))(this);
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
