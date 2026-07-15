#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/System/Object.h"

class Class_3_07C3C4D2990C49EE;

#define CLASS_1_2116C04D3AB94F59__CTOR_OFFSET UNITYSDK_OFFSET(0x186449D0)

inline static constexpr unsigned int Class_1_2116C04D3AB94F59_TypeDefinitionIndex = 51636;

class Class_1_2116C04D3AB94F59 : public ::System::Object
{
public:
	::Class_3_07C3C4D2990C49EE* Field_1_0; // 0x10
	::Class_3_07C3C4D2990C49EE* Field_1_1; // 0x18
	::RPG::GameCore::RtBehaviorFlag Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2116C04D3AB94F59__CTOR_OFFSET))(this);
	}
};
