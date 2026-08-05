#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F20F6E60E29BD550.h"
#include "unitysdk/Struct_2_E89D96144D6E93F8.h"
#include "unitysdk/System/Object.h"

class Class_1_A00AB6F61FB75BAD;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4D0D00BAE3FE9388_METHOD_1_03B1BF2F2F8589FD_OFFSET UNITYSDK_OFFSET(0x1238A560)
#define CLASS_1_4D0D00BAE3FE9388_METHOD_1_7AB494B074FF3743_OFFSET UNITYSDK_OFFSET(0x1238A2D0)
#define CLASS_1_4D0D00BAE3FE9388_METHOD_1_CB71C0B5D6586B71_OFFSET UNITYSDK_OFFSET(0x1238A6A0)
#define CLASS_1_4D0D00BAE3FE9388_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x1238A5A0)
#define CLASS_1_4D0D00BAE3FE9388__CCTOR_OFFSET UNITYSDK_OFFSET(0x1238A1E0)

inline static constexpr unsigned int Class_1_4D0D00BAE3FE9388_TypeDefinitionIndex = 73413;

class Class_1_4D0D00BAE3FE9388 : public ::System::Object
{
public:
	static ::Class_1_A00AB6F61FB75BAD** StaticGet_Field_1_0()
	{
		return (::Class_1_A00AB6F61FB75BAD**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D0D00BAE3FE9388_TypeDefinitionIndex)->GetStaticField(0x3DFE0);
	}
	static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D0D00BAE3FE9388_TypeDefinitionIndex)->GetStaticField(0x3DFE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D0D00BAE3FE9388__CCTOR_OFFSET))();
	}

	static ::Enum_3_F20F6E60E29BD550 Method_1_7AB494B074FF3743(::System::String* a1)
	{
		return ((::Enum_3_F20F6E60E29BD550(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4D0D00BAE3FE9388_METHOD_1_7AB494B074FF3743_OFFSET))(a1);
	}

	static ::System::Void Method_1_03B1BF2F2F8589FD(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4D0D00BAE3FE9388_METHOD_1_03B1BF2F2F8589FD_OFFSET))(a1);
	}

	static ::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D0D00BAE3FE9388_METHOD_1_D0BD1377F2594D33_OFFSET))();
	}

	static ::System::Boolean Method_1_CB71C0B5D6586B71(::Struct_2_E89D96144D6E93F8 a1)
	{
		return ((::System::Boolean(*)(::Struct_2_E89D96144D6E93F8))((::PBYTE)hIl2Cpp + CLASS_1_4D0D00BAE3FE9388_METHOD_1_CB71C0B5D6586B71_OFFSET))(a1);
	}
};
