#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriManaMovieMaterialBase.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CRIWARE_CRIMANAMOVIEMATERIAL_GET_ADDITIVEMODE_OFFSET UNITYSDK_OFFSET(0x11A4E770)
#define CRIWARE_CRIMANAMOVIEMATERIAL_GET_ADVANCEDAUDIO_OFFSET UNITYSDK_OFFSET(0x11A4E160)
#define CRIWARE_CRIMANAMOVIEMATERIAL_GET_AMBISONICS_OFFSET UNITYSDK_OFFSET(0x11A4E760)
#define CRIWARE_CRIMANAMOVIEMATERIAL_GET_APPLYTARGETALPHA_OFFSET UNITYSDK_OFFSET(0x11A4E840)
#define CRIWARE_CRIMANAMOVIEMATERIAL_GET_FILEPATHLENGTH_OFFSET UNITYSDK_OFFSET(0x11A4E920)
#define CRIWARE_CRIMANAMOVIEMATERIAL_GET_INITIALIZEWITHADVANCEDAUDIO_OFFSET UNITYSDK_OFFSET(0x11A4E9A0)
#define CRIWARE_CRIMANAMOVIEMATERIAL_GET_INITIALIZEWITHAMBISONICS_OFFSET UNITYSDK_OFFSET(0x11A4E9B0)
#define CRIWARE_CRIMANAMOVIEMATERIAL_GET_LOOP_OFFSET UNITYSDK_OFFSET(0x11A4E140)
#define CRIWARE_CRIMANAMOVIEMATERIAL_GET_MOVIEPATH_OFFSET UNITYSDK_OFFSET(0x11A4E070)
#define CRIWARE_CRIMANAMOVIEMATERIAL_GET_UIRENDERMODE_OFFSET UNITYSDK_OFFSET(0x11A4E910)
#define CRIWARE_CRIMANAMOVIEMATERIAL_SETDATATOPLAYER_OFFSET UNITYSDK_OFFSET(0x11A4E9C0)
#define CRIWARE_CRIMANAMOVIEMATERIAL_SET_ADDITIVEMODE_OFFSET UNITYSDK_OFFSET(0x11A4E780)
#define CRIWARE_CRIMANAMOVIEMATERIAL_SET_ADVANCEDAUDIO_OFFSET UNITYSDK_OFFSET(0x11A4E170)
#define CRIWARE_CRIMANAMOVIEMATERIAL_SET_AMBISONICS_OFFSET UNITYSDK_OFFSET(0x11A4E240)
#define CRIWARE_CRIMANAMOVIEMATERIAL_SET_APPLYTARGETALPHA_OFFSET UNITYSDK_OFFSET(0x11A4E850)
#define CRIWARE_CRIMANAMOVIEMATERIAL_SET_LOOP_OFFSET UNITYSDK_OFFSET(0x11A4E150)
#define CRIWARE_CRIMANAMOVIEMATERIAL_SET_MOVIEPATH_OFFSET UNITYSDK_OFFSET(0x11A4E080)
#define CRIWARE_CRIMANAMOVIEMATERIAL_SET_UIRENDERMODE_OFFSET UNITYSDK_OFFSET(0x11A4DCA0)
#define CRIWARE_CRIMANAMOVIEMATERIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x11A4DBC0)

namespace CriWare
{
	inline static constexpr unsigned int CriManaMovieMaterial_TypeDefinitionIndex = 31151;

	class CriManaMovieMaterial : public ::CriWare::CriManaMovieMaterialBase
	{
	public:
		::System::String* _moviePath; // 0x88
		::System::Boolean _loop; // 0x90
		::System::Boolean _additiveMode; // 0x91
		::System::Boolean _advancedAudio; // 0x92
		::System::Boolean _ambisonics; // 0x93
		::System::Boolean _applyTargetAlpha; // 0x94
		::System::Boolean _uiRenderMode; // 0x95
		::UnityEngine::GameObject* ambisonicSource; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIAL__CTOR_OFFSET))(this);
		}

		::System::String* get_moviePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIAL_GET_MOVIEPATH_OFFSET))(this);
		}

		::System::Void set_moviePath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIAL_SET_MOVIEPATH_OFFSET))(this, value);
		}

		::System::Boolean get_loop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIAL_GET_LOOP_OFFSET))(this);
		}

		::System::Void set_loop(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIAL_SET_LOOP_OFFSET))(this, value);
		}

		::System::Boolean get_advancedAudio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIAL_GET_ADVANCEDAUDIO_OFFSET))(this);
		}

		::System::Void set_advancedAudio(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIAL_SET_ADVANCEDAUDIO_OFFSET))(this, value);
		}

		::System::Boolean get_ambisonics()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIAL_GET_AMBISONICS_OFFSET))(this);
		}

		::System::Void set_ambisonics(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIAL_SET_AMBISONICS_OFFSET))(this, value);
		}

		::System::Boolean get_additiveMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIAL_GET_ADDITIVEMODE_OFFSET))(this);
		}

		::System::Void set_additiveMode(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIAL_SET_ADDITIVEMODE_OFFSET))(this, value);
		}

		::System::Boolean get_applyTargetAlpha()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIAL_GET_APPLYTARGETALPHA_OFFSET))(this);
		}

		::System::Void set_applyTargetAlpha(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIAL_SET_APPLYTARGETALPHA_OFFSET))(this, value);
		}

		::System::Boolean get_uiRenderMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIAL_GET_UIRENDERMODE_OFFSET))(this);
		}

		::System::Void set_uiRenderMode(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIAL_SET_UIRENDERMODE_OFFSET))(this, value);
		}

		::System::UInt32 get_FilePathLength()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIAL_GET_FILEPATHLENGTH_OFFSET))(this);
		}

		::System::Boolean get_initializeWithAdvancedAudio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIAL_GET_INITIALIZEWITHADVANCEDAUDIO_OFFSET))(this);
		}

		::System::Boolean get_initializeWithAmbisonics()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIAL_GET_INITIALIZEWITHAMBISONICS_OFFSET))(this);
		}

		::System::Void SetDataToPlayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIAL_SETDATATOPLAYER_OFFSET))(this);
		}
	};
}
