#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RestaurantEmployeeAbility.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_58EFA501E6726767_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C48A190)
#define CLASS_1_58EFA501E6726767_METHOD_1_5B99A71B607153CC_OFFSET UNITYSDK_OFFSET(0x1C48A1E0)
#define CLASS_1_58EFA501E6726767__CTOR_OFFSET UNITYSDK_OFFSET(0x1C48A2A0)

inline static constexpr unsigned int Class_1_58EFA501E6726767_TypeDefinitionIndex = 40494;

class Class_1_58EFA501E6726767 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* GLLOLLEDHAD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58EFA501E6726767__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58EFA501E6726767_CLEAR_OFFSET))(this);
	}

	::System::Boolean Method_1_5B99A71B607153CC(::RPG::GameCore::RestaurantEmployeeAbility a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RestaurantEmployeeAbility))((::PBYTE)hIl2Cpp + CLASS_1_58EFA501E6726767_METHOD_1_5B99A71B607153CC_OFFSET))(this, a1);
	}
};
