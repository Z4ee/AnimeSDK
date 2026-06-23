#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Class_2_8092EF5027021CFC_Enum_3_6D96842382FA13CD.h"

#define CLASS_2_8092EF5027021CFC_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x15CCA450)
#define CLASS_2_8092EF5027021CFC_METHOD_2_750CBE059B86CF9A_OFFSET UNITYSDK_OFFSET(0x15CCA570)
#define CLASS_2_8092EF5027021CFC_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15CCA4E0)
#define CLASS_2_8092EF5027021CFC__CCTOR_OFFSET UNITYSDK_OFFSET(0x15CCA3D0)
#define CLASS_2_8092EF5027021CFC__CTOR_OFFSET UNITYSDK_OFFSET(0x15CCA440)

inline static constexpr unsigned int Class_2_8092EF5027021CFC_TypeDefinitionIndex = 51444;

class Class_2_8092EF5027021CFC : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_3 = 0xED; // 0x0
	::System::UInt32 Field_2_0; // 0x20
	::System::UInt32 Field_2_1; // 0x24
	::Class_2_8092EF5027021CFC_Enum_3_6D96842382FA13CD Field_2_2; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8092EF5027021CFC__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8092EF5027021CFC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8092EF5027021CFC_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8092EF5027021CFC_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_750CBE059B86CF9A(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::Class_2_8092EF5027021CFC_Enum_3_6D96842382FA13CD a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::Class_2_8092EF5027021CFC_Enum_3_6D96842382FA13CD))((::PBYTE)hIl2Cpp + CLASS_2_8092EF5027021CFC_METHOD_2_750CBE059B86CF9A_OFFSET))(this, a1, a2, a3, a4);
	}
};
