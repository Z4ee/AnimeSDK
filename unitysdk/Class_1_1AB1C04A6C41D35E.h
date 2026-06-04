#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_1AB1C04A6C41D35E__CTOR_OFFSET UNITYSDK_OFFSET(0x18D77CC0)

inline static constexpr unsigned int Class_1_1AB1C04A6C41D35E_TypeDefinitionIndex = 40315;

class Class_1_1AB1C04A6C41D35E : public ::System::Object
{
public:
	::Il2CppArray<::System::Int32>* Field_1_0; // 0x10
	::RPG::GameCore::FixPoint Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AB1C04A6C41D35E__CTOR_OFFSET))(this);
	}
};
