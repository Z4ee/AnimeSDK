#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DF71DA21872A8AF5.h"
#include "unitysdk/Struct_2_9C9516EC1DA3BB28_1.h"
#include "unitysdk/Struct_2_EDB3A19738BDAA61.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_38;
class Class_1_72B4371C7CF9949D;
class Class_1_AC0D027A24B2C21B;
class Class_1_FD31E4216DD30F97;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BD9167A8130E1325_METHOD_1_2AAA57F47F01CBC7_OFFSET UNITYSDK_OFFSET(0x12127F70)
#define CLASS_1_BD9167A8130E1325_METHOD_1_9198A89E36357F79_OFFSET UNITYSDK_OFFSET(0x121274A0)
#define CLASS_1_BD9167A8130E1325_METHOD_1_9BBE19DD54D4734E_OFFSET UNITYSDK_OFFSET(0x121279E0)
#define CLASS_1_BD9167A8130E1325_METHOD_1_A6B7B334E4BA4288_OFFSET UNITYSDK_OFFSET(0x12127C60)
#define CLASS_1_BD9167A8130E1325_METHOD_1_BECAF378AEB39D8B_OFFSET UNITYSDK_OFFSET(0x12128140)
#define CLASS_1_BD9167A8130E1325_METHOD_1_CAB09625B03CCCA7_OFFSET UNITYSDK_OFFSET(0x12128350)
#define CLASS_1_BD9167A8130E1325__CCTOR_OFFSET UNITYSDK_OFFSET(0x12126B60)
#define CLASS_1_BD9167A8130E1325__CTOR_OFFSET UNITYSDK_OFFSET(0x121273D0)

inline static constexpr unsigned int Class_1_BD9167A8130E1325_TypeDefinitionIndex = 69986;

class Class_1_BD9167A8130E1325 : public ::System::Object
{
public:
	static ::Il2CppArray<::Class_1_AC0D027A24B2C21B*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::Class_1_AC0D027A24B2C21B*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BD9167A8130E1325_TypeDefinitionIndex)->GetStaticField(0x4C920);
	}
	::Il2CppArray<::Class_1_43BD383C98B4C0C5_38*>* Field_1_5; // 0x10
	::Class_1_72B4371C7CF9949D* Field_1_6; // 0x18
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_38*>* Field_1_4; // 0x20
	::Struct_2_9C9516EC1DA3BB28_1 Field_1_7; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BD9167A8130E1325__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD9167A8130E1325__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9BBE19DD54D4734E(::System::Collections::Generic::List_1<::Class_1_FD31E4216DD30F97*>* a1, ::Struct_2_EDB3A19738BDAA61& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_FD31E4216DD30F97*>*, ::Struct_2_EDB3A19738BDAA61&))((::PBYTE)hIl2Cpp + CLASS_1_BD9167A8130E1325_METHOD_1_9BBE19DD54D4734E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BECAF378AEB39D8B(::Enum_3_DF71DA21872A8AF5 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DF71DA21872A8AF5, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BD9167A8130E1325_METHOD_1_BECAF378AEB39D8B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_CAB09625B03CCCA7(::Class_1_FD31E4216DD30F97* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FD31E4216DD30F97*))((::PBYTE)hIl2Cpp + CLASS_1_BD9167A8130E1325_METHOD_1_CAB09625B03CCCA7_OFFSET))(this, a1);
	}

	::Class_1_72B4371C7CF9949D* Method_1_2AAA57F47F01CBC7(::System::Collections::Generic::List_1<::Class_1_FD31E4216DD30F97*>* a1, ::System::Collections::Generic::List_1<::Class_1_FD31E4216DD30F97*>* a2)
	{
		return ((::Class_1_72B4371C7CF9949D*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_FD31E4216DD30F97*>*, ::System::Collections::Generic::List_1<::Class_1_FD31E4216DD30F97*>*))((::PBYTE)hIl2Cpp + CLASS_1_BD9167A8130E1325_METHOD_1_2AAA57F47F01CBC7_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_38*>* Method_1_A6B7B334E4BA4288()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_38*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD9167A8130E1325_METHOD_1_A6B7B334E4BA4288_OFFSET))(this);
	}

	::System::Void Method_1_9198A89E36357F79()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD9167A8130E1325_METHOD_1_9198A89E36357F79_OFFSET))(this);
	}
};
