#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_59.h"
#include "unitysdk/System/Object.h"

class Class_1_01C2B9641EF803B2_2;
class Class_1_2E64892306548DEA_1;
class Class_1_C9DFE5EE7107C629_16;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class IRogueTournClassicGameLevelLayer; }
namespace RPG::Client { class IRogueTournGameLevelLayer; }
namespace RPG::Client { class IRogueTournGameLevelLayerLinear; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB0B97E0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_GET_CURLAYER_OFFSET UNITYSDK_OFFSET(0xB0B8C00)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xB0BA240)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_GET_LAYERCOUNT_OFFSET UNITYSDK_OFFSET(0xB0BA590)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_GET_LAYERS_OFFSET UNITYSDK_OFFSET(0xB0BA5E0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xB0BA580)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_RPG_CLIENT_IROGUETOURNGAMELEVELLINEAR_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xB0BA310)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_RPG_CLIENT_IROGUETOURNGAMELEVEL_GET_CURLAYER_OFFSET UNITYSDK_OFFSET(0xB0BA600)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_RPG_CLIENT_IROGUETOURNGAMELEVEL_GET_LAYERS_OFFSET UNITYSDK_OFFSET(0xB0BA5F0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_SYNCFULL_OFFSET UNITYSDK_OFFSET(0xB0B9390)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_SYNCINCREMENTAL_OFFSET UNITYSDK_OFFSET(0xB0B9E80)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB0B8030)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO__GETORFILLLAYERTOINDEX_OFFSET UNITYSDK_OFFSET(0xB0BA450)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO__SYNCLAYERSFULL_OFFSET UNITYSDK_OFFSET(0xB0B99F0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO__SYNCLAYERSINCREMENTAL_OFFSET UNITYSDK_OFFSET(0xB0B9EF0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournClassicGameLevelInfo_TypeDefinitionIndex = 62330;

	class RogueTournClassicGameLevelInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournClassicGameLevelLayer*>* _Layers; // 0x10
		::System::UInt32 _CurLayerIndex; // 0x18
		::Enum_3_DB663931210BBC27_59 _Status; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncFull(::Class_1_C9DFE5EE7107C629_16* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_16*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_SYNCFULL_OFFSET))(this, proto);
		}

		::System::Void SyncIncremental(::Class_1_01C2B9641EF803B2_2* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_01C2B9641EF803B2_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_SYNCINCREMENTAL_OFFSET))(this, proto);
		}

		::RPG::Client::IRogueTournClassicGameLevelLayer* get_Item(::System::UInt32 layerIndex)
		{
			return ((::RPG::Client::IRogueTournClassicGameLevelLayer*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_GET_ITEM_OFFSET))(this, layerIndex);
		}

		::RPG::Client::IRogueTournGameLevelLayerLinear* RPG_Client_IRogueTournGameLevelLinear_get_Item(::System::UInt32 layerIndex)
		{
			return ((::RPG::Client::IRogueTournGameLevelLayerLinear*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_RPG_CLIENT_IROGUETOURNGAMELEVELLINEAR_GET_ITEM_OFFSET))(this, layerIndex);
		}

		::System::Void _SyncLayersFull(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2E64892306548DEA_1*>* protoLayers)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2E64892306548DEA_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO__SYNCLAYERSFULL_OFFSET))(this, protoLayers);
		}

		::System::Void _SyncLayersIncremental(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2E64892306548DEA_1*>* protoLayers)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2E64892306548DEA_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO__SYNCLAYERSINCREMENTAL_OFFSET))(this, protoLayers);
		}

		::RPG::Client::IRogueTournClassicGameLevelLayer* _GetOrFillLayerToIndex(::System::UInt32 layerIndex)
		{
			return ((::RPG::Client::IRogueTournClassicGameLevelLayer*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO__GETORFILLLAYERTOINDEX_OFFSET))(this, layerIndex);
		}

		::Enum_3_DB663931210BBC27_59 get_Status()
		{
			return ((::Enum_3_DB663931210BBC27_59(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_GET_STATUS_OFFSET))(this);
		}

		::System::UInt32 get_LayerCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_GET_LAYERCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournClassicGameLevelLayer*>* get_Layers()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournClassicGameLevelLayer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_GET_LAYERS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournGameLevelLayer*>* RPG_Client_IRogueTournGameLevel_get_Layers()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournGameLevelLayer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_RPG_CLIENT_IROGUETOURNGAMELEVEL_GET_LAYERS_OFFSET))(this);
		}

		::RPG::Client::IRogueTournClassicGameLevelLayer* get_CurLayer()
		{
			return ((::RPG::Client::IRogueTournClassicGameLevelLayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_GET_CURLAYER_OFFSET))(this);
		}

		::RPG::Client::IRogueTournGameLevelLayer* RPG_Client_IRogueTournGameLevel_get_CurLayer()
		{
			return ((::RPG::Client::IRogueTournGameLevelLayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_RPG_CLIENT_IROGUETOURNGAMELEVEL_GET_CURLAYER_OFFSET))(this);
		}
	};
}
