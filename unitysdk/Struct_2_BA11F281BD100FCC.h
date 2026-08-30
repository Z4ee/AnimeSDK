#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierEventFilterMask.h"
#include "unitysdk/System/ValueType.h"

class Class_1_5469D397DAE62876;
namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Predicate_1; }

#define STRUCT_2_BA11F281BD100FCC_METHOD_2_A91C551AF9039A82_OFFSET UNITYSDK_OFFSET(0x18476790)

inline static constexpr unsigned int Struct_2_BA11F281BD100FCC_TypeDefinitionIndex = 56402;

struct alignas(8) Struct_2_BA11F281BD100FCC
{
	::Class_1_5469D397DAE62876* MHJKGHNHPCP; // 0x10
	::RPG::GameCore::GameEntity* CFDHPDOFCJA; // 0x18
	::RPG::GameCore::GameEntity* LIIFPHHNPPP; // 0x20
	::RPG::GameCore::ModifierEventFilterMask ICCHKJGAIPA; // 0x28
	::System::Predicate_1<::RPG::GameCore::GameEntity*>* LINOGBHPPAF; // 0x30
	::RPG::GameCore::GameEntity* OEMEJEBGKBP; // 0x38
	::System::Boolean KJGFPHHNLEI; // 0x40
	::System::Boolean GFAKIBCPNPL; // 0x41
	::System::Boolean OKAFNOJAPBJ; // 0x42

	static ::Struct_2_BA11F281BD100FCC Method_2_A91C551AF9039A82(::Class_1_5469D397DAE62876* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::ModifierEventFilterMask a4, ::System::Boolean a5, ::System::Predicate_1<::RPG::GameCore::GameEntity*>* a6)
	{
		return ((::Struct_2_BA11F281BD100FCC(*)(::Class_1_5469D397DAE62876*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::ModifierEventFilterMask, ::System::Boolean, ::System::Predicate_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + STRUCT_2_BA11F281BD100FCC_METHOD_2_A91C551AF9039A82_OFFSET))(a1, a2, a3, a4, a5, a6);
	}
};
