#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D375C91CCE5D3999;
class Class_2_604149159BD159AA;
class Class_2_F5A753D004F2488D;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
template <typename T> class Class_1_8CC15846339E7FB0;

#define CLASS_1_9A256C2CCBB5DB1F_METHOD_1_1A0D3B20C2CC55DC_OFFSET UNITYSDK_OFFSET(0x1238B2B0)
#define CLASS_1_9A256C2CCBB5DB1F_METHOD_1_2F3DE7A946E4C1A9_OFFSET UNITYSDK_OFFSET(0x1238B040)
#define CLASS_1_9A256C2CCBB5DB1F_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x1238AF40)
#define CLASS_1_9A256C2CCBB5DB1F_METHOD_1_B917C58B4E14AC1B_OFFSET UNITYSDK_OFFSET(0x1238A8C0)
#define CLASS_1_9A256C2CCBB5DB1F_METHOD_1_BF0B53B39E730600_OFFSET UNITYSDK_OFFSET(0x1238A5D0)
#define CLASS_1_9A256C2CCBB5DB1F_METHOD_1_DE97DCAD1CD6A8B2_OFFSET UNITYSDK_OFFSET(0x1238AE20)
#define CLASS_1_9A256C2CCBB5DB1F__CTOR_OFFSET UNITYSDK_OFFSET(0x1238A460)

inline static constexpr unsigned int Class_1_9A256C2CCBB5DB1F_TypeDefinitionIndex = 80732;

class Class_1_9A256C2CCBB5DB1F : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_3; // 0x10
	::Class_2_604149159BD159AA* Field_1_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_F5A753D004F2488D*>* Field_1_4; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_1; // 0x28
	::System::Boolean Field_1_2; // 0x30

	::System::Void _ctor(::Class_2_604149159BD159AA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_604149159BD159AA*))((::PBYTE)hIl2Cpp + CLASS_1_9A256C2CCBB5DB1F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_BF0B53B39E730600(::System::Int32 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_9A256C2CCBB5DB1F_METHOD_1_BF0B53B39E730600_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B917C58B4E14AC1B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A256C2CCBB5DB1F_METHOD_1_B917C58B4E14AC1B_OFFSET))(this);
	}

	::System::Void Method_1_DE97DCAD1CD6A8B2(::System::Int32 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_9A256C2CCBB5DB1F_METHOD_1_DE97DCAD1CD6A8B2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A256C2CCBB5DB1F_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_2F3DE7A946E4C1A9(::Class_1_8CC15846339E7FB0<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8CC15846339E7FB0<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_9A256C2CCBB5DB1F_METHOD_1_2F3DE7A946E4C1A9_OFFSET))(this, a1);
	}

	::System::Void Method_1_1A0D3B20C2CC55DC(::Class_1_D375C91CCE5D3999* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + CLASS_1_9A256C2CCBB5DB1F_METHOD_1_1A0D3B20C2CC55DC_OFFSET))(this, a1);
	}
};
