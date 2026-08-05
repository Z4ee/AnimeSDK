#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Reflection { class Assembly; }

#define CLASS_1_D2762D5680E9597F_METHOD_1_07FF21ABEF9E78DB_OFFSET UNITYSDK_OFFSET(0x156C9C00)
#define CLASS_1_D2762D5680E9597F_METHOD_1_50F0C5297A76EECB_OFFSET UNITYSDK_OFFSET(0x156C9AC0)
#define CLASS_1_D2762D5680E9597F_METHOD_1_86026B47A3027B67_OFFSET UNITYSDK_OFFSET(0x156CA1B0)
#define CLASS_1_D2762D5680E9597F__CCTOR_OFFSET UNITYSDK_OFFSET(0x156C9A20)
#define CLASS_1_D2762D5680E9597F__CTOR_OFFSET UNITYSDK_OFFSET(0x156816A0)

inline static constexpr unsigned int Class_1_D2762D5680E9597F_TypeDefinitionIndex = 74179;

class Class_1_D2762D5680E9597F : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::UInt16>** StaticGet_Field_1_6()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::UInt16>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D2762D5680E9597F_TypeDefinitionIndex)->GetStaticField(0x2E580);
	}
	::System::Type* Field_1_0; // 0x10
	::System::UInt16 Field_1_7; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2762D5680E9597F__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D2762D5680E9597F__CCTOR_OFFSET))();
	}

	static ::System::UInt16 Method_1_50F0C5297A76EECB(::System::Type* a1)
	{
		return ((::System::UInt16(*)(::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_D2762D5680E9597F_METHOD_1_50F0C5297A76EECB_OFFSET))(a1);
	}

	static ::System::Void Method_1_07FF21ABEF9E78DB(::System::Reflection::Assembly* a1)
	{
		return ((::System::Void(*)(::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + CLASS_1_D2762D5680E9597F_METHOD_1_07FF21ABEF9E78DB_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_86026B47A3027B67()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D2762D5680E9597F_METHOD_1_86026B47A3027B67_OFFSET))();
	}
};
