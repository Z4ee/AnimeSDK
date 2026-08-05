#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class INapLevel_CommonStateChangeEffect;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_D44DF12FC1EA629F_METHOD_4_052FAABF5BB8BE83_OFFSET UNITYSDK_OFFSET(0x137C7C60)
#define CLASS_4_D44DF12FC1EA629F_METHOD_4_0F7B1BD3C324514D_OFFSET UNITYSDK_OFFSET(0x137C7BB0)
#define CLASS_4_D44DF12FC1EA629F_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x137C8890)
#define CLASS_4_D44DF12FC1EA629F_METHOD_4_3A4B5B4DF0786CDE_OFFSET UNITYSDK_OFFSET(0x137C8610)
#define CLASS_4_D44DF12FC1EA629F_METHOD_4_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x137C7A00)
#define CLASS_4_D44DF12FC1EA629F__CCTOR_OFFSET UNITYSDK_OFFSET(0x137C8580)
#define CLASS_4_D44DF12FC1EA629F__CTOR_OFFSET UNITYSDK_OFFSET(0x137C8420)

inline static constexpr unsigned int Class_4_D44DF12FC1EA629F_TypeDefinitionIndex = 83343;

class Class_4_D44DF12FC1EA629F : public ::Class_3_F3948D237059FA7A
{
public:
	static ::System::Collections::Generic::List_1<::INapLevel_CommonStateChangeEffect*>** StaticGet_Field_4_5()
	{
		return (::System::Collections::Generic::List_1<::INapLevel_CommonStateChangeEffect*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_D44DF12FC1EA629F_TypeDefinitionIndex)->GetStaticField(0x314A0);
	}
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_7; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_4_1; // 0x30
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_4_6; // 0x38
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D44DF12FC1EA629F__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_D44DF12FC1EA629F__CCTOR_OFFSET))();
	}

	::System::Void Method_4_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D44DF12FC1EA629F_METHOD_4_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_4_0F7B1BD3C324514D(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_D44DF12FC1EA629F_METHOD_4_0F7B1BD3C324514D_OFFSET))(this, a1);
	}

	static ::System::Void Method_4_3A4B5B4DF0786CDE(::UnityEngine::Transform* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Collections::Generic::List_1<::INapLevel_CommonStateChangeEffect*>* a4)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::INapLevel_CommonStateChangeEffect*>*))((::PBYTE)hIl2Cpp + CLASS_4_D44DF12FC1EA629F_METHOD_4_3A4B5B4DF0786CDE_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D44DF12FC1EA629F_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_4_052FAABF5BB8BE83(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_D44DF12FC1EA629F_METHOD_4_052FAABF5BB8BE83_OFFSET))(this, a1);
	}
};
