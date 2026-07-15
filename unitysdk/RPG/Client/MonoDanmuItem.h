#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DanmuType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_979;
class Class_1_849EE5CF9026AE9F;
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_MONODANMUITEM_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x10CC8770)
#define RPG_CLIENT_MONODANMUITEM_GETWORLDEDGE_OFFSET UNITYSDK_OFFSET(0x10CC8A30)
#define RPG_CLIENT_MONODANMUITEM_GETWORLDHEIGHT_OFFSET UNITYSDK_OFFSET(0x10CC7A70)
#define RPG_CLIENT_MONODANMUITEM_GET_ISENDED_OFFSET UNITYSDK_OFFSET(0x10CC79B0)
#define RPG_CLIENT_MONODANMUITEM_GET_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x10CC85A0)
#define RPG_CLIENT_MONODANMUITEM_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x10CC85B0)
#define RPG_CLIENT_MONODANMUITEM_HASLEFTRIGHTEDGE_OFFSET UNITYSDK_OFFSET(0x10CC7A10)
#define RPG_CLIENT_MONODANMUITEM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x10CC8820)
#define RPG_CLIENT_MONODANMUITEM_ONCREATE_OFFSET UNITYSDK_OFFSET(0x10CC8620)
#define RPG_CLIENT_MONODANMUITEM_SETSTARTED_OFFSET UNITYSDK_OFFSET(0x10CC7940)
#define RPG_CLIENT_MONODANMUITEM_SPAWNED_OFFSET UNITYSDK_OFFSET(0x10CC86D0)
#define RPG_CLIENT_MONODANMUITEM_UPDATE_OFFSET UNITYSDK_OFFSET(0x10CC85C0)
#define RPG_CLIENT_MONODANMUITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x10CC8AD0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoDanmuItem_TypeDefinitionIndex = 65874;

	class MonoDanmuItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_0_16E4307DCC419505_979* Field_5_0; // 0x18
		::UnityEngine::RectTransform* Field_5_1; // 0x20
		::RPG::GameCore::DanmuType Field_5_2; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUITEM__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsEnded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUITEM_GET_ISENDED_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_RectTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUITEM_GET_RECTTRANSFORM_OFFSET))(this);
		}

		::RPG::GameCore::DanmuType get_Type()
		{
			return ((::RPG::GameCore::DanmuType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUITEM_GET_TYPE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUITEM_UPDATE_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUITEM_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUITEM_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUITEM_DESPAWNED_OFFSET))(this);
		}

		::System::Void Initialize(::Class_1_849EE5CF9026AE9F* a1, ::Class_0_16E4307DCC419505_979* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_849EE5CF9026AE9F*, ::Class_0_16E4307DCC419505_979*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUITEM_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetStarted(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUITEM_SETSTARTED_OFFSET))(this, a1);
		}

		::System::Single GetWorldHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUITEM_GETWORLDHEIGHT_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetWorldEdge()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUITEM_GETWORLDEDGE_OFFSET))(this);
		}

		::System::Boolean HasLeftRightEdge()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUITEM_HASLEFTRIGHTEDGE_OFFSET))(this);
		}
	};
}
