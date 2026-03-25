#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTarget.h"
#include "unitysdk/RPG/Client/LockFlagType.h"
#include "unitysdk/RPG/Client/LockSource.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::Client { class LockTargetConfigList; }
namespace RPG::Client { class LockTargetParam; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_GAMEPLAYLOCKMODULECONFIGLIST_METHOD_2_A83D84C085C4AB80_OFFSET UNITYSDK_OFFSET(0x16E84D40)
#define RPG_CLIENT_GAMEPLAYLOCKMODULECONFIGLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x16E85070)

namespace RPG::Client
{
	inline static constexpr unsigned int GameplayLockModuleConfigList_TypeDefinitionIndex = 9930;

	class GameplayLockModuleConfigList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LockSource, ::RPG::Client::LockFlagType>* LockSourceFlagConfig; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LockSource, ::RPG::Client::LockTargetConfigList*>* LockSourceTargetMapping; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::Client::GamePlayLockTarget, ::RPG::Client::LockTargetParam*>* LockTargetParamList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKMODULECONFIGLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A83D84C085C4AB80(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::GameplayLockModuleConfigList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::GameplayLockModuleConfigList*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKMODULECONFIGLIST_METHOD_2_A83D84C085C4AB80_OFFSET))(a1, a2);
		}
	};
}
