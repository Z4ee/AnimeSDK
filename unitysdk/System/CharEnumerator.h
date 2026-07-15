#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_CHARENUMERATOR_CLONE_OFFSET UNITYSDK_OFFSET(0x1AD349E0)
#define SYSTEM_CHARENUMERATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AD34B00)
#define SYSTEM_CHARENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1AD34BF0)
#define SYSTEM_CHARENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1AD34A80)
#define SYSTEM_CHARENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1AD34C80)
#define SYSTEM_CHARENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1AD34B20)
#define SYSTEM_CHARENUMERATOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AD34C90)
#define SYSTEM_CHARENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD349D0)

namespace System
{
	inline static constexpr unsigned int CharEnumerator_TypeDefinitionIndex = 210;

	class CharEnumerator : public ::System::Object
	{
	public:
		::System::String* str; // 0x10
		::System::Char currentElement; // 0x18
		::System::Int32 index; // 0x1C

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CHARENUMERATOR__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CHARENUMERATOR__CTOR_1_OFFSET))(this);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CHARENUMERATOR_CLONE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CHARENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CHARENUMERATOR_DISPOSE_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CHARENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Char get_Current()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CHARENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CHARENUMERATOR_RESET_OFFSET))(this);
		}
	};
}
