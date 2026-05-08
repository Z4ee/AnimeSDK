#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MonoSingletonExt_1.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_DEBUGMONOBEHAVIOUR_DRAW_OFFSET UNITYSDK_OFFSET(0x1AA0B490)
#define FOUNDATION_DEBUGMONOBEHAVIOUR_GET__CURACTIONS_OFFSET UNITYSDK_OFFSET(0x1AA0B160)
#define FOUNDATION_DEBUGMONOBEHAVIOUR_INIT_OFFSET UNITYSDK_OFFSET(0x1AA0B1B0)
#define FOUNDATION_DEBUGMONOBEHAVIOUR_ONRENDEROBJECT_OFFSET UNITYSDK_OFFSET(0x1AA0B2C0)
#define FOUNDATION_DEBUGMONOBEHAVIOUR_PUSHCMD_OFFSET UNITYSDK_OFFSET(0x1AA0B1F0)
#define FOUNDATION_DEBUGMONOBEHAVIOUR_SWITCHLIST_OFFSET UNITYSDK_OFFSET(0x1AA0B360)
#define FOUNDATION_DEBUGMONOBEHAVIOUR_UPDATE_OFFSET UNITYSDK_OFFSET(0x1AA0B300)
#define FOUNDATION_DEBUGMONOBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA0B630)
#define FOUNDATION_DEBUGMONOBEHAVIOUR___BASE_INIT_OFFSET UNITYSDK_OFFSET(0x1AA0B750)

namespace Foundation
{
	inline static constexpr unsigned int DebugMonoBehaviour_TypeDefinitionIndex = 8301;

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
