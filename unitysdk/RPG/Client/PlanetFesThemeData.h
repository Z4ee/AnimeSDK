#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PlanetFesCardThemeRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESTHEMEDATA_GETPIECELISTCANUNLOCKCARDCOUNT_OFFSET UNITYSDK_OFFSET(0x1A1D81F0)
#define RPG_CLIENT_PLANETFESTHEMEDATA_GETSORTEDCARDLIST_OFFSET UNITYSDK_OFFSET(0x1A1D7CD0)
#define RPG_CLIENT_PLANETFESTHEMEDATA_GETUNLOCKBUFFLIST_OFFSET UNITYSDK_OFFSET(0x1A1D7EE0)
#define RPG_CLIENT_PLANETFESTHEMEDATA_GET_CARDLIST_OFFSET UNITYSDK_OFFSET(0x1A1D7E90)
#define RPG_CLIENT_PLANETFESTHEMEDATA_GET_CURRENTCOLLECTCOUNT_OFFSET UNITYSDK_OFFSET(0x1A1CAE50)
#define RPG_CLIENT_PLANETFESTHEMEDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1A1D8790)
#define RPG_CLIENT_PLANETFESTHEMEDATA_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x1A1D8650)
#define RPG_CLIENT_PLANETFESTHEMEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A1D8720)
#define RPG_CLIENT_PLANETFESTHEMEDATA_GET_THEMEID_OFFSET UNITYSDK_OFFSET(0x1A1D87E0)
#define RPG_CLIENT_PLANETFESTHEMEDATA_GET_TOTALCOLLECTCOUNT_OFFSET UNITYSDK_OFFSET(0x1A1D85F0)
#define RPG_CLIENT_PLANETFESTHEMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1D7C90)
#define RPG_CLIENT_PLANETFESTHEMEDATA__GETCURRENTCOLLECTCOUNT_OFFSET UNITYSDK_OFFSET(0x1A1D83D0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesThemeData_TypeDefinitionIndex = 63616;

	class PlanetFesThemeData : public ::System::Object
	{
	public:
		::RPG::GameCore::PlanetFesCardThemeRow* _Row; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTHEMEDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetSortedCardList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTHEMEDATA_GETSORTEDCARDLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetUnlockBuffList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTHEMEDATA_GETUNLOCKBUFFLIST_OFFSET))(this);
		}

		::System::Int32 GetPieceListCanUnlockCardCount(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTHEMEDATA_GETPIECELISTCANUNLOCKCARDCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_CurrentCollectCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTHEMEDATA_GET_CURRENTCOLLECTCOUNT_OFFSET))(this);
		}

		::System::Int32 get_TotalCollectCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTHEMEDATA_GET_TOTALCOLLECTCOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTHEMEDATA_GET_ISFINISH_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_CardList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTHEMEDATA_GET_CARDLIST_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTHEMEDATA_GET_NAME_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTHEMEDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_ThemeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTHEMEDATA_GET_THEMEID_OFFSET))(this);
		}

		::System::Int32 _GetCurrentCollectCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTHEMEDATA__GETCURRENTCOLLECTCOUNT_OFFSET))(this);
		}
	};
}
