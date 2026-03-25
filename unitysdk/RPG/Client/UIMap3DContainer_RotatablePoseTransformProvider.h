#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::NavMap { class ICartography3D; }
namespace System { class Action; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UIMAP3DCONTAINER_ROTATABLEPOSETRANSFORMPROVIDER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA7087F0)
#define RPG_CLIENT_UIMAP3DCONTAINER_ROTATABLEPOSETRANSFORMPROVIDER_GET_POSETRANSFORMS_OFFSET UNITYSDK_OFFSET(0xA708830)
#define RPG_CLIENT_UIMAP3DCONTAINER_ROTATABLEPOSETRANSFORMPROVIDER_INIT_OFFSET UNITYSDK_OFFSET(0xA708270)
#define RPG_CLIENT_UIMAP3DCONTAINER_ROTATABLEPOSETRANSFORMPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0xA708840)
#define RPG_CLIENT_UIMAP3DCONTAINER_ROTATABLEPOSETRANSFORMPROVIDER__INITMODELPOSEINFO_OFFSET UNITYSDK_OFFSET(0xA7082E0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIMap3DContainer_RotatablePoseTransformProvider_TypeDefinitionIndex = 56416;

	class UIMap3DContainer_RotatablePoseTransformProvider : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Transform*>* _PoseTransforms; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAP3DCONTAINER_ROTATABLEPOSETRANSFORMPROVIDER__CTOR_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::Transform* modelTrans, ::System::Action* onTransChanged, ::RPG::Client::NavMap::ICartography3D* cartography)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Action*, ::RPG::Client::NavMap::ICartography3D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAP3DCONTAINER_ROTATABLEPOSETRANSFORMPROVIDER_INIT_OFFSET))(this, modelTrans, onTransChanged, cartography);
		}

		::System::Void _InitModelPoseInfo(::UnityEngine::Transform* modelTrans)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAP3DCONTAINER_ROTATABLEPOSETRANSFORMPROVIDER__INITMODELPOSEINFO_OFFSET))(this, modelTrans);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAP3DCONTAINER_ROTATABLEPOSETRANSFORMPROVIDER_DISPOSE_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Transform*>* get_PoseTransforms()
		{
			return ((::Il2CppArray<::UnityEngine::Transform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAP3DCONTAINER_ROTATABLEPOSETRANSFORMPROVIDER_GET_POSETRANSFORMS_OFFSET))(this);
		}
	};
}
