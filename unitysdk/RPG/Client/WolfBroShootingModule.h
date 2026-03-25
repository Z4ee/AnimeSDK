#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::GameCore { class MazePuzzleWolfGunPlayLevelRow; }
namespace System { class Object; }

#define RPG_CLIENT_WOLFBROSHOOTINGMODULE_CHECKSHOOTINGLEVELISLOCKBYPRELEVEL_OFFSET UNITYSDK_OFFSET(0xA79EE90)
#define RPG_CLIENT_WOLFBROSHOOTINGMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA79E860)
#define RPG_CLIENT_WOLFBROSHOOTINGMODULE_GETWOLFBROSHOOTINGBESTSCORE_OFFSET UNITYSDK_OFFSET(0xA79ED80)
#define RPG_CLIENT_WOLFBROSHOOTINGMODULE_GET_ISCANRESTARTGAME_OFFSET UNITYSDK_OFFSET(0xA79EFE0)
#define RPG_CLIENT_WOLFBROSHOOTINGMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xA79E6E0)
#define RPG_CLIENT_WOLFBROSHOOTINGMODULE_SET_ISCANRESTARTGAME_OFFSET UNITYSDK_OFFSET(0xA79EFD0)
#define RPG_CLIENT_WOLFBROSHOOTINGMODULE_TRYGETWOLFBROSHOOTINGBESTSCORE_OFFSET UNITYSDK_OFFSET(0xA78EFB0)
#define RPG_CLIENT_WOLFBROSHOOTINGMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA79E910)
#define RPG_CLIENT_WOLFBROSHOOTINGMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA79EFF0)
#define RPG_CLIENT_WOLFBROSHOOTINGMODULE__ONCMDGETGUNPLAYDATASCRSP_OFFSET UNITYSDK_OFFSET(0xA79E9C0)
#define RPG_CLIENT_WOLFBROSHOOTINGMODULE__ONCMDUPDATEGUNPLAYDATASCRSP_OFFSET UNITYSDK_OFFSET(0xA79ECC0)
#define RPG_CLIENT_WOLFBROSHOOTINGMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA79F0A0)
#define RPG_CLIENT_WOLFBROSHOOTINGMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA79F010)
#define RPG_CLIENT_WOLFBROSHOOTINGMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA79F0B0)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroShootingModule_TypeDefinitionIndex = 55729;

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
