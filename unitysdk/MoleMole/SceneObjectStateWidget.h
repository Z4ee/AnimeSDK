#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_08AF81084630A122.h"
#include "unitysdk/Enum_3_3C0598AC6CD3FA1A.h"
#include "unitysdk/Enum_3_8AEDFD848EEC981C_1.h"
#include "unitysdk/Enum_3_F8B35859E9B748E7.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/NPCCrowd/Lod/ELODLevel.h"
#include "unitysdk/SceneObjectType.h"
#include "unitysdk/Struct_2_5B421F8FFABD4CA3_2.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_5822C5AB86D91021;
class Class_1_BCCF9BCA86B17EFC;
class Class_1_D0A2F53B2806C61B;
class Class_2_99753BCBD4BECE1D;
class ScreenPlayData;
namespace MoleMole { class ScreenPlayer; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class LODGroup; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_AWAKE_OFFSET UNITYSDK_OFFSET(0x1688C000)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_CHECKSKIPSTATE_OFFSET UNITYSDK_OFFSET(0x1688DF90)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_CLEAR_OFFSET UNITYSDK_OFFSET(0x1688C9D0)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_GETMYSTATE_OFFSET UNITYSDK_OFFSET(0x1688CE80)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_GETNAVMESHMARKTYPE_OFFSET UNITYSDK_OFFSET(0x1688F100)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_GETOBJECTTAG_OFFSET UNITYSDK_OFFSET(0x1688EC30)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_GETOBJECT_OFFSET UNITYSDK_OFFSET(0x1688ED30)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_GETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1688F150)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x1688BFD0)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_GET_PLAYERDEBUGER_OFFSET UNITYSDK_OFFSET(0x1688BFF0)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_GET_SCREENPLAYER_OFFSET UNITYSDK_OFFSET(0x1688BFE0)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_INITSTATE_OFFSET UNITYSDK_OFFSET(0x1688C850)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_ISAIMOVEAVATAR_OFFSET UNITYSDK_OFFSET(0x1688DFE0)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_ISTRIGGERMAINAVATAR_OFFSET UNITYSDK_OFFSET(0x1688E1A0)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_METHOD_5_08B2E81B8AFF8721_OFFSET UNITYSDK_OFFSET(0x1688DA10)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_METHOD_5_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0x1688CD30)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_METHOD_5_4AE12A74BA72900C_OFFSET UNITYSDK_OFFSET(0x1688F6A0)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_METHOD_5_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x1688F6E0)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1688C580)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_METHOD_5_B877181B6123B7F6_OFFSET UNITYSDK_OFFSET(0x1688DA70)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_METHOD_5_BE3D9E3E7CF500DE_OFFSET UNITYSDK_OFFSET(0x1688F4D0)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_METHOD_5_D574BC288810C776_OFFSET UNITYSDK_OFFSET(0x1688F1F0)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_METHOD_5_D81F2F1683EA3F25_OFFSET UNITYSDK_OFFSET(0x1688F590)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_METHOD_5_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x1688C1D0)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_METHOD_5_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x1688EA10)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_ONBECAMEINVISIBLE_OFFSET UNITYSDK_OFFSET(0x1688E8A0)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_ONBECAMEVISIBLE_OFFSET UNITYSDK_OFFSET(0x1688E7F0)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1688E7A0)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1688D550)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1688D400)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_ONLEAVESCENE_OFFSET UNITYSDK_OFFSET(0x1688E3B0)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1688D6A0)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_REGISTERWIDGET_OFFSET UNITYSDK_OFFSET(0x1688C2F0)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_RESETACTIVE_OFFSET UNITYSDK_OFFSET(0x1688F000)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_RESETINITSTATE_OFFSET UNITYSDK_OFFSET(0x1688E910)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_RESETPOSITION_OFFSET UNITYSDK_OFFSET(0x1688E960)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_RUNINCG_OFFSET UNITYSDK_OFFSET(0x1688CA30)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_SETACCESSORYLODLEVEL_OFFSET UNITYSDK_OFFSET(0x1688F060)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x1688ED80)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_SETDYNAMICWIDGET_OFFSET UNITYSDK_OFFSET(0x1688C6A0)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_SETMAINCITYID_OFFSET UNITYSDK_OFFSET(0x1688C920)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_STARTWIDGETLOGIC_OFFSET UNITYSDK_OFFSET(0x1688C650)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_START_OFFSET UNITYSDK_OFFSET(0x1688C530)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_STOPWITHTIMELINE_OFFSET UNITYSDK_OFFSET(0x1688CDF0)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_SWITCHSTATE_1_OFFSET UNITYSDK_OFFSET(0x1688D7E0)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_SWITCHSTATE_OFFSET UNITYSDK_OFFSET(0x1688D6F0)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_UPDATEWITHTIMELINE_OFFSET UNITYSDK_OFFSET(0x1688CCD0)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1688F1A0)

