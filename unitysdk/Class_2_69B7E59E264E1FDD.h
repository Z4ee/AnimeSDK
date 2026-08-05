#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace System { class String; }

#define CLASS_2_69B7E59E264E1FDD_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x14A3D3A0)
#define CLASS_2_69B7E59E264E1FDD_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x14A3D4B0)
#define CLASS_2_69B7E59E264E1FDD_METHOD_2_BBE2D28D8A6AFB06_OFFSET UNITYSDK_OFFSET(0x14A3D670)
#define CLASS_2_69B7E59E264E1FDD_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x14A3D5E0)
#define CLASS_2_69B7E59E264E1FDD_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14A3D540)
#define CLASS_2_69B7E59E264E1FDD__CCTOR_OFFSET UNITYSDK_OFFSET(0x14A3D430)
#define CLASS_2_69B7E59E264E1FDD__CTOR_OFFSET UNITYSDK_OFFSET(0x14A3D4A0)

inline static constexpr unsigned int Class_2_69B7E59E264E1FDD_TypeDefinitionIndex = 48389;

class Class_2_69B7E59E264E1FDD : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_6 = 0xDB; // 0x0
	::System::String* Field_2_0; // 0x20
	::System::String* Field_2_7; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_69B7E59E264E1FDD__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_69B7E59E264E1FDD__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_69B7E59E264E1FDD_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_69B7E59E264E1FDD_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_69B7E59E264E1FDD_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_69B7E59E264E1FDD_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_BBE2D28D8A6AFB06(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_69B7E59E264E1FDD_METHOD_2_BBE2D28D8A6AFB06_OFFSET))(this, a1, a2);
	}
};
