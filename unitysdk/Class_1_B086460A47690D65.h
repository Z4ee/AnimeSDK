#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_ABC67D4EFBF3BD9A_1.h"
#include "unitysdk/Struct_2_DF90B2BD73749811_1.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B086460A47690D65_METHOD_1_CF780FC3D0CB1833_OFFSET UNITYSDK_OFFSET(0xC0C3F10)
#define CLASS_1_B086460A47690D65_METHOD_1_D2AFBAB4C209AA0D_OFFSET UNITYSDK_OFFSET(0xC0C3DF0)
#define CLASS_1_B086460A47690D65__CCTOR_OFFSET UNITYSDK_OFFSET(0xC0C40B0)
#define CLASS_1_B086460A47690D65__CTOR_OFFSET UNITYSDK_OFFSET(0xC0C4010)

inline static constexpr unsigned int Class_1_B086460A47690D65_TypeDefinitionIndex = 50214;

class Class_1_B086460A47690D65 : public ::System::Object
{
public:
	static ::Class_1_B086460A47690D65** StaticGet_Field_1_0()
	{
		return (::Class_1_B086460A47690D65**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B086460A47690D65_TypeDefinitionIndex)->GetStaticField(0x3FEC0);
	}
	::System::Collections::Generic::List_1<::Struct_2_ABC67D4EFBF3BD9A_1>* Field_1_4; // 0x10
	::System::Collections::Generic::List_1<::Struct_2_DF90B2BD73749811_1>* Field_1_3; // 0x18
	::System::Boolean Field_1_1; // 0x20
	::System::Boolean Field_1_5; // 0x21
	::System::Nullable_1<::System::Int32> Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B086460A47690D65__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B086460A47690D65__CCTOR_OFFSET))();
	}

	::System::Void Method_1_D2AFBAB4C209AA0D(::Class_1_B086460A47690D65* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B086460A47690D65*))((::PBYTE)hIl2Cpp + CLASS_1_B086460A47690D65_METHOD_1_D2AFBAB4C209AA0D_OFFSET))(this, a1);
	}

	::Class_1_B086460A47690D65* Method_1_CF780FC3D0CB1833()
	{
		return ((::Class_1_B086460A47690D65*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B086460A47690D65_METHOD_1_CF780FC3D0CB1833_OFFSET))(this);
	}
};
