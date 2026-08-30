#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"

namespace System { class String; }

#define RPG_CLIENT_FATERIN_AVATAR_FATERININVALIDAVATARVIEWMODEL_GET_BATTLEICONPATH_OFFSET UNITYSDK_OFFSET(0x1CA222C0)
#define RPG_CLIENT_FATERIN_AVATAR_FATERININVALIDAVATARVIEWMODEL_GET_CARDOWNERMARKERICONPATH_OFFSET UNITYSDK_OFFSET(0x1CA22280)
#define RPG_CLIENT_FATERIN_AVATAR_FATERININVALIDAVATARVIEWMODEL_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1CA22120)
#define RPG_CLIENT_FATERIN_AVATAR_FATERININVALIDAVATARVIEWMODEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1CA221C0)
#define RPG_CLIENT_FATERIN_AVATAR_FATERININVALIDAVATARVIEWMODEL_GET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0x1CA22200)
#define RPG_CLIENT_FATERIN_AVATAR_FATERININVALIDAVATARVIEWMODEL_GET_SYSTEMFIGUREPATH_OFFSET UNITYSDK_OFFSET(0x1CA22240)
#define RPG_CLIENT_FATERIN_AVATAR_FATERININVALIDAVATARVIEWMODEL_GET_UICOLORSTATE_OFFSET UNITYSDK_OFFSET(0x1CA22300)
#define RPG_CLIENT_FATERIN_AVATAR_FATERININVALIDAVATARVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA22110)

namespace RPG::Client::FateRin::Avatar
{
	inline static constexpr unsigned int FateRinInvalidAvatarViewModel_TypeDefinitionIndex = 79906;

	class FateRinInvalidAvatarViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		static ::RPG::Client::FateRin::Avatar::FateRinInvalidAvatarViewModel** StaticGet__Instance()
		{
			return (::RPG::Client::FateRin::Avatar::FateRinInvalidAvatarViewModel**)Il2CppClass::FromTypeDefinitionIndex(FateRinInvalidAvatarViewModel_TypeDefinitionIndex)->GetStaticField(0x65550);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_AVATAR_FATERININVALIDAVATARVIEWMODEL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::FateRin::Avatar::FateRinInvalidAvatarViewModel* get_Instance()
		{
			return ((::RPG::Client::FateRin::Avatar::FateRinInvalidAvatarViewModel*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_AVATAR_FATERININVALIDAVATARVIEWMODEL_GET_INSTANCE_OFFSET))();
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_AVATAR_FATERININVALIDAVATARVIEWMODEL_GET_NAME_OFFSET))(this);
		}

		::System::String* get_RoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_AVATAR_FATERININVALIDAVATARVIEWMODEL_GET_ROUNDICONPATH_OFFSET))(this);
		}

		::System::String* get_SystemFigurePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_AVATAR_FATERININVALIDAVATARVIEWMODEL_GET_SYSTEMFIGUREPATH_OFFSET))(this);
		}

		::System::String* get_CardOwnerMarkerIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_AVATAR_FATERININVALIDAVATARVIEWMODEL_GET_CARDOWNERMARKERICONPATH_OFFSET))(this);
		}

		::System::String* get_BattleIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_AVATAR_FATERININVALIDAVATARVIEWMODEL_GET_BATTLEICONPATH_OFFSET))(this);
		}

		::System::String* get_UIColorState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_AVATAR_FATERININVALIDAVATARVIEWMODEL_GET_UICOLORSTATE_OFFSET))(this);
		}
	};
}
