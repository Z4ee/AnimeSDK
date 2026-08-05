#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B4138D32F75250D2.h"
#include "unitysdk/Enum_3_F8C71DEE253F84BD.h"
#include "unitysdk/Foundation/Singleton_1.h"
#include "unitysdk/Struct_2_57C422EDEAAA7766.h"
#include "unitysdk/System/Nullable_1.h"

class Class_0_16E4307DCC419505_298;
class Class_0_16E4307DCC419505_299;
class Class_2_CEC585D0736F3660;
namespace Nap::NapECS { class EcsEntity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_2_1ADF54EB5CC40944_METHOD_2_2017E88E60DC0974_OFFSET UNITYSDK_OFFSET(0x1235E2B0)
#define CLASS_2_1ADF54EB5CC40944_METHOD_2_24A3EC48F1AA3C1B_OFFSET UNITYSDK_OFFSET(0x1235DE20)
#define CLASS_2_1ADF54EB5CC40944_METHOD_2_54A2A9CCF0F5BBB0_OFFSET UNITYSDK_OFFSET(0x1235DFD0)
#define CLASS_2_1ADF54EB5CC40944_METHOD_2_92D350081DF4CFEE_OFFSET UNITYSDK_OFFSET(0x1235E810)
#define CLASS_2_1ADF54EB5CC40944_METHOD_2_B455ED73ED9E4AEC_OFFSET UNITYSDK_OFFSET(0x1235E6F0)
#define CLASS_2_1ADF54EB5CC40944_METHOD_2_B61F8A5281A885C4_OFFSET UNITYSDK_OFFSET(0x1235E600)
#define CLASS_2_1ADF54EB5CC40944_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1235EB50)
#define CLASS_2_1ADF54EB5CC40944__CTOR_OFFSET UNITYSDK_OFFSET(0x1235DDA0)

inline static constexpr unsigned int Class_2_1ADF54EB5CC40944_TypeDefinitionIndex = 84736;

class Class_2_1ADF54EB5CC40944 : public ::Foundation::Singleton_1<::Class_2_1ADF54EB5CC40944*>
{
public:
	::Class_0_16E4307DCC419505_299* Field_2_1; // 0x10
	::System::Collections::Generic::Queue_1<::Class_0_16E4307DCC419505_298*>* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1ADF54EB5CC40944__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_24A3EC48F1AA3C1B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_1ADF54EB5CC40944_METHOD_2_24A3EC48F1AA3C1B_OFFSET))(this, a1);
	}

	::System::Void Method_2_54A2A9CCF0F5BBB0(::System::Int32 a1, ::System::Nullable_1<::System::Boolean> a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + CLASS_2_1ADF54EB5CC40944_METHOD_2_54A2A9CCF0F5BBB0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2017E88E60DC0974(::System::Int32 a1, ::Il2CppArray<::Struct_2_57C422EDEAAA7766>* a2, ::System::String* a3, ::Enum_3_F8C71DEE253F84BD a4, ::System::Action* a5, ::System::Action* a6, ::System::Action_1<::Class_2_CEC585D0736F3660*>* a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::Struct_2_57C422EDEAAA7766>*, ::System::String*, ::Enum_3_F8C71DEE253F84BD, ::System::Action*, ::System::Action*, ::System::Action_1<::Class_2_CEC585D0736F3660*>*))((::PBYTE)hIl2Cpp + CLASS_2_1ADF54EB5CC40944_METHOD_2_2017E88E60DC0974_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_B61F8A5281A885C4(::System::Nullable_1<::System::Boolean> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + CLASS_2_1ADF54EB5CC40944_METHOD_2_B61F8A5281A885C4_OFFSET))(this, a1);
	}

	::System::Void Method_2_B455ED73ED9E4AEC(::System::Nullable_1<::System::Boolean> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + CLASS_2_1ADF54EB5CC40944_METHOD_2_B455ED73ED9E4AEC_OFFSET))(this, a1);
	}

	::System::Void Method_2_92D350081DF4CFEE(::System::Int32 a1, ::Nap::NapECS::EcsEntity* a2, ::System::String* a3, ::Enum_3_B4138D32F75250D2 a4, ::System::Action* a5, ::System::Action* a6, ::System::Action_1<::Class_2_CEC585D0736F3660*>* a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Nap::NapECS::EcsEntity*, ::System::String*, ::Enum_3_B4138D32F75250D2, ::System::Action*, ::System::Action*, ::System::Action_1<::Class_2_CEC585D0736F3660*>*))((::PBYTE)hIl2Cpp + CLASS_2_1ADF54EB5CC40944_METHOD_2_92D350081DF4CFEE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1ADF54EB5CC40944_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}
};
