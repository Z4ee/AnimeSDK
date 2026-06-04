#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/BindingFlags.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class PropertyInfo; }

#define CLASS_1_5CA0D4267BF31DB3_METHOD_1_01EBC6CE7CC2CD4E_OFFSET UNITYSDK_OFFSET(0x18921A50)
#define CLASS_1_5CA0D4267BF31DB3_METHOD_1_1197427A3BD5D3E8_OFFSET UNITYSDK_OFFSET(0x18921B60)
#define CLASS_1_5CA0D4267BF31DB3_METHOD_1_18634FBCD736FA1B_OFFSET UNITYSDK_OFFSET(0x189217C0)
#define CLASS_1_5CA0D4267BF31DB3_METHOD_1_213501DB6D89FED7_OFFSET UNITYSDK_OFFSET(0x18921230)
#define CLASS_1_5CA0D4267BF31DB3_METHOD_1_2EACBB0A6A5AE45E_OFFSET UNITYSDK_OFFSET(0x18921910)
#define CLASS_1_5CA0D4267BF31DB3_METHOD_1_4A9D2362D5152371_OFFSET UNITYSDK_OFFSET(0x189216F0)
#define CLASS_1_5CA0D4267BF31DB3_METHOD_1_A6955E9A6431CFBB_OFFSET UNITYSDK_OFFSET(0x18921E90)
#define CLASS_1_5CA0D4267BF31DB3_METHOD_1_C161D8775BC11F6A_OFFSET UNITYSDK_OFFSET(0x189222E0)
#define CLASS_1_5CA0D4267BF31DB3_METHOD_1_D0D60F40D8FDD24C_OFFSET UNITYSDK_OFFSET(0x18920F10)
#define CLASS_1_5CA0D4267BF31DB3_METHOD_1_D1325A8E6ABE3D3F_OFFSET UNITYSDK_OFFSET(0x189212E0)
#define CLASS_1_5CA0D4267BF31DB3_METHOD_1_D37860E52A0F32F5_OFFSET UNITYSDK_OFFSET(0x18920E60)
#define CLASS_1_5CA0D4267BF31DB3_METHOD_1_EB6801012C28DB08_OFFSET UNITYSDK_OFFSET(0x18921550)
#define CLASS_1_5CA0D4267BF31DB3__CCTOR_OFFSET UNITYSDK_OFFSET(0x189224C0)
#define CLASS_1_5CA0D4267BF31DB3__CTOR_OFFSET UNITYSDK_OFFSET(0x189224B0)

inline static constexpr unsigned int Class_1_5CA0D4267BF31DB3_TypeDefinitionIndex = 38402;

class Class_1_5CA0D4267BF31DB3 : public ::System::Object
{
public:
	static ::System::Reflection::BindingFlags* StaticGet_Field_1_0()
	{
		return (::System::Reflection::BindingFlags*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5CA0D4267BF31DB3_TypeDefinitionIndex)->GetStaticField(0x9170);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CA0D4267BF31DB3__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5CA0D4267BF31DB3__CCTOR_OFFSET))();
	}

	static ::Il2CppArray<::System::Reflection::FieldInfo*>* Method_1_D37860E52A0F32F5(::System::Type* a1, ::System::Boolean a2)
	{
		return ((::Il2CppArray<::System::Reflection::FieldInfo*>*(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5CA0D4267BF31DB3_METHOD_1_D37860E52A0F32F5_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>* Method_1_D0D60F40D8FDD24C(::System::Type* a1, ::System::Boolean a2)
	{
		return ((::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>*(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5CA0D4267BF31DB3_METHOD_1_D0D60F40D8FDD24C_OFFSET))(a1, a2);
	}

	static ::Il2CppArray<::System::Reflection::PropertyInfo*>* Method_1_213501DB6D89FED7(::System::Type* a1, ::System::Boolean a2)
	{
		return ((::Il2CppArray<::System::Reflection::PropertyInfo*>*(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5CA0D4267BF31DB3_METHOD_1_213501DB6D89FED7_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>* Method_1_D1325A8E6ABE3D3F(::System::Type* a1, ::System::Boolean a2)
	{
		return ((::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>*(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5CA0D4267BF31DB3_METHOD_1_D1325A8E6ABE3D3F_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::System::Reflection::MemberInfo*>* Method_1_EB6801012C28DB08(::System::Type* a1, ::System::Boolean a2)
	{
		return ((::System::Collections::Generic::List_1<::System::Reflection::MemberInfo*>*(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5CA0D4267BF31DB3_METHOD_1_EB6801012C28DB08_OFFSET))(a1, a2);
	}

	static ::System::Reflection::MemberInfo* Method_1_4A9D2362D5152371(::System::Type* a1, ::System::String* a2)
	{
		return ((::System::Reflection::MemberInfo*(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5CA0D4267BF31DB3_METHOD_1_4A9D2362D5152371_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_18634FBCD736FA1B(::System::Reflection::MemberInfo* a1, ::System::Object* a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::System::Reflection::MemberInfo*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5CA0D4267BF31DB3_METHOD_1_18634FBCD736FA1B_OFFSET))(a1, a2, a3);
	}

	static ::System::Object* Method_1_2EACBB0A6A5AE45E(::System::Reflection::MemberInfo* a1, ::System::Object* a2)
	{
		return ((::System::Object*(*)(::System::Reflection::MemberInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5CA0D4267BF31DB3_METHOD_1_2EACBB0A6A5AE45E_OFFSET))(a1, a2);
	}

	static ::System::Type* Method_1_01EBC6CE7CC2CD4E(::System::Reflection::MemberInfo* a1)
	{
		return ((::System::Type*(*)(::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + CLASS_1_5CA0D4267BF31DB3_METHOD_1_01EBC6CE7CC2CD4E_OFFSET))(a1);
	}

	static ::System::Object* Method_1_1197427A3BD5D3E8(::System::Type* a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::System::Object*(*)(::System::Type*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_5CA0D4267BF31DB3_METHOD_1_1197427A3BD5D3E8_OFFSET))(a1, a2);
	}

	static ::System::Object* Method_1_A6955E9A6431CFBB(::System::Object* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
	{
		return ((::System::Object*(*)(::System::Object*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_5CA0D4267BF31DB3_METHOD_1_A6955E9A6431CFBB_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_C161D8775BC11F6A(::System::Object* a1)
	{
		return ((::System::Int32(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5CA0D4267BF31DB3_METHOD_1_C161D8775BC11F6A_OFFSET))(a1);
	}
};
