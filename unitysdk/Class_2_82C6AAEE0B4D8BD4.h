#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Enum_3_ECCA5279390647E2.h"

class Class_1_1CDA382D823F8E80;
namespace System { class String; }

#define CLASS_2_82C6AAEE0B4D8BD4_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x169B5D80)
#define CLASS_2_82C6AAEE0B4D8BD4_METHOD_2_5B3D957D579ACCCB_OFFSET UNITYSDK_OFFSET(0x169B5E10)
#define CLASS_2_82C6AAEE0B4D8BD4_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x169B5ED0)
#define CLASS_2_82C6AAEE0B4D8BD4__CCTOR_OFFSET UNITYSDK_OFFSET(0x169B5D00)
#define CLASS_2_82C6AAEE0B4D8BD4__CTOR_OFFSET UNITYSDK_OFFSET(0x169B5D70)

inline static constexpr unsigned int Class_2_82C6AAEE0B4D8BD4_TypeDefinitionIndex = 65908;

class Class_2_82C6AAEE0B4D8BD4 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_5 = 0x5A; // 0x0
	::System::String* Field_2_7; // 0x20
	::System::UInt32 Field_2_0; // 0x28
	::Enum_3_ECCA5279390647E2 Field_2_6; // 0x2C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_82C6AAEE0B4D8BD4__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82C6AAEE0B4D8BD4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82C6AAEE0B4D8BD4_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_5B3D957D579ACCCB(::System::UInt32 a1, ::System::UInt32 a2, ::System::String* a3, ::Class_1_1CDA382D823F8E80* a4, ::Enum_3_ECCA5279390647E2 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*, ::Class_1_1CDA382D823F8E80*, ::Enum_3_ECCA5279390647E2))((::PBYTE)hIl2Cpp + CLASS_2_82C6AAEE0B4D8BD4_METHOD_2_5B3D957D579ACCCB_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82C6AAEE0B4D8BD4_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
