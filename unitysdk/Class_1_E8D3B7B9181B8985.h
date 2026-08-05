#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_E23E4CB2769CC93F;
class Class_3_06F526E9A8E279F3;

#define CLASS_1_E8D3B7B9181B8985_METHOD_1_D2D989E975355716_OFFSET UNITYSDK_OFFSET(0x12785710)
#define CLASS_1_E8D3B7B9181B8985__CCTOR_OFFSET UNITYSDK_OFFSET(0x127856F0)

inline static constexpr unsigned int Class_1_E8D3B7B9181B8985_TypeDefinitionIndex = 54873;

class Class_1_E8D3B7B9181B8985 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E8D3B7B9181B8985_TypeDefinitionIndex)->GetStaticField(0x115D0);
	}
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E8D3B7B9181B8985_TypeDefinitionIndex)->GetStaticField(0x115D4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E8D3B7B9181B8985__CCTOR_OFFSET))();
	}

	static ::Class_3_06F526E9A8E279F3* Method_1_D2D989E975355716(::Class_2_E23E4CB2769CC93F* a1)
	{
		return ((::Class_3_06F526E9A8E279F3*(*)(::Class_2_E23E4CB2769CC93F*))((::PBYTE)hIl2Cpp + CLASS_1_E8D3B7B9181B8985_METHOD_1_D2D989E975355716_OFFSET))(a1);
	}
};
