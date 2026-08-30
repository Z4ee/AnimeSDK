#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PlanetFesCardRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESCARDDATA_CHECKISFINISH_OFFSET UNITYSDK_OFFSET(0xDB44560)
#define RPG_CLIENT_PLANETFESCARDDATA_CHECKISPIECELISTCANUNLOCKCARD_OFFSET UNITYSDK_OFFSET(0xDB443B0)
#define RPG_CLIENT_PLANETFESCARDDATA_GETCARDITEMNUM_OFFSET UNITYSDK_OFFSET(0xDB44720)
#define RPG_CLIENT_PLANETFESCARDDATA_GET_BUFFIDLIST_OFFSET UNITYSDK_OFFSET(0xDB44DB0)
#define RPG_CLIENT_PLANETFESCARDDATA_GET_CARDID_OFFSET UNITYSDK_OFFSET(0xDB44CC0)
#define RPG_CLIENT_PLANETFESCARDDATA_GET_CARDPIECECOLLECTNUM_OFFSET UNITYSDK_OFFSET(0xDB44AB0)
#define RPG_CLIENT_PLANETFESCARDDATA_GET_CARDPIECENUMDICT_OFFSET UNITYSDK_OFFSET(0xDB449D0)
#define RPG_CLIENT_PLANETFESCARDDATA_GET_CARDPIECENUM_OFFSET UNITYSDK_OFFSET(0xDB44A20)
#define RPG_CLIENT_PLANETFESCARDDATA_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xDB44E70)
#define RPG_CLIENT_PLANETFESCARDDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xDB44D10)
#define RPG_CLIENT_PLANETFESCARDDATA_GET_IMGPATH_OFFSET UNITYSDK_OFFSET(0xDB44D60)
#define RPG_CLIENT_PLANETFESCARDDATA_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0xDB44980)
#define RPG_CLIENT_PLANETFESCARDDATA_GET_ITEMLIST_OFFSET UNITYSDK_OFFSET(0xDB44510)
#define RPG_CLIENT_PLANETFESCARDDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xDB44E00)
#define RPG_CLIENT_PLANETFESCARDDATA_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xDB44EE0)
#define RPG_CLIENT_PLANETFESCARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDB44370)
#define RPG_CLIENT_PLANETFESCARDDATA__GETCARDITEMCOLLECTNUM_OFFSET UNITYSDK_OFFSET(0xDB44B00)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesCardData_TypeDefinitionIndex = 66598;

	class PlanetFesCardData : public ::System::Object
	{
	public:
		::RPG::GameCore::PlanetFesCardRow* _Row; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESCARDDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean CheckIsPieceListCanUnlockCard(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESCARDDATA_CHECKISPIECELISTCANUNLOCKCARD_OFFSET))(this, a1);
		}

		::System::Boolean CheckIsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESCARDDATA_CHECKISFINISH_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* GetCardItemNum()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESCARDDATA_GETCARDITEMNUM_OFFSET))(this);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESCARDDATA_GET_ISFINISH_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_CardPieceNumDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESCARDDATA_GET_CARDPIECENUMDICT_OFFSET))(this);
		}

		::System::Int32 get_CardPieceNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESCARDDATA_GET_CARDPIECENUM_OFFSET))(this);
		}

		::System::Int32 get_CardPieceCollectNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESCARDDATA_GET_CARDPIECECOLLECTNUM_OFFSET))(this);
		}

		::System::UInt32 get_CardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESCARDDATA_GET_CARDID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ItemList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESCARDDATA_GET_ITEMLIST_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESCARDDATA_GET_ID_OFFSET))(this);
		}

		::System::String* get_ImgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESCARDDATA_GET_IMGPATH_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_BuffIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESCARDDATA_GET_BUFFIDLIST_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESCARDDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Description()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESCARDDATA_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::UInt32 get_Rarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESCARDDATA_GET_RARITY_OFFSET))(this);
		}

		::System::Int32 _GetCardItemCollectNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESCARDDATA__GETCARDITEMCOLLECTNUM_OFFSET))(this);
		}
	};
}
