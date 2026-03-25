#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_55.h"
#include "unitysdk/System/Object.h"

class Class_1_4599165C01C96CA0;
class Class_1_9D97064E86670B95;
class Class_1_DBE1913405A6C120_1;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class IRogueTournClassicGameLevelLayer; }
namespace RPG::Client { class IRogueTournGameLevelLayer; }
namespace RPG::Client { class IRogueTournGameLevelLayerLinear; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA382380)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_GET_CURLAYER_OFFSET UNITYSDK_OFFSET(0xA3817A0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xA382DE0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_GET_LAYERCOUNT_OFFSET UNITYSDK_OFFSET(0xA383130)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_GET_LAYERS_OFFSET UNITYSDK_OFFSET(0xA383180)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xA383120)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_RPG_CLIENT_IROGUETOURNGAMELEVELLINEAR_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xA382EB0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_RPG_CLIENT_IROGUETOURNGAMELEVEL_GET_CURLAYER_OFFSET UNITYSDK_OFFSET(0xA3831A0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_RPG_CLIENT_IROGUETOURNGAMELEVEL_GET_LAYERS_OFFSET UNITYSDK_OFFSET(0xA383190)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_SYNCFULL_OFFSET UNITYSDK_OFFSET(0xA381F30)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_SYNCINCREMENTAL_OFFSET UNITYSDK_OFFSET(0xA382A20)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA380BC0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO__GETORFILLLAYERTOINDEX_OFFSET UNITYSDK_OFFSET(0xA382FF0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO__SYNCLAYERSFULL_OFFSET UNITYSDK_OFFSET(0xA382590)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO__SYNCLAYERSINCREMENTAL_OFFSET UNITYSDK_OFFSET(0xA382A90)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournClassicGameLevelInfo_TypeDefinitionIndex = 55142;

	class RogueTournClassicGameLevelInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournClassicGameLevelLayer*>* _Layers; // 0x10
		::Enum_3_DB663931210BBC27_55 _Status; // 0x18
		::System::UInt32 _CurLayerIndex; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncFull(::Class_1_9D97064E86670B95* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9D97064E86670B95*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_SYNCFULL_OFFSET))(this, proto);
		}

		::System::Void SyncIncremental(::Class_1_4599165C01C96CA0* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4599165C01C96CA0*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_SYNCINCREMENTAL_OFFSET))(this, proto);
		}

		::RPG::Client::IRogueTournClassicGameLevelLayer* get_Item(::System::UInt32 layerIndex)
		{
			return ((::RPG::Client::IRogueTournClassicGameLevelLayer*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_GET_ITEM_OFFSET))(this, layerIndex);
		}

		::RPG::Client::IRogueTournGameLevelLayerLinear* RPG_Client_IRogueTournGameLevelLinear_get_Item(::System::UInt32 layerIndex)
		{
			return ((::RPG::Client::IRogueTournGameLevelLayerLinear*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_RPG_CLIENT_IROGUETOURNGAMELEVELLINEAR_GET_ITEM_OFFSET))(this, layerIndex);
		}

		::System::Void _SyncLayersFull(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_DBE1913405A6C120_1*>* protoLayers)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_DBE1913405A6C120_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO__SYNCLAYERSFULL_OFFSET))(this, protoLayers);
		}

		::System::Void _SyncLayersIncremental(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_DBE1913405A6C120_1*>* protoLayers)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_DBE1913405A6C120_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO__SYNCLAYERSINCREMENTAL_OFFSET))(this, protoLayers);
		}

		::RPG::Client::IRogueTournClassicGameLevelLayer* _GetOrFillLayerToIndex(::System::UInt32 layerIndex)
		{
			return ((::RPG::Client::IRogueTournClassicGameLevelLayer*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO__GETORFILLLAYERTOINDEX_OFFSET))(this, layerIndex);
		}

		::Enum_3_DB663931210BBC27_55 get_Status()
		{
			return ((::Enum_3_DB663931210BBC27_55(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_GET_STATUS_OFFSET))(this);
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
