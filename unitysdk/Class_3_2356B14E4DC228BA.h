#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_1889DE49D24AA9B9.h"

namespace System { class String; }

#define CLASS_3_2356B14E4DC228BA_METHOD_3_F6EB917C5A67C7BA_OFFSET UNITYSDK_OFFSET(0xB7CE440)
#define CLASS_3_2356B14E4DC228BA__CCTOR_OFFSET UNITYSDK_OFFSET(0xB7CE4C0)
#define CLASS_3_2356B14E4DC228BA__CTOR_OFFSET UNITYSDK_OFFSET(0xB7CE490)
#define CLASS_3_2356B14E4DC228BA__ONBIND_OFFSET UNITYSDK_OFFSET(0xB7CE120)

inline static constexpr unsigned int Class_3_2356B14E4DC228BA_TypeDefinitionIndex = 71494;

class Class_3_2356B14E4DC228BA : public ::Class_2_1889DE49D24AA9B9
{
public:
	static ::System::String** StaticGet_JFCMCPFPDFP()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_2356B14E4DC228BA_TypeDefinitionIndex)->GetStaticField(0x2D510);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2356B14E4DC228BA__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_2356B14E4DC228BA__CCTOR_OFFSET))();
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2356B14E4DC228BA__ONBIND_OFFSET))(this);
	}

	::System::Void Method_3_F6EB917C5A67C7BA(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_2356B14E4DC228BA_METHOD_3_F6EB917C5A67C7BA_OFFSET))(this, a1, a2);
	}
};
