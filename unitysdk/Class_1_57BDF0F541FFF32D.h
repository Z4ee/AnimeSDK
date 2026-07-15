#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_57BDF0F541FFF32D_METHOD_1_ECD477777CCB0AD7_OFFSET UNITYSDK_OFFSET(0x16B72780)
#define CLASS_1_57BDF0F541FFF32D__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B72870)

inline static constexpr unsigned int Class_1_57BDF0F541FFF32D_TypeDefinitionIndex = 47624;

class Class_1_57BDF0F541FFF32D : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Type*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_57BDF0F541FFF32D_TypeDefinitionIndex)->GetStaticField(0x60010);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_57BDF0F541FFF32D__CCTOR_OFFSET))();
	}

	static ::System::Type* Method_1_ECD477777CCB0AD7(::System::String* a1)
	{
		return ((::System::Type*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_57BDF0F541FFF32D_METHOD_1_ECD477777CCB0AD7_OFFSET))(a1);
	}
};
