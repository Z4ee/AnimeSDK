#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueGambleMode.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueGambleGroupLevelType.h"
#include "unitysdk/RPG/GameCore/RogueGambleMachineType.h"
#include "unitysdk/System/Object.h"

class Class_1_284D32FB02E8E03B;
class Class_1_2C8DDB37F88B4DBC_1;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class RogueGambleUnitData; }
namespace RPG::GameCore { class RogueTournGambleGroupRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEGAMBLEGROUPDATA_GET_GAMBLEMODE_OFFSET UNITYSDK_OFFSET(0xB03C8E0)
#define RPG_CLIENT_ROGUEGAMBLEGROUPDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xB03C8C0)
#define RPG_CLIENT_ROGUEGAMBLEGROUPDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xB03C700)
#define RPG_CLIENT_ROGUEGAMBLEGROUPDATA_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xB03C720)
#define RPG_CLIENT_ROGUEGAMBLEGROUPDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB03B900)
#define RPG_CLIENT_ROGUEGAMBLEGROUPDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB03C890)
#define RPG_CLIENT_ROGUEGAMBLEGROUPDATA_GET_ROGUEGAMBLEUNITDATALIST_OFFSET UNITYSDK_OFFSET(0xB03C740)
#define RPG_CLIENT_ROGUEGAMBLEGROUPDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xB03C760)
#define RPG_CLIENT_ROGUEGAMBLEGROUPDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB03C870)
#define RPG_CLIENT_ROGUEGAMBLEGROUPDATA_SET_GAMBLEMODE_OFFSET UNITYSDK_OFFSET(0xB03C8F0)
#define RPG_CLIENT_ROGUEGAMBLEGROUPDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xB03C710)
#define RPG_CLIENT_ROGUEGAMBLEGROUPDATA_SET_ISVALID_OFFSET UNITYSDK_OFFSET(0xB03C730)
#define RPG_CLIENT_ROGUEGAMBLEGROUPDATA_SET_ROGUEGAMBLEUNITDATALIST_OFFSET UNITYSDK_OFFSET(0xB03C750)
#define RPG_CLIENT_ROGUEGAMBLEGROUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB03B410)
#define RPG_CLIENT_ROGUEGAMBLEGROUPDATA__SETUPGAMBLEGROUPDATALIST_OFFSET UNITYSDK_OFFSET(0xB03C4F0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueGambleGroupData_TypeDefinitionIndex = 61933;

	class RogueGambleGroupData : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueTournGambleGroupRow* _Row; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::RogueGambleUnitData*>* _RogueGambleUnitDataList_k__BackingField; // 0x18
		::RPG::Client::RogueGambleMode _GambleMode_k__BackingField; // 0x20
		::System::Boolean _IsValid_k__BackingField; // 0x24
		::System::UInt32 _ID_k__BackingField; // 0x28

		::System::Void _ctor(::Class_1_2C8DDB37F88B4DBC_1* protoGroupInfo, ::RPG::Client::RogueGambleMode gambleMode)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2C8DDB37F88B4DBC_1*, ::RPG::Client::RogueGambleMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEGROUPDATA__CTOR_OFFSET))(this, protoGroupInfo, gambleMode);
		}

		::System::Void _SetupGambleGroupDataList(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_284D32FB02E8E03B*>* protoUnitDataList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_284D32FB02E8E03B*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEGROUPDATA__SETUPGAMBLEGROUPDATALIST_OFFSET))(this, protoUnitDataList);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEGROUPDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEGROUPDATA_SET_ID_OFFSET))(this, value);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEGROUPDATA_GET_ISVALID_OFFSET))(this);
		}

		::System::Void set_IsValid(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEGROUPDATA_SET_ISVALID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueGambleUnitData*>* get_RogueGambleUnitDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueGambleUnitData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEGROUPDATA_GET_ROGUEGAMBLEUNITDATALIST_OFFSET))(this);
		}

		::System::Void set_RogueGambleUnitDataList(::System::Collections::Generic::List_1<::RPG::Client::RogueGambleUnitData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueGambleUnitData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEGROUPDATA_SET_ROGUEGAMBLEUNITDATALIST_OFFSET))(this, value);
		}

		::RPG::GameCore::RogueTournGambleGroupRow* get_Row()
		{
			return ((::RPG::GameCore::RogueTournGambleGroupRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEGROUPDATA_GET_ROW_OFFSET))(this);
		}

		::RPG::GameCore::RogueGambleMachineType get_Type()
		{
			return ((::RPG::GameCore::RogueGambleMachineType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEGROUPDATA_GET_TYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEGROUPDATA_GET_NAME_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEGROUPDATA_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::GameCore::RogueGambleGroupLevelType get_Level()
		{
			return ((::RPG::GameCore::RogueGambleGroupLevelType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEGROUPDATA_GET_LEVEL_OFFSET))(this);
		}

		::RPG::Client::RogueGambleMode get_GambleMode()
		{
			return ((::RPG::Client::RogueGambleMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEGROUPDATA_GET_GAMBLEMODE_OFFSET))(this);
		}

		::System::Void set_GambleMode(::RPG::Client::RogueGambleMode value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueGambleMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEGROUPDATA_SET_GAMBLEMODE_OFFSET))(this, value);
		}
	};
}
