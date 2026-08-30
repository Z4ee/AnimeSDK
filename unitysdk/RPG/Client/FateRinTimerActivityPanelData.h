#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_FATERINTIMERACTIVITYPANELDATA_CHECKANDMARKMISSINGVIDEO_OFFSET UNITYSDK_OFFSET(0x1B5D34C0)
#define RPG_CLIENT_FATERINTIMERACTIVITYPANELDATA_GETVIDEOIDCURRENTLANGUAGE_OFFSET UNITYSDK_OFFSET(0x1B5D30A0)
#define RPG_CLIENT_FATERINTIMERACTIVITYPANELDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B5D35A0)
#define RPG_CLIENT_FATERINTIMERACTIVITYPANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5D3090)

namespace RPG::Client
{
	inline static constexpr unsigned int FateRinTimerActivityPanelData_TypeDefinitionIndex = 61716;

	class FateRinTimerActivityPanelData : public ::RPG::Client::ActivityPanelData
	{
	public:
		static ::System::UInt32* StaticGet_ActivityID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(FateRinTimerActivityPanelData_TypeDefinitionIndex)->GetStaticField(0x3ED0);
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
