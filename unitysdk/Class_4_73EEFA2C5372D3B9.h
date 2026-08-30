#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_A2BC57CDDA246645.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_8127A0E66BE3BB12;
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define CLASS_4_73EEFA2C5372D3B9_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBCC89C0)
#define CLASS_4_73EEFA2C5372D3B9_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBCC8AB0)
#define CLASS_4_73EEFA2C5372D3B9_METHOD_4_0D51D68C77FB9285_OFFSET UNITYSDK_OFFSET(0xBCC8430)
#define CLASS_4_73EEFA2C5372D3B9_METHOD_4_146F59774371ACCD_OFFSET UNITYSDK_OFFSET(0xBCC86A0)
#define CLASS_4_73EEFA2C5372D3B9_METHOD_4_5F08B426ADF31FF5_OFFSET UNITYSDK_OFFSET(0xBCC8270)
#define CLASS_4_73EEFA2C5372D3B9_METHOD_4_966F4DEFF092DDF3_OFFSET UNITYSDK_OFFSET(0xBCC8210)
#define CLASS_4_73EEFA2C5372D3B9_METHOD_4_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0xBCC88D0)
#define CLASS_4_73EEFA2C5372D3B9_METHOD_4_D5F28AFD29B39D22_OFFSET UNITYSDK_OFFSET(0xBCC8340)
#define CLASS_4_73EEFA2C5372D3B9__CTOR_OFFSET UNITYSDK_OFFSET(0xBCC8B80)
#define CLASS_4_73EEFA2C5372D3B9__ONBIND_OFFSET UNITYSDK_OFFSET(0xBCC81A0)

inline static constexpr unsigned int Class_4_73EEFA2C5372D3B9_TypeDefinitionIndex = 71229;

class Class_4_73EEFA2C5372D3B9 : public ::Class_3_A2BC57CDDA246645
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	// static const ::System::UInt32 KIMNFENLOGP = 0x2C8F; // 0x0
	::UnityEngine::Animator* CFNGLMDMENE; // 0x168

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_73EEFA2C5372D3B9__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_73EEFA2C5372D3B9__ONBIND_OFFSET))(this);
	}

	::System::Void Method_4_966F4DEFF092DDF3(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_4_73EEFA2C5372D3B9_METHOD_4_966F4DEFF092DDF3_OFFSET))(this, a1);
	}

	::System::Void Method_4_D5F28AFD29B39D22(::Class_1_8127A0E66BE3BB12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8127A0E66BE3BB12*))((::PBYTE)hIl2Cpp + CLASS_4_73EEFA2C5372D3B9_METHOD_4_D5F28AFD29B39D22_OFFSET))(this, a1);
	}

	::System::Void Method_4_5F08B426ADF31FF5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_73EEFA2C5372D3B9_METHOD_4_5F08B426ADF31FF5_OFFSET))(this);
	}

	::System::Void Method_4_0D51D68C77FB9285(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_4_73EEFA2C5372D3B9_METHOD_4_0D51D68C77FB9285_OFFSET))(this, a1);
	}

	::System::Void Method_4_146F59774371ACCD(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_4_73EEFA2C5372D3B9_METHOD_4_146F59774371ACCD_OFFSET))(this, a1);
	}

	::System::Void Method_4_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_73EEFA2C5372D3B9_METHOD_4_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_73EEFA2C5372D3B9_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_73EEFA2C5372D3B9_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
