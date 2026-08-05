#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2E40794F1F3D2434.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_68588E3E94F7B9DE_METHOD_3_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1D32F580)
#define CLASS_3_68588E3E94F7B9DE_METHOD_3_5C2158E850B02732_OFFSET UNITYSDK_OFFSET(0x1D32F5E0)
#define CLASS_3_68588E3E94F7B9DE_METHOD_3_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x1D32F590)
#define CLASS_3_68588E3E94F7B9DE_METHOD_3_86143FF46EAE82B7_OFFSET UNITYSDK_OFFSET(0x1D32F6B0)
#define CLASS_3_68588E3E94F7B9DE_METHOD_3_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0x1D32F810)
#define CLASS_3_68588E3E94F7B9DE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D32F5A0)

inline static constexpr unsigned int Class_3_68588E3E94F7B9DE_TypeDefinitionIndex = 76394;

class Class_3_68588E3E94F7B9DE : public ::Class_2_2E40794F1F3D2434
{
public:
	::System::Action_2<::System::Int32, ::System::String*>* Field_3_0; // 0x30
	::System::String* Field_3_1; // 0x38

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

	::System::Void Method_3_5C2158E850B02732()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_68588E3E94F7B9DE_METHOD_3_5C2158E850B02732_OFFSET))(this);
	}

	::System::Void Method_3_86143FF46EAE82B7(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_68588E3E94F7B9DE_METHOD_3_86143FF46EAE82B7_OFFSET))(this, a1);
	}

	::System::Void Method_3_D0CD9A971CA3B1CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_68588E3E94F7B9DE_METHOD_3_D0CD9A971CA3B1CF_OFFSET))(this);
	}
};
