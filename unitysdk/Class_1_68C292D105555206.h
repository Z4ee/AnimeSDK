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

#define CLASS_1_68C292D105555206_METHOD_1_09855EF7ECE1DF6B_OFFSET UNITYSDK_OFFSET(0x18C22D90)
#define CLASS_1_68C292D105555206_METHOD_1_1DCB869FAEA33A63_OFFSET UNITYSDK_OFFSET(0x18C22440)
#define CLASS_1_68C292D105555206_METHOD_1_32DF683491F9B47A_OFFSET UNITYSDK_OFFSET(0x18C22950)
#define CLASS_1_68C292D105555206_METHOD_1_4A9B73AB008CFADB_OFFSET UNITYSDK_OFFSET(0x18C22330)
#define CLASS_1_68C292D105555206_METHOD_1_5F58ABDBD3434DA6_OFFSET UNITYSDK_OFFSET(0x18C23300)
#define CLASS_1_68C292D105555206_METHOD_1_6A1101D200DF5C46_OFFSET UNITYSDK_OFFSET(0x18C22AA0)
#define CLASS_1_68C292D105555206_METHOD_1_9527F8CCAC9D7CA9_OFFSET UNITYSDK_OFFSET(0x18C21E20)
#define CLASS_1_68C292D105555206_METHOD_1_A6955E9A6431CFBB_OFFSET UNITYSDK_OFFSET(0x18C23880)
#define CLASS_1_68C292D105555206_METHOD_1_AEE870D0339C21CD_OFFSET UNITYSDK_OFFSET(0x18C21F30)
#define CLASS_1_68C292D105555206_METHOD_1_CEE99100599A7D78_OFFSET UNITYSDK_OFFSET(0x18C23E20)
#define CLASS_1_68C292D105555206_METHOD_1_E2509720FFEB6CAD_OFFSET UNITYSDK_OFFSET(0x18C23080)
#define CLASS_1_68C292D105555206_METHOD_1_EB6801012C28DB08_OFFSET UNITYSDK_OFFSET(0x18C227B0)
#define CLASS_1_68C292D105555206__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C24070)
#define CLASS_1_68C292D105555206__CTOR_OFFSET UNITYSDK_OFFSET(0x18C24060)

inline static constexpr unsigned int Class_1_68C292D105555206_TypeDefinitionIndex = 39210;

class Class_1_68C292D105555206 : public ::System::Object
{
public:
	static ::System::Reflection::BindingFlags* StaticGet_Field_1_0()
	{
		return (::System::Reflection::BindingFlags*)Il2CppClass::FromTypeDefinitionIndex(Class_1_68C292D105555206_TypeDefinitionIndex)->GetStaticField(0x7A80);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68C292D105555206__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_68C292D105555206__CCTOR_OFFSET))();
	}

	static ::Il2CppArray<::System::Reflection::FieldInfo*>* Method_1_9527F8CCAC9D7CA9(::System::Type* a1, ::System::Boolean a2)
	{
		return ((::Il2CppArray<::System::Reflection::FieldInfo*>*(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_68C292D105555206_METHOD_1_9527F8CCAC9D7CA9_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>* Method_1_AEE870D0339C21CD(::System::Type* a1, ::System::Boolean a2)
	{
		return ((::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>*(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_68C292D105555206_METHOD_1_AEE870D0339C21CD_OFFSET))(a1, a2);
	}

	static ::Il2CppArray<::System::Reflection::PropertyInfo*>* Method_1_4A9B73AB008CFADB(::System::Type* a1, ::System::Boolean a2)
	{
		return ((::Il2CppArray<::System::Reflection::PropertyInfo*>*(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_68C292D105555206_METHOD_1_4A9B73AB008CFADB_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>* Method_1_1DCB869FAEA33A63(::System::Type* a1, ::System::Boolean a2)
	{
		return ((::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>*(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_68C292D105555206_METHOD_1_1DCB869FAEA33A63_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::System::Reflection::MemberInfo*>* Method_1_EB6801012C28DB08(::System::Type* a1, ::System::Boolean a2)
	{
		return ((::System::Collections::Generic::List_1<::System::Reflection::MemberInfo*>*(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_68C292D105555206_METHOD_1_EB6801012C28DB08_OFFSET))(a1, a2);
	}

	static ::System::Reflection::MemberInfo* Method_1_32DF683491F9B47A(::System::Type* a1, ::System::String* a2)
	{
		return ((::System::Reflection::MemberInfo*(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_68C292D105555206_METHOD_1_32DF683491F9B47A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6A1101D200DF5C46(::System::Reflection::MemberInfo* a1, ::System::Object* a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::System::Reflection::MemberInfo*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_68C292D105555206_METHOD_1_6A1101D200DF5C46_OFFSET))(a1, a2, a3);
	}

	static ::System::Object* Method_1_09855EF7ECE1DF6B(::System::Reflection::MemberInfo* a1, ::System::Object* a2)
	{
		return ((::System::Object*(*)(::System::Reflection::MemberInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_68C292D105555206_METHOD_1_09855EF7ECE1DF6B_OFFSET))(a1, a2);
	}

	static ::System::Type* Method_1_E2509720FFEB6CAD(::System::Reflection::MemberInfo* a1)
	{
		return ((::System::Type*(*)(::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + CLASS_1_68C292D105555206_METHOD_1_E2509720FFEB6CAD_OFFSET))(a1);
	}

	static ::System::Object* Method_1_5F58ABDBD3434DA6(::System::Type* a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::System::Object*(*)(::System::Type*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_68C292D105555206_METHOD_1_5F58ABDBD3434DA6_OFFSET))(a1, a2);
	}

	static ::System::Object* Method_1_A6955E9A6431CFBB(::System::Object* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
	{
		return ((::System::Object*(*)(::System::Object*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_68C292D105555206_METHOD_1_A6955E9A6431CFBB_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_CEE99100599A7D78(::System::Object* a1)
	{
		return ((::System::Int32(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_68C292D105555206_METHOD_1_CEE99100599A7D78_OFFSET))(a1);
	}
};
