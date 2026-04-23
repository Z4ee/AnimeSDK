#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GameFramework/FileSystem/FileSystemAccess.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_257;
class Class_0_16E4307DCC419505_258;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B6AB0C80672082AB_METHOD_1_5009BD3C08788261_OFFSET UNITYSDK_OFFSET(0x18193CF0)
#define CLASS_1_B6AB0C80672082AB_METHOD_1_5179A0C343730C34_OFFSET UNITYSDK_OFFSET(0x18193EE0)
#define CLASS_1_B6AB0C80672082AB_METHOD_1_7D8266A828D178D6_OFFSET UNITYSDK_OFFSET(0x18193E20)
#define CLASS_1_B6AB0C80672082AB_METHOD_1_B6B23C3F89F7E6D9_OFFSET UNITYSDK_OFFSET(0x18193D50)
#define CLASS_1_B6AB0C80672082AB_METHOD_1_BA846ED21F952AA5_OFFSET UNITYSDK_OFFSET(0x18193E80)
#define CLASS_1_B6AB0C80672082AB_METHOD_1_BFBBE8A6FE167A6A_OFFSET UNITYSDK_OFFSET(0x18193C90)
#define CLASS_1_B6AB0C80672082AB_METHOD_1_C3CD12FEF189A78F_OFFSET UNITYSDK_OFFSET(0x18193F30)
#define CLASS_1_B6AB0C80672082AB_METHOD_1_D604770791021CCD_OFFSET UNITYSDK_OFFSET(0x18193DB0)
#define CLASS_1_B6AB0C80672082AB__CCTOR_OFFSET UNITYSDK_OFFSET(0x18193B60)

inline static constexpr unsigned int Class_1_B6AB0C80672082AB_TypeDefinitionIndex = 39601;

class Class_1_B6AB0C80672082AB : public ::System::Object
{
public:
	static ::Class_0_16E4307DCC419505_257** StaticGet_Field_1_0()
	{
		return (::Class_0_16E4307DCC419505_257**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B6AB0C80672082AB_TypeDefinitionIndex)->GetStaticField(0x1410);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B6AB0C80672082AB__CCTOR_OFFSET))();
	}

	static ::System::Int32 Method_1_BFBBE8A6FE167A6A()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_B6AB0C80672082AB_METHOD_1_BFBBE8A6FE167A6A_OFFSET))();
	}

	static ::System::Boolean Method_1_5009BD3C08788261(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B6AB0C80672082AB_METHOD_1_5009BD3C08788261_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_258* Method_1_B6B23C3F89F7E6D9(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_258*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B6AB0C80672082AB_METHOD_1_B6B23C3F89F7E6D9_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_258* Method_1_D604770791021CCD(::System::String* a1, ::GameFramework::FileSystem::FileSystemAccess a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::Class_0_16E4307DCC419505_258*(*)(::System::String*, ::GameFramework::FileSystem::FileSystemAccess, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B6AB0C80672082AB_METHOD_1_D604770791021CCD_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_0_16E4307DCC419505_258* Method_1_7D8266A828D178D6(::System::String* a1, ::GameFramework::FileSystem::FileSystemAccess a2)
	{
		return ((::Class_0_16E4307DCC419505_258*(*)(::System::String*, ::GameFramework::FileSystem::FileSystemAccess))((::PBYTE)hIl2Cpp + CLASS_1_B6AB0C80672082AB_METHOD_1_7D8266A828D178D6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BA846ED21F952AA5(::Class_0_16E4307DCC419505_258* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_258*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B6AB0C80672082AB_METHOD_1_BA846ED21F952AA5_OFFSET))(a1, a2);
	}

	static ::Il2CppArray<::Class_0_16E4307DCC419505_258*>* Method_1_5179A0C343730C34()
	{
		return ((::Il2CppArray<::Class_0_16E4307DCC419505_258*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B6AB0C80672082AB_METHOD_1_5179A0C343730C34_OFFSET))();
	}

	static ::System::Void Method_1_C3CD12FEF189A78F(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_258*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_258*>*))((::PBYTE)hIl2Cpp + CLASS_1_B6AB0C80672082AB_METHOD_1_C3CD12FEF189A78F_OFFSET))(a1);
	}
};
