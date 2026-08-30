#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_C18EEB87FFD7C807_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x1161ED60)
#define CLASS_1_C18EEB87FFD7C807_GET_EXT_OFFSET UNITYSDK_OFFSET(0x1161EDA0)
#define CLASS_1_C18EEB87FFD7C807_GET_ID_OFFSET UNITYSDK_OFFSET(0x1161ED20)
#define CLASS_1_C18EEB87FFD7C807_GET_TARGETTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1161ED80)
#define CLASS_1_C18EEB87FFD7C807_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x1161ED40)
#define CLASS_1_C18EEB87FFD7C807_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1161ECD0)
#define CLASS_1_C18EEB87FFD7C807_METHOD_1_0EB7CC0E7E6236AA_OFFSET UNITYSDK_OFFSET(0x1161EAD0)
#define CLASS_1_C18EEB87FFD7C807_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1161EA90)
#define CLASS_1_C18EEB87FFD7C807_METHOD_1_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0x1161E910)
#define CLASS_1_C18EEB87FFD7C807_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1161EC80)
#define CLASS_1_C18EEB87FFD7C807_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1161EC40)
#define CLASS_1_C18EEB87FFD7C807_METHOD_1_F944CC0CE8B3E57A_OFFSET UNITYSDK_OFFSET(0x1161E9D0)
#define CLASS_1_C18EEB87FFD7C807_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0x1161ED70)
#define CLASS_1_C18EEB87FFD7C807_SET_EXT_OFFSET UNITYSDK_OFFSET(0x1161EDB0)
#define CLASS_1_C18EEB87FFD7C807_SET_ID_OFFSET UNITYSDK_OFFSET(0x1161ED30)
#define CLASS_1_C18EEB87FFD7C807_SET_TARGETTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1161ED90)
#define CLASS_1_C18EEB87FFD7C807_SET_TITLE_OFFSET UNITYSDK_OFFSET(0x1161ED50)
#define CLASS_1_C18EEB87FFD7C807__CTOR_OFFSET UNITYSDK_OFFSET(0x1161E820)

inline static constexpr unsigned int Class_1_C18EEB87FFD7C807_TypeDefinitionIndex = 61173;

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

	::System::Void Method_1_F944CC0CE8B3E57A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C18EEB87FFD7C807_METHOD_1_F944CC0CE8B3E57A_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C18EEB87FFD7C807_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_5FBAD89A54D9F070()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C18EEB87FFD7C807_METHOD_1_5FBAD89A54D9F070_OFFSET))(this);
	}

	::System::Void Method_1_0EB7CC0E7E6236AA(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C18EEB87FFD7C807_METHOD_1_0EB7CC0E7E6236AA_OFFSET))(this, a1);
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

	::System::Void set_ID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C18EEB87FFD7C807_SET_ID_OFFSET))(this, a1);
	}

	::System::String* get_Title()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C18EEB87FFD7C807_GET_TITLE_OFFSET))(this);
	}

	::System::Void set_Title(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C18EEB87FFD7C807_SET_TITLE_OFFSET))(this, a1);
	}

	::System::String* get_Content()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C18EEB87FFD7C807_GET_CONTENT_OFFSET))(this);
	}

	::System::Void set_Content(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C18EEB87FFD7C807_SET_CONTENT_OFFSET))(this, a1);
	}

	::System::Int64 get_TargetTimeStamp()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C18EEB87FFD7C807_GET_TARGETTIMESTAMP_OFFSET))(this);
	}

	::System::Void set_TargetTimeStamp(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_C18EEB87FFD7C807_SET_TARGETTIMESTAMP_OFFSET))(this, a1);
	}

	::System::String* get_ext()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C18EEB87FFD7C807_GET_EXT_OFFSET))(this);
	}

	::System::Void set_ext(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C18EEB87FFD7C807_SET_EXT_OFFSET))(this, a1);
	}
};
