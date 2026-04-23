#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/System/Object.h"

class Class_3_E21F6DE9B7FA4D05;

#define CLASS_1_2116C04D3AB94F59__CTOR_OFFSET UNITYSDK_OFFSET(0x96C3830)

inline static constexpr unsigned int Class_1_2116C04D3AB94F59_TypeDefinitionIndex = 49887;

class Class_1_2116C04D3AB94F59 : public ::System::Object
{
public:
	::Class_3_E21F6DE9B7FA4D05* Field_1_2; // 0x10
	::Class_3_E21F6DE9B7FA4D05* Field_1_1; // 0x18
	::RPG::GameCore::RtBehaviorFlag Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2116C04D3AB94F59__CTOR_OFFSET))(this);
	}
};
