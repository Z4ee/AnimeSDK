#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class MemoryStream; }

#define CLASS_1_7BEA553B07B2704F_CLASS_1_CCC1C8809C6DEBA3_METHOD_1_3AE0677A9DDEB1AE_OFFSET UNITYSDK_OFFSET(0xAC93DB0)
#define CLASS_1_7BEA553B07B2704F_CLASS_1_CCC1C8809C6DEBA3_METHOD_1_5354309BA2B69EB5_OFFSET UNITYSDK_OFFSET(0xAC93EA0)
#define CLASS_1_7BEA553B07B2704F_CLASS_1_CCC1C8809C6DEBA3__CTOR_OFFSET UNITYSDK_OFFSET(0xAC93D50)

inline static constexpr unsigned int Class_1_7BEA553B07B2704F_Class_1_CCC1C8809C6DEBA3_TypeDefinitionIndex = 60410;

class Class_1_7BEA553B07B2704F_Class_1_CCC1C8809C6DEBA3 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Byte>* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::System::Byte Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BEA553B07B2704F_CLASS_1_CCC1C8809C6DEBA3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3AE0677A9DDEB1AE(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7BEA553B07B2704F_CLASS_1_CCC1C8809C6DEBA3_METHOD_1_3AE0677A9DDEB1AE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5354309BA2B69EB5(::System::IO::MemoryStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::MemoryStream*))((::PBYTE)hIl2Cpp + CLASS_1_7BEA553B07B2704F_CLASS_1_CCC1C8809C6DEBA3_METHOD_1_5354309BA2B69EB5_OFFSET))(this, a1);
	}
};
