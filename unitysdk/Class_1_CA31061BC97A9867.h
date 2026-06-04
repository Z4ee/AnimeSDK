#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_CA31061BC97A9867_METHOD_1_0D510C2289902479_OFFSET UNITYSDK_OFFSET(0x141E31A0)
#define CLASS_1_CA31061BC97A9867_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x141E33E0)
#define CLASS_1_CA31061BC97A9867_METHOD_1_67C142C8523FB4DC_OFFSET UNITYSDK_OFFSET(0x141E3290)
#define CLASS_1_CA31061BC97A9867_METHOD_1_F24A112B56A2E4B4_OFFSET UNITYSDK_OFFSET(0x141E3420)
#define CLASS_1_CA31061BC97A9867__CTOR_OFFSET UNITYSDK_OFFSET(0x141E34C0)

inline static constexpr unsigned int Class_1_CA31061BC97A9867_TypeDefinitionIndex = 64950;

class Class_1_CA31061BC97A9867 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA31061BC97A9867__CTOR_OFFSET))(this);
	}

	static ::System::IntPtr Method_1_0D510C2289902479(::System::IntPtr a1, ::System::Boolean a2, ::System::String* a3)
	{
		return ((::System::IntPtr(*)(::System::IntPtr, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CA31061BC97A9867_METHOD_1_0D510C2289902479_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_67C142C8523FB4DC()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_CA31061BC97A9867_METHOD_1_67C142C8523FB4DC_OFFSET))();
	}

	static ::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_CA31061BC97A9867_METHOD_1_128774387667156B_OFFSET))();
	}

	static ::System::String* Method_1_F24A112B56A2E4B4()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_CA31061BC97A9867_METHOD_1_F24A112B56A2E4B4_OFFSET))();
	}
};
