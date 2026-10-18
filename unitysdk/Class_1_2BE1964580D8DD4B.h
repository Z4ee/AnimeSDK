#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C6C5256FBDC1500F_1;
class Class_2_17EDF3520C9FC3DE;
class Class_3_99BC749707F2A8AC;
namespace Entitas { template <typename T> class IGroup_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2BE1964580D8DD4B_EXECUTE_OFFSET UNITYSDK_OFFSET(0xF89C9F0)
#define CLASS_1_2BE1964580D8DD4B_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xF89C8F0)
#define CLASS_1_2BE1964580D8DD4B_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xF89C890)
#define CLASS_1_2BE1964580D8DD4B_METHOD_1_3B3CB613FB8EFF3B_OFFSET UNITYSDK_OFFSET(0xF89CCA0)
#define CLASS_1_2BE1964580D8DD4B_METHOD_1_685A5F0FD3648432_OFFSET UNITYSDK_OFFSET(0xF89CBE0)
#define CLASS_1_2BE1964580D8DD4B__CTOR_OFFSET UNITYSDK_OFFSET(0xF89C880)

inline static constexpr unsigned int Class_1_2BE1964580D8DD4B_TypeDefinitionIndex = 76660;

class Class_1_2BE1964580D8DD4B : public ::System::Object
{
public:
	::Class_1_C6C5256FBDC1500F_1* FKINCGODJEP; // 0x10
	::Entitas::IGroup_1<::Class_2_17EDF3520C9FC3DE*>* LPDMBHGIAPJ; // 0x18
	::Class_3_99BC749707F2A8AC* PDENFEFCAGN; // 0x20

	::System::Void _ctor(::Class_1_C6C5256FBDC1500F_1* a1, ::Class_3_99BC749707F2A8AC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C6C5256FBDC1500F_1*, ::Class_3_99BC749707F2A8AC*))((::PBYTE)hIl2Cpp + CLASS_1_2BE1964580D8DD4B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BE1964580D8DD4B_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BE1964580D8DD4B_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BE1964580D8DD4B_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_685A5F0FD3648432(::Class_2_17EDF3520C9FC3DE* a1, ::System::Collections::Generic::List_1<::Class_2_17EDF3520C9FC3DE*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_17EDF3520C9FC3DE*, ::System::Collections::Generic::List_1<::Class_2_17EDF3520C9FC3DE*>*))((::PBYTE)hIl2Cpp + CLASS_1_2BE1964580D8DD4B_METHOD_1_685A5F0FD3648432_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3B3CB613FB8EFF3B(::Class_2_17EDF3520C9FC3DE* a1, ::System::Collections::Generic::List_1<::Class_2_17EDF3520C9FC3DE*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_17EDF3520C9FC3DE*, ::System::Collections::Generic::List_1<::Class_2_17EDF3520C9FC3DE*>*))((::PBYTE)hIl2Cpp + CLASS_1_2BE1964580D8DD4B_METHOD_1_3B3CB613FB8EFF3B_OFFSET))(this, a1, a2);
	}
};
