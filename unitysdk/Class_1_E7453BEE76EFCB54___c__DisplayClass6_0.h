#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::Client { class MapEntityDef; }

#define CLASS_1_E7453BEE76EFCB54___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16160AB0)
#define CLASS_1_E7453BEE76EFCB54___C__DISPLAYCLASS6_0__TESTRECYCLE_B__0_OFFSET UNITYSDK_OFFSET(0x16160B50)

inline static constexpr unsigned int Class_1_E7453BEE76EFCB54___c__DisplayClass6_0_TypeDefinitionIndex = 60988;

class Class_1_E7453BEE76EFCB54___c__DisplayClass6_0 : public ::System::Object
{
public:
	::RPG::PoolList_1<::RPG::Client::MapEntityDef*>* recycledEntities; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7453BEE76EFCB54___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _TestRecycle_b__0(::RPG::Client::MapEntityDef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + CLASS_1_E7453BEE76EFCB54___C__DISPLAYCLASS6_0__TESTRECYCLE_B__0_OFFSET))(this, a1);
	}
};
