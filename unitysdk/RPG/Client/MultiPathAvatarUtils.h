#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MULTIPATHAVATARUTILS_CANCHANGETOSPECIFICAVATARPATH_OFFSET UNITYSDK_OFFSET(0x1B6E9040)
#define RPG_CLIENT_MULTIPATHAVATARUTILS_CHANGEHEROIDTOANOTHERGENDER_OFFSET UNITYSDK_OFFSET(0x1B6E8D00)
#define RPG_CLIENT_MULTIPATHAVATARUTILS_CHANGEHEROIDTOCURRENTGENDER_OFFSET UNITYSDK_OFFSET(0x1B6E8EB0)
#define RPG_CLIENT_MULTIPATHAVATARUTILS_CONVERTTOPLAYERGENDERAVATARID_OFFSET UNITYSDK_OFFSET(0x1B6E8B70)
#define RPG_CLIENT_MULTIPATHAVATARUTILS_GETAVATARGENDERTYPE_OFFSET UNITYSDK_OFFSET(0x1B6E8A80)
#define RPG_CLIENT_MULTIPATHAVATARUTILS_GETMALEHEROID_OFFSET UNITYSDK_OFFSET(0x1B6E8DF0)
#define RPG_CLIENT_MULTIPATHAVATARUTILS_ISHEROID_OFFSET UNITYSDK_OFFSET(0x1B6E88C0)
#define RPG_CLIENT_MULTIPATHAVATARUTILS_ISMULTIPATHAVATAR_OFFSET UNITYSDK_OFFSET(0x1B6E8900)
#define RPG_CLIENT_MULTIPATHAVATARUTILS_ISSHOWAVATARPATHCHANGEBTN_OFFSET UNITYSDK_OFFSET(0x1B6E8A00)

namespace RPG::Client
{
	inline static constexpr unsigned int MultiPathAvatarUtils_TypeDefinitionIndex = 66345;

	class MultiPathAvatarUtils : public ::System::Object
	{
	public:
		static ::System::Boolean IsHeroID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARUTILS_ISHEROID_OFFSET))(a1);
		}

		static ::System::Boolean IsMultiPathAvatar(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARUTILS_ISMULTIPATHAVATAR_OFFSET))(a1);
		}

		static ::System::Boolean IsShowAvatarPathChangeBtn(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARUTILS_ISSHOWAVATARPATHCHANGEBTN_OFFSET))(a1);
		}

		static ::RPG::GameCore::GenderType GetAvatarGenderType(::Enum_3_DFCB42601400F441 a1)
		{
			return ((::RPG::GameCore::GenderType(*)(::Enum_3_DFCB42601400F441))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARUTILS_GETAVATARGENDERTYPE_OFFSET))(a1);
		}

		static ::System::UInt32 ConvertToPlayerGenderAvatarID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARUTILS_CONVERTTOPLAYERGENDERAVATARID_OFFSET))(a1);
		}

		static ::System::UInt32 GetMaleHeroID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARUTILS_GETMALEHEROID_OFFSET))(a1);
		}

		static ::System::UInt32 ChangeHeroIDToCurrentGender(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARUTILS_CHANGEHEROIDTOCURRENTGENDER_OFFSET))(a1);
		}

		static ::System::UInt32 ChangeHeroIDToAnotherGender(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARUTILS_CHANGEHEROIDTOANOTHERGENDER_OFFSET))(a1);
		}

		static ::System::Boolean CanChangeToSpecificAvatarPath(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARUTILS_CANCHANGETOSPECIFICAVATARPATH_OFFSET))(a1);
		}
	};
}
