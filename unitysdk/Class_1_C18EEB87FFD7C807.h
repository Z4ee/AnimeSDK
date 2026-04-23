#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_C18EEB87FFD7C807_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xB7E6110)
#define CLASS_1_C18EEB87FFD7C807_GET_EXT_OFFSET UNITYSDK_OFFSET(0xB7E6150)
#define CLASS_1_C18EEB87FFD7C807_GET_ID_OFFSET UNITYSDK_OFFSET(0xB7E60D0)
#define CLASS_1_C18EEB87FFD7C807_GET_TARGETTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xB7E6130)
#define CLASS_1_C18EEB87FFD7C807_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xB7E60F0)
#define CLASS_1_C18EEB87FFD7C807_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0xB7E6080)
#define CLASS_1_C18EEB87FFD7C807_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xB7E5F20)
#define CLASS_1_C18EEB87FFD7C807_METHOD_1_510C3C62CAC002C3_OFFSET UNITYSDK_OFFSET(0xB7E5E90)
#define CLASS_1_C18EEB87FFD7C807_METHOD_1_722D24E25B6856C2_OFFSET UNITYSDK_OFFSET(0xB7E5F60)
#define CLASS_1_C18EEB87FFD7C807_METHOD_1_87E0654B98D0D63C_OFFSET UNITYSDK_OFFSET(0xB7E5E00)
#define CLASS_1_C18EEB87FFD7C807_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB7E6030)
#define CLASS_1_C18EEB87FFD7C807_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB7E5FF0)
#define CLASS_1_C18EEB87FFD7C807_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xB7E6120)
#define CLASS_1_C18EEB87FFD7C807_SET_EXT_OFFSET UNITYSDK_OFFSET(0xB7E6160)
#define CLASS_1_C18EEB87FFD7C807_SET_ID_OFFSET UNITYSDK_OFFSET(0xB7E60E0)
#define CLASS_1_C18EEB87FFD7C807_SET_TARGETTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xB7E6140)
#define CLASS_1_C18EEB87FFD7C807_SET_TITLE_OFFSET UNITYSDK_OFFSET(0xB7E6100)
#define CLASS_1_C18EEB87FFD7C807__CTOR_OFFSET UNITYSDK_OFFSET(0xB7E5DC0)

inline static constexpr unsigned int Class_1_C18EEB87FFD7C807_TypeDefinitionIndex = 56326;

class Class_1_C18EEB87FFD7C807 : public ::System::Object
{
public:
	::System::String* _ext_k__BackingField; // 0x10
	::System::String* _Title_k__BackingField; // 0x18
	::System::String* _Content_k__BackingField; // 0x20
	::System::UInt32 _ID_k__BackingField; // 0x28
	::System::Int64 _TargetTimeStamp_k__BackingField; // 0x30

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C18EEB87FFD7C807__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_510C3C62CAC002C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C18EEB87FFD7C807_METHOD_1_510C3C62CAC002C3_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C18EEB87FFD7C807_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_87E0654B98D0D63C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C18EEB87FFD7C807_METHOD_1_87E0654B98D0D63C_OFFSET))(this);
	}

	::System::Void Method_1_722D24E25B6856C2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C18EEB87FFD7C807_METHOD_1_722D24E25B6856C2_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C18EEB87FFD7C807_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C18EEB87FFD7C807_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C18EEB87FFD7C807_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C18EEB87FFD7C807_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C18EEB87FFD7C807_SET_ID_OFFSET))(this, value);
	}

	::System::String* get_Title()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C18EEB87FFD7C807_GET_TITLE_OFFSET))(this);
	}

	::System::Void set_Title(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C18EEB87FFD7C807_SET_TITLE_OFFSET))(this, value);
	}

	::System::String* get_Content()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C18EEB87FFD7C807_GET_CONTENT_OFFSET))(this);
	}

	::System::Void set_Content(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C18EEB87FFD7C807_SET_CONTENT_OFFSET))(this, value);
	}

	::System::Int64 get_TargetTimeStamp()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C18EEB87FFD7C807_GET_TARGETTIMESTAMP_OFFSET))(this);
	}

	::System::Void set_TargetTimeStamp(::System::Int64 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_C18EEB87FFD7C807_SET_TARGETTIMESTAMP_OFFSET))(this, value);
	}

	::System::String* get_ext()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C18EEB87FFD7C807_GET_EXT_OFFSET))(this);
	}

	::System::Void set_ext(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C18EEB87FFD7C807_SET_EXT_OFFSET))(this, value);
	}
};
