#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_01C9FF20517F876B.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_195;

#define CLASS_1_3E87D0E270DB206F_1__CTOR_OFFSET UNITYSDK_OFFSET(0x125D2560)

inline static constexpr unsigned int Class_1_3E87D0E270DB206F_1_TypeDefinitionIndex = 42275;

class Class_1_3E87D0E270DB206F_1 : public ::System::Object
{
public:
	::Class_2_208CC9941471731A_195* Field_1_0; // 0x10
	::Struct_2_01C9FF20517F876B Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E87D0E270DB206F_1__CTOR_OFFSET))(this);
	}
};
