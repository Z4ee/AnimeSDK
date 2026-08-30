#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueGambleMode.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueGambleGroupLevelType.h"
#include "unitysdk/RPG/GameCore/RogueGambleMachineType.h"
#include "unitysdk/System/Object.h"

class Class_1_7BFB07C3AB2D97E4_3;
class Class_1_7CD26DD84C0F4AE2;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class RogueGambleUnitData; }
namespace RPG::GameCore { class RogueTournGambleGroupRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEGAMBLEGROUPDATA_GET_GAMBLEMODE_OFFSET UNITYSDK_OFFSET(0xDEBBFB0)
#define RPG_CLIENT_ROGUEGAMBLEGROUPDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xDEBBF50)
#define RPG_CLIENT_ROGUEGAMBLEGROUPDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xDEBBD00)
#define RPG_CLIENT_ROGUEGAMBLEGROUPDATA_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xDEBBD20)
#define RPG_CLIENT_ROGUEGAMBLEGROUPDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xDEBAF60)
#define RPG_CLIENT_ROGUEGAMBLEGROUPDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xDEBBEE0)
#define RPG_CLIENT_ROGUEGAMBLEGROUPDATA_GET_ROGUEGAMBLEUNITDATALIST_OFFSET UNITYSDK_OFFSET(0xDEBBD40)
#define RPG_CLIENT_ROGUEGAMBLEGROUPDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xDEBBD60)
#define RPG_CLIENT_ROGUEGAMBLEGROUPDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xDEBBE80)
#define RPG_CLIENT_ROGUEGAMBLEGROUPDATA_SET_GAMBLEMODE_OFFSET UNITYSDK_OFFSET(0xDEBBFC0)
#define RPG_CLIENT_ROGUEGAMBLEGROUPDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xDEBBD10)
#define RPG_CLIENT_ROGUEGAMBLEGROUPDATA_SET_ISVALID_OFFSET UNITYSDK_OFFSET(0xDEBBD30)
#define RPG_CLIENT_ROGUEGAMBLEGROUPDATA_SET_ROGUEGAMBLEUNITDATALIST_OFFSET UNITYSDK_OFFSET(0xDEBBD50)
#define RPG_CLIENT_ROGUEGAMBLEGROUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDEBA8D0)
#define RPG_CLIENT_ROGUEGAMBLEGROUPDATA__SETUPGAMBLEGROUPDATALIST_OFFSET UNITYSDK_OFFSET(0xDEBBA30)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueGambleGroupData_TypeDefinitionIndex = 67228;

	class RogueGambleGroupData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueGambleUnitData*>* _RogueGambleUnitDataList_k__BackingField; // 0x10
		::RPG::GameCore::RogueTournGambleGroupRow* _Row; // 0x18
		::System::Boolean _IsValid_k__BackingField; // 0x20
		::RPG::Client::RogueGambleMode _GambleMode_k__BackingField; // 0x24
		::System::UInt32 _ID_k__BackingField; // 0x28

		::System::Void _ctor(::Class_1_7BFB07C3AB2D97E4_3* a1, ::RPG::Client::RogueGambleMode a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7BFB07C3AB2D97E4_3*, ::RPG::Client::RogueGambleMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEGROUPDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _SetupGambleGroupDataList(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7CD26DD84C0F4AE2*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7CD26DD84C0F4AE2*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEGROUPDATA__SETUPGAMBLEGROUPDATALIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEGROUPDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEGROUPDATA_SET_ID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEGROUPDATA_GET_ISVALID_OFFSET))(this);
		}

		::System::Void set_IsValid(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEGROUPDATA_SET_ISVALID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueGambleUnitData*>* get_RogueGambleUnitDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueGambleUnitData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEGROUPDATA_GET_ROGUEGAMBLEUNITDATALIST_OFFSET))(this);
		}

		::System::Void set_RogueGambleUnitDataList(::System::Collections::Generic::List_1<::RPG::Client::RogueGambleUnitData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueGambleUnitData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEGROUPDATA_SET_ROGUEGAMBLEUNITDATALIST_OFFSET))(this, a1);
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

		::System::Void set_GambleMode(::RPG::Client::RogueGambleMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueGambleMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEGROUPDATA_SET_GAMBLEMODE_OFFSET))(this, a1);
		}
	};
}
