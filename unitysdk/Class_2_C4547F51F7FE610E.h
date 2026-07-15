#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

class Class_0_16E4307DCC419505_378;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }

#define CLASS_2_C4547F51F7FE610E_METHOD_2_1DDD10252C795DC3_OFFSET UNITYSDK_OFFSET(0x17014E30)
#define CLASS_2_C4547F51F7FE610E_METHOD_2_2F809989C4EE835D_OFFSET UNITYSDK_OFFSET(0x17015080)
#define CLASS_2_C4547F51F7FE610E_METHOD_2_420601DEBBE296C1_OFFSET UNITYSDK_OFFSET(0x17014420)
#define CLASS_2_C4547F51F7FE610E_METHOD_2_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x170146E0)
#define CLASS_2_C4547F51F7FE610E_METHOD_2_94C81405F83348DF_OFFSET UNITYSDK_OFFSET(0x17014760)
#define CLASS_2_C4547F51F7FE610E_METHOD_2_D51A30EED4C31484_OFFSET UNITYSDK_OFFSET(0x17014BB0)
#define CLASS_2_C4547F51F7FE610E_METHOD_2_EF8412AD8A9C06E6_OFFSET UNITYSDK_OFFSET(0x170143B0)
#define CLASS_2_C4547F51F7FE610E_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x17014A60)
#define CLASS_2_C4547F51F7FE610E_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x17014580)
#define CLASS_2_C4547F51F7FE610E__CTOR_OFFSET UNITYSDK_OFFSET(0x17015150)

inline static constexpr unsigned int Class_2_C4547F51F7FE610E_TypeDefinitionIndex = 75895;

class Class_2_C4547F51F7FE610E : public ::Class_1_3713064DEE761936
{
public:
	::System::Collections::Generic::List_1<::System::Boolean>* Field_2_0; // 0x20
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_378*>* Field_2_1; // 0x28
	::UnityEngine::Coroutine* Field_2_2; // 0x30
	::System::Collections::Generic::List_1<::System::Boolean>* Field_2_3; // 0x38
	::System::Single Field_2_4; // 0x40
	::System::Int32 Field_2_5; // 0x44
	::System::Boolean Field_2_6; // 0x48
	::System::Int32 Field_2_7; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4547F51F7FE610E__CTOR_OFFSET))(this);
	}

	static ::Class_2_C4547F51F7FE610E* Method_2_EF8412AD8A9C06E6(::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_378*>* a1, ::System::Single a2)
	{
		return ((::Class_2_C4547F51F7FE610E*(*)(::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_378*>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C4547F51F7FE610E_METHOD_2_EF8412AD8A9C06E6_OFFSET))(a1, a2);
	}

	static ::Class_2_C4547F51F7FE610E* Method_2_420601DEBBE296C1(::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_378*>* a1, ::System::Single a2, ::System::Int32 a3)
	{
		return ((::Class_2_C4547F51F7FE610E*(*)(::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_378*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C4547F51F7FE610E_METHOD_2_420601DEBBE296C1_OFFSET))(a1, a2, a3);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4547F51F7FE610E_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_2_94C81405F83348DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4547F51F7FE610E_METHOD_2_94C81405F83348DF_OFFSET))(this);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4547F51F7FE610E_ONCLEAR_OFFSET))(this);
	}

	::System::Void Method_2_D51A30EED4C31484(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C4547F51F7FE610E_METHOD_2_D51A30EED4C31484_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* Method_2_627C7524E98F4AC5()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4547F51F7FE610E_METHOD_2_627C7524E98F4AC5_OFFSET))(this);
	}

	::System::Void Method_2_2F809989C4EE835D(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C4547F51F7FE610E_METHOD_2_2F809989C4EE835D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1DDD10252C795DC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4547F51F7FE610E_METHOD_2_1DDD10252C795DC3_OFFSET))(this);
	}
};
