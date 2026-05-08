#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Enum_3_D2BBBB758B896E04_2.h"

namespace System { class String; }

#define CLASS_2_2EB7007F00A054AA_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xFB74240)
#define CLASS_2_2EB7007F00A054AA_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0xFB74370)
#define CLASS_2_2EB7007F00A054AA_METHOD_2_980BE9EA2E0E0735_OFFSET UNITYSDK_OFFSET(0xFB74530)
#define CLASS_2_2EB7007F00A054AA_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xFB74490)
#define CLASS_2_2EB7007F00A054AA_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xFB74400)
#define CLASS_2_2EB7007F00A054AA__CCTOR_OFFSET UNITYSDK_OFFSET(0xFB742E0)
#define CLASS_2_2EB7007F00A054AA__CTOR_OFFSET UNITYSDK_OFFSET(0xFB74350)

inline static constexpr unsigned int Class_2_2EB7007F00A054AA_TypeDefinitionIndex = 76481;

class Class_2_2EB7007F00A054AA : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_3 = 0xC2; // 0x0
	::System::String* Field_2_0; // 0x20
	::Enum_3_D2BBBB758B896E04_2 Field_2_2; // 0x28
	::System::Int32 Field_2_1; // 0x2C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_2EB7007F00A054AA__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2EB7007F00A054AA__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2EB7007F00A054AA_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2EB7007F00A054AA_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2EB7007F00A054AA_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2EB7007F00A054AA_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_980BE9EA2E0E0735(::System::String* a1, ::System::Int32 a2, ::Enum_3_D2BBBB758B896E04_2 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::Enum_3_D2BBBB758B896E04_2))((::PBYTE)hIl2Cpp + CLASS_2_2EB7007F00A054AA_METHOD_2_980BE9EA2E0E0735_OFFSET))(this, a1, a2, a3);
	}
};
