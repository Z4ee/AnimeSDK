#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class SceneSoundEmitterSpaceShapeParam; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_SCENESOUNDOBJDATAITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0x13F20FA0)
#define MOLEMOLE_SCENESOUNDOBJDATAITEM_GET_SOUNDACTIONSOURCEHINT_OFFSET UNITYSDK_OFFSET(0x13F20F40)
#define MOLEMOLE_SCENESOUNDOBJDATAITEM_GET_SOUNDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x13F20F30)
#define MOLEMOLE_SCENESOUNDOBJDATAITEM_INIT_OFFSET UNITYSDK_OFFSET(0x13F21030)
#define MOLEMOLE_SCENESOUNDOBJDATAITEM_METHOD_5_19844080C13BA28F_OFFSET UNITYSDK_OFFSET(0x13F21450)
#define MOLEMOLE_SCENESOUNDOBJDATAITEM_METHOD_5_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x13F21750)
#define MOLEMOLE_SCENESOUNDOBJDATAITEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x13F21070)
#define MOLEMOLE_SCENESOUNDOBJDATAITEM_ONITEMACTIVECHANGED_OFFSET UNITYSDK_OFFSET(0x13F210E0)
#define MOLEMOLE_SCENESOUNDOBJDATAITEM_ONSCENELEAVE_OFFSET UNITYSDK_OFFSET(0x13F21340)
#define MOLEMOLE_SCENESOUNDOBJDATAITEM_ONSCENETAGCHANGED_OFFSET UNITYSDK_OFFSET(0x13F21140)
#define MOLEMOLE_SCENESOUNDOBJDATAITEM_RUNTIMERESET_OFFSET UNITYSDK_OFFSET(0x13F21970)
#define MOLEMOLE_SCENESOUNDOBJDATAITEM_RUNTIMETOGGLEACTIVE_OFFSET UNITYSDK_OFFSET(0x13F219D0)
#define MOLEMOLE_SCENESOUNDOBJDATAITEM_SETDEACTIVEBYBINDINGOBJECT_OFFSET UNITYSDK_OFFSET(0x13F213B0)
#define MOLEMOLE_SCENESOUNDOBJDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x13F21A50)

namespace MoleMole
{
	inline static constexpr unsigned int SceneSoundObjDataItem_TypeDefinitionIndex = 72131;

	class SceneSoundObjDataItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* Field_5_0; // 0x18
		::System::Boolean isTagActive; // 0x20
		::System::Boolean deactiveByBindingObject; // 0x21
		::System::String* eventName; // 0x28
		::System::Boolean is2D; // 0x30
		::System::Boolean isBox; // 0x31
		::System::Single radius; // 0x34
		::UnityEngine::Vector3 centerOffset; // 0x38
		::UnityEngine::Vector3 boxExtend; // 0x44
		::MoleMole::SceneSoundEmitterSpaceShapeParam* emitterSpaceShapeParam; // 0x50
		::System::Collections::Generic::List_1<::System::String*>* activeWhenSoundSceneTags; // 0x58
		::System::String* sceneObjectPath; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM__CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_soundGameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_GET_SOUNDGAMEOBJECT_OFFSET))(this);
		}

		::System::String* get_soundActionSourceHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_GET_SOUNDACTIONSOURCEHINT_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnSceneTagChanged(::System::Collections::Generic::HashSet_1<::System::String*>* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_ONSCENETAGCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void OnSceneLeave()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_ONSCENELEAVE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_INIT_OFFSET))(this);
		}

		::System::Void SetDeactiveByBindingObject(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_SETDEACTIVEBYBINDINGOBJECT_OFFSET))(this, a1);
		}

		::System::Void OnItemActiveChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_ONITEMACTIVECHANGED_OFFSET))(this);
		}

		::System::Void RuntimeReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_RUNTIMERESET_OFFSET))(this);
		}

		::System::Void RuntimeToggleActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_RUNTIMETOGGLEACTIVE_OFFSET))(this);
		}

		::System::Void Method_5_85377D41FEE05B66()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_METHOD_5_85377D41FEE05B66_OFFSET))(this);
		}

		::System::Void Method_5_19844080C13BA28F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_METHOD_5_19844080C13BA28F_OFFSET))(this);
		}
	};
}
