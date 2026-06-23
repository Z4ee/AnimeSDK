#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_AAD2B1B6FB741157.h"
#include "unitysdk/System/Object.h"

class Class_1_4EBEE16BD6C9526B;
class Class_1_8424267249A93588;
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define CLASS_1_4EBEE16BD6C9526B_CLASS_1_E858BCA163323478_METHOD_1_40FAA36EF536BE62_OFFSET UNITYSDK_OFFSET(0x167F4CD0)
#define CLASS_1_4EBEE16BD6C9526B_CLASS_1_E858BCA163323478_METHOD_1_80D0A8213B8C4091_OFFSET UNITYSDK_OFFSET(0x167F4970)
#define CLASS_1_4EBEE16BD6C9526B_CLASS_1_E858BCA163323478_METHOD_1_D24C4294507BECB4_OFFSET UNITYSDK_OFFSET(0x167F4CE0)
#define CLASS_1_4EBEE16BD6C9526B_CLASS_1_E858BCA163323478__CTOR_OFFSET UNITYSDK_OFFSET(0x167F4960)

inline static constexpr unsigned int Class_1_4EBEE16BD6C9526B_Class_1_E858BCA163323478_TypeDefinitionIndex = 62219;

class Class_1_4EBEE16BD6C9526B_Class_1_E858BCA163323478 : public ::System::Object
{
public:
	::System::Action_3<::Class_1_8424267249A93588*, ::System::Single, ::System::Single>* Field_1_3; // 0x10
	::Class_1_4EBEE16BD6C9526B* Field_1_2; // 0x18
	::System::Action* Field_1_0; // 0x20
	::System::Action* Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4EBEE16BD6C9526B_CLASS_1_E858BCA163323478__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_80D0A8213B8C4091(::Struct_2_AAD2B1B6FB741157 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_AAD2B1B6FB741157))((::PBYTE)hIl2Cpp + CLASS_1_4EBEE16BD6C9526B_CLASS_1_E858BCA163323478_METHOD_1_80D0A8213B8C4091_OFFSET))(this, a1);
	}

	::System::Void Method_1_40FAA36EF536BE62(::Class_1_8424267249A93588* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8424267249A93588*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4EBEE16BD6C9526B_CLASS_1_E858BCA163323478_METHOD_1_40FAA36EF536BE62_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D24C4294507BECB4(::Struct_2_AAD2B1B6FB741157 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_AAD2B1B6FB741157))((::PBYTE)hIl2Cpp + CLASS_1_4EBEE16BD6C9526B_CLASS_1_E858BCA163323478_METHOD_1_D24C4294507BECB4_OFFSET))(this, a1);
	}
};
