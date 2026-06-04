#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_C169B091FAC7BBA6__CTOR_OFFSET UNITYSDK_OFFSET(0x18BF5F10)

inline static constexpr unsigned int Class_1_C169B091FAC7BBA6_TypeDefinitionIndex = 40254;

class Class_1_C169B091FAC7BBA6 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::FixPoint>* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C169B091FAC7BBA6__CTOR_OFFSET))(this);
	}
};
