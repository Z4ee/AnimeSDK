#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::NavMap { class Cartography3DEraFlip; }
namespace RPG::Client::NavMap { class ICartography3D; }
namespace System { class Action; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UIMAP3DCONTAINER_ERAFLIPPERPOSETRANSFORMPROVIDER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB40C8B0)
#define RPG_CLIENT_UIMAP3DCONTAINER_ERAFLIPPERPOSETRANSFORMPROVIDER_GET_POSETRANSFORMS_OFFSET UNITYSDK_OFFSET(0xB40C940)
#define RPG_CLIENT_UIMAP3DCONTAINER_ERAFLIPPERPOSETRANSFORMPROVIDER_GET_STATE_OFFSET UNITYSDK_OFFSET(0xB40C820)
#define RPG_CLIENT_UIMAP3DCONTAINER_ERAFLIPPERPOSETRANSFORMPROVIDER_INIT_OFFSET UNITYSDK_OFFSET(0xB40C080)
#define RPG_CLIENT_UIMAP3DCONTAINER_ERAFLIPPERPOSETRANSFORMPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0xB40B5A0)
#define RPG_CLIENT_UIMAP3DCONTAINER_ERAFLIPPERPOSETRANSFORMPROVIDER__INITMODELPOSEINFO_OFFSET UNITYSDK_OFFSET(0xB40C1A0)
#define RPG_CLIENT_UIMAP3DCONTAINER_ERAFLIPPERPOSETRANSFORMPROVIDER__ONMAPERAFLIPSTATECHANGE_OFFSET UNITYSDK_OFFSET(0xB40C840)
#define RPG_CLIENT_UIMAP3DCONTAINER_ERAFLIPPERPOSETRANSFORMPROVIDER__REFRESHMODEL_OFFSET UNITYSDK_OFFSET(0xB40C730)

namespace RPG::Client
{
	inline static constexpr unsigned int UIMap3DContainer_EraFlipperPoseTransformProvider_TypeDefinitionIndex = 63661;

	class UIMap3DContainer_EraFlipperPoseTransformProvider : public ::System::Object
	{
	public:
		::System::Action* _OnTransChanged; // 0x10
		::Il2CppArray<::UnityEngine::Transform*>* _DayPoseTransforms; // 0x18
		::RPG::Client::NavMap::Cartography3DEraFlip* _Cartography; // 0x20
		::Il2CppArray<::UnityEngine::Transform*>* _NightPoseTransforms; // 0x28
		::UnityEngine::Transform* _Model; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAP3DCONTAINER_ERAFLIPPERPOSETRANSFORMPROVIDER__CTOR_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::Transform* modelTrans, ::System::Action* onTransChanged, ::RPG::Client::NavMap::ICartography3D* cartography)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Action*, ::RPG::Client::NavMap::ICartography3D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAP3DCONTAINER_ERAFLIPPERPOSETRANSFORMPROVIDER_INIT_OFFSET))(this, modelTrans, onTransChanged, cartography);
		}

		::System::Void _InitModelPoseInfo(::UnityEngine::Transform* modelTrans)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAP3DCONTAINER_ERAFLIPPERPOSETRANSFORMPROVIDER__INITMODELPOSEINFO_OFFSET))(this, modelTrans);
		}

		::System::Void _RefreshModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAP3DCONTAINER_ERAFLIPPERPOSETRANSFORMPROVIDER__REFRESHMODEL_OFFSET))(this);
		}

		::System::Void _OnMapEraFlipStateChange(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAP3DCONTAINER_ERAFLIPPERPOSETRANSFORMPROVIDER__ONMAPERAFLIPSTATECHANGE_OFFSET))(this, param);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAP3DCONTAINER_ERAFLIPPERPOSETRANSFORMPROVIDER_DISPOSE_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Transform*>* get_PoseTransforms()
		{
			return ((::Il2CppArray<::UnityEngine::Transform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAP3DCONTAINER_ERAFLIPPERPOSETRANSFORMPROVIDER_GET_POSETRANSFORMS_OFFSET))(this);
		}

		::RPG::GameCore::EraStateType get_State()
		{
			return ((::RPG::GameCore::EraStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAP3DCONTAINER_ERAFLIPPERPOSETRANSFORMPROVIDER_GET_STATE_OFFSET))(this);
		}
	};
}
