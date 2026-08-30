#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7B4E9156998275BE;
class Class_1_96F671E4E83A73C0;

#define CLASS_1_82F159DC6BB02FAF_METHOD_1_B50696823C51D50F_OFFSET UNITYSDK_OFFSET(0x1E5C50B0)
#define CLASS_1_82F159DC6BB02FAF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5C8770)
#define CLASS_1_82F159DC6BB02FAF__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5C8760)

inline static constexpr unsigned int Class_1_82F159DC6BB02FAF_TypeDefinitionIndex = 42498;

class Class_1_82F159DC6BB02FAF : public ::System::Object
{
public:
	static ::Class_1_82F159DC6BB02FAF** StaticGet_FMJPMFEDIJL()
	{
		return (::Class_1_82F159DC6BB02FAF**)Il2CppClass::FromTypeDefinitionIndex(Class_1_82F159DC6BB02FAF_TypeDefinitionIndex)->GetStaticField(0x54420);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82F159DC6BB02FAF__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_82F159DC6BB02FAF__CCTOR_OFFSET))();
	}

	::System::Void Method_1_B50696823C51D50F(::Class_1_96F671E4E83A73C0* a1, ::Class_1_7B4E9156998275BE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_96F671E4E83A73C0*, ::Class_1_7B4E9156998275BE*))((::PBYTE)hIl2Cpp + CLASS_1_82F159DC6BB02FAF_METHOD_1_B50696823C51D50F_OFFSET))(this, a1, a2);
	}
};
