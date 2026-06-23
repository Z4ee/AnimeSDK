#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/StaticSceneObjectListLoopType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ScreenPlayData;
namespace MoleMole { class ScreenPlayer; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class LODGroup; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_STATICSCENEOBJECTWIDGET_AWAKE_OFFSET UNITYSDK_OFFSET(0x181777B0)
#define MOLEMOLE_STATICSCENEOBJECTWIDGET_METHOD_5_0DE3BA0A26CD13D8_OFFSET UNITYSDK_OFFSET(0x18178650)
#define MOLEMOLE_STATICSCENEOBJECTWIDGET_METHOD_5_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0x18177930)
#define MOLEMOLE_STATICSCENEOBJECTWIDGET_METHOD_5_E88C43AB30548154_OFFSET UNITYSDK_OFFSET(0x18178110)
#define MOLEMOLE_STATICSCENEOBJECTWIDGET_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18178000)
#define MOLEMOLE_STATICSCENEOBJECTWIDGET_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18177D80)
#define MOLEMOLE_STATICSCENEOBJECTWIDGET_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18177C20)
#define MOLEMOLE_STATICSCENEOBJECTWIDGET_ONLEAVESCENE_OFFSET UNITYSDK_OFFSET(0x18177F80)
#define MOLEMOLE_STATICSCENEOBJECTWIDGET_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x18177F00)
#define MOLEMOLE_STATICSCENEOBJECTWIDGET_START_OFFSET UNITYSDK_OFFSET(0x181778B0)
#define MOLEMOLE_STATICSCENEOBJECTWIDGET__CCTOR_OFFSET UNITYSDK_OFFSET(0x181780B0)
#define MOLEMOLE_STATICSCENEOBJECTWIDGET__CTOR_OFFSET UNITYSDK_OFFSET(0x18178060)

namespace MoleMole
{
	inline static constexpr unsigned int StaticSceneObjectWidget_TypeDefinitionIndex = 74009;

	class StaticSceneObjectWidget : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_9()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(StaticSceneObjectWidget_TypeDefinitionIndex)->GetStaticField(0x10340);
		}
		static ::UnityEngine::Vector3* StaticGet_Field_5_12()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(StaticSceneObjectWidget_TypeDefinitionIndex)->GetStaticField(0x10344);
		}
		::MoleMole::ScreenPlayer* Field_5_0; // 0x18
		::MoleMole::StaticSceneObjectListLoopType playMode; // 0x20
		::System::Collections::Generic::List_1<::ScreenPlayData*>* playList; // 0x28
		::System::Boolean muteSound; // 0x30
		::UnityEngine::LODGroup* Field_5_4; // 0x38
		::Il2CppArray<::UnityEngine::Material*>* Field_5_5; // 0x40
		::System::Boolean isDebug; // 0x48
		::System::Boolean overrideInitIntensity; // 0x49
		::System::Single initIntensity; // 0x4C
		::Foundation::Coroutine::CoroutineHandle Field_5_10; // 0x50
		::System::Boolean _forceUpdate; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICSCENEOBJECTWIDGET__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_STATICSCENEOBJECTWIDGET__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICSCENEOBJECTWIDGET_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICSCENEOBJECTWIDGET_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICSCENEOBJECTWIDGET_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICSCENEOBJECTWIDGET_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICSCENEOBJECTWIDGET_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnLeaveScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICSCENEOBJECTWIDGET_ONLEAVESCENE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICSCENEOBJECTWIDGET_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_5_5176DC743E478510()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICSCENEOBJECTWIDGET_METHOD_5_5176DC743E478510_OFFSET))(this);
		}

		::System::Boolean Method_5_E88C43AB30548154()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICSCENEOBJECTWIDGET_METHOD_5_E88C43AB30548154_OFFSET))(this);
		}

		::System::Void Method_5_0DE3BA0A26CD13D8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICSCENEOBJECTWIDGET_METHOD_5_0DE3BA0A26CD13D8_OFFSET))(this);
		}
	};
}
