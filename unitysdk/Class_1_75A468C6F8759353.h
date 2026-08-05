#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_139;
class Class_1_7AC8164CC7B8672E;
namespace Foundation { template <typename T> class ObjectPoolOfReusable_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_75A468C6F8759353_METHOD_1_18712DB3B1B723E8_OFFSET UNITYSDK_OFFSET(0x1478CDA0)
#define CLASS_1_75A468C6F8759353_METHOD_1_75479EFDF938C7BA_OFFSET UNITYSDK_OFFSET(0x1478CD20)
#define CLASS_1_75A468C6F8759353_METHOD_1_7A3A2C7B56BB7F35_OFFSET UNITYSDK_OFFSET(0x1478CC40)
#define CLASS_1_75A468C6F8759353__CCTOR_OFFSET UNITYSDK_OFFSET(0x1478CB30)

inline static constexpr unsigned int Class_1_75A468C6F8759353_TypeDefinitionIndex = 88153;

class Class_1_75A468C6F8759353 : public ::System::Object
{
public:
	static ::Class_1_43BD383C98B4C0C5_139** StaticGet_Field_1_7()
	{
		return (::Class_1_43BD383C98B4C0C5_139**)Il2CppClass::FromTypeDefinitionIndex(Class_1_75A468C6F8759353_TypeDefinitionIndex)->GetStaticField(0x4E140);
	}
	static ::System::Collections::Generic::HashSet_1<::Class_1_7AC8164CC7B8672E*>** StaticGet_Field_1_6()
	{
		return (::System::Collections::Generic::HashSet_1<::Class_1_7AC8164CC7B8672E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_75A468C6F8759353_TypeDefinitionIndex)->GetStaticField(0x4E148);
	}
	static ::Foundation::ObjectPoolOfReusable_1<::Class_1_7AC8164CC7B8672E*>** StaticGet_Field_1_0()
	{
		return (::Foundation::ObjectPoolOfReusable_1<::Class_1_7AC8164CC7B8672E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_75A468C6F8759353_TypeDefinitionIndex)->GetStaticField(0x4E150);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_75A468C6F8759353__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_7A3A2C7B56BB7F35(::Class_1_7AC8164CC7B8672E* a1)
	{
		return ((::System::Void(*)(::Class_1_7AC8164CC7B8672E*))((::PBYTE)hIl2Cpp + CLASS_1_75A468C6F8759353_METHOD_1_7A3A2C7B56BB7F35_OFFSET))(a1);
	}

	static ::System::Collections::Generic::HashSet_1<::Class_1_7AC8164CC7B8672E*>* Method_1_75479EFDF938C7BA()
	{
		return ((::System::Collections::Generic::HashSet_1<::Class_1_7AC8164CC7B8672E*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_75A468C6F8759353_METHOD_1_75479EFDF938C7BA_OFFSET))();
	}

	static ::Class_1_7AC8164CC7B8672E* Method_1_18712DB3B1B723E8()
	{
		return ((::Class_1_7AC8164CC7B8672E*(*)())((::PBYTE)hIl2Cpp + CLASS_1_75A468C6F8759353_METHOD_1_18712DB3B1B723E8_OFFSET))();
	}
};
