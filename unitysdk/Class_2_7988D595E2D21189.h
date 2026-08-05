#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace System { class String; }

#define CLASS_2_7988D595E2D21189_METHOD_2_3A9A1B892B25C836_OFFSET UNITYSDK_OFFSET(0xBD94A80)
#define CLASS_2_7988D595E2D21189_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xBD94900)
#define CLASS_2_7988D595E2D21189_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0xBD949F0)
#define CLASS_2_7988D595E2D21189_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xBD94BA0)
#define CLASS_2_7988D595E2D21189_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBD94B10)
#define CLASS_2_7988D595E2D21189__CCTOR_OFFSET UNITYSDK_OFFSET(0xBD94970)
#define CLASS_2_7988D595E2D21189__CTOR_OFFSET UNITYSDK_OFFSET(0xBD949E0)

inline static constexpr unsigned int Class_2_7988D595E2D21189_TypeDefinitionIndex = 67578;

class Class_2_7988D595E2D21189 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_7 = 0x6B; // 0x0
	::System::String* Field_2_0; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7988D595E2D21189__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7988D595E2D21189__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7988D595E2D21189_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7988D595E2D21189_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_3A9A1B892B25C836(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7988D595E2D21189_METHOD_2_3A9A1B892B25C836_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7988D595E2D21189_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7988D595E2D21189_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}
};
