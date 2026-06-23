#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A047EA5169B6B30F;
class Class_2_208CC9941471731A_703;

#define CLASS_1_06C40FD353242AA8_METHOD_1_894257D44E2F39FA_OFFSET UNITYSDK_OFFSET(0xD380B50)
#define CLASS_1_06C40FD353242AA8_METHOD_1_B556EADFE34BD60F_OFFSET UNITYSDK_OFFSET(0xD380C50)
#define CLASS_1_06C40FD353242AA8__CTOR_OFFSET UNITYSDK_OFFSET(0xD380B40)

inline static constexpr unsigned int Class_1_06C40FD353242AA8_TypeDefinitionIndex = 55331;

class Class_1_06C40FD353242AA8 : public ::System::Object
{
public:
	::Class_1_A047EA5169B6B30F* Field_1_3; // 0x10
	::Class_2_208CC9941471731A_703* Field_1_2; // 0x18
	::System::Int32 Field_1_4; // 0x20
	::System::Int32 Field_1_1; // 0x24
	::System::Boolean Field_1_5; // 0x28
	::System::Int32 Field_1_0; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06C40FD353242AA8__CTOR_OFFSET))(this);
	}

	::Class_1_A047EA5169B6B30F* Method_1_894257D44E2F39FA()
	{
		return ((::Class_1_A047EA5169B6B30F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06C40FD353242AA8_METHOD_1_894257D44E2F39FA_OFFSET))(this);
	}

	::System::Boolean Method_1_B556EADFE34BD60F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06C40FD353242AA8_METHOD_1_B556EADFE34BD60F_OFFSET))(this);
	}
};
