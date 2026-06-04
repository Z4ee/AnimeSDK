#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_ABC67D4EFBF3BD9A_1.h"
#include "unitysdk/Struct_2_DF90B2BD73749811_1.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2FD33788640A7CFD_METHOD_1_CF780FC3D0CB1833_OFFSET UNITYSDK_OFFSET(0xAEF31F0)
#define CLASS_1_2FD33788640A7CFD_METHOD_1_E10B4092FFA54980_OFFSET UNITYSDK_OFFSET(0xAEF30F0)
#define CLASS_1_2FD33788640A7CFD__CCTOR_OFFSET UNITYSDK_OFFSET(0xAEF3390)
#define CLASS_1_2FD33788640A7CFD__CTOR_OFFSET UNITYSDK_OFFSET(0xAEF32F0)

inline static constexpr unsigned int Class_1_2FD33788640A7CFD_TypeDefinitionIndex = 50880;

class Class_1_2FD33788640A7CFD : public ::System::Object
{
public:
	static ::Class_1_2FD33788640A7CFD** StaticGet_Field_1_0()
	{
		return (::Class_1_2FD33788640A7CFD**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2FD33788640A7CFD_TypeDefinitionIndex)->GetStaticField(0x34F00);
	}
	::System::Collections::Generic::List_1<::Struct_2_ABC67D4EFBF3BD9A_1>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Struct_2_DF90B2BD73749811_1>* Field_1_2; // 0x18
	::System::Boolean Field_1_3; // 0x20
	::System::Boolean Field_1_4; // 0x21
	::System::Nullable_1<::System::Int32> Field_1_5; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FD33788640A7CFD__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2FD33788640A7CFD__CCTOR_OFFSET))();
	}

	::System::Void Method_1_E10B4092FFA54980(::Class_1_2FD33788640A7CFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2FD33788640A7CFD*))((::PBYTE)hIl2Cpp + CLASS_1_2FD33788640A7CFD_METHOD_1_E10B4092FFA54980_OFFSET))(this, a1);
	}

	::Class_1_2FD33788640A7CFD* Method_1_CF780FC3D0CB1833()
	{
		return ((::Class_1_2FD33788640A7CFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FD33788640A7CFD_METHOD_1_CF780FC3D0CB1833_OFFSET))(this);
	}
};
