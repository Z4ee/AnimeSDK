#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonsterSpecialIdleEntry; }

#define MOLEMOLE_MONSTERSPECIALIDLESERIALIZEDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1737E320)

namespace MoleMole
{
	inline static constexpr unsigned int MonsterSpecialIdleSerializedData_TypeDefinitionIndex = 77941;

	class MonsterSpecialIdleSerializedData : public ::System::Object
	{
	public:
		::System::Int32 MonsterID; // 0x10
		::MoleMole::MonsterSpecialIdleEntry* Entry; // 0x18

		::System::Void _ctor(::System::Int32 a1, ::MoleMole::MonsterSpecialIdleEntry* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::MonsterSpecialIdleEntry*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERSPECIALIDLESERIALIZEDDATA__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
