#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B9019A799F77EC17.h"
#include "unitysdk/Class_1_B9019A799F77EC17_Enum_3_481B09F426B27ACB.h"
#include "unitysdk/Class_2_6CD58E4C73FFAD18_Enum_3_603BBBCDF3C0578B.h"
#include "unitysdk/Class_2_6CD58E4C73FFAD18_Enum_3_B6301F6495ED06D6.h"

class Class_1_CCC17A1447C28688;
namespace System { class String; }

#define CLASS_2_6CD58E4C73FFAD18_METHOD_2_26D99FE57BEFC730_OFFSET UNITYSDK_OFFSET(0x16C2D180)
#define CLASS_2_6CD58E4C73FFAD18_METHOD_2_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x16C2D170)
#define CLASS_2_6CD58E4C73FFAD18_METHOD_2_97EA615321B8961D_OFFSET UNITYSDK_OFFSET(0x16C2D370)
#define CLASS_2_6CD58E4C73FFAD18__CTOR_OFFSET UNITYSDK_OFFSET(0x16C2D360)

inline static constexpr unsigned int Class_2_6CD58E4C73FFAD18_TypeDefinitionIndex = 54027;

class Class_2_6CD58E4C73FFAD18 : public ::Class_1_B9019A799F77EC17
{
public:
	::System::String* Field_2_2; // 0x20
	::System::String* Field_2_4; // 0x28
	::System::String* Field_2_3; // 0x30
	::Class_2_6CD58E4C73FFAD18_Enum_3_B6301F6495ED06D6 Field_2_1; // 0x38
	::System::Single Field_2_6; // 0x3C
	::System::Single Field_2_5; // 0x40
	::Class_2_6CD58E4C73FFAD18_Enum_3_603BBBCDF3C0578B Field_2_0; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CD58E4C73FFAD18__CTOR_OFFSET))(this);
	}

	::Class_1_B9019A799F77EC17_Enum_3_481B09F426B27ACB Method_2_2ACF2A61FB239D23()
	{
		return ((::Class_1_B9019A799F77EC17_Enum_3_481B09F426B27ACB(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CD58E4C73FFAD18_METHOD_2_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Single Method_2_26D99FE57BEFC730(::Class_1_CCC17A1447C28688* a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::Class_1_CCC17A1447C28688*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6CD58E4C73FFAD18_METHOD_2_26D99FE57BEFC730_OFFSET))(this, a1, a2);
	}

	static ::Class_2_6CD58E4C73FFAD18* Method_2_97EA615321B8961D(::Class_2_6CD58E4C73FFAD18_Enum_3_603BBBCDF3C0578B a1, ::Class_2_6CD58E4C73FFAD18_Enum_3_B6301F6495ED06D6 a2, ::System::String* a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::Class_2_6CD58E4C73FFAD18*(*)(::Class_2_6CD58E4C73FFAD18_Enum_3_603BBBCDF3C0578B, ::Class_2_6CD58E4C73FFAD18_Enum_3_B6301F6495ED06D6, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6CD58E4C73FFAD18_METHOD_2_97EA615321B8961D_OFFSET))(a1, a2, a3, a4, a5);
	}
};
