#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class INapLevel_CommonStateChangeEffect;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_F57E33E6DE3553D0_METHOD_4_0F7B1BD3C324514D_OFFSET UNITYSDK_OFFSET(0x1773FE70)
#define CLASS_4_F57E33E6DE3553D0_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x17740C30)
#define CLASS_4_F57E33E6DE3553D0_METHOD_4_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1773FCC0)
#define CLASS_4_F57E33E6DE3553D0_METHOD_4_7EB92509DFEBBD19_OFFSET UNITYSDK_OFFSET(0x1773FF20)
#define CLASS_4_F57E33E6DE3553D0_METHOD_4_F2546D120481A667_OFFSET UNITYSDK_OFFSET(0x177409B0)
#define CLASS_4_F57E33E6DE3553D0__CCTOR_OFFSET UNITYSDK_OFFSET(0x17740920)
#define CLASS_4_F57E33E6DE3553D0__CTOR_OFFSET UNITYSDK_OFFSET(0x177407C0)

inline static constexpr unsigned int Class_4_F57E33E6DE3553D0_TypeDefinitionIndex = 62484;

class Class_4_F57E33E6DE3553D0 : public ::Class_3_F3948D237059FA7A
{
public:
	static ::System::Collections::Generic::List_1<::INapLevel_CommonStateChangeEffect*>** StaticGet_Field_4_4()
	{
		return (::System::Collections::Generic::List_1<::INapLevel_CommonStateChangeEffect*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_F57E33E6DE3553D0_TypeDefinitionIndex)->GetStaticField(0x44070);
	}
	::Class_4_F91115D9A1F02F5F<::System::Boolean>* Field_4_0; // 0x28
	::Class_4_F91115D9A1F02F5F<::Foundation::ViewObject::ViewObjectHandle>* Field_4_3; // 0x30
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_4_2; // 0x38
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_4_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F57E33E6DE3553D0__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_F57E33E6DE3553D0__CCTOR_OFFSET))();
	}

	::System::Void Method_4_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F57E33E6DE3553D0_METHOD_4_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_4_0F7B1BD3C324514D(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_F57E33E6DE3553D0_METHOD_4_0F7B1BD3C324514D_OFFSET))(this, a1);
	}

	::System::Void Method_4_7EB92509DFEBBD19(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_F57E33E6DE3553D0_METHOD_4_7EB92509DFEBBD19_OFFSET))(this, a1);
	}

	static ::System::Void Method_4_F2546D120481A667(::UnityEngine::Transform* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Collections::Generic::List_1<::INapLevel_CommonStateChangeEffect*>* a4)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::INapLevel_CommonStateChangeEffect*>*))((::PBYTE)hIl2Cpp + CLASS_4_F57E33E6DE3553D0_METHOD_4_F2546D120481A667_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F57E33E6DE3553D0_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
