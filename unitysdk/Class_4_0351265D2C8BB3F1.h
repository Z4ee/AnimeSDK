#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Enum_3_44A8FD5EE475BAE7.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_CF43FA1E89397A1C;
namespace MoleMole { class AreaCategoryInOutSubsystem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_4_0351265D2C8BB3F1_METHOD_4_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x150700E0)
#define CLASS_4_0351265D2C8BB3F1_METHOD_4_112FA5734E1BAF32_OFFSET UNITYSDK_OFFSET(0x15070B80)
#define CLASS_4_0351265D2C8BB3F1_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x15070DD0)
#define CLASS_4_0351265D2C8BB3F1_METHOD_4_3F0F9592A0E917D4_OFFSET UNITYSDK_OFFSET(0x15070350)
#define CLASS_4_0351265D2C8BB3F1_METHOD_4_BCD458039E666E80_OFFSET UNITYSDK_OFFSET(0x150703C0)
#define CLASS_4_0351265D2C8BB3F1__CTOR_OFFSET UNITYSDK_OFFSET(0x15070940)

inline static constexpr unsigned int Class_4_0351265D2C8BB3F1_TypeDefinitionIndex = 83160;

class Class_4_0351265D2C8BB3F1 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::MoleMole::EntityHandle>* Field_4_2; // 0x28
	::Class_3_CF43FA1E89397A1C* Field_4_5; // 0x30
	::Class_4_8D3E479B491881B3<::System::Collections::Generic::List_1<::System::String*>*>* Field_4_7; // 0x38
	::Class_4_8D3E479B491881B3<::System::String*>* Field_4_0; // 0x40
	::Class_3_CF43FA1E89397A1C* Field_4_6; // 0x48
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_1; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0351265D2C8BB3F1__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0351265D2C8BB3F1_METHOD_4_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_4_3F0F9592A0E917D4(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_0351265D2C8BB3F1_METHOD_4_3F0F9592A0E917D4_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_BCD458039E666E80(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_0351265D2C8BB3F1_METHOD_4_BCD458039E666E80_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0351265D2C8BB3F1_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_4_112FA5734E1BAF32(::MoleMole::AreaCategoryInOutSubsystem* a1, ::Enum_3_44A8FD5EE475BAE7 a2, ::UnityEngine::Vector3 a3, ::Struct_2_FE9BD044832BC9C3 a4, ::Struct_2_FE9BD044832BC9C3 a5, ::System::Int32 a6, ::System::Int32 a7)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::MoleMole::AreaCategoryInOutSubsystem*, ::Enum_3_44A8FD5EE475BAE7, ::UnityEngine::Vector3, ::Struct_2_FE9BD044832BC9C3, ::Struct_2_FE9BD044832BC9C3, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_0351265D2C8BB3F1_METHOD_4_112FA5734E1BAF32_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}
};
