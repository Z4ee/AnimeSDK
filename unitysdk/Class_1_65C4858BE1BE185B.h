#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_D456F475C91F9E7E_Enum_3_0343567492C9FE5A.h"
#include "unitysdk/Struct_2_11FD83788053949F.h"
#include "unitysdk/Struct_2_11FD83788053949F_3.h"
#include "unitysdk/Struct_2_11FD83788053949F_4.h"
#include "unitysdk/System/Object.h"

class Class_2_D456F475C91F9E7E;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_65C4858BE1BE185B_METHOD_1_9365E674023D5B71_OFFSET UNITYSDK_OFFSET(0x18267140)
#define CLASS_1_65C4858BE1BE185B__CCTOR_OFFSET UNITYSDK_OFFSET(0x182670A0)
#define CLASS_1_65C4858BE1BE185B__CTOR_OFFSET UNITYSDK_OFFSET(0x18266F90)

inline static constexpr unsigned int Class_1_65C4858BE1BE185B_TypeDefinitionIndex = 67808;

class Class_1_65C4858BE1BE185B : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_65C4858BE1BE185B*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_65C4858BE1BE185B*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_65C4858BE1BE185B_TypeDefinitionIndex)->GetStaticField(0x50890);
	}
	::Struct_2_11FD83788053949F Field_1_7; // 0x10
	::Struct_2_11FD83788053949F_4 Field_1_0; // 0x1C
	::Struct_2_11FD83788053949F_3 Field_1_1; // 0x28
	::Class_2_D456F475C91F9E7E_Enum_3_0343567492C9FE5A Field_1_6; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65C4858BE1BE185B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_65C4858BE1BE185B__CCTOR_OFFSET))();
	}

	::Class_2_D456F475C91F9E7E* Method_1_9365E674023D5B71()
	{
		return ((::Class_2_D456F475C91F9E7E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65C4858BE1BE185B_METHOD_1_9365E674023D5B71_OFFSET))(this);
	}
};
