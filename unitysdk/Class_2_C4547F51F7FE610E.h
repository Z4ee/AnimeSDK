#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

class Class_0_16E4307DCC419505_413;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }

#define CLASS_2_C4547F51F7FE610E_METHOD_2_1DDD10252C795DC3_OFFSET UNITYSDK_OFFSET(0x15465D10)
#define CLASS_2_C4547F51F7FE610E_METHOD_2_2F809989C4EE835D_OFFSET UNITYSDK_OFFSET(0x15465F60)
#define CLASS_2_C4547F51F7FE610E_METHOD_2_420601DEBBE296C1_OFFSET UNITYSDK_OFFSET(0x15465290)
#define CLASS_2_C4547F51F7FE610E_METHOD_2_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x15465550)
#define CLASS_2_C4547F51F7FE610E_METHOD_2_AB1A8DFD378DB0BE_OFFSET UNITYSDK_OFFSET(0x154655D0)
#define CLASS_2_C4547F51F7FE610E_METHOD_2_D51A30EED4C31484_OFFSET UNITYSDK_OFFSET(0x15465A90)
#define CLASS_2_C4547F51F7FE610E_METHOD_2_EF8412AD8A9C06E6_OFFSET UNITYSDK_OFFSET(0x15465220)
#define CLASS_2_C4547F51F7FE610E_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x15465900)
#define CLASS_2_C4547F51F7FE610E_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x154653F0)
#define CLASS_2_C4547F51F7FE610E__CTOR_OFFSET UNITYSDK_OFFSET(0x15466030)

inline static constexpr unsigned int Class_2_C4547F51F7FE610E_TypeDefinitionIndex = 79529;

class Class_2_C4547F51F7FE610E : public ::Class_1_3713064DEE761936
{
public:
	::UnityEngine::Coroutine* BFOPPPBPDEE; // 0x20
	::System::Collections::Generic::List_1<::System::Boolean>* GHKGBMKFMJG; // 0x28
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_413*>* GFFAGJOELCH; // 0x30
	::System::Collections::Generic::List_1<::System::Boolean>* ENOOFJFOJEH; // 0x38
	::System::Single CDOLCLMGEBO; // 0x40
	::System::Int32 FDBCPLFBHEO; // 0x44
	::System::Int32 BBJLJNNLIOM; // 0x48
	::System::Boolean BEMMCKLJICI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4547F51F7FE610E__CTOR_OFFSET))(this);
	}

	static ::Class_2_C4547F51F7FE610E* Method_2_EF8412AD8A9C06E6(::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_413*>* a1, ::System::Single a2)
	{
		return ((::Class_2_C4547F51F7FE610E*(*)(::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_413*>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C4547F51F7FE610E_METHOD_2_EF8412AD8A9C06E6_OFFSET))(a1, a2);
	}

	static ::Class_2_C4547F51F7FE610E* Method_2_420601DEBBE296C1(::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_413*>* a1, ::System::Single a2, ::System::Int32 a3)
	{
		return ((::Class_2_C4547F51F7FE610E*(*)(::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_413*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C4547F51F7FE610E_METHOD_2_420601DEBBE296C1_OFFSET))(a1, a2, a3);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4547F51F7FE610E_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_2_AB1A8DFD378DB0BE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4547F51F7FE610E_METHOD_2_AB1A8DFD378DB0BE_OFFSET))(this);
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
