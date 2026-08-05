#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace System { class String; }

#define CLASS_2_24A33FAC739F6159_METHOD_2_2D7ED3F57EAE9D7D_OFFSET UNITYSDK_OFFSET(0x11B3A060)
#define CLASS_2_24A33FAC739F6159_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x11B39F40)
#define CLASS_2_24A33FAC739F6159_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11B39FD0)
#define CLASS_2_24A33FAC739F6159__CCTOR_OFFSET UNITYSDK_OFFSET(0x11B39EC0)
#define CLASS_2_24A33FAC739F6159__CTOR_OFFSET UNITYSDK_OFFSET(0x11B39F30)

inline static constexpr unsigned int Class_2_24A33FAC739F6159_TypeDefinitionIndex = 40595;

class Class_2_24A33FAC739F6159 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_7 = 0x4F; // 0x0
	::System::String* Field_2_2; // 0x20
	::System::String* Field_2_1; // 0x28
	::System::Int32 Field_2_0; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_24A33FAC739F6159__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24A33FAC739F6159__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24A33FAC739F6159_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24A33FAC739F6159_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_2D7ED3F57EAE9D7D(::System::String* a1, ::System::String* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_24A33FAC739F6159_METHOD_2_2D7ED3F57EAE9D7D_OFFSET))(this, a1, a2, a3);
	}
};
