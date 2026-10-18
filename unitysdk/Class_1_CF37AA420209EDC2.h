#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_0_16E4307DCC419505_831;
class Class_0_16E4307DCC419505_843;
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CF37AA420209EDC2_METHOD_1_06A2B758FCB8A24E_OFFSET UNITYSDK_OFFSET(0xC7372D0)
#define CLASS_1_CF37AA420209EDC2_METHOD_1_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0xC736B80)
#define CLASS_1_CF37AA420209EDC2_METHOD_1_9D6550E82E2CC48A_1_OFFSET UNITYSDK_OFFSET(0xC7370B0)
#define CLASS_1_CF37AA420209EDC2_METHOD_1_9D6550E82E2CC48A_OFFSET UNITYSDK_OFFSET(0xC736E90)
#define CLASS_1_CF37AA420209EDC2_METHOD_1_A129AFEF3077F064_OFFSET UNITYSDK_OFFSET(0xC736C60)
#define CLASS_1_CF37AA420209EDC2__CTOR_OFFSET UNITYSDK_OFFSET(0xC7374D0)

inline static constexpr unsigned int Class_1_CF37AA420209EDC2_TypeDefinitionIndex = 62378;

class Class_1_CF37AA420209EDC2 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_843*>* PDENFEFCAGN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF37AA420209EDC2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_843* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_843*))((::PBYTE)hIl2Cpp + CLASS_1_CF37AA420209EDC2_METHOD_1_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void Method_1_A129AFEF3077F064(::Class_0_16E4307DCC419505_831* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_831*))((::PBYTE)hIl2Cpp + CLASS_1_CF37AA420209EDC2_METHOD_1_A129AFEF3077F064_OFFSET))(this, a1);
	}

	::System::Void Method_1_9D6550E82E2CC48A(::Class_0_16E4307DCC419505_831* a1, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2Int>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_831*, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_CF37AA420209EDC2_METHOD_1_9D6550E82E2CC48A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9D6550E82E2CC48A_1(::Class_0_16E4307DCC419505_831* a1, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2Int>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_831*, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_CF37AA420209EDC2_METHOD_1_9D6550E82E2CC48A_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_06A2B758FCB8A24E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF37AA420209EDC2_METHOD_1_06A2B758FCB8A24E_OFFSET))(this);
	}
};
