#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class HipplenBuilderStatus;
class HipplenBuilderTestAsset;
class HipplenBuilderTestModule_Class_1_3B89F61142059024;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HIPPLENBUILDERTESTMODULE_GETTESTSINDAY_OFFSET UNITYSDK_OFFSET(0x10C1D550)
#define HIPPLENBUILDERTESTMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x10C1B790)
#define HIPPLENBUILDERTESTMODULE_TAKETEST_OFFSET UNITYSDK_OFFSET(0x10C22330)
#define HIPPLENBUILDERTESTMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x10C294E0)

inline static constexpr unsigned int HipplenBuilderTestModule_TypeDefinitionIndex = 38121;

class HipplenBuilderTestModule : public ::UnityEngine::MonoBehaviour
{
public:
	::HipplenBuilderTestAsset* TestAsset; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::HipplenBuilderTestModule_Class_1_3B89F61142059024*>*>* TestDataDict; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* TestDates; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERTESTMODULE__CTOR_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERTESTMODULE_INIT_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::HipplenBuilderTestModule_Class_1_3B89F61142059024*>* GetTestsInDay(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::HipplenBuilderTestModule_Class_1_3B89F61142059024*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HIPPLENBUILDERTESTMODULE_GETTESTSINDAY_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Boolean>>* TakeTest(::System::Int32 a1, ::HipplenBuilderStatus* a2)
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Boolean>>*(*)(::PVOID, ::System::Int32, ::HipplenBuilderStatus*))((::PBYTE)hIl2Cpp + HIPPLENBUILDERTESTMODULE_TAKETEST_OFFSET))(this, a1, a2);
	}
};
