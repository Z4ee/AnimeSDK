#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2E40794F1F3D2434.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_68588E3E94F7B9DE_METHOD_3_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x12B84490)
#define CLASS_3_68588E3E94F7B9DE_METHOD_3_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x12B844F0)
#define CLASS_3_68588E3E94F7B9DE_METHOD_3_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x12B844A0)
#define CLASS_3_68588E3E94F7B9DE_METHOD_3_864A95C3701A8778_OFFSET UNITYSDK_OFFSET(0x12B84630)
#define CLASS_3_68588E3E94F7B9DE_METHOD_3_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0x12B84620)
#define CLASS_3_68588E3E94F7B9DE__CTOR_OFFSET UNITYSDK_OFFSET(0x12B844B0)

inline static constexpr unsigned int Class_3_68588E3E94F7B9DE_TypeDefinitionIndex = 45485;

class Class_3_68588E3E94F7B9DE : public ::Class_2_2E40794F1F3D2434
{
public:
	::System::Action_2<::System::Int32, ::System::String*>* Field_3_1; // 0x30
	::System::String* Field_3_0; // 0x38

	::System::Void _ctor(::System::Action_2<::System::Int32, ::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_3_68588E3E94F7B9DE__CTOR_OFFSET))(this, a1);
	}

	::System::String* Method_3_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_68588E3E94F7B9DE_METHOD_3_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_3_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_68588E3E94F7B9DE_METHOD_3_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::Void Method_3_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_68588E3E94F7B9DE_METHOD_3_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_3_D0CD9A971CA3B1CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_68588E3E94F7B9DE_METHOD_3_D0CD9A971CA3B1CF_OFFSET))(this);
	}

	::System::Void Method_3_864A95C3701A8778(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_68588E3E94F7B9DE_METHOD_3_864A95C3701A8778_OFFSET))(this, a1);
	}
};
