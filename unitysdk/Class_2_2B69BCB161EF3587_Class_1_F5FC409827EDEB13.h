#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_032E3093F309FC91.h"
#include "unitysdk/Struct_2_C8629618711DF8B3.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_482;
class Class_2_2B69BCB161EF3587;
template <typename T> class Class_2_F16D73323D71766B;

#define CLASS_2_2B69BCB161EF3587_CLASS_1_F5FC409827EDEB13_METHOD_1_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x14139E50)
#define CLASS_2_2B69BCB161EF3587_CLASS_1_F5FC409827EDEB13__CTOR_OFFSET UNITYSDK_OFFSET(0x14139E40)

inline static constexpr unsigned int Class_2_2B69BCB161EF3587_Class_1_F5FC409827EDEB13_TypeDefinitionIndex = 75480;

class Class_2_2B69BCB161EF3587_Class_1_F5FC409827EDEB13 : public ::System::Object
{
public:
	::Class_2_2B69BCB161EF3587* Field_1_7; // 0x10
	::Class_2_F16D73323D71766B<::Struct_2_032E3093F309FC91>* Field_1_0; // 0x18
	::Class_0_16E4307DCC419505_482* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_CLASS_1_F5FC409827EDEB13__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BCCEF225A11BDA90(::Struct_2_C8629618711DF8B3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_CLASS_1_F5FC409827EDEB13_METHOD_1_BCCEF225A11BDA90_OFFSET))(this, a1);
	}
};
