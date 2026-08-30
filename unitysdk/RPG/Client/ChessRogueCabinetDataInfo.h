#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChessRogueCabinetDataItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUECABINETDATAINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCB9EC50)
#define RPG_CLIENT_CHESSROGUECABINETDATAINFO_GETHIDECABINETINFO_OFFSET UNITYSDK_OFFSET(0xCB9EFF0)
#define RPG_CLIENT_CHESSROGUECABINETDATAINFO_GETNORMALCABINETINFO_OFFSET UNITYSDK_OFFSET(0xCB9ECF0)
#define RPG_CLIENT_CHESSROGUECABINETDATAINFO_GET_CABINETDICT_OFFSET UNITYSDK_OFFSET(0xCB9F300)
#define RPG_CLIENT_CHESSROGUECABINETDATAINFO_INIT_OFFSET UNITYSDK_OFFSET(0xCB9EA10)
#define RPG_CLIENT_CHESSROGUECABINETDATAINFO_SET_CABINETDICT_OFFSET UNITYSDK_OFFSET(0xCB9F310)
#define RPG_CLIENT_CHESSROGUECABINETDATAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xCB9E990)
#define RPG_CLIENT_CHESSROGUECABINETDATAINFO__INITCABINET_OFFSET UNITYSDK_OFFSET(0xCB9EA60)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueCabinetDataInfo_TypeDefinitionIndex = 66909;

	class ChessRogueCabinetDataInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueCabinetDataItem*>* _CabinetDict_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUECABINETDATAINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUECABINETDATAINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUECABINETDATAINFO_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueCabinetDataItem*>* GetNormalCabinetInfo()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueCabinetDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUECABINETDATAINFO_GETNORMALCABINETINFO_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueCabinetDataItem*>* GetHideCabinetInfo()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueCabinetDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUECABINETDATAINFO_GETHIDECABINETINFO_OFFSET))(this);
		}

		::System::Void _InitCabinet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUECABINETDATAINFO__INITCABINET_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueCabinetDataItem*>* get_CabinetDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueCabinetDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUECABINETDATAINFO_GET_CABINETDICT_OFFSET))(this);
		}

		::System::Void set_CabinetDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueCabinetDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueCabinetDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUECABINETDATAINFO_SET_CABINETDICT_OFFSET))(this, a1);
		}
	};
}
