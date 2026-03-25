#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/System/Object.h"

class AkCallbackInfo;
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_AA043FFCFD4F06E8_CLASS_1_4C3415F922B5C2E8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8B5CE60)
#define CLASS_2_AA043FFCFD4F06E8_CLASS_1_4C3415F922B5C2E8_METHOD_1_2AD93D884165F6E1_OFFSET UNITYSDK_OFFSET(0x8B5E160)
#define CLASS_2_AA043FFCFD4F06E8_CLASS_1_4C3415F922B5C2E8_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x8B5DA60)
#define CLASS_2_AA043FFCFD4F06E8_CLASS_1_4C3415F922B5C2E8_METHOD_1_7778ABE51AFDB516_OFFSET UNITYSDK_OFFSET(0x8B5DB20)
#define CLASS_2_AA043FFCFD4F06E8_CLASS_1_4C3415F922B5C2E8_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8B5E110)
#define CLASS_2_AA043FFCFD4F06E8_CLASS_1_4C3415F922B5C2E8_METHOD_1_F9E787FC38579693_OFFSET UNITYSDK_OFFSET(0x8B5E070)
#define CLASS_2_AA043FFCFD4F06E8_CLASS_1_4C3415F922B5C2E8__CTOR_OFFSET UNITYSDK_OFFSET(0x8B5D320)

inline static constexpr unsigned int Class_2_AA043FFCFD4F06E8_Class_1_4C3415F922B5C2E8_TypeDefinitionIndex = 43211;

class Class_2_AA043FFCFD4F06E8_Class_1_4C3415F922B5C2E8 : public ::System::Object
{
public:
	::System::Func_1<::System::Single>* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::UInt32 Field_1_3; // 0x20
	::System::Single Field_1_2; // 0x24

	::System::Void _ctor(::System::String* a1, ::System::Func_1<::System::Single>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Func_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_AA043FFCFD4F06E8_CLASS_1_4C3415F922B5C2E8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA043FFCFD4F06E8_CLASS_1_4C3415F922B5C2E8_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_7778ABE51AFDB516()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA043FFCFD4F06E8_CLASS_1_4C3415F922B5C2E8_METHOD_1_7778ABE51AFDB516_OFFSET))(this);
	}

	::System::Void Method_1_F9E787FC38579693(::System::UInt32 a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + CLASS_2_AA043FFCFD4F06E8_CLASS_1_4C3415F922B5C2E8_METHOD_1_F9E787FC38579693_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_2AD93D884165F6E1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_AA043FFCFD4F06E8_CLASS_1_4C3415F922B5C2E8_METHOD_1_2AD93D884165F6E1_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA043FFCFD4F06E8_CLASS_1_4C3415F922B5C2E8_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA043FFCFD4F06E8_CLASS_1_4C3415F922B5C2E8_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
