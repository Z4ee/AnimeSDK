#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CB66E39D32BF42FF_3;
class Class_1_E2ED5CFC288D1227;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E2FCD378D023E2B1_METHOD_1_186C9B8E1E52BBED_OFFSET UNITYSDK_OFFSET(0xBAA3010)
#define CLASS_1_E2FCD378D023E2B1_METHOD_1_7DD77ED1A82B5E35_OFFSET UNITYSDK_OFFSET(0xBAA3170)
#define CLASS_1_E2FCD378D023E2B1_METHOD_1_CBBB30978BA34B92_OFFSET UNITYSDK_OFFSET(0xBAA30C0)
#define CLASS_1_E2FCD378D023E2B1__CTOR_OFFSET UNITYSDK_OFFSET(0xBAA2B50)

inline static constexpr unsigned int Class_1_E2FCD378D023E2B1_TypeDefinitionIndex = 79457;

class Class_1_E2FCD378D023E2B1 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_CB66E39D32BF42FF_3*>* JOJNHBFJNNH; // 0x10
	::System::Collections::Generic::List_1<::Class_1_CB66E39D32BF42FF_3*>* GFIMIKPFFLC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2FCD378D023E2B1__CTOR_OFFSET))(this);
	}

	::Class_1_CB66E39D32BF42FF_3* Method_1_CBBB30978BA34B92(::System::UInt32 a1)
	{
		return ((::Class_1_CB66E39D32BF42FF_3*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E2FCD378D023E2B1_METHOD_1_CBBB30978BA34B92_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_1_CB66E39D32BF42FF_3*>* Method_1_7DD77ED1A82B5E35()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_1_CB66E39D32BF42FF_3*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2FCD378D023E2B1_METHOD_1_7DD77ED1A82B5E35_OFFSET))(this);
	}

	static ::Class_1_CB66E39D32BF42FF_3* Method_1_186C9B8E1E52BBED(::Class_1_E2ED5CFC288D1227* a1)
	{
		return ((::Class_1_CB66E39D32BF42FF_3*(*)(::Class_1_E2ED5CFC288D1227*))((::PBYTE)hIl2Cpp + CLASS_1_E2FCD378D023E2B1_METHOD_1_186C9B8E1E52BBED_OFFSET))(a1);
	}
};
