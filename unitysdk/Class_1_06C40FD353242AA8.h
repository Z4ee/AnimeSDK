#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F24A790D52CF0024;
class Class_2_208CC9941471731A_901;

#define CLASS_1_06C40FD353242AA8_METHOD_1_894257D44E2F39FA_OFFSET UNITYSDK_OFFSET(0xFFBA880)
#define CLASS_1_06C40FD353242AA8_METHOD_1_B556EADFE34BD60F_OFFSET UNITYSDK_OFFSET(0xFFBA6E0)
#define CLASS_1_06C40FD353242AA8__CTOR_OFFSET UNITYSDK_OFFSET(0xFFBA6D0)

inline static constexpr unsigned int Class_1_06C40FD353242AA8_TypeDefinitionIndex = 71746;

class Class_1_06C40FD353242AA8 : public ::System::Object
{
public:
	::Class_1_F24A790D52CF0024* Field_1_7; // 0x10
	::Class_2_208CC9941471731A_901* Field_1_0; // 0x18
	::System::Int32 Field_1_2; // 0x20
	::System::Boolean Field_1_5; // 0x24
	::System::Int32 Field_1_1; // 0x28
	::System::Int32 Field_1_6; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06C40FD353242AA8__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_B556EADFE34BD60F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06C40FD353242AA8_METHOD_1_B556EADFE34BD60F_OFFSET))(this);
	}

	::Class_1_F24A790D52CF0024* Method_1_894257D44E2F39FA()
	{
		return ((::Class_1_F24A790D52CF0024*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06C40FD353242AA8_METHOD_1_894257D44E2F39FA_OFFSET))(this);
	}
};
