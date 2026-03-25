#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_1_4524BB15C2CC3080__CTOR_OFFSET UNITYSDK_OFFSET(0x169F56E0)

inline static constexpr unsigned int Class_1_4524BB15C2CC3080_TypeDefinitionIndex = 32726;

class Class_1_4524BB15C2CC3080 : public ::System::Object
{
public:
	::RPG::PoolList_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* Field_1_1; // 0x10
	::System::Boolean Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4524BB15C2CC3080__CTOR_OFFSET))(this);
	}
};
