#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class IEnumeratorLoader; }

#define FOUNDATION_IENUMERATORLOADER__LOADLOOPER_D__42_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1DF10340)
#define FOUNDATION_IENUMERATORLOADER__LOADLOOPER_D__42_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DF10670)
#define FOUNDATION_IENUMERATORLOADER__LOADLOOPER_D__42_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DF106D0)
#define FOUNDATION_IENUMERATORLOADER__LOADLOOPER_D__42_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1DF10680)
#define FOUNDATION_IENUMERATORLOADER__LOADLOOPER_D__42_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DF10330)
#define FOUNDATION_IENUMERATORLOADER__LOADLOOPER_D__42__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF10320)

namespace Foundation
{
	inline static constexpr unsigned int IEnumeratorLoader__LoadLooper_d__42_TypeDefinitionIndex = 8164;

	class IEnumeratorLoader__LoadLooper_d__42 : public ::System::Object
	{
	public:
		::Foundation::IEnumeratorLoader* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Int32 _index_5__2; // 0x24

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADER__LOADLOOPER_D__42__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADER__LOADLOOPER_D__42_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADER__LOADLOOPER_D__42_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADER__LOADLOOPER_D__42_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADER__LOADLOOPER_D__42_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADER__LOADLOOPER_D__42_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
