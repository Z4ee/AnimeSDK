#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/RPG/Client/MultiPathAvatarUtils_MultiPathAvatarCache.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_MULTIPATHAVATARUTILS_CANCHANGETOSPECIFICAVATARPATH_OFFSET UNITYSDK_OFFSET(0x9DA8A30)
#define RPG_CLIENT_MULTIPATHAVATARUTILS_CHANGEHEROIDTOANOTHERGENDER_OFFSET UNITYSDK_OFFSET(0x9DA85E0)
#define RPG_CLIENT_MULTIPATHAVATARUTILS_CHANGEHEROIDTOCURRENTGENDER_OFFSET UNITYSDK_OFFSET(0x9DA8830)
#define RPG_CLIENT_MULTIPATHAVATARUTILS_CONVERTBASEIDTOREAL_OFFSET UNITYSDK_OFFSET(0x9DA7E60)
#define RPG_CLIENT_MULTIPATHAVATARUTILS_CONVERTREALIDTOBASE_OFFSET UNITYSDK_OFFSET(0x9DA7D50)
#define RPG_CLIENT_MULTIPATHAVATARUTILS_CONVERTTOPLAYERGENDERAVATARID_OFFSET UNITYSDK_OFFSET(0x9DA83B0)
#define RPG_CLIENT_MULTIPATHAVATARUTILS_GETAVATARGENDERTYPE_OFFSET UNITYSDK_OFFSET(0x9DA82A0)
#define RPG_CLIENT_MULTIPATHAVATARUTILS_GETCURRENTHEROREALID_OFFSET UNITYSDK_OFFSET(0x9DA8240)
#define RPG_CLIENT_MULTIPATHAVATARUTILS_GETMALEHEROID_OFFSET UNITYSDK_OFFSET(0x9DA8770)
#define RPG_CLIENT_MULTIPATHAVATARUTILS_INITEXCELDATACACHE_OFFSET UNITYSDK_OFFSET(0x9DA7C60)
#define RPG_CLIENT_MULTIPATHAVATARUTILS_ISHEROID_OFFSET UNITYSDK_OFFSET(0x9DA7F30)
#define RPG_CLIENT_MULTIPATHAVATARUTILS_ISMULTIPATHAVATAR_OFFSET UNITYSDK_OFFSET(0x9DA7FC0)
#define RPG_CLIENT_MULTIPATHAVATARUTILS_ISSHOWAVATARPATHCHANGEBTN_OFFSET UNITYSDK_OFFSET(0x9DA80D0)
#define RPG_CLIENT_MULTIPATHAVATARUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x9DA8B10)

namespace RPG::Client
{
	inline static constexpr unsigned int MultiPathAvatarUtils_TypeDefinitionIndex = 53925;

	class MultiPathAvatarUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MultiPathAvatarUtils_MultiPathAvatarCache>** StaticGet_MultiPathAvatarCaches()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MultiPathAvatarUtils_MultiPathAvatarCache>**)Il2CppClass::FromTypeDefinitionIndex(MultiPathAvatarUtils_TypeDefinitionIndex)->GetStaticField(0x44500);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARUTILS__CCTOR_OFFSET))();
		}

		static ::System::Void InitExcelDataCache(::System::UInt32 realID, ::RPG::Client::MultiPathAvatarUtils_MultiPathAvatarCache& cache)
		{
			return ((::System::Void(*)(::System::UInt32, ::RPG::Client::MultiPathAvatarUtils_MultiPathAvatarCache&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARUTILS_INITEXCELDATACACHE_OFFSET))(realID, cache);
		}

		static ::System::UInt32 ConvertRealIDToBase(::System::UInt32 realID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARUTILS_CONVERTREALIDTOBASE_OFFSET))(realID);
		}

		static ::System::UInt32 ConvertBaseIDToReal(::System::UInt32 baseAvatarID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARUTILS_CONVERTBASEIDTOREAL_OFFSET))(baseAvatarID);
		}

		static ::System::Boolean IsHeroID(::System::UInt32 realID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARUTILS_ISHEROID_OFFSET))(realID);
		}

		static ::System::Boolean IsMultiPathAvatar(::System::UInt32 realID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARUTILS_ISMULTIPATHAVATAR_OFFSET))(realID);
		}

		static ::System::Boolean IsShowAvatarPathChangeBtn(::System::UInt32 avatarID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARUTILS_ISSHOWAVATARPATHCHANGEBTN_OFFSET))(avatarID);
		}

		static ::System::UInt32 GetCurrentHeroRealID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARUTILS_GETCURRENTHEROREALID_OFFSET))();
		}

		static ::RPG::GameCore::GenderType GetAvatarGenderType(::Enum_3_DFCB42601400F441 multiPathAvatarType)
		{
			return ((::RPG::GameCore::GenderType(*)(::Enum_3_DFCB42601400F441))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARUTILS_GETAVATARGENDERTYPE_OFFSET))(multiPathAvatarType);
		}

		static ::System::UInt32 ConvertToPlayerGenderAvatarID(::System::UInt32 avatarID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARUTILS_CONVERTTOPLAYERGENDERAVATARID_OFFSET))(avatarID);
		}

		static ::System::UInt32 GetMaleHeroID(::System::UInt32 heroID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARUTILS_GETMALEHEROID_OFFSET))(heroID);
		}

		static ::System::UInt32 ChangeHeroIDToCurrentGender(::System::UInt32 avatarID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARUTILS_CHANGEHEROIDTOCURRENTGENDER_OFFSET))(avatarID);
		}

		static ::System::UInt32 ChangeHeroIDToAnotherGender(::System::UInt32 heroID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARUTILS_CHANGEHEROIDTOANOTHERGENDER_OFFSET))(heroID);
		}

		static ::System::Boolean CanChangeToSpecificAvatarPath(::System::UInt32 avatarID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARUTILS_CANCHANGETOSPECIFICAVATARPATH_OFFSET))(avatarID);
		}
	};
}
