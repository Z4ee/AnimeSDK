#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AdventurePlayerRow; }
namespace RPG::GameCore { class EnhancedAdventurePlayerRow; }
namespace RPG::GameCore { class IAdventurePlayerCommonRowWrap; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_ADVENTUREPLAYERCOMMONWRAP_GETADVENTUREPLAYERDEVSKINNAME_OFFSET UNITYSDK_OFFSET(0x16F583D0)
#define RPG_GAMECORE_ADVENTUREPLAYERCOMMONWRAP_GETADVENTUREPLAYERINDEXNAME_OFFSET UNITYSDK_OFFSET(0x16F582A0)
#define RPG_GAMECORE_ADVENTUREPLAYERCOMMONWRAP_GETALLWRAPDATAFORDEVROUTE_OFFSET UNITYSDK_OFFSET(0x16F57CC0)
#define RPG_GAMECORE_ADVENTUREPLAYERCOMMONWRAP_GETALLWRAPDATA_OFFSET UNITYSDK_OFFSET(0x16F57410)
#define RPG_GAMECORE_ADVENTUREPLAYERCOMMONWRAP_GETWRAPDATA_OFFSET UNITYSDK_OFFSET(0x16F57150)
#define RPG_GAMECORE_ADVENTUREPLAYERCOMMONWRAP__ADDTOLISTWITHSKIN_OFFSET UNITYSDK_OFFSET(0x16F57BA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventurePlayerCommonWrap_TypeDefinitionIndex = 22640;

	class AdventurePlayerCommonWrap : public ::System::Object
	{
	public:
		static ::RPG::GameCore::IAdventurePlayerCommonRowWrap* GetWrapData(::System::UInt32 nConfigID, ::System::UInt32 enhancedID, ::System::Boolean bAutoRecycle)
		{
			return ((::RPG::GameCore::IAdventurePlayerCommonRowWrap*(*)(::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERCOMMONWRAP_GETWRAPDATA_OFFSET))(nConfigID, enhancedID, bAutoRecycle);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::IAdventurePlayerCommonRowWrap*>* GetAllWrapData(::System::Boolean bAutoRecycle)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::IAdventurePlayerCommonRowWrap*>*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERCOMMONWRAP_GETALLWRAPDATA_OFFSET))(bAutoRecycle);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::IAdventurePlayerCommonRowWrap*>* GetAllWrapDataForDevRoute(::System::Boolean bAutoRecycle)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::IAdventurePlayerCommonRowWrap*>*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERCOMMONWRAP_GETALLWRAPDATAFORDEVROUTE_OFFSET))(bAutoRecycle);
		}

		static ::System::Void _AddToListWithSkin(::RPG::GameCore::AdventurePlayerRow* adventurePlayerRow, ::RPG::GameCore::EnhancedAdventurePlayerRow* enhancedRow, ::System::Collections::Generic::List_1<::RPG::GameCore::IAdventurePlayerCommonRowWrap*>* pList, ::System::Boolean bAutoRecycle, ::System::Boolean addSkin)
		{
			return ((::System::Void(*)(::RPG::GameCore::AdventurePlayerRow*, ::RPG::GameCore::EnhancedAdventurePlayerRow*, ::System::Collections::Generic::List_1<::RPG::GameCore::IAdventurePlayerCommonRowWrap*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERCOMMONWRAP__ADDTOLISTWITHSKIN_OFFSET))(adventurePlayerRow, enhancedRow, pList, bAutoRecycle, addSkin);
		}

		static ::System::String* GetAdventurePlayerIndexName(::RPG::GameCore::IAdventurePlayerCommonRowWrap* wrap, ::System::Boolean hideDefaultEnhanceID)
		{
			return ((::System::String*(*)(::RPG::GameCore::IAdventurePlayerCommonRowWrap*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERCOMMONWRAP_GETADVENTUREPLAYERINDEXNAME_OFFSET))(wrap, hideDefaultEnhanceID);
		}

		static ::RPG::Client::TextID GetAdventurePlayerDevSkinName(::RPG::GameCore::IAdventurePlayerCommonRowWrap* wrap)
		{
			return ((::RPG::Client::TextID(*)(::RPG::GameCore::IAdventurePlayerCommonRowWrap*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERCOMMONWRAP_GETADVENTUREPLAYERDEVSKINNAME_OFFSET))(wrap);
		}
	};
}
