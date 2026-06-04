#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AdventurePlayerRow; }
namespace RPG::GameCore { class EnhancedAdventurePlayerRow; }
namespace RPG::GameCore { class IAdventurePlayerCommonRowWrap; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_ADVENTUREPLAYERCOMMONWRAP_GETADVENTUREPLAYERDEVSKINNAME_OFFSET UNITYSDK_OFFSET(0xCCEF420)
#define RPG_GAMECORE_ADVENTUREPLAYERCOMMONWRAP_GETADVENTUREPLAYERINDEXNAME_OFFSET UNITYSDK_OFFSET(0xCCEF280)
#define RPG_GAMECORE_ADVENTUREPLAYERCOMMONWRAP_GETALLWRAPDATAFORDEVROUTE_OFFSET UNITYSDK_OFFSET(0xCCEED60)
#define RPG_GAMECORE_ADVENTUREPLAYERCOMMONWRAP_GETALLWRAPDATA_OFFSET UNITYSDK_OFFSET(0xCC9C7C0)
#define RPG_GAMECORE_ADVENTUREPLAYERCOMMONWRAP_GETWRAPDATA_OFFSET UNITYSDK_OFFSET(0xCCE3440)
#define RPG_GAMECORE_ADVENTUREPLAYERCOMMONWRAP__ADDTOLISTWITHSKIN_OFFSET UNITYSDK_OFFSET(0xCCEEBA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventurePlayerCommonWrap_TypeDefinitionIndex = 52784;

	class AdventurePlayerCommonWrap : public ::System::Object
	{
	public:
		static ::RPG::GameCore::IAdventurePlayerCommonRowWrap* GetWrapData(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::RPG::GameCore::IAdventurePlayerCommonRowWrap*(*)(::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERCOMMONWRAP_GETWRAPDATA_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::IAdventurePlayerCommonRowWrap*>* GetAllWrapData(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::IAdventurePlayerCommonRowWrap*>*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERCOMMONWRAP_GETALLWRAPDATA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::IAdventurePlayerCommonRowWrap*>* GetAllWrapDataForDevRoute(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::IAdventurePlayerCommonRowWrap*>*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERCOMMONWRAP_GETALLWRAPDATAFORDEVROUTE_OFFSET))(a1);
		}

		static ::System::Void _AddToListWithSkin(::RPG::GameCore::AdventurePlayerRow* a1, ::RPG::GameCore::EnhancedAdventurePlayerRow* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::IAdventurePlayerCommonRowWrap*>* a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::RPG::GameCore::AdventurePlayerRow*, ::RPG::GameCore::EnhancedAdventurePlayerRow*, ::System::Collections::Generic::List_1<::RPG::GameCore::IAdventurePlayerCommonRowWrap*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERCOMMONWRAP__ADDTOLISTWITHSKIN_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::String* GetAdventurePlayerIndexName(::RPG::GameCore::IAdventurePlayerCommonRowWrap* a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::RPG::GameCore::IAdventurePlayerCommonRowWrap*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERCOMMONWRAP_GETADVENTUREPLAYERINDEXNAME_OFFSET))(a1, a2);
		}

		static ::RPG::Client::TextID GetAdventurePlayerDevSkinName(::RPG::GameCore::IAdventurePlayerCommonRowWrap* a1)
		{
			return ((::RPG::Client::TextID(*)(::RPG::GameCore::IAdventurePlayerCommonRowWrap*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERCOMMONWRAP_GETADVENTUREPLAYERDEVSKINNAME_OFFSET))(a1);
		}
	};
}
