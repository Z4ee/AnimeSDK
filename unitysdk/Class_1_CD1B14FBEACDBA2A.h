#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_5775A4FEC79026BC;
namespace System { class String; }

#define CLASS_1_CD1B14FBEACDBA2A__CTOR_OFFSET UNITYSDK_OFFSET(0x8BCA010)

inline static constexpr unsigned int Class_1_CD1B14FBEACDBA2A_TypeDefinitionIndex = 45084;

class Class_1_CD1B14FBEACDBA2A : public ::System::Object
{
public:
	::Class_3_5775A4FEC79026BC* Field_1_5; // 0x10
	::Class_3_5775A4FEC79026BC* Field_1_6; // 0x18
	::System::String* Field_1_0; // 0x20
	::System::Boolean Field_1_1; // 0x28
	::System::Boolean Field_1_2; // 0x29
	::System::Boolean Field_1_3; // 0x2A
	::System::Boolean Field_1_4; // 0x2B

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD1B14FBEACDBA2A__CTOR_OFFSET))(this);
	}
};
