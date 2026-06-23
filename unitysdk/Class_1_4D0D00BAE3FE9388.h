#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_004403B81CB2D8D4.h"
#include "unitysdk/Struct_2_E89D96144D6E93F8_1.h"
#include "unitysdk/System/Object.h"

class Class_1_A00AB6F61FB75BAD;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4D0D00BAE3FE9388_METHOD_1_03B1BF2F2F8589FD_OFFSET UNITYSDK_OFFSET(0x12DF1340)
#define CLASS_1_4D0D00BAE3FE9388_METHOD_1_CB71C0B5D6586B71_OFFSET UNITYSDK_OFFSET(0x12DF0FA0)
#define CLASS_1_4D0D00BAE3FE9388_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x12DF1380)
#define CLASS_1_4D0D00BAE3FE9388_METHOD_1_E1D9E1460DEDD7B2_OFFSET UNITYSDK_OFFSET(0x12DF10B0)
#define CLASS_1_4D0D00BAE3FE9388__CCTOR_OFFSET UNITYSDK_OFFSET(0x12DF0EB0)

inline static constexpr unsigned int Class_1_4D0D00BAE3FE9388_TypeDefinitionIndex = 59315;

class Class_1_4D0D00BAE3FE9388 : public ::System::Object
{
public:
	static ::Class_1_A00AB6F61FB75BAD** StaticGet_Field_1_1()
	{
		return (::Class_1_A00AB6F61FB75BAD**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D0D00BAE3FE9388_TypeDefinitionIndex)->GetStaticField(0x48E80);
	}
	static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D0D00BAE3FE9388_TypeDefinitionIndex)->GetStaticField(0x48E88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D0D00BAE3FE9388__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_CB71C0B5D6586B71(::Struct_2_E89D96144D6E93F8_1 a1)
	{
		return ((::System::Boolean(*)(::Struct_2_E89D96144D6E93F8_1))((::PBYTE)hIl2Cpp + CLASS_1_4D0D00BAE3FE9388_METHOD_1_CB71C0B5D6586B71_OFFSET))(a1);
	}

	static ::Enum_3_004403B81CB2D8D4 Method_1_E1D9E1460DEDD7B2(::System::String* a1)
	{
		return ((::Enum_3_004403B81CB2D8D4(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4D0D00BAE3FE9388_METHOD_1_E1D9E1460DEDD7B2_OFFSET))(a1);
	}

	static ::System::Void Method_1_03B1BF2F2F8589FD(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4D0D00BAE3FE9388_METHOD_1_03B1BF2F2F8589FD_OFFSET))(a1);
	}

	static ::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D0D00BAE3FE9388_METHOD_1_D0BD1377F2594D33_OFFSET))();
	}
};
