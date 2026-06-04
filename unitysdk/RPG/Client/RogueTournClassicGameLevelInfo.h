#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_60.h"
#include "unitysdk/System/Object.h"

class Class_1_01C2B9641EF803B2_2;
class Class_1_2E64892306548DEA_1;
class Class_1_C9DFE5EE7107C629_13;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class IRogueTournClassicGameLevelLayer; }
namespace RPG::Client { class IRogueTournGameLevelLayer; }
namespace RPG::Client { class IRogueTournGameLevelLayerLinear; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC808C50)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_GET_CURLAYER_OFFSET UNITYSDK_OFFSET(0xC808070)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xC809770)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_GET_LAYERCOUNT_OFFSET UNITYSDK_OFFSET(0xC809B40)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_GET_LAYERS_OFFSET UNITYSDK_OFFSET(0xC809B90)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xC809B30)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_RPG_CLIENT_IROGUETOURNGAMELEVELLINEAR_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xC809850)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_RPG_CLIENT_IROGUETOURNGAMELEVEL_GET_CURLAYER_OFFSET UNITYSDK_OFFSET(0xC809BB0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_RPG_CLIENT_IROGUETOURNGAMELEVEL_GET_LAYERS_OFFSET UNITYSDK_OFFSET(0xC809BA0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_SYNCFULL_OFFSET UNITYSDK_OFFSET(0xC808830)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_SYNCINCREMENTAL_OFFSET UNITYSDK_OFFSET(0xC8093A0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC807520)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO__GETORFILLLAYERTOINDEX_OFFSET UNITYSDK_OFFSET(0xC809990)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO__SYNCLAYERSFULL_OFFSET UNITYSDK_OFFSET(0xC808EA0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO__SYNCLAYERSINCREMENTAL_OFFSET UNITYSDK_OFFSET(0xC809410)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournClassicGameLevelInfo_TypeDefinitionIndex = 63263;

	class RogueTournClassicGameLevelInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournClassicGameLevelLayer*>* _Layers; // 0x10
		::System::UInt32 _CurLayerIndex; // 0x18
		::Enum_3_DB663931210BBC27_60 _Status; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncFull(::Class_1_C9DFE5EE7107C629_13* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_13*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_SYNCFULL_OFFSET))(this, a1);
		}

		::System::Void SyncIncremental(::Class_1_01C2B9641EF803B2_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_01C2B9641EF803B2_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_SYNCINCREMENTAL_OFFSET))(this, a1);
		}

		::RPG::Client::IRogueTournClassicGameLevelLayer* get_Item(::System::UInt32 a1)
		{
			return ((::RPG::Client::IRogueTournClassicGameLevelLayer*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_GET_ITEM_OFFSET))(this, a1);
		}

		::RPG::Client::IRogueTournGameLevelLayerLinear* RPG_Client_IRogueTournGameLevelLinear_get_Item(::System::UInt32 a1)
		{
			return ((::RPG::Client::IRogueTournGameLevelLayerLinear*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_RPG_CLIENT_IROGUETOURNGAMELEVELLINEAR_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void _SyncLayersFull(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2E64892306548DEA_1*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2E64892306548DEA_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO__SYNCLAYERSFULL_OFFSET))(this, a1);
		}

		::System::Void _SyncLayersIncremental(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2E64892306548DEA_1*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2E64892306548DEA_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO__SYNCLAYERSINCREMENTAL_OFFSET))(this, a1);
		}

		::RPG::Client::IRogueTournClassicGameLevelLayer* _GetOrFillLayerToIndex(::System::UInt32 a1)
		{
			return ((::RPG::Client::IRogueTournClassicGameLevelLayer*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO__GETORFILLLAYERTOINDEX_OFFSET))(this, a1);
		}

		::Enum_3_DB663931210BBC27_60 get_Status()
		{
			return ((::Enum_3_DB663931210BBC27_60(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_GET_STATUS_OFFSET))(this);
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
