#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_1_6F981D7862F815F1_CLEAR_OFFSET UNITYSDK_OFFSET(0x17F069E0)
#define CLASS_1_6F981D7862F815F1__CTOR_OFFSET UNITYSDK_OFFSET(0x17F06A60)

inline static constexpr unsigned int Class_1_6F981D7862F815F1_TypeDefinitionIndex = 38539;

class Class_1_6F981D7862F815F1 : public ::System::Object
{
public:
	::RPG::PoolList_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F981D7862F815F1__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F981D7862F815F1_CLEAR_OFFSET))(this);
	}
};
