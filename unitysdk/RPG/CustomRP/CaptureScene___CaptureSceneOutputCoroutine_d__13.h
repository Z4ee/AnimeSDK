#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { class CaptureScene; }
namespace RPG::CustomRP { class CaptureScene___c__DisplayClass13_0; }
namespace UnityEngine { class RenderTexture; }

#define RPG_CUSTOMRP_CAPTURESCENE___CAPTURESCENEOUTPUTCOROUTINE_D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x16A801C0)
#define RPG_CUSTOMRP_CAPTURESCENE___CAPTURESCENEOUTPUTCOROUTINE_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16A80440)
#define RPG_CUSTOMRP_CAPTURESCENE___CAPTURESCENEOUTPUTCOROUTINE_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16A804A0)
#define RPG_CUSTOMRP_CAPTURESCENE___CAPTURESCENEOUTPUTCOROUTINE_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x16A80450)
#define RPG_CUSTOMRP_CAPTURESCENE___CAPTURESCENEOUTPUTCOROUTINE_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16A801A0)
#define RPG_CUSTOMRP_CAPTURESCENE___CAPTURESCENEOUTPUTCOROUTINE_D__13__CTOR_OFFSET UNITYSDK_OFFSET(0x16A7E1F0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CaptureScene___CaptureSceneOutputCoroutine_d__13_TypeDefinitionIndex = 29223;

	class CaptureScene___CaptureSceneOutputCoroutine_d__13 : public ::System::Object
	{
	public:
		::UnityEngine::RenderTexture* _tex_5__2; // 0x10
		::System::Object* __2__current; // 0x18
		::RPG::CustomRP::CaptureScene* __4__this; // 0x20
		::RPG::CustomRP::CaptureScene___c__DisplayClass13_0* __8__1; // 0x28
		::System::Int32 __1__state; // 0x30
		::System::Int32 _i_5__3; // 0x34

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESCENE___CAPTURESCENEOUTPUTCOROUTINE_D__13__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESCENE___CAPTURESCENEOUTPUTCOROUTINE_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESCENE___CAPTURESCENEOUTPUTCOROUTINE_D__13_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESCENE___CAPTURESCENEOUTPUTCOROUTINE_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESCENE___CAPTURESCENEOUTPUTCOROUTINE_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESCENE___CAPTURESCENEOUTPUTCOROUTINE_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
