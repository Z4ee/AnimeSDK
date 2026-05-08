#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace System { class String; }

#define CLASS_2_8B28339703F44472_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0xF5CEF90)
#define CLASS_2_8B28339703F44472_METHOD_2_46FADA273D811721_OFFSET UNITYSDK_OFFSET(0xF5CEE90)
#define CLASS_2_8B28339703F44472_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0xF5CEE00)
#define CLASS_2_8B28339703F44472_METHOD_2_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0xF5CEEF0)
#define CLASS_2_8B28339703F44472_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xF5CEF00)
#define CLASS_2_8B28339703F44472__CCTOR_OFFSET UNITYSDK_OFFSET(0xF5CED80)
#define CLASS_2_8B28339703F44472__CTOR_OFFSET UNITYSDK_OFFSET(0xF5CEDF0)

inline static constexpr unsigned int Class_2_8B28339703F44472_TypeDefinitionIndex = 49198;

class Class_2_8B28339703F44472 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_1 = 0x112; // 0x0
	::System::String* Field_2_0; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8B28339703F44472__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B28339703F44472__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B28339703F44472_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_46FADA273D811721(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8B28339703F44472_METHOD_2_46FADA273D811721_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8B28339703F44472_METHOD_2_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B28339703F44472_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B28339703F44472_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}
};
