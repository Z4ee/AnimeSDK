#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441_1.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MultiPathAvatarUnlockItemTransfer; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::GameCore { class AvatarPathChangeConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MULTIPATHHELPER_CHECKHARMONYHEROISUNLOCKEDBYREQUEST_OFFSET UNITYSDK_OFFSET(0xD8D29C0)
#define RPG_CLIENT_MULTIPATHHELPER_CHECKHASCACHEDTRANSFERITEMBYUNLOCKAVATAR_OFFSET UNITYSDK_OFFSET(0xD8D2B10)
#define RPG_CLIENT_MULTIPATHHELPER_CHECKISMULTIPATHAVATAR_OFFSET UNITYSDK_OFFSET(0xD8D1C90)
#define RPG_CLIENT_MULTIPATHHELPER_CHECKISUNLOCKEDBYREQUEST_OFFSET UNITYSDK_OFFSET(0xD8D2A20)
#define RPG_CLIENT_MULTIPATHHELPER_CHECKSUPPORTSEARLYUNLOCK_OFFSET UNITYSDK_OFFSET(0xD8D2510)
#define RPG_CLIENT_MULTIPATHHELPER_CHECKSUPPORTSREPEATUNLOCKREWARD_OFFSET UNITYSDK_OFFSET(0xD8D25D0)
#define RPG_CLIENT_MULTIPATHHELPER_CLEARCACHEDTRANSFERITEMBYUNLOCKAVATAR_OFFSET UNITYSDK_OFFSET(0xD8D2BE0)
#define RPG_CLIENT_MULTIPATHHELPER_GETALLMULTIPATHAVATARTYPES_OFFSET UNITYSDK_OFFSET(0xD8D2D80)
#define RPG_CLIENT_MULTIPATHHELPER_GETCACHEDTRANSFERITEM_OFFSET UNITYSDK_OFFSET(0xD8D2CB0)
#define RPG_CLIENT_MULTIPATHHELPER_GETCHANGECONFIG_OFFSET UNITYSDK_OFFSET(0xD8D2690)
#define RPG_CLIENT_MULTIPATHHELPER_GETDESC_OFFSET UNITYSDK_OFFSET(0xD8D27B0)
#define RPG_CLIENT_MULTIPATHHELPER_GETGENDERTYPE_OFFSET UNITYSDK_OFFSET(0xD8D1E10)
#define RPG_CLIENT_MULTIPATHHELPER_GETMULTIPATHAVATARTYPESBYROLE_OFFSET UNITYSDK_OFFSET(0xD8D3370)
#define RPG_CLIENT_MULTIPATHHELPER_GETUNLOCKTOAST_OFFSET UNITYSDK_OFFSET(0xD8D2410)
#define RPG_CLIENT_MULTIPATHHELPER_UNLOCKAVATARPATH_OFFSET UNITYSDK_OFFSET(0xD8D28B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MultiPathHelper_TypeDefinitionIndex = 62648;

	class MultiPathHelper : public ::System::Object
	{
	public:
		static ::RPG::GameCore::GenderType GetGenderType(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GenderType(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHHELPER_GETGENDERTYPE_OFFSET))(a1);
		}

		static ::RPG::Client::TextID GetUnlockToast(::System::UInt32 a1)
		{
			return ((::RPG::Client::TextID(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHHELPER_GETUNLOCKTOAST_OFFSET))(a1);
		}

		static ::System::Boolean CheckSupportsEarlyUnlock(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHHELPER_CHECKSUPPORTSEARLYUNLOCK_OFFSET))(a1);
		}

		static ::System::Boolean CheckSupportsRepeatUnlockReward(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHHELPER_CHECKSUPPORTSREPEATUNLOCKREWARD_OFFSET))(a1);
		}

		static ::RPG::GameCore::AvatarPathChangeConfig* GetChangeConfig(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AvatarPathChangeConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHHELPER_GETCHANGECONFIG_OFFSET))(a1);
		}

		static ::RPG::Client::TextID GetDesc(::System::UInt32 a1)
		{
			return ((::RPG::Client::TextID(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHHELPER_GETDESC_OFFSET))(a1);
		}

		static ::RPG::Client::Promises::IPromise* UnlockAvatarPath(::Enum_3_DFCB42601400F441_1 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::Enum_3_DFCB42601400F441_1))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHHELPER_UNLOCKAVATARPATH_OFFSET))(a1);
		}

		static ::System::Boolean CheckHarmonyHeroIsUnlockedByRequest()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHHELPER_CHECKHARMONYHEROISUNLOCKEDBYREQUEST_OFFSET))();
		}

		static ::System::Boolean CheckIsUnlockedByRequest(::Enum_3_DFCB42601400F441_1 a1)
		{
			return ((::System::Boolean(*)(::Enum_3_DFCB42601400F441_1))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHHELPER_CHECKISUNLOCKEDBYREQUEST_OFFSET))(a1);
		}

		static ::System::Boolean CheckHasCachedTransferItemByUnlockAvatar()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHHELPER_CHECKHASCACHEDTRANSFERITEMBYUNLOCKAVATAR_OFFSET))();
		}

		static ::System::Void ClearCachedTransferItemByUnlockAvatar()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHHELPER_CLEARCACHEDTRANSFERITEMBYUNLOCKAVATAR_OFFSET))();
		}

		static ::RPG::Client::MultiPathAvatarUnlockItemTransfer* GetCachedTransferItem()
		{
			return ((::RPG::Client::MultiPathAvatarUnlockItemTransfer*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHHELPER_GETCACHEDTRANSFERITEM_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441_1>* GetAllMultiPathAvatarTypes()
		{
			return ((::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441_1>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHHELPER_GETALLMULTIPATHAVATARTYPES_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441_1>* GetMultiPathAvatarTypesByRole(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441_1>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHHELPER_GETMULTIPATHAVATARTYPESBYROLE_OFFSET))(a1);
		}

		static ::System::Boolean CheckIsMultiPathAvatar(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHHELPER_CHECKISMULTIPATHAVATAR_OFFSET))(a1);
		}
	};
}
