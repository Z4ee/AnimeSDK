#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PlanetFesCardRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESCARDDATA_CHECKISFINISH_OFFSET UNITYSDK_OFFSET(0xACB5480)
#define RPG_CLIENT_PLANETFESCARDDATA_CHECKISPIECELISTCANUNLOCKCARD_OFFSET UNITYSDK_OFFSET(0xACB5380)
#define RPG_CLIENT_PLANETFESCARDDATA_GETCARDITEMNUM_OFFSET UNITYSDK_OFFSET(0xACB5610)
#define RPG_CLIENT_PLANETFESCARDDATA_GET_BUFFIDLIST_OFFSET UNITYSDK_OFFSET(0xACB5AD0)
#define RPG_CLIENT_PLANETFESCARDDATA_GET_CARDID_OFFSET UNITYSDK_OFFSET(0xACB5A70)
#define RPG_CLIENT_PLANETFESCARDDATA_GET_CARDPIECECOLLECTNUM_OFFSET UNITYSDK_OFFSET(0xACB58C0)
#define RPG_CLIENT_PLANETFESCARDDATA_GET_CARDPIECENUMDICT_OFFSET UNITYSDK_OFFSET(0xACB5850)
#define RPG_CLIENT_PLANETFESCARDDATA_GET_CARDPIECENUM_OFFSET UNITYSDK_OFFSET(0xACB5860)
#define RPG_CLIENT_PLANETFESCARDDATA_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xACB5B20)
#define RPG_CLIENT_PLANETFESCARDDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xACB5A90)
#define RPG_CLIENT_PLANETFESCARDDATA_GET_IMGPATH_OFFSET UNITYSDK_OFFSET(0xACB5AB0)
#define RPG_CLIENT_PLANETFESCARDDATA_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0xACB5840)
#define RPG_CLIENT_PLANETFESCARDDATA_GET_ITEMLIST_OFFSET UNITYSDK_OFFSET(0xACB5460)
#define RPG_CLIENT_PLANETFESCARDDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xACB5AF0)
#define RPG_CLIENT_PLANETFESCARDDATA_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xACB5B50)
#define RPG_CLIENT_PLANETFESCARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xACB5340)
#define RPG_CLIENT_PLANETFESCARDDATA__GETCARDITEMCOLLECTNUM_OFFSET UNITYSDK_OFFSET(0xACB58D0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesCardData_TypeDefinitionIndex = 61323;

	class PlanetFesCardData : public ::System::Object
	{
	public:
		::RPG::GameCore::PlanetFesCardRow* _Row; // 0x10

		::System::Void _ctor(::System::UInt32 CardID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESCARDDATA__CTOR_OFFSET))(this, CardID);
		}

		::System::Boolean CheckIsPieceListCanUnlockCard(::System::Collections::Generic::List_1<::System::UInt32>* cardList)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESCARDDATA_CHECKISPIECELISTCANUNLOCKCARD_OFFSET))(this, cardList);
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
