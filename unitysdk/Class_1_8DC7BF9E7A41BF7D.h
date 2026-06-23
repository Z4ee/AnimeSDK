#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_34F7035555410463_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_8DC7BF9E7A41BF7D_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x16D1A810)
#define CLASS_1_8DC7BF9E7A41BF7D_METHOD_1_CEC4A57D3930D0ED_OFFSET UNITYSDK_OFFSET(0x16D1A220)

inline static constexpr unsigned int Class_1_8DC7BF9E7A41BF7D_TypeDefinitionIndex = 49692;

class Class_1_8DC7BF9E7A41BF7D : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8DC7BF9E7A41BF7D_TypeDefinitionIndex)->GetStaticField(0x40180);
	}

	static ::System::Boolean Method_1_CEC4A57D3930D0ED(::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>* a1, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>* a2)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>*, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>*))((::PBYTE)hIl2Cpp + CLASS_1_8DC7BF9E7A41BF7D_METHOD_1_CEC4A57D3930D0ED_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8DC7BF9E7A41BF7D_METHOD_1_35EA095E1AFDD9C8_OFFSET))();
	}
};
