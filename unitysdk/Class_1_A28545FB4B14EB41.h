#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class EqualityComparer_1; }

#define CLASS_1_A28545FB4B14EB41_METHOD_1_17181AEEAB2F20A3_OFFSET UNITYSDK_OFFSET(0x1B94B6D0)
#define CLASS_1_A28545FB4B14EB41_METHOD_1_1A3D50F8B88474E5_OFFSET UNITYSDK_OFFSET(0x1B94B730)
#define CLASS_1_A28545FB4B14EB41_METHOD_1_1B0D03FBF024F191_OFFSET UNITYSDK_OFFSET(0x1B94B670)
#define CLASS_1_A28545FB4B14EB41_METHOD_1_B6383E34AC84F767_OFFSET UNITYSDK_OFFSET(0x1B94B790)
#define CLASS_1_A28545FB4B14EB41__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B94B590)

inline static constexpr unsigned int Class_1_A28545FB4B14EB41_TypeDefinitionIndex = 9322;

class Class_1_A28545FB4B14EB41 : public ::System::Object
{
public:
	static ::System::Collections::Generic::EqualityComparer_1<::System::Double>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::EqualityComparer_1<::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A28545FB4B14EB41_TypeDefinitionIndex)->GetStaticField(0x8060);
	}
	static ::System::Collections::Generic::EqualityComparer_1<::System::Single>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::EqualityComparer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A28545FB4B14EB41_TypeDefinitionIndex)->GetStaticField(0x8068);
	}
	static ::System::Collections::Generic::EqualityComparer_1<::System::Nullable_1<::System::Single>>** StaticGet_Field_1_3()
	{
		return (::System::Collections::Generic::EqualityComparer_1<::System::Nullable_1<::System::Single>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A28545FB4B14EB41_TypeDefinitionIndex)->GetStaticField(0x8070);
	}
	static ::System::Collections::Generic::EqualityComparer_1<::System::Nullable_1<::System::Double>>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::EqualityComparer_1<::System::Nullable_1<::System::Double>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A28545FB4B14EB41_TypeDefinitionIndex)->GetStaticField(0x8078);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A28545FB4B14EB41__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::EqualityComparer_1<::System::Single>* Method_1_1B0D03FBF024F191()
	{
		return ((::System::Collections::Generic::EqualityComparer_1<::System::Single>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A28545FB4B14EB41_METHOD_1_1B0D03FBF024F191_OFFSET))();
	}

	static ::System::Collections::Generic::EqualityComparer_1<::System::Double>* Method_1_17181AEEAB2F20A3()
	{
		return ((::System::Collections::Generic::EqualityComparer_1<::System::Double>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A28545FB4B14EB41_METHOD_1_17181AEEAB2F20A3_OFFSET))();
	}

	static ::System::Collections::Generic::EqualityComparer_1<::System::Nullable_1<::System::Double>>* Method_1_1A3D50F8B88474E5()
	{
		return ((::System::Collections::Generic::EqualityComparer_1<::System::Nullable_1<::System::Double>>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A28545FB4B14EB41_METHOD_1_1A3D50F8B88474E5_OFFSET))();
	}

	static ::System::Collections::Generic::EqualityComparer_1<::System::Nullable_1<::System::Single>>* Method_1_B6383E34AC84F767()
	{
		return ((::System::Collections::Generic::EqualityComparer_1<::System::Nullable_1<::System::Single>>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A28545FB4B14EB41_METHOD_1_B6383E34AC84F767_OFFSET))();
	}
};
