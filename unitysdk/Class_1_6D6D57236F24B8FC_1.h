#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_AE1972D98541A9AF.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503.h"
#include "unitysdk/System/Object.h"

class Class_3_00D9F8D189C6D68A_5;

#define CLASS_1_6D6D57236F24B8FC_1__CTOR_OFFSET UNITYSDK_OFFSET(0x14A4D1A0)

inline static constexpr unsigned int Class_1_6D6D57236F24B8FC_1_TypeDefinitionIndex = 86253;

class Class_1_6D6D57236F24B8FC_1 : public ::System::Object
{
public:
	::Class_3_00D9F8D189C6D68A_5* Field_1_6; // 0x10
	::Class_3_00D9F8D189C6D68A_5* Field_1_7; // 0x18
	::Enum_3_F80BFD5B986D5503 Field_1_1; // 0x20
	::Enum_3_AE1972D98541A9AF Field_1_0; // 0x24
	::System::Boolean Field_1_5; // 0x28
	::System::Boolean Field_1_4; // 0x29

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D6D57236F24B8FC_1__CTOR_OFFSET))(this);
	}
};
