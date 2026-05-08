#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Reflection { class Assembly; }

#define CLASS_1_10A04DCAE0E9225A_METHOD_1_50F0C5297A76EECB_OFFSET UNITYSDK_OFFSET(0x1419F190)
#define CLASS_1_10A04DCAE0E9225A_METHOD_1_58FEF6897BE13DD2_OFFSET UNITYSDK_OFFSET(0x1419F370)
#define CLASS_1_10A04DCAE0E9225A_METHOD_1_86026B47A3027B67_OFFSET UNITYSDK_OFFSET(0x1419F2D0)
#define CLASS_1_10A04DCAE0E9225A__CCTOR_OFFSET UNITYSDK_OFFSET(0x1419F0F0)
#define CLASS_1_10A04DCAE0E9225A__CTOR_OFFSET UNITYSDK_OFFSET(0x1419F0E0)

inline static constexpr unsigned int Class_1_10A04DCAE0E9225A_TypeDefinitionIndex = 69017;

class Class_1_10A04DCAE0E9225A : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::UInt16>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::UInt16>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_10A04DCAE0E9225A_TypeDefinitionIndex)->GetStaticField(0x43000);
	}
	::System::Type* Field_1_0; // 0x10
	::System::UInt16 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10A04DCAE0E9225A__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_10A04DCAE0E9225A__CCTOR_OFFSET))();
	}

	static ::System::UInt16 Method_1_50F0C5297A76EECB(::System::Type* a1)
	{
		return ((::System::UInt16(*)(::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_10A04DCAE0E9225A_METHOD_1_50F0C5297A76EECB_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_86026B47A3027B67()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_10A04DCAE0E9225A_METHOD_1_86026B47A3027B67_OFFSET))();
	}

	static ::System::Void Method_1_58FEF6897BE13DD2(::System::Reflection::Assembly* a1)
	{
		return ((::System::Void(*)(::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + CLASS_1_10A04DCAE0E9225A_METHOD_1_58FEF6897BE13DD2_OFFSET))(a1);
	}
};
