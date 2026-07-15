#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_FATERINTIMERACTIVITYPANELDATA_CHECKANDMARKMISSINGVIDEO_OFFSET UNITYSDK_OFFSET(0x19719AB0)
#define RPG_CLIENT_FATERINTIMERACTIVITYPANELDATA_GETVIDEOIDCURRENTLANGUAGE_OFFSET UNITYSDK_OFFSET(0x19719690)
#define RPG_CLIENT_FATERINTIMERACTIVITYPANELDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x19719B90)
#define RPG_CLIENT_FATERINTIMERACTIVITYPANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19719680)

namespace RPG::Client
{
	inline static constexpr unsigned int FateRinTimerActivityPanelData_TypeDefinitionIndex = 58881;

	class FateRinTimerActivityPanelData : public ::RPG::Client::ActivityPanelData
	{
	public:
		static ::System::UInt32* StaticGet_ActivityID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(FateRinTimerActivityPanelData_TypeDefinitionIndex)->GetStaticField(0x4A40);
		}

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERINTIMERACTIVITYPANELDATA__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERINTIMERACTIVITYPANELDATA__CCTOR_OFFSET))();
		}

		::System::UInt32 GetVideoIDCurrentLanguage()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERINTIMERACTIVITYPANELDATA_GETVIDEOIDCURRENTLANGUAGE_OFFSET))(this);
		}

		::System::Boolean CheckAndMarkMissingVideo(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERINTIMERACTIVITYPANELDATA_CHECKANDMARKMISSINGVIDEO_OFFSET))(this, a1);
		}
	};
}
