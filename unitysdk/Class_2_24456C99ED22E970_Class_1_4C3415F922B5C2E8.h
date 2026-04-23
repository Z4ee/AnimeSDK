#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/System/Object.h"

class AkCallbackInfo;
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_24456C99ED22E970_CLASS_1_4C3415F922B5C2E8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x96EF090)
#define CLASS_2_24456C99ED22E970_CLASS_1_4C3415F922B5C2E8_METHOD_1_2AD93D884165F6E1_OFFSET UNITYSDK_OFFSET(0x96F0390)
#define CLASS_2_24456C99ED22E970_CLASS_1_4C3415F922B5C2E8_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x96EFC90)
#define CLASS_2_24456C99ED22E970_CLASS_1_4C3415F922B5C2E8_METHOD_1_7778ABE51AFDB516_OFFSET UNITYSDK_OFFSET(0x96EFD50)
#define CLASS_2_24456C99ED22E970_CLASS_1_4C3415F922B5C2E8_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x96F0340)
#define CLASS_2_24456C99ED22E970_CLASS_1_4C3415F922B5C2E8_METHOD_1_F9E787FC38579693_OFFSET UNITYSDK_OFFSET(0x96F02A0)
#define CLASS_2_24456C99ED22E970_CLASS_1_4C3415F922B5C2E8__CTOR_OFFSET UNITYSDK_OFFSET(0x96EF550)

inline static constexpr unsigned int Class_2_24456C99ED22E970_Class_1_4C3415F922B5C2E8_TypeDefinitionIndex = 49206;

class Class_2_24456C99ED22E970_Class_1_4C3415F922B5C2E8 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::Func_1<::System::Single>* Field_1_0; // 0x18
	::System::UInt32 Field_1_3; // 0x20
	::System::Single Field_1_2; // 0x24

	::System::Void _ctor(::System::String* a1, ::System::Func_1<::System::Single>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Func_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_24456C99ED22E970_CLASS_1_4C3415F922B5C2E8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24456C99ED22E970_CLASS_1_4C3415F922B5C2E8_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_7778ABE51AFDB516()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24456C99ED22E970_CLASS_1_4C3415F922B5C2E8_METHOD_1_7778ABE51AFDB516_OFFSET))(this);
	}

	::System::Void Method_1_F9E787FC38579693(::System::UInt32 a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + CLASS_2_24456C99ED22E970_CLASS_1_4C3415F922B5C2E8_METHOD_1_F9E787FC38579693_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_2AD93D884165F6E1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_24456C99ED22E970_CLASS_1_4C3415F922B5C2E8_METHOD_1_2AD93D884165F6E1_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24456C99ED22E970_CLASS_1_4C3415F922B5C2E8_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24456C99ED22E970_CLASS_1_4C3415F922B5C2E8_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
