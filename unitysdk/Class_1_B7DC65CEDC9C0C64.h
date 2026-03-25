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

#define CLASS_1_B7DC65CEDC9C0C64_METHOD_1_01EBC6CE7CC2CD4E_OFFSET UNITYSDK_OFFSET(0x164F3540)
#define CLASS_1_B7DC65CEDC9C0C64_METHOD_1_1197427A3BD5D3E8_OFFSET UNITYSDK_OFFSET(0x164F3640)
#define CLASS_1_B7DC65CEDC9C0C64_METHOD_1_213501DB6D89FED7_OFFSET UNITYSDK_OFFSET(0x164F2C80)
#define CLASS_1_B7DC65CEDC9C0C64_METHOD_1_346C67E4E5FEA520_OFFSET UNITYSDK_OFFSET(0x164F2F70)
#define CLASS_1_B7DC65CEDC9C0C64_METHOD_1_4A9D2362D5152371_OFFSET UNITYSDK_OFFSET(0x164F31F0)
#define CLASS_1_B7DC65CEDC9C0C64_METHOD_1_5FE297443607E823_OFFSET UNITYSDK_OFFSET(0x164F2D30)
#define CLASS_1_B7DC65CEDC9C0C64_METHOD_1_62C0632CCB72AE18_OFFSET UNITYSDK_OFFSET(0x164F32C0)
#define CLASS_1_B7DC65CEDC9C0C64_METHOD_1_A6955E9A6431CFBB_OFFSET UNITYSDK_OFFSET(0x164F39E0)
#define CLASS_1_B7DC65CEDC9C0C64_METHOD_1_C161D8775BC11F6A_OFFSET UNITYSDK_OFFSET(0x164F3EA0)
#define CLASS_1_B7DC65CEDC9C0C64_METHOD_1_C568F18C3E144007_OFFSET UNITYSDK_OFFSET(0x164F3410)
#define CLASS_1_B7DC65CEDC9C0C64_METHOD_1_CE8369ABDF4E76AD_OFFSET UNITYSDK_OFFSET(0x164F2980)
#define CLASS_1_B7DC65CEDC9C0C64_METHOD_1_D37860E52A0F32F5_OFFSET UNITYSDK_OFFSET(0x164F2760)
#define CLASS_1_B7DC65CEDC9C0C64__CCTOR_OFFSET UNITYSDK_OFFSET(0x164F4080)
#define CLASS_1_B7DC65CEDC9C0C64__CTOR_OFFSET UNITYSDK_OFFSET(0x164F4070)

inline static constexpr unsigned int Class_1_B7DC65CEDC9C0C64_TypeDefinitionIndex = 31950;

class Class_1_B7DC65CEDC9C0C64 : public ::System::Object
{
public:
	static ::System::Reflection::BindingFlags* StaticGet_Field_1_0()
	{
		return (::System::Reflection::BindingFlags*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B7DC65CEDC9C0C64_TypeDefinitionIndex)->GetStaticField(0x11590);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7DC65CEDC9C0C64__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B7DC65CEDC9C0C64__CCTOR_OFFSET))();
	}

	static ::Il2CppArray<::System::Reflection::FieldInfo*>* Method_1_D37860E52A0F32F5(::System::Type* a1, ::System::Boolean a2)
	{
		return ((::Il2CppArray<::System::Reflection::FieldInfo*>*(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B7DC65CEDC9C0C64_METHOD_1_D37860E52A0F32F5_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>* Method_1_CE8369ABDF4E76AD(::System::Type* a1, ::System::Boolean a2)
	{
		return ((::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>*(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B7DC65CEDC9C0C64_METHOD_1_CE8369ABDF4E76AD_OFFSET))(a1, a2);
	}

	static ::Il2CppArray<::System::Reflection::PropertyInfo*>* Method_1_213501DB6D89FED7(::System::Type* a1, ::System::Boolean a2)
	{
		return ((::Il2CppArray<::System::Reflection::PropertyInfo*>*(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B7DC65CEDC9C0C64_METHOD_1_213501DB6D89FED7_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>* Method_1_5FE297443607E823(::System::Type* a1, ::System::Boolean a2)
	{
		return ((::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>*(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B7DC65CEDC9C0C64_METHOD_1_5FE297443607E823_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::System::Reflection::MemberInfo*>* Method_1_346C67E4E5FEA520(::System::Type* a1, ::System::Boolean a2)
	{
		return ((::System::Collections::Generic::List_1<::System::Reflection::MemberInfo*>*(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B7DC65CEDC9C0C64_METHOD_1_346C67E4E5FEA520_OFFSET))(a1, a2);
	}

	static ::System::Reflection::MemberInfo* Method_1_4A9D2362D5152371(::System::Type* a1, ::System::String* a2)
	{
		return ((::System::Reflection::MemberInfo*(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B7DC65CEDC9C0C64_METHOD_1_4A9D2362D5152371_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_62C0632CCB72AE18(::System::Reflection::MemberInfo* a1, ::System::Object* a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::System::Reflection::MemberInfo*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B7DC65CEDC9C0C64_METHOD_1_62C0632CCB72AE18_OFFSET))(a1, a2, a3);
	}

	static ::System::Object* Method_1_C568F18C3E144007(::System::Reflection::MemberInfo* a1, ::System::Object* a2)
	{
		return ((::System::Object*(*)(::System::Reflection::MemberInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B7DC65CEDC9C0C64_METHOD_1_C568F18C3E144007_OFFSET))(a1, a2);
	}

	static ::System::Type* Method_1_01EBC6CE7CC2CD4E(::System::Reflection::MemberInfo* a1)
	{
		return ((::System::Type*(*)(::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + CLASS_1_B7DC65CEDC9C0C64_METHOD_1_01EBC6CE7CC2CD4E_OFFSET))(a1);
	}

	static ::System::Object* Method_1_1197427A3BD5D3E8(::System::Type* a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::System::Object*(*)(::System::Type*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_B7DC65CEDC9C0C64_METHOD_1_1197427A3BD5D3E8_OFFSET))(a1, a2);
	}

	static ::System::Object* Method_1_A6955E9A6431CFBB(::System::Object* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
	{
		return ((::System::Object*(*)(::System::Object*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_B7DC65CEDC9C0C64_METHOD_1_A6955E9A6431CFBB_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_C161D8775BC11F6A(::System::Object* a1)
	{
		return ((::System::Int32(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B7DC65CEDC9C0C64_METHOD_1_C161D8775BC11F6A_OFFSET))(a1);
	}
};