namespace MoleMole
{
	inline static constexpr unsigned int SceneObjectStateWidget_TypeDefinitionIndex = 52737;

	class SceneObjectStateWidget : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Enum_3_08AF81084630A122 CreateSrc; // 0x18
		::Enum_3_3C0598AC6CD3FA1A CreateType; // 0x1C
		::System::Int32 ID; // 0x20
		::SceneObjectType type; // 0x24
		::System::Int32 childID; // 0x28
		::UnityEngine::Vector2 pos; // 0x2C
		::Enum_3_F8B35859E9B748E7 trafficObjectType; // 0x34
		::Class_1_5822C5AB86D91021* Field_5_4; // 0x38
		::Class_1_BCCF9BCA86B17EFC* Field_5_11; // 0x40
		::MoleMole::ScreenPlayer* Field_5_10; // 0x48
		::Foundation::Coroutine::CoroutineHandle Field_5_9; // 0x50
		::System::Boolean Field_5_8; // 0x54
		::Class_1_D0A2F53B2806C61B* Field_5_15; // 0x58
		::System::Int32 currentStateID; // 0x60
		::System::Boolean IsInTrigger; // 0x64
		::System::String* textureSheetKey; // 0x68
		::System::Boolean IsInit; // 0x70
		::System::Action_1<::UnityEngine::Collider*>* OnControllerAvatarTriggerEnter; // 0x78
		::System::Action_1<::UnityEngine::Collider*>* OnControllerAvatarTriggerExit; // 0x80
		::UnityEngine::LODGroup* Field_5_16; // 0x88
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_5_23; // 0x90
		::UnityEngine::Vector3 Field_5_22; // 0x98
		::UnityEngine::Quaternion Field_5_21; // 0xA4
		::UnityEngine::Renderer* Field_5_20; // 0xB8
		::UnityEngine::Transform* Field_5_27; // 0xC0
		::System::Boolean Field_5_26; // 0xC8
		::System::Boolean Field_5_25; // 0xC9
		::NPCCrowd::Lod::ELODLevel Field_5_24; // 0xCC
		::System::String* Field_5_31; // 0xD0
		::System::Boolean Field_5_30; // 0xD8
		::Enum_3_8AEDFD848EEC981C_1 NavmeshType; // 0xDC
		::System::Boolean DefaultActiveState; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET__CTOR_OFFSET))(this);
		}

		::Class_1_BCCF9BCA86B17EFC* get_CurrentState()
		{
			return ((::Class_1_BCCF9BCA86B17EFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_GET_CURRENTSTATE_OFFSET))(this);
		}

		::MoleMole::ScreenPlayer* get_ScreenPlayer()
		{
			return ((::MoleMole::ScreenPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_GET_SCREENPLAYER_OFFSET))(this);
		}

		::MoleMole::ScreenPlayer* get_playerDebuger()
		{
			return ((::MoleMole::ScreenPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_GET_PLAYERDEBUGER_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_START_OFFSET))(this);
		}

		::System::Void RegisterWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_REGISTERWIDGET_OFFSET))(this);
		}

		::System::Void SetDynamicWidget(::SceneObjectType a1, ::System::Int32 a2, ::Enum_3_3C0598AC6CD3FA1A a3)
		{
			return ((::System::Void(*)(::PVOID, ::SceneObjectType, ::System::Int32, ::Enum_3_3C0598AC6CD3FA1A))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_SETDYNAMICWIDGET_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartWidgetLogic()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_STARTWIDGETLOGIC_OFFSET))(this);
		}

		::System::Void SetMainCityID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_SETMAINCITYID_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_CLEAR_OFFSET))(this);
		}

		::System::Void RunInCG(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_RUNINCG_OFFSET))(this, a1);
		}

		::System::Void UpdateWithTimeLine(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_UPDATEWITHTIMELINE_OFFSET))(this, a1);
		}

		::System::Void StopWithTimeLine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_STOPWITHTIMELINE_OFFSET))(this);
		}

		::System::Void InitState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_INITSTATE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_ONUPDATE_OFFSET))(this);
		}

		::System::Void SwitchState(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_SWITCHSTATE_OFFSET))(this, a1);
		}

		::System::Boolean CheckSkipState(::NPCCrowd::Lod::ELODLevel a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Lod::ELODLevel))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_CHECKSKIPSTATE_OFFSET))(this, a1);
		}

		::System::Void SwitchState_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_SWITCHSTATE_1_OFFSET))(this);
		}

		static ::System::Boolean IsAIMoveAvatar(::UnityEngine::Collider* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_ISAIMOVEAVATAR_OFFSET))(a1);
		}

		static ::System::Boolean IsTriggerMainAvatar(::UnityEngine::Collider* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_ISTRIGGERMAINAVATAR_OFFSET))(a1);
		}

		::System::Void GetMyState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_GETMYSTATE_OFFSET))(this);
		}

		::System::Void OnLeaveScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_ONLEAVESCENE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnBecameVisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_ONBECAMEVISIBLE_OFFSET))(this);
		}

		::System::Void OnBecameInvisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_ONBECAMEINVISIBLE_OFFSET))(this);
		}

		::System::Void ResetInitState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_RESETINITSTATE_OFFSET))(this);
		}

		::System::Void ResetPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_RESETPOSITION_OFFSET))(this);
		}

		::MoleMole::GameplayTag GetObjectTag()
		{
			return ((::MoleMole::GameplayTag(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_GETOBJECTTAG_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_GETOBJECT_OFFSET))(this);
		}

		::System::Void SetActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_SETACTIVE_OFFSET))(this, a1);
		}

		::System::Void ResetActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_RESETACTIVE_OFFSET))(this);
		}

		::System::Void SetAccessoryLodLevel(::NPCCrowd::Lod::ELODLevel a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::ELODLevel))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_SETACCESSORYLODLEVEL_OFFSET))(this, a1);
		}

		::Enum_3_8AEDFD848EEC981C_1 GetNavmeshMarkType()
		{
			return ((::Enum_3_8AEDFD848EEC981C_1(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_GETNAVMESHMARKTYPE_OFFSET))(this);
		}

		::UnityEngine::Transform* GetTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_GETTRANSFORM_OFFSET))(this);
		}

		::System::Void Method_5_08B2E81B8AFF8721(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_METHOD_5_08B2E81B8AFF8721_OFFSET))(this, a1);
		}

		::System::Void Method_5_39590AB2089F9F4D(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_METHOD_5_39590AB2089F9F4D_OFFSET))(this, a1);
		}

		::System::Void Method_5_B877181B6123B7F6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_METHOD_5_B877181B6123B7F6_OFFSET))(this);
		}

		::System::Void Method_5_BE3D9E3E7CF500DE(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_METHOD_5_BE3D9E3E7CF500DE_OFFSET))(this, a1);
		}

		::System::Void Method_5_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_METHOD_5_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_5_D81F2F1683EA3F25(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_METHOD_5_D81F2F1683EA3F25_OFFSET))(this, a1);
		}

		::System::Void Method_5_D574BC288810C776(::Class_2_99753BCBD4BECE1D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_99753BCBD4BECE1D*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_METHOD_5_D574BC288810C776_OFFSET))(this, a1);
		}

		::ScreenPlayData* Method_5_4AE12A74BA72900C()
		{
			return ((::ScreenPlayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_METHOD_5_4AE12A74BA72900C_OFFSET))(this);
		}

		::System::Void Method_5_8CE0803574BB66D7(::Struct_2_5B421F8FFABD4CA3_2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_5B421F8FFABD4CA3_2))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_METHOD_5_8CE0803574BB66D7_OFFSET))(this, a1);
		}

		::System::Void Method_5_E7EF6BC52B28648C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_METHOD_5_E7EF6BC52B28648C_OFFSET))(this);
		}

		::System::Void Method_5_EDFD49C942C75D6C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_METHOD_5_EDFD49C942C75D6C_OFFSET))(this);
		}
	};
}
