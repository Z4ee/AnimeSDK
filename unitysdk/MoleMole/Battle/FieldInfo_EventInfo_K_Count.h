#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_BATTLE_FIELDINFO_EVENTINFO_K_COUNT_EQUALS_OFFSET UNITYSDK_OFFSET(0x7D61D0)
#define MOLEMOLE_BATTLE_FIELDINFO_EVENTINFO_K_COUNT_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x7D61E0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int FieldInfo_EventInfo_K_Count_TypeDefinitionIndex = 70023;

	struct alignas(8) FieldInfo_EventInfo_K_Count
	{
		::System::String* kEvent; // 0x10
		::System::Int32 kCount; // 0x18
		::System::Single time; // 0x1C

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_FIELDINFO_EVENTINFO_K_COUNT_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_FIELDINFO_EVENTINFO_K_COUNT_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
		}
	};
}
