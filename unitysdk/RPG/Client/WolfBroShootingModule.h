#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::GameCore { class MazePuzzleWolfGunPlayLevelRow; }
namespace System { class Object; }

#define RPG_CLIENT_WOLFBROSHOOTINGMODULE_CHECKSHOOTINGLEVELISLOCKBYPRELEVEL_OFFSET UNITYSDK_OFFSET(0xB4E1E00)
#define RPG_CLIENT_WOLFBROSHOOTINGMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB4E17D0)
#define RPG_CLIENT_WOLFBROSHOOTINGMODULE_GETWOLFBROSHOOTINGBESTSCORE_OFFSET UNITYSDK_OFFSET(0xB4E1CF0)
#define RPG_CLIENT_WOLFBROSHOOTINGMODULE_GET_ISCANRESTARTGAME_OFFSET UNITYSDK_OFFSET(0xB4E1F50)
#define RPG_CLIENT_WOLFBROSHOOTINGMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xB4E1650)
#define RPG_CLIENT_WOLFBROSHOOTINGMODULE_SET_ISCANRESTARTGAME_OFFSET UNITYSDK_OFFSET(0xB4E1F40)
#define RPG_CLIENT_WOLFBROSHOOTINGMODULE_TRYGETWOLFBROSHOOTINGBESTSCORE_OFFSET UNITYSDK_OFFSET(0xB4D1EC0)
#define RPG_CLIENT_WOLFBROSHOOTINGMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB4E1880)
#define RPG_CLIENT_WOLFBROSHOOTINGMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xB4E1F60)
#define RPG_CLIENT_WOLFBROSHOOTINGMODULE__ONCMDGETGUNPLAYDATASCRSP_OFFSET UNITYSDK_OFFSET(0xB4E1930)
#define RPG_CLIENT_WOLFBROSHOOTINGMODULE__ONCMDUPDATEGUNPLAYDATASCRSP_OFFSET UNITYSDK_OFFSET(0xB4E1C30)
#define RPG_CLIENT_WOLFBROSHOOTINGMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB4E2010)
#define RPG_CLIENT_WOLFBROSHOOTINGMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xB4E1F80)
#define RPG_CLIENT_WOLFBROSHOOTINGMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB4E2020)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroShootingModule_TypeDefinitionIndex = 62932;

	class WolfBroShootingModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::System::UInt32>* WolfBroShootingBestScoreDict; // 0x10
		::System::Boolean _IsCanRestartGame; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROSHOOTINGMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROSHOOTINGMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROSHOOTINGMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROSHOOTINGMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCmdGetGunPlayDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROSHOOTINGMODULE__ONCMDGETGUNPLAYDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdUpdateGunPlayDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROSHOOTINGMODULE__ONCMDUPDATEGUNPLAYDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Boolean TryGetWolfBroShootingBestScore(::System::UInt32 gunPlayType, ::System::UInt32 level, ::System::UInt32& score)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROSHOOTINGMODULE_TRYGETWOLFBROSHOOTINGBESTSCORE_OFFSET))(this, gunPlayType, level, score);
		}

		::System::UInt32 GetWolfBroShootingBestScore(::System::UInt32 gunPlayType, ::System::UInt32 level)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROSHOOTINGMODULE_GETWOLFBROSHOOTINGBESTSCORE_OFFSET))(this, gunPlayType, level);
		}

		::System::Boolean CheckShootingLevelIsLockByPreLevel(::RPG::GameCore::MazePuzzleWolfGunPlayLevelRow* levelRow)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MazePuzzleWolfGunPlayLevelRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROSHOOTINGMODULE_CHECKSHOOTINGLEVELISLOCKBYPRELEVEL_OFFSET))(this, levelRow);
		}

		::System::Void set_IsCanRestartGame(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROSHOOTINGMODULE_SET_ISCANRESTARTGAME_OFFSET))(this, value);
		}

		::System::Boolean get_IsCanRestartGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROSHOOTINGMODULE_GET_ISCANRESTARTGAME_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROSHOOTINGMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROSHOOTINGMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROSHOOTINGMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
