#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::GameCore { class MazePuzzleWolfGunPlayLevelRow; }
namespace System { class Object; }

#define RPG_CLIENT_WOLFBROSHOOTINGMODULE_CHECKSHOOTINGLEVELISLOCKBYPRELEVEL_OFFSET UNITYSDK_OFFSET(0x1681ACC0)
#define RPG_CLIENT_WOLFBROSHOOTINGMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1681A460)
#define RPG_CLIENT_WOLFBROSHOOTINGMODULE_GETWOLFBROSHOOTINGBESTSCORE_OFFSET UNITYSDK_OFFSET(0x1681AB90)
#define RPG_CLIENT_WOLFBROSHOOTINGMODULE_GET_ISCANRESTARTGAME_OFFSET UNITYSDK_OFFSET(0x1681AE40)
#define RPG_CLIENT_WOLFBROSHOOTINGMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1681A310)
#define RPG_CLIENT_WOLFBROSHOOTINGMODULE_SET_ISCANRESTARTGAME_OFFSET UNITYSDK_OFFSET(0x1681ADF0)
#define RPG_CLIENT_WOLFBROSHOOTINGMODULE_TRYGETWOLFBROSHOOTINGBESTSCORE_OFFSET UNITYSDK_OFFSET(0x1680AD40)
#define RPG_CLIENT_WOLFBROSHOOTINGMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1681A500)
#define RPG_CLIENT_WOLFBROSHOOTINGMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1681AE80)
#define RPG_CLIENT_WOLFBROSHOOTINGMODULE__ONCMDGETGUNPLAYDATASCRSP_OFFSET UNITYSDK_OFFSET(0x1681A690)
#define RPG_CLIENT_WOLFBROSHOOTINGMODULE__ONCMDUPDATEGUNPLAYDATASCRSP_OFFSET UNITYSDK_OFFSET(0x1681AAD0)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroShootingModule_TypeDefinitionIndex = 68248;

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

		::System::Void _OnCmdGetGunPlayDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROSHOOTINGMODULE__ONCMDGETGUNPLAYDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdUpdateGunPlayDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROSHOOTINGMODULE__ONCMDUPDATEGUNPLAYDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetWolfBroShootingBestScore(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROSHOOTINGMODULE_TRYGETWOLFBROSHOOTINGBESTSCORE_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetWolfBroShootingBestScore(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROSHOOTINGMODULE_GETWOLFBROSHOOTINGBESTSCORE_OFFSET))(this, a1, a2);
		}

		::System::Boolean CheckShootingLevelIsLockByPreLevel(::RPG::GameCore::MazePuzzleWolfGunPlayLevelRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MazePuzzleWolfGunPlayLevelRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROSHOOTINGMODULE_CHECKSHOOTINGLEVELISLOCKBYPRELEVEL_OFFSET))(this, a1);
		}

		::System::Void set_IsCanRestartGame(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROSHOOTINGMODULE_SET_ISCANRESTARTGAME_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCanRestartGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROSHOOTINGMODULE_GET_ISCANRESTARTGAME_OFFSET))(this);
		}
	};
}
