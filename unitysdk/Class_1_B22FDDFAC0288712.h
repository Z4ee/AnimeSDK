#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_B22FDDFAC0288712__CTOR_OFFSET UNITYSDK_OFFSET(0x18BD8140)

inline static constexpr unsigned int Class_1_B22FDDFAC0288712_TypeDefinitionIndex = 53137;

class Class_1_B22FDDFAC0288712 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::FixPoint>* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B22FDDFAC0288712__CTOR_OFFSET))(this);
	}
};
