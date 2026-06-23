#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_2_6EC930B690591576_CLASS_1_EA06DA1092863621_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12EE7DB0)
#define CLASS_2_6EC930B690591576_CLASS_1_EA06DA1092863621__CTOR_OFFSET UNITYSDK_OFFSET(0x12EE7D90)

inline static constexpr unsigned int Class_2_6EC930B690591576_Class_1_EA06DA1092863621_TypeDefinitionIndex = 70034;

class Class_2_6EC930B690591576_Class_1_EA06DA1092863621 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::String* Field_1_2; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6EC930B690591576_CLASS_1_EA06DA1092863621__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6EC930B690591576_CLASS_1_EA06DA1092863621_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
