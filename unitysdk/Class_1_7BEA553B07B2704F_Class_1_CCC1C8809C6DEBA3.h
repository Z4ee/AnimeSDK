#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class MemoryStream; }

#define CLASS_1_7BEA553B07B2704F_CLASS_1_CCC1C8809C6DEBA3_METHOD_1_268061F657D92FB9_OFFSET UNITYSDK_OFFSET(0x1A74F510)
#define CLASS_1_7BEA553B07B2704F_CLASS_1_CCC1C8809C6DEBA3_METHOD_1_3AE0677A9DDEB1AE_OFFSET UNITYSDK_OFFSET(0x1A74F420)
#define CLASS_1_7BEA553B07B2704F_CLASS_1_CCC1C8809C6DEBA3__CTOR_OFFSET UNITYSDK_OFFSET(0x1A74F3C0)

inline static constexpr unsigned int Class_1_7BEA553B07B2704F_Class_1_CCC1C8809C6DEBA3_TypeDefinitionIndex = 64685;

class Class_1_7BEA553B07B2704F_Class_1_CCC1C8809C6DEBA3 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Byte>* PCPCFNGGCOE; // 0x10
	::System::Byte KCFPFKNIBDG; // 0x18
	::System::Int32 ELBNJACJCDK; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BEA553B07B2704F_CLASS_1_CCC1C8809C6DEBA3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3AE0677A9DDEB1AE(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7BEA553B07B2704F_CLASS_1_CCC1C8809C6DEBA3_METHOD_1_3AE0677A9DDEB1AE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_268061F657D92FB9(::System::IO::MemoryStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::MemoryStream*))((::PBYTE)hIl2Cpp + CLASS_1_7BEA553B07B2704F_CLASS_1_CCC1C8809C6DEBA3_METHOD_1_268061F657D92FB9_OFFSET))(this, a1);
	}
};
