#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

#define CLASS_2_2004E5E0604CA34A_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x11376890)
#define CLASS_2_2004E5E0604CA34A_METHOD_2_92E85BB94103C703_OFFSET UNITYSDK_OFFSET(0x113769B0)
#define CLASS_2_2004E5E0604CA34A_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11376920)
#define CLASS_2_2004E5E0604CA34A__CCTOR_OFFSET UNITYSDK_OFFSET(0x11376810)
#define CLASS_2_2004E5E0604CA34A__CTOR_OFFSET UNITYSDK_OFFSET(0x11376880)

inline static constexpr unsigned int Class_2_2004E5E0604CA34A_TypeDefinitionIndex = 82486;

class Class_2_2004E5E0604CA34A : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_3 = 0x6D; // 0x0
	::System::UInt64 Field_2_0; // 0x20
	::System::Int32 Field_2_2; // 0x28
	::System::Int32 Field_2_1; // 0x2C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_2004E5E0604CA34A__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2004E5E0604CA34A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2004E5E0604CA34A_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2004E5E0604CA34A_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_92E85BB94103C703(::System::UInt64 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2004E5E0604CA34A_METHOD_2_92E85BB94103C703_OFFSET))(this, a1, a2, a3);
	}
};
