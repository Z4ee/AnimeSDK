#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_181D41F8DF280D99_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x18210880)
#define CLASS_4_181D41F8DF280D99_METHOD_4_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1820F770)
#define CLASS_4_181D41F8DF280D99_METHOD_4_6991AB73453EDA74_OFFSET UNITYSDK_OFFSET(0x1820FD20)
#define CLASS_4_181D41F8DF280D99_METHOD_4_8BFDD487310FC989_OFFSET UNITYSDK_OFFSET(0x182106B0)
#define CLASS_4_181D41F8DF280D99_METHOD_4_C43DD7AFEEA2B827_OFFSET UNITYSDK_OFFSET(0x1820F920)
#define CLASS_4_181D41F8DF280D99__CTOR_OFFSET UNITYSDK_OFFSET(0x18210520)

inline static constexpr unsigned int Class_4_181D41F8DF280D99_TypeDefinitionIndex = 73286;

class Class_4_181D41F8DF280D99 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_4_7; // 0x28
	::Class_3_B537A0AA78803363* Field_4_6; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::Collections::Generic::List_1<::System::String*>*>* Field_4_0; // 0x38
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_181D41F8DF280D99__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_181D41F8DF280D99_METHOD_4_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_4_C43DD7AFEEA2B827(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_181D41F8DF280D99_METHOD_4_C43DD7AFEEA2B827_OFFSET))(this, a1);
	}

	static ::UnityEngine::GameObject* Method_4_6991AB73453EDA74(::Foundation::ViewObject::ViewObjectHandle a1, ::System::Boolean& a2)
	{
		return ((::UnityEngine::GameObject*(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_4_181D41F8DF280D99_METHOD_4_6991AB73453EDA74_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_4_8BFDD487310FC989(::Foundation::ViewObject::ViewObjectHandle a1)
	{
		return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + CLASS_4_181D41F8DF280D99_METHOD_4_8BFDD487310FC989_OFFSET))(a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_181D41F8DF280D99_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
