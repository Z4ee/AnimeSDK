#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::NavMap { class Cartography3DEraFlip; }
namespace RPG::Client::NavMap { class ICartography3D; }
namespace System { class Action; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UIMAP3DCONTAINER_ERAFLIPPERPOSETRANSFORMPROVIDER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA708160)
#define RPG_CLIENT_UIMAP3DCONTAINER_ERAFLIPPERPOSETRANSFORMPROVIDER_GET_POSETRANSFORMS_OFFSET UNITYSDK_OFFSET(0xA7081F0)
#define RPG_CLIENT_UIMAP3DCONTAINER_ERAFLIPPERPOSETRANSFORMPROVIDER_GET_STATE_OFFSET UNITYSDK_OFFSET(0xA7080D0)
#define RPG_CLIENT_UIMAP3DCONTAINER_ERAFLIPPERPOSETRANSFORMPROVIDER_INIT_OFFSET UNITYSDK_OFFSET(0xA707930)
#define RPG_CLIENT_UIMAP3DCONTAINER_ERAFLIPPERPOSETRANSFORMPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0xA708260)
#define RPG_CLIENT_UIMAP3DCONTAINER_ERAFLIPPERPOSETRANSFORMPROVIDER__INITMODELPOSEINFO_OFFSET UNITYSDK_OFFSET(0xA707A50)
#define RPG_CLIENT_UIMAP3DCONTAINER_ERAFLIPPERPOSETRANSFORMPROVIDER__ONMAPERAFLIPSTATECHANGE_OFFSET UNITYSDK_OFFSET(0xA7080F0)
#define RPG_CLIENT_UIMAP3DCONTAINER_ERAFLIPPERPOSETRANSFORMPROVIDER__REFRESHMODEL_OFFSET UNITYSDK_OFFSET(0xA707FE0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIMap3DContainer_EraFlipperPoseTransformProvider_TypeDefinitionIndex = 56417;

	class UIMap3DContainer_EraFlipperPoseTransformProvider : public ::System::Object
	{
	public:
		::System::Action* _OnTransChanged; // 0x10
		::UnityEngine::Transform* _Model; // 0x18
		::Il2CppArray<::UnityEngine::Transform*>* _DayPoseTransforms; // 0x20
		::RPG::Client::NavMap::Cartography3DEraFlip* _Cartography; // 0x28
		::Il2CppArray<::UnityEngine::Transform*>* _NightPoseTransforms; // 0x30

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
