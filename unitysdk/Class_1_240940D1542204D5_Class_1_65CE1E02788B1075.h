#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_240940D1542204D5_IterState.h"
#include "unitysdk/Class_1_240940D1542204D5_Struct_2_74774458D8863C06.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_240940D1542204D5_CLASS_1_65CE1E02788B1075_METHOD_1_26D173159ADB4E66_OFFSET UNITYSDK_OFFSET(0x9E2AC20)
#define CLASS_1_240940D1542204D5_CLASS_1_65CE1E02788B1075_METHOD_1_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x9E2B060)
#define CLASS_1_240940D1542204D5_CLASS_1_65CE1E02788B1075_METHOD_1_63D2BAC6C24C78C5_OFFSET UNITYSDK_OFFSET(0x9E2AF10)
#define CLASS_1_240940D1542204D5_CLASS_1_65CE1E02788B1075_METHOD_1_8D0A18CEA5E37DA2_OFFSET UNITYSDK_OFFSET(0x9E2B2C0)
#define CLASS_1_240940D1542204D5_CLASS_1_65CE1E02788B1075_METHOD_1_C1A937CC4C317535_OFFSET UNITYSDK_OFFSET(0x9E2AFC0)
#define CLASS_1_240940D1542204D5_CLASS_1_65CE1E02788B1075__CTOR_OFFSET UNITYSDK_OFFSET(0x9E2B7B0)

inline static constexpr unsigned int Class_1_240940D1542204D5_Class_1_65CE1E02788B1075_TypeDefinitionIndex = 50725;

class Class_1_240940D1542204D5_Class_1_65CE1E02788B1075 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_240940D1542204D5_Struct_2_74774458D8863C06>* Field_1_0; // 0x10
	::System::Text::StringBuilder* Field_1_1; // 0x18
	::Class_1_240940D1542204D5_IterState Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_240940D1542204D5_CLASS_1_65CE1E02788B1075__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_26D173159ADB4E66(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_240940D1542204D5_CLASS_1_65CE1E02788B1075_METHOD_1_26D173159ADB4E66_OFFSET))(this, a1);
	}

	::System::Void Method_1_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_240940D1542204D5_CLASS_1_65CE1E02788B1075_METHOD_1_56CE4AFC5339F746_OFFSET))(this);
	}

	::System::Boolean Method_1_8D0A18CEA5E37DA2(::System::String* a1, ::Class_1_240940D1542204D5_Struct_2_74774458D8863C06& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Class_1_240940D1542204D5_Struct_2_74774458D8863C06&))((::PBYTE)hIl2Cpp + CLASS_1_240940D1542204D5_CLASS_1_65CE1E02788B1075_METHOD_1_8D0A18CEA5E37DA2_OFFSET))(this, a1, a2);
	}

	::System::Nullable_1<::System::Char> Method_1_C1A937CC4C317535(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Nullable_1<::System::Char>(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_240940D1542204D5_CLASS_1_65CE1E02788B1075_METHOD_1_C1A937CC4C317535_OFFSET))(this, a1, a2);
	}

	::System::Nullable_1<::System::Char> Method_1_63D2BAC6C24C78C5(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Nullable_1<::System::Char>(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_240940D1542204D5_CLASS_1_65CE1E02788B1075_METHOD_1_63D2BAC6C24C78C5_OFFSET))(this, a1, a2);
	}
};
