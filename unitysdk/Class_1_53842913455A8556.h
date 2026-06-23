#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_53842913455A8556_Struct_2_CF78FCC04B71BFFD.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectMetaFlags.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectReadyFlags.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_32D8C20D46CEFA3D.h"
#include "unitysdk/System/Object.h"

class Class_1_5FA9CCDDD9957726;
class Class_1_A0EE873EACD64B72;
namespace Foundation::ViewObject { template <typename T> class IViewObjectComponent_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_53842913455A8556_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11070170)
#define CLASS_1_53842913455A8556_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x11070340)
#define CLASS_1_53842913455A8556_METHOD_1_3C99C85FD9F6A5A0_OFFSET UNITYSDK_OFFSET(0x11070560)
#define CLASS_1_53842913455A8556_METHOD_1_66A07CB9A71365EE_OFFSET UNITYSDK_OFFSET(0x110702D0)
#define CLASS_1_53842913455A8556_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x11070330)
#define CLASS_1_53842913455A8556_METHOD_1_BE536A0A9C636F6F_OFFSET UNITYSDK_OFFSET(0x11070350)
#define CLASS_1_53842913455A8556_METHOD_1_E1513374C600EBEC_OFFSET UNITYSDK_OFFSET(0x11070B20)
#define CLASS_1_53842913455A8556_METHOD_1_E1BED5485EF1847F_OFFSET UNITYSDK_OFFSET(0x11070510)
#define CLASS_1_53842913455A8556__CTOR_OFFSET UNITYSDK_OFFSET(0x11070240)

inline static constexpr unsigned int Class_1_53842913455A8556_TypeDefinitionIndex = 73528;

class Class_1_53842913455A8556 : public ::System::Object
{
public:
	::Class_1_5FA9CCDDD9957726* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int64, ::Foundation::ViewObject::IViewObjectComponent_1<::Foundation::ViewObject::ViewObjectHandle>*>* Field_1_1; // 0x18
	::Struct_2_32D8C20D46CEFA3D Field_1_0; // 0x20
	::Foundation::ViewObject::EViewObjectMetaFlags Field_1_5; // 0x28
	::System::UInt32 Field_1_3; // 0x2C
	::Foundation::ViewObject::EViewObjectReadyFlags Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53842913455A8556__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53842913455A8556_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_66A07CB9A71365EE(::Class_1_5FA9CCDDD9957726* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FA9CCDDD9957726*))((::PBYTE)hIl2Cpp + CLASS_1_53842913455A8556_METHOD_1_66A07CB9A71365EE_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_5FA9CCDDD9957726* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FA9CCDDD9957726*))((::PBYTE)hIl2Cpp + CLASS_1_53842913455A8556_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_5FA9CCDDD9957726* Method_1_24748FC20F375725()
	{
		return ((::Class_1_5FA9CCDDD9957726*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53842913455A8556_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	static ::Class_1_53842913455A8556_Struct_2_CF78FCC04B71BFFD Method_1_BE536A0A9C636F6F(::Class_1_53842913455A8556*& a1)
	{
		return ((::Class_1_53842913455A8556_Struct_2_CF78FCC04B71BFFD(*)(::Class_1_53842913455A8556*&))((::PBYTE)hIl2Cpp + CLASS_1_53842913455A8556_METHOD_1_BE536A0A9C636F6F_OFFSET))(a1);
	}

	::System::Void Method_1_E1BED5485EF1847F(::Foundation::ViewObject::EViewObjectReadyFlags a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectReadyFlags))((::PBYTE)hIl2Cpp + CLASS_1_53842913455A8556_METHOD_1_E1BED5485EF1847F_OFFSET))(this, a1);
	}

	::Foundation::ViewObject::ViewObjectHandle Method_1_3C99C85FD9F6A5A0(::System::String* a1)
	{
		return ((::Foundation::ViewObject::ViewObjectHandle(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_53842913455A8556_METHOD_1_3C99C85FD9F6A5A0_OFFSET))(this, a1);
	}

	::System::Void Method_1_E1513374C600EBEC(::Class_1_A0EE873EACD64B72* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0EE873EACD64B72*))((::PBYTE)hIl2Cpp + CLASS_1_53842913455A8556_METHOD_1_E1513374C600EBEC_OFFSET))(this, a1);
	}
};
