#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client::ChenLingFes { class ChenLingFesToastContainerControl; }
namespace RPG::Client::ChenLingFes { class ChenLingFesToastRequestViewModel; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTITEMCONTROL_GETHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B75D290)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTITEMCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1B75C1F0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTITEMCONTROL_ONDESPAWN_OFFSET UNITYSDK_OFFSET(0x1B75D140)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTITEMCONTROL_ONSPAWN_OFFSET UNITYSDK_OFFSET(0x1B75D0C0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTITEMCONTROL_REFRESHWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x1B759880)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTITEMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B75CA30)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTITEMCONTROL__GETHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B75D010)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTITEMCONTROL__RELEASETOPOOL_OFFSET UNITYSDK_OFFSET(0x1B75D3B0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTITEMCONTROL__SETAUTORELEASETOPOOL_OFFSET UNITYSDK_OFFSET(0x1B75C750)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTITEMCONTROL__UPDATEWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x1B75C2A0)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesToastItemControl_TypeDefinitionIndex = 80024;

	class ChenLingFesToastItemControl : public ::Sofa::BaseSofaControl
	{
	public:
		// static const ::System::Single MinPiledToastItemHeight; // 0x0
		::System::String* PrefabPath; // 0x38
		::RPG::Client::ChenLingFes::ChenLingFesToastContainerControl* ContainerControl; // 0x40
		::System::Single BaseLocalPositionY; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTITEMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void RefreshWorldPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTITEMCONTROL_REFRESHWORLDPOSITION_OFFSET))(this);
		}

		::System::Void OnSpawn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTITEMCONTROL_ONSPAWN_OFFSET))(this);
		}

		::System::Void OnDespawn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTITEMCONTROL_ONDESPAWN_OFFSET))(this);
		}

		::System::Single GetHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTITEMCONTROL_GETHEIGHT_OFFSET))(this);
		}

		::System::Single _GetHeight(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTITEMCONTROL__GETHEIGHT_OFFSET))(this, a1);
		}

		::System::Void _ReleaseToPool()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTITEMCONTROL__RELEASETOPOOL_OFFSET))(this);
		}

		::System::Void _UpdateWorldPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTITEMCONTROL__UPDATEWORLDPOSITION_OFFSET))(this);
		}

		::System::Void _SetAutoReleaseToPool()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTITEMCONTROL__SETAUTORELEASETOPOOL_OFFSET))(this);
		}

		::RPG::Client::ChenLingFes::ChenLingFesToastRequestViewModel* get__ViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesToastRequestViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTITEMCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}
	};
}
