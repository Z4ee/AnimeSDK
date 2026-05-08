#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2E40794F1F3D2434.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_4AE7493B9D2F3504_METHOD_3_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0xEAB33B0)
#define CLASS_3_4AE7493B9D2F3504_METHOD_3_369F47CCB61A607A_OFFSET UNITYSDK_OFFSET(0xEAB34F0)
#define CLASS_3_4AE7493B9D2F3504_METHOD_3_5C2158E850B02732_OFFSET UNITYSDK_OFFSET(0xEAB3410)
#define CLASS_3_4AE7493B9D2F3504_METHOD_3_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0xEAB33C0)
#define CLASS_3_4AE7493B9D2F3504_METHOD_3_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0xEAB34E0)
#define CLASS_3_4AE7493B9D2F3504__CTOR_OFFSET UNITYSDK_OFFSET(0xEAB33D0)

inline static constexpr unsigned int Class_3_4AE7493B9D2F3504_TypeDefinitionIndex = 40289;

class Class_3_4AE7493B9D2F3504 : public ::Class_2_2E40794F1F3D2434
{
public:
	::System::Action_2<::System::Int32, ::System::String*>* Field_3_1; // 0x30
	::System::String* Field_3_0; // 0x38

	::System::Void _ctor(::System::Action_2<::System::Int32, ::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_3_4AE7493B9D2F3504__CTOR_OFFSET))(this, a1);
	}

	::System::String* Method_3_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4AE7493B9D2F3504_METHOD_3_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_3_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_4AE7493B9D2F3504_METHOD_3_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::Void Method_3_5C2158E850B02732()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4AE7493B9D2F3504_METHOD_3_5C2158E850B02732_OFFSET))(this);
	}

	::System::Void Method_3_D0CD9A971CA3B1CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4AE7493B9D2F3504_METHOD_3_D0CD9A971CA3B1CF_OFFSET))(this);
	}

	::System::Void Method_3_369F47CCB61A607A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_4AE7493B9D2F3504_METHOD_3_369F47CCB61A607A_OFFSET))(this, a1);
	}
};
