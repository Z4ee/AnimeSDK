#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace System { class String; }

#define CLASS_2_BE11F4E848E95621_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x14AD62D0)
#define CLASS_2_BE11F4E848E95621_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14AD6400)
#define CLASS_2_BE11F4E848E95621_METHOD_2_E3790DE890785A99_OFFSET UNITYSDK_OFFSET(0x14AD6360)
#define CLASS_2_BE11F4E848E95621__CCTOR_OFFSET UNITYSDK_OFFSET(0x14AD6250)
#define CLASS_2_BE11F4E848E95621__CTOR_OFFSET UNITYSDK_OFFSET(0x14AD62C0)

inline static constexpr unsigned int Class_2_BE11F4E848E95621_TypeDefinitionIndex = 82398;

class Class_2_BE11F4E848E95621 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_5 = 0x137; // 0x0
	::System::String* Field_2_0; // 0x20
	::System::String* Field_2_1; // 0x28
	::System::Single Field_2_4; // 0x30
	::System::UInt32 Field_2_2; // 0x34
	::System::Boolean Field_2_3; // 0x38

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_BE11F4E848E95621__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE11F4E848E95621__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE11F4E848E95621_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_E3790DE890785A99(::System::UInt32 a1, ::System::String* a2, ::System::String* a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::String*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BE11F4E848E95621_METHOD_2_E3790DE890785A99_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE11F4E848E95621_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
