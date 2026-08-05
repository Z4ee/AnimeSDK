#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Enum_3_8C29D9D64DF78BEB.h"

namespace System { class String; }

#define CLASS_2_1E38D983F69618D6_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1457ADE0)
#define CLASS_2_1E38D983F69618D6_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x1457AD50)
#define CLASS_2_1E38D983F69618D6_METHOD_2_67E7F31263ED4179_OFFSET UNITYSDK_OFFSET(0x1457AEB0)
#define CLASS_2_1E38D983F69618D6_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1457AE20)
#define CLASS_2_1E38D983F69618D6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1457ABC0)
#define CLASS_2_1E38D983F69618D6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1457ACD0)
#define CLASS_2_1E38D983F69618D6__CTOR_OFFSET UNITYSDK_OFFSET(0x1457AD40)

inline static constexpr unsigned int Class_2_1E38D983F69618D6_TypeDefinitionIndex = 42455;

class Class_2_1E38D983F69618D6 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_7 = 0x6F; // 0x0
	::System::String* Field_2_0; // 0x20
	::System::UInt32 Field_2_3; // 0x28
	::Enum_3_8C29D9D64DF78BEB Field_2_1; // 0x2C
	::System::UInt32 Field_2_2; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_1E38D983F69618D6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1E38D983F69618D6__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1E38D983F69618D6_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1E38D983F69618D6_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1E38D983F69618D6_METHOD_2_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1E38D983F69618D6_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_67E7F31263ED4179(::System::UInt32 a1, ::Enum_3_8C29D9D64DF78BEB a2, ::System::UInt32 a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Enum_3_8C29D9D64DF78BEB, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_1E38D983F69618D6_METHOD_2_67E7F31263ED4179_OFFSET))(this, a1, a2, a3, a4);
	}
};
