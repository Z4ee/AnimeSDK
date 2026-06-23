#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_32;
class Class_1_7AC8164CC7B8672E;
namespace Foundation { template <typename T> class ObjectPoolOfReusable_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_300D91F1C684F3B2_METHOD_1_18712DB3B1B723E8_OFFSET UNITYSDK_OFFSET(0x1224A2D0)
#define CLASS_1_300D91F1C684F3B2_METHOD_1_727AAB18B8F1925E_OFFSET UNITYSDK_OFFSET(0x1224A490)
#define CLASS_1_300D91F1C684F3B2_METHOD_1_75479EFDF938C7BA_OFFSET UNITYSDK_OFFSET(0x1224A410)
#define CLASS_1_300D91F1C684F3B2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1224A1C0)

inline static constexpr unsigned int Class_1_300D91F1C684F3B2_TypeDefinitionIndex = 40538;

class Class_1_300D91F1C684F3B2 : public ::System::Object
{
public:
	static ::Class_1_43BD383C98B4C0C5_32** StaticGet_Field_1_1()
	{
		return (::Class_1_43BD383C98B4C0C5_32**)Il2CppClass::FromTypeDefinitionIndex(Class_1_300D91F1C684F3B2_TypeDefinitionIndex)->GetStaticField(0x4A9A0);
	}
	static ::System::Collections::Generic::HashSet_1<::Class_1_7AC8164CC7B8672E*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::HashSet_1<::Class_1_7AC8164CC7B8672E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_300D91F1C684F3B2_TypeDefinitionIndex)->GetStaticField(0x4A9A8);
	}
	static ::Foundation::ObjectPoolOfReusable_1<::Class_1_7AC8164CC7B8672E*>** StaticGet_Field_1_0()
	{
		return (::Foundation::ObjectPoolOfReusable_1<::Class_1_7AC8164CC7B8672E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_300D91F1C684F3B2_TypeDefinitionIndex)->GetStaticField(0x4A9B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_300D91F1C684F3B2__CCTOR_OFFSET))();
	}

	static ::Class_1_7AC8164CC7B8672E* Method_1_18712DB3B1B723E8()
	{
		return ((::Class_1_7AC8164CC7B8672E*(*)())((::PBYTE)hIl2Cpp + CLASS_1_300D91F1C684F3B2_METHOD_1_18712DB3B1B723E8_OFFSET))();
	}

	static ::System::Collections::Generic::HashSet_1<::Class_1_7AC8164CC7B8672E*>* Method_1_75479EFDF938C7BA()
	{
		return ((::System::Collections::Generic::HashSet_1<::Class_1_7AC8164CC7B8672E*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_300D91F1C684F3B2_METHOD_1_75479EFDF938C7BA_OFFSET))();
	}

	static ::System::Void Method_1_727AAB18B8F1925E(::Class_1_7AC8164CC7B8672E* a1)
	{
		return ((::System::Void(*)(::Class_1_7AC8164CC7B8672E*))((::PBYTE)hIl2Cpp + CLASS_1_300D91F1C684F3B2_METHOD_1_727AAB18B8F1925E_OFFSET))(a1);
	}
};
