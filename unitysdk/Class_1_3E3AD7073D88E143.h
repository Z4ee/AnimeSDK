#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_3E3AD7073D88E143_METHOD_1_37641CB56E59A096_OFFSET UNITYSDK_OFFSET(0x143E83A0)
#define CLASS_1_3E3AD7073D88E143_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x143E84E0)
#define CLASS_1_3E3AD7073D88E143__CCTOR_OFFSET UNITYSDK_OFFSET(0x143E8300)

inline static constexpr unsigned int Class_1_3E3AD7073D88E143_TypeDefinitionIndex = 83646;

class Class_1_3E3AD7073D88E143 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3E3AD7073D88E143_TypeDefinitionIndex)->GetStaticField(0x2BDF0);
	}
	// static const ::System::String* Field_1_0; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3E3AD7073D88E143__CCTOR_OFFSET))();
	}

	static ::System::String* Method_1_37641CB56E59A096(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3E3AD7073D88E143_METHOD_1_37641CB56E59A096_OFFSET))(a1);
	}

	static ::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3E3AD7073D88E143_METHOD_1_AA169839CB93802A_OFFSET))();
	}
};
