#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_AE1972D98541A9AF.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_4.h"
#include "unitysdk/System/Object.h"

class Class_3_00D9F8D189C6D68A_1;

#define CLASS_1_6D6D57236F24B8FC_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17A19A40)

inline static constexpr unsigned int Class_1_6D6D57236F24B8FC_1_TypeDefinitionIndex = 71292;

class Class_1_6D6D57236F24B8FC_1 : public ::System::Object
{
public:
	::Class_3_00D9F8D189C6D68A_1* Field_1_3; // 0x10
	::Class_3_00D9F8D189C6D68A_1* Field_1_2; // 0x18
	::System::Boolean Field_1_5; // 0x20
	::System::Boolean Field_1_4; // 0x21
	::Enum_3_F80BFD5B986D5503_4 Field_1_0; // 0x24
	::Enum_3_AE1972D98541A9AF Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D6D57236F24B8FC_1__CTOR_OFFSET))(this);
	}
};
