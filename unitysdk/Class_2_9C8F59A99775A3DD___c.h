#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_2_E46C7200C98EA660;
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_9C8F59A99775A3DD___C_METHOD_1_4F4696EBDA1F0A91_OFFSET UNITYSDK_OFFSET(0x13EBC850)
#define CLASS_2_9C8F59A99775A3DD___C_METHOD_1_7A690D3F43694C57_OFFSET UNITYSDK_OFFSET(0x13EBC930)
#define CLASS_2_9C8F59A99775A3DD___C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x13EBC920)
#define CLASS_2_9C8F59A99775A3DD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13EBC800)
#define CLASS_2_9C8F59A99775A3DD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13EBC840)

inline static constexpr unsigned int Class_2_9C8F59A99775A3DD___c_TypeDefinitionIndex = 54997;

class Class_2_9C8F59A99775A3DD___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__50_24()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9C8F59A99775A3DD___c_TypeDefinitionIndex)->GetStaticField(0x3E540);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__50_8()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9C8F59A99775A3DD___c_TypeDefinitionIndex)->GetStaticField(0x3E548);
	}
	static ::Class_2_9C8F59A99775A3DD___c** StaticGet___9()
	{
		return (::Class_2_9C8F59A99775A3DD___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9C8F59A99775A3DD___c_TypeDefinitionIndex)->GetStaticField(0x3E550);
	}
	static ::System::Comparison_1<::Class_2_E46C7200C98EA660*>** StaticGet___9__49_0()
	{
		return (::System::Comparison_1<::Class_2_E46C7200C98EA660*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9C8F59A99775A3DD___c_TypeDefinitionIndex)->GetStaticField(0x3E558);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_9C8F59A99775A3DD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C8F59A99775A3DD___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_4F4696EBDA1F0A91(::Class_2_E46C7200C98EA660* a1, ::Class_2_E46C7200C98EA660* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_E46C7200C98EA660*, ::Class_2_E46C7200C98EA660*))((::PBYTE)hIl2Cpp + CLASS_2_9C8F59A99775A3DD___C_METHOD_1_4F4696EBDA1F0A91_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C8F59A99775A3DD___C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::Foundation::AssetPath Method_1_7A690D3F43694C57()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C8F59A99775A3DD___C_METHOD_1_7A690D3F43694C57_OFFSET))(this);
	}
};
