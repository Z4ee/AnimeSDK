#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C6AB2643BC630D64.h"

class Class_2_14986121AA61AD99;
class Class_3_248DACE3BB3053DD;
class Class_3_C93CC3D2C2AC4067;
namespace System { class String; }

#define CLASS_3_4C3F2CD756CEBC3D_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1AF11CE0)
#define CLASS_3_4C3F2CD756CEBC3D_METHOD_3_F40460C03F3A6DB2_OFFSET UNITYSDK_OFFSET(0x1AF11930)
#define CLASS_3_4C3F2CD756CEBC3D__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF11D40)

inline static constexpr unsigned int Class_3_4C3F2CD756CEBC3D_TypeDefinitionIndex = 60693;

class Class_3_4C3F2CD756CEBC3D : public ::Class_2_C6AB2643BC630D64<::Class_3_4C3F2CD756CEBC3D*>
{
public:
	::System::String* Field_3_0; // 0x10
	::System::UInt32 Field_3_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4C3F2CD756CEBC3D__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_F40460C03F3A6DB2(::Class_3_C93CC3D2C2AC4067* a1, ::Class_3_248DACE3BB3053DD* a2, ::System::Single a3, ::System::Single a4, ::Class_2_14986121AA61AD99* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C93CC3D2C2AC4067*, ::Class_3_248DACE3BB3053DD*, ::System::Single, ::System::Single, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + CLASS_3_4C3F2CD756CEBC3D_METHOD_3_F40460C03F3A6DB2_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4C3F2CD756CEBC3D_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
