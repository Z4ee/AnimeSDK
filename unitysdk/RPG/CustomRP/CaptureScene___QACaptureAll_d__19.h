#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { class CaptureScene; }
namespace System { class String; }

#define RPG_CUSTOMRP_CAPTURESCENE___QACAPTUREALL_D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1781EB90)
#define RPG_CUSTOMRP_CAPTURESCENE___QACAPTUREALL_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1781F530)
#define RPG_CUSTOMRP_CAPTURESCENE___QACAPTUREALL_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1781F590)
#define RPG_CUSTOMRP_CAPTURESCENE___QACAPTUREALL_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1781F540)
#define RPG_CUSTOMRP_CAPTURESCENE___QACAPTUREALL_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1781EB80)
#define RPG_CUSTOMRP_CAPTURESCENE___QACAPTUREALL_D__19__CTOR_OFFSET UNITYSDK_OFFSET(0x1781CAA0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CaptureScene___QACaptureAll_d__19_TypeDefinitionIndex = 36058;

	class CaptureScene___QACaptureAll_d__19 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::System::String* _name_5__3; // 0x18
		::System::String* _folder_5__2; // 0x20
		::RPG::CustomRP::CaptureScene* __4__this; // 0x28
		::System::Int32 __1__state; // 0x30

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESCENE___QACAPTUREALL_D__19__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESCENE___QACAPTUREALL_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESCENE___QACAPTUREALL_D__19_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESCENE___QACAPTUREALL_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESCENE___QACAPTUREALL_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESCENE___QACAPTUREALL_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
