#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/FlexBuffers/FlxVector.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FLEXBUFFERS_FLXMAP__GETENUMERATOR_D__23_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E9DE610)
#define FLEXBUFFERS_FLXMAP__GETENUMERATOR_D__23_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_FLEXBUFFERS_FLXVALUE___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E9DE6F0)
#define FLEXBUFFERS_FLXMAP__GETENUMERATOR_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E9DE760)
#define FLEXBUFFERS_FLXMAP__GETENUMERATOR_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1E9DE710)
#define FLEXBUFFERS_FLXMAP__GETENUMERATOR_D__23_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E9DE600)
#define FLEXBUFFERS_FLXMAP__GETENUMERATOR_D__23__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9DE530)

namespace FlexBuffers
{
	inline static constexpr unsigned int FlxMap__GetEnumerator_d__23_TypeDefinitionIndex = 6759;

	class FlxMap__GetEnumerator_d__23 : public ::System::Object
	{
	public:
		::FlexBuffers::FlxVector _values_5__3; // 0x10
		::FlexBuffers::FlxVector _keys_5__2; // 0x28
		::FlexBuffers::FlxMap __4__this; // 0x40
		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::FlexBuffers::FlxValue> __2__current; // 0x58
		::System::Int32 _i_5__4; // 0x70
		::System::Int32 __1__state; // 0x74

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXMAP__GETENUMERATOR_D__23__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXMAP__GETENUMERATOR_D__23_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXMAP__GETENUMERATOR_D__23_MOVENEXT_OFFSET))(this);
		}

		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::FlexBuffers::FlxValue> System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_FlexBuffers_FlxValue___get_Current()
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::System::String*, ::FlexBuffers::FlxValue>(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXMAP__GETENUMERATOR_D__23_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_FLEXBUFFERS_FLXVALUE___GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXMAP__GETENUMERATOR_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXMAP__GETENUMERATOR_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
