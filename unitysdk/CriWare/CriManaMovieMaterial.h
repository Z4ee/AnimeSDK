#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriManaMovieMaterialBase.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CRIWARE_CRIMANAMOVIEMATERIAL_GET_ADDITIVEMODE_OFFSET UNITYSDK_OFFSET(0x146D6880)
#define CRIWARE_CRIMANAMOVIEMATERIAL_GET_ADVANCEDAUDIO_OFFSET UNITYSDK_OFFSET(0x146D6270)
#define CRIWARE_CRIMANAMOVIEMATERIAL_GET_AMBISONICS_OFFSET UNITYSDK_OFFSET(0x146D6870)
#define CRIWARE_CRIMANAMOVIEMATERIAL_GET_APPLYTARGETALPHA_OFFSET UNITYSDK_OFFSET(0x146D6950)
#define CRIWARE_CRIMANAMOVIEMATERIAL_GET_FILEPATHLENGTH_OFFSET UNITYSDK_OFFSET(0x146D6A30)
#define CRIWARE_CRIMANAMOVIEMATERIAL_GET_INITIALIZEWITHADVANCEDAUDIO_OFFSET UNITYSDK_OFFSET(0x146D6AB0)
#define CRIWARE_CRIMANAMOVIEMATERIAL_GET_INITIALIZEWITHAMBISONICS_OFFSET UNITYSDK_OFFSET(0x146D6AC0)
#define CRIWARE_CRIMANAMOVIEMATERIAL_GET_LOOP_OFFSET UNITYSDK_OFFSET(0x146D6250)
#define CRIWARE_CRIMANAMOVIEMATERIAL_GET_MOVIEPATH_OFFSET UNITYSDK_OFFSET(0x146D6180)
#define CRIWARE_CRIMANAMOVIEMATERIAL_GET_UIRENDERMODE_OFFSET UNITYSDK_OFFSET(0x146D6A20)
#define CRIWARE_CRIMANAMOVIEMATERIAL_SETDATATOPLAYER_OFFSET UNITYSDK_OFFSET(0x146D6AD0)
#define CRIWARE_CRIMANAMOVIEMATERIAL_SET_ADDITIVEMODE_OFFSET UNITYSDK_OFFSET(0x146D6890)
#define CRIWARE_CRIMANAMOVIEMATERIAL_SET_ADVANCEDAUDIO_OFFSET UNITYSDK_OFFSET(0x146D6280)
#define CRIWARE_CRIMANAMOVIEMATERIAL_SET_AMBISONICS_OFFSET UNITYSDK_OFFSET(0x146D6350)
#define CRIWARE_CRIMANAMOVIEMATERIAL_SET_APPLYTARGETALPHA_OFFSET UNITYSDK_OFFSET(0x146D6960)
#define CRIWARE_CRIMANAMOVIEMATERIAL_SET_LOOP_OFFSET UNITYSDK_OFFSET(0x146D6260)
#define CRIWARE_CRIMANAMOVIEMATERIAL_SET_MOVIEPATH_OFFSET UNITYSDK_OFFSET(0x146D6190)
#define CRIWARE_CRIMANAMOVIEMATERIAL_SET_UIRENDERMODE_OFFSET UNITYSDK_OFFSET(0x146D5DC0)
#define CRIWARE_CRIMANAMOVIEMATERIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x146D5CE0)

namespace CriWare
{
	inline static constexpr unsigned int CriManaMovieMaterial_TypeDefinitionIndex = 37171;

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

		::System::Void set_moviePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIAL_SET_MOVIEPATH_OFFSET))(this, a1);
		}

		::System::Boolean get_loop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIAL_GET_LOOP_OFFSET))(this);
		}

		::System::Void set_loop(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIAL_SET_LOOP_OFFSET))(this, a1);
		}

		::System::Boolean get_advancedAudio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIAL_GET_ADVANCEDAUDIO_OFFSET))(this);
		}

		::System::Void set_advancedAudio(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIAL_SET_ADVANCEDAUDIO_OFFSET))(this, a1);
		}

		::System::Boolean get_ambisonics()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIAL_GET_AMBISONICS_OFFSET))(this);
		}

		::System::Void set_ambisonics(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIAL_SET_AMBISONICS_OFFSET))(this, a1);
		}

		::System::Boolean get_additiveMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIAL_GET_ADDITIVEMODE_OFFSET))(this);
		}

		::System::Void set_additiveMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIAL_SET_ADDITIVEMODE_OFFSET))(this, a1);
		}

		::System::Boolean get_applyTargetAlpha()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIAL_GET_APPLYTARGETALPHA_OFFSET))(this);
		}

		::System::Void set_applyTargetAlpha(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIAL_SET_APPLYTARGETALPHA_OFFSET))(this, a1);
		}

		::System::Boolean get_uiRenderMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIAL_GET_UIRENDERMODE_OFFSET))(this);
		}

		::System::Void set_uiRenderMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIAL_SET_UIRENDERMODE_OFFSET))(this, a1);
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
