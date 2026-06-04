#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonsterHUDVisibleType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EC363059C500846B__CTOR_OFFSET UNITYSDK_OFFSET(0x13A5D660)

inline static constexpr unsigned int Class_1_EC363059C500846B_TypeDefinitionIndex = 51878;

class Class_1_EC363059C500846B : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_0; // 0x10
	::RPG::GameCore::MonsterHUDVisibleType Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC363059C500846B__CTOR_OFFSET))(this);
	}
};
