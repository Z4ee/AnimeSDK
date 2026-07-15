#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingFes/ChenLingFesToastItemControl.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTSCOREADDFLYCONTROL_GETPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1A4DF990)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTSCOREADDFLYCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4E3C70)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTSCOREADDFLYCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A4E3B80)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTSCOREADDFLYCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A4E3B00)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesToastScoreAddFlyControl_TypeDefinitionIndex = 76400;

	class ChenLingFesToastScoreAddFlyControl : public ::RPG::Client::ChenLingFes::ChenLingFesToastItemControl
	{
	public:
		// static const ::System::Single Duration; // 0x0
		::UnityEngine::Transform* _NodeEnd; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTSCOREADDFLYCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTSCOREADDFLYCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTSCOREADDFLYCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		static ::System::String* GetPrefabPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTSCOREADDFLYCONTROL_GETPREFABPATH_OFFSET))();
		}
	};
}
