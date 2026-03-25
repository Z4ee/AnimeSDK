#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ROGUETOURNTUTORIALHELPER_CHECKCURRENTROOMINDEX_OFFSET UNITYSDK_OFFSET(0xA3DCD40)
#define RPG_CLIENT_ROGUETOURNTUTORIALHELPER_CHECKCURRENTROOMTYPEREFORGE_OFFSET UNITYSDK_OFFSET(0xA3DCEB0)
#define RPG_CLIENT_ROGUETOURNTUTORIALHELPER_CHECKINPERSONAGUIDEAREANUMBER_OFFSET UNITYSDK_OFFSET(0xA3DCB10)
#define RPG_CLIENT_ROGUETOURNTUTORIALHELPER_ISINPERSONAGUIDE_OFFSET UNITYSDK_OFFSET(0xA3DC910)
#define RPG_CLIENT_ROGUETOURNTUTORIALHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0xA3DD090)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournTutorialHelper_TypeDefinitionIndex = 55313;

	class RogueTournTutorialHelper : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::UInt32>** StaticGet__GuideAreaIDs()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournTutorialHelper_TypeDefinitionIndex)->GetStaticField(0x1FCA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTUTORIALHELPER__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsInPersonaGuide()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTUTORIALHELPER_ISINPERSONAGUIDE_OFFSET))();
		}

		static ::System::Boolean CheckInPersonaGuideAreaNumber(::System::UInt32 areaNo)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTUTORIALHELPER_CHECKINPERSONAGUIDEAREANUMBER_OFFSET))(areaNo);
		}

		static ::System::Boolean CheckCurrentRoomIndex(::System::UInt32 roomIndex)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTUTORIALHELPER_CHECKCURRENTROOMINDEX_OFFSET))(roomIndex);
		}

		static ::System::Boolean CheckCurrentRoomTypeReforge()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTUTORIALHELPER_CHECKCURRENTROOMTYPEREFORGE_OFFSET))();
		}
	};
}
