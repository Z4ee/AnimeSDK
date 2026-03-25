#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RestaurantEmployeeAbility.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D64447519A0EED02_CLEAR_OFFSET UNITYSDK_OFFSET(0x16A3D790)
#define CLASS_1_D64447519A0EED02_METHOD_1_5852C9EF58747E31_OFFSET UNITYSDK_OFFSET(0x16A3D7E0)
#define CLASS_1_D64447519A0EED02__CTOR_OFFSET UNITYSDK_OFFSET(0x16A3D840)

inline static constexpr unsigned int Class_1_D64447519A0EED02_TypeDefinitionIndex = 32351;

class Class_1_D64447519A0EED02 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D64447519A0EED02__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D64447519A0EED02_CLEAR_OFFSET))(this);
	}

	::System::Boolean Method_1_5852C9EF58747E31(::RPG::GameCore::RestaurantEmployeeAbility a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RestaurantEmployeeAbility))((::PBYTE)hIl2Cpp + CLASS_1_D64447519A0EED02_METHOD_1_5852C9EF58747E31_OFFSET))(this, a1);
	}
};
