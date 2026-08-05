#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RootMotion::FinalIK { class OffsetModifier; }

#define ROOTMOTION_FINALIK_OFFSETMODIFIER__INITIATE_D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1F922750)
#define ROOTMOTION_FINALIK_OFFSETMODIFIER__INITIATE_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F922940)
#define ROOTMOTION_FINALIK_OFFSETMODIFIER__INITIATE_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F9229A0)
#define ROOTMOTION_FINALIK_OFFSETMODIFIER__INITIATE_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1F922950)
#define ROOTMOTION_FINALIK_OFFSETMODIFIER__INITIATE_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F922740)
#define ROOTMOTION_FINALIK_OFFSETMODIFIER__INITIATE_D__8__CTOR_OFFSET UNITYSDK_OFFSET(0x1F922730)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int OffsetModifier__Initiate_d__8_TypeDefinitionIndex = 38879;

	class OffsetModifier__Initiate_d__8 : public ::System::Object
	{
	public:
		::RootMotion::FinalIK::OffsetModifier* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_OFFSETMODIFIER__INITIATE_D__8__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_OFFSETMODIFIER__INITIATE_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_OFFSETMODIFIER__INITIATE_D__8_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_OFFSETMODIFIER__INITIATE_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_OFFSETMODIFIER__INITIATE_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_OFFSETMODIFIER__INITIATE_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
