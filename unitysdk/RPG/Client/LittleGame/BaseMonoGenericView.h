#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/BaseMonoGenericView_AttachPointInfo.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_47EE63CB5C4DC8FC_5;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG::GameCore { class LittleGameAttachPointInfo; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_BASEMONOGENERICVIEW_GETATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x1C4C6AC0)
#define RPG_CLIENT_LITTLEGAME_BASEMONOGENERICVIEW_GETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1C4C5FE0)
#define RPG_CLIENT_LITTLEGAME_BASEMONOGENERICVIEW_GETUNITYOBJECT_OFFSET UNITYSDK_OFFSET(0x1C4C6030)
#define RPG_CLIENT_LITTLEGAME_BASEMONOGENERICVIEW_INITATTACHPOINTS_OFFSET UNITYSDK_OFFSET(0x1C4C62A0)
#define RPG_CLIENT_LITTLEGAME_BASEMONOGENERICVIEW_ISDYNAMICATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x1C4C6EF0)
#define RPG_CLIENT_LITTLEGAME_BASEMONOGENERICVIEW_REMOVEATTACHPOINTS_OFFSET UNITYSDK_OFFSET(0x1C4C6890)
#define RPG_CLIENT_LITTLEGAME_BASEMONOGENERICVIEW_SAFESETACTIVE_OFFSET UNITYSDK_OFFSET(0x1C4C6190)
#define RPG_CLIENT_LITTLEGAME_BASEMONOGENERICVIEW_SETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1C4C6080)
#define RPG_CLIENT_LITTLEGAME_BASEMONOGENERICVIEW__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4C7330)
#define RPG_CLIENT_LITTLEGAME_BASEMONOGENERICVIEW__CREATEDYNAMICATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x1C4C7120)
#define RPG_CLIENT_LITTLEGAME_BASEMONOGENERICVIEW__CREATESTATICATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x1C4C6FB0)
#define RPG_CLIENT_LITTLEGAME_BASEMONOGENERICVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4C5FD0)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int BaseMonoGenericView_TypeDefinitionIndex = 76031;

	class BaseMonoGenericView : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::RPG::GameCore::LittleGameAttachPointInfo** StaticGet_NoNameAttachPointConfig()
		{
			return (::RPG::GameCore::LittleGameAttachPointInfo**)Il2CppClass::FromTypeDefinitionIndex(BaseMonoGenericView_TypeDefinitionIndex)->GetStaticField(0x5F190);
		}
		// static const ::System::String* NoNameAttachPointName; // 0x0
		::RPG::PoolDictionary_2<::System::String*, ::RPG::Client::LittleGame::BaseMonoGenericView_AttachPointInfo>* _AttachPoints; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_BASEMONOGENERICVIEW__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_BASEMONOGENERICVIEW__CCTOR_OFFSET))();
		}

		::UnityEngine::Transform* GetTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_BASEMONOGENERICVIEW_GETTRANSFORM_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetUnityObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_BASEMONOGENERICVIEW_GETUNITYOBJECT_OFFSET))(this);
		}

		::System::Void SetTransform(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_BASEMONOGENERICVIEW_SETTRANSFORM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SafeSetActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_BASEMONOGENERICVIEW_SAFESETACTIVE_OFFSET))(this, a1);
		}

		::System::Void InitAttachPoints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_BASEMONOGENERICVIEW_INITATTACHPOINTS_OFFSET))(this);
		}

		::System::Void RemoveAttachPoints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_BASEMONOGENERICVIEW_REMOVEATTACHPOINTS_OFFSET))(this);
		}

		::UnityEngine::Transform* GetAttachPoint(::System::String* a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_BASEMONOGENERICVIEW_GETATTACHPOINT_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsDynamicAttachPoint(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_BASEMONOGENERICVIEW_ISDYNAMICATTACHPOINT_OFFSET))(this, a1);
		}

		::System::Void _CreateStaticAttachPoint(::RPG::Client::LittleGame::BaseMonoGenericView_AttachPointInfo& a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::BaseMonoGenericView_AttachPointInfo&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_BASEMONOGENERICVIEW__CREATESTATICATTACHPOINT_OFFSET))(this, a1);
		}

		::System::Void _CreateDynamicAttachPoint(::RPG::Client::LittleGame::BaseMonoGenericView_AttachPointInfo& a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::BaseMonoGenericView_AttachPointInfo&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_BASEMONOGENERICVIEW__CREATEDYNAMICATTACHPOINT_OFFSET))(this, a1);
		}
	};
}
