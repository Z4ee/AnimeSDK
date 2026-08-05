#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MonoSingletonExt_1.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_DEBUGMONOBEHAVIOUR_DRAW_OFFSET UNITYSDK_OFFSET(0x1E18FCB0)
#define FOUNDATION_DEBUGMONOBEHAVIOUR_GET__CURACTIONS_OFFSET UNITYSDK_OFFSET(0x1E18F980)
#define FOUNDATION_DEBUGMONOBEHAVIOUR_INIT_OFFSET UNITYSDK_OFFSET(0x1E18F9D0)
#define FOUNDATION_DEBUGMONOBEHAVIOUR_ONRENDEROBJECT_OFFSET UNITYSDK_OFFSET(0x1E18FAE0)
#define FOUNDATION_DEBUGMONOBEHAVIOUR_PUSHCMD_OFFSET UNITYSDK_OFFSET(0x1E18FA10)
#define FOUNDATION_DEBUGMONOBEHAVIOUR_SWITCHLIST_OFFSET UNITYSDK_OFFSET(0x1E18FB80)
#define FOUNDATION_DEBUGMONOBEHAVIOUR_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E18FB20)
#define FOUNDATION_DEBUGMONOBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E18FE50)
#define FOUNDATION_DEBUGMONOBEHAVIOUR___BASE_INIT_OFFSET UNITYSDK_OFFSET(0x1E18FF60)

namespace Foundation
{
	inline static constexpr unsigned int DebugMonoBehaviour_TypeDefinitionIndex = 8472;

	class DebugMonoBehaviour : public ::Foundation::MonoSingletonExt_1<::Foundation::DebugMonoBehaviour*>
	{
	public:
		::System::Boolean DepthRendering; // 0x18
		::System::Collections::Generic::List_1<::System::Action*>* _actions; // 0x20
		::System::Collections::Generic::List_1<::System::Action*>* _actions2; // 0x28
		::System::Boolean IsAction1; // 0x30
		::System::Int32 drawFrame; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGMONOBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Action*>* get__CurActions()
		{
			return ((::System::Collections::Generic::List_1<::System::Action*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGMONOBEHAVIOUR_GET__CURACTIONS_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGMONOBEHAVIOUR_INIT_OFFSET))(this);
		}

		::System::Void PushCmd(::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGMONOBEHAVIOUR_PUSHCMD_OFFSET))(this, action);
		}

		::System::Void OnRenderObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGMONOBEHAVIOUR_ONRENDEROBJECT_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGMONOBEHAVIOUR_UPDATE_OFFSET))(this);
		}

		::System::Void Draw()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGMONOBEHAVIOUR_DRAW_OFFSET))(this);
		}

		::System::Void SwitchList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGMONOBEHAVIOUR_SWITCHLIST_OFFSET))(this);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGMONOBEHAVIOUR___BASE_INIT_OFFSET))(this);
		}
	};
}
