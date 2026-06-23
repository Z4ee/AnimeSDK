#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIINLEVELLIGHTUPPOINTSITEMCONTROLLERBASE_DOREFRESHITEMSHOWSTATE_OFFSET UNITYSDK_OFFSET(0x18260180)
#define MOLEMOLE_UIINLEVELLIGHTUPPOINTSITEMCONTROLLERBASE_HANDLESHOWSTATEANIM_OFFSET UNITYSDK_OFFSET(0x18260250)
#define MOLEMOLE_UIINLEVELLIGHTUPPOINTSITEMCONTROLLERBASE_INIT_OFFSET UNITYSDK_OFFSET(0x1825FDD0)
#define MOLEMOLE_UIINLEVELLIGHTUPPOINTSITEMCONTROLLERBASE_PLAYMAXANIM_OFFSET UNITYSDK_OFFSET(0x1825FE20)
#define MOLEMOLE_UIINLEVELLIGHTUPPOINTSITEMCONTROLLERBASE_PLAYNOTMAXANIM_OFFSET UNITYSDK_OFFSET(0x1825FF90)
#define MOLEMOLE_UIINLEVELLIGHTUPPOINTSITEMCONTROLLERBASE_REFRESHITEMSHOWSTATE_OFFSET UNITYSDK_OFFSET(0x18260100)
#define MOLEMOLE_UIINLEVELLIGHTUPPOINTSITEMCONTROLLERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x18260AA0)
#define MOLEMOLE_UIINLEVELLIGHTUPPOINTSITEMCONTROLLERBASE__HANDLESHOWSTATEANIM_B__24_0_OFFSET UNITYSDK_OFFSET(0x18260B00)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelLightUpPointsItemControllerBase_TypeDefinitionIndex = 56550;

	class UIInLevelLightUpPointsItemControllerBase : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Int32 _index; // 0x2C0
		::System::Boolean _isLightUp; // 0x2C4
		::Foundation::Coroutine::CoroutineHandle _playLoopCoroutineHandle; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELLIGHTUPPOINTSITEMCONTROLLERBASE__CTOR_OFFSET))(this);
		}

		::System::Void Init(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELLIGHTUPPOINTSITEMCONTROLLERBASE_INIT_OFFSET))(this, index);
		}

		::System::Void PlayMaxAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELLIGHTUPPOINTSITEMCONTROLLERBASE_PLAYMAXANIM_OFFSET))(this);
		}

		::System::Void PlayNotMaxAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELLIGHTUPPOINTSITEMCONTROLLERBASE_PLAYNOTMAXANIM_OFFSET))(this);
		}

		::System::Void RefreshItemShowState(::System::Int32 curPoint, ::System::Boolean forceRefresh, ::System::Boolean ignoreAnimation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELLIGHTUPPOINTSITEMCONTROLLERBASE_REFRESHITEMSHOWSTATE_OFFSET))(this, curPoint, forceRefresh, ignoreAnimation);
		}

		::System::Void DoRefreshItemShowState(::System::Boolean isLightUp, ::System::Boolean forceRefresh, ::System::Boolean ignoreAnimation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELLIGHTUPPOINTSITEMCONTROLLERBASE_DOREFRESHITEMSHOWSTATE_OFFSET))(this, isLightUp, forceRefresh, ignoreAnimation);
		}

		::System::Void HandleShowStateAnim(::System::Boolean ignoreAnimation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELLIGHTUPPOINTSITEMCONTROLLERBASE_HANDLESHOWSTATEANIM_OFFSET))(this, ignoreAnimation);
		}

		::System::Void _HandleShowStateAnim_b__24_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELLIGHTUPPOINTSITEMCONTROLLERBASE__HANDLESHOWSTATEANIM_B__24_0_OFFSET))(this);
		}
	};
}
