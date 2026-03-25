#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PlanetFesCardThemeRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESTHEMEDATA_GETPIECELISTCANUNLOCKCARDCOUNT_OFFSET UNITYSDK_OFFSET(0x9FCDEE0)
#define RPG_CLIENT_PLANETFESTHEMEDATA_GETSORTEDCARDLIST_OFFSET UNITYSDK_OFFSET(0x9FCDA50)
#define RPG_CLIENT_PLANETFESTHEMEDATA_GETUNLOCKBUFFLIST_OFFSET UNITYSDK_OFFSET(0x9FCDBB0)
#define RPG_CLIENT_PLANETFESTHEMEDATA_GET_CARDLIST_OFFSET UNITYSDK_OFFSET(0x9FCDB90)
#define RPG_CLIENT_PLANETFESTHEMEDATA_GET_CURRENTCOLLECTCOUNT_OFFSET UNITYSDK_OFFSET(0x9FC1820)
#define RPG_CLIENT_PLANETFESTHEMEDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x9FCE3D0)
#define RPG_CLIENT_PLANETFESTHEMEDATA_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x9FCE330)
#define RPG_CLIENT_PLANETFESTHEMEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9FCE3A0)
#define RPG_CLIENT_PLANETFESTHEMEDATA_GET_THEMEID_OFFSET UNITYSDK_OFFSET(0x9FCE3F0)
#define RPG_CLIENT_PLANETFESTHEMEDATA_GET_TOTALCOLLECTCOUNT_OFFSET UNITYSDK_OFFSET(0x9FCE2D0)
#define RPG_CLIENT_PLANETFESTHEMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9FCDA10)
#define RPG_CLIENT_PLANETFESTHEMEDATA__GETCURRENTCOLLECTCOUNT_OFFSET UNITYSDK_OFFSET(0x9FCE0E0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesThemeData_TypeDefinitionIndex = 54163;

	class PlanetFesThemeData : public ::System::Object
	{
	public:
		::RPG::GameCore::PlanetFesCardThemeRow* _Row; // 0x10

		::System::Void _ctor(::System::UInt32 themeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTHEMEDATA__CTOR_OFFSET))(this, themeID);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetSortedCardList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTHEMEDATA_GETSORTEDCARDLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetUnlockBuffList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTHEMEDATA_GETUNLOCKBUFFLIST_OFFSET))(this);
		}

		::System::Int32 GetPieceListCanUnlockCardCount(::System::Collections::Generic::List_1<::System::UInt32>* pieceList)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTHEMEDATA_GETPIECELISTCANUNLOCKCARDCOUNT_OFFSET))(this, pieceList);
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
