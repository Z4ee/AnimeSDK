#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_1889DE49D24AA9B9.h"

namespace System { class String; }

#define CLASS_3_3CE615BCAFA31A47_METHOD_3_287DEB15CF6F7BD8_OFFSET UNITYSDK_OFFSET(0x11A94EF0)
#define CLASS_3_3CE615BCAFA31A47_METHOD_3_F6EB917C5A67C7BA_OFFSET UNITYSDK_OFFSET(0x11A94DD0)
#define CLASS_3_3CE615BCAFA31A47__CCTOR_OFFSET UNITYSDK_OFFSET(0x11A94E50)
#define CLASS_3_3CE615BCAFA31A47__CTOR_OFFSET UNITYSDK_OFFSET(0x11A94E20)
#define CLASS_3_3CE615BCAFA31A47__ONBIND_OFFSET UNITYSDK_OFFSET(0x11A94AB0)
#define CLASS_3_3CE615BCAFA31A47___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x11A94E90)

inline static constexpr unsigned int Class_3_3CE615BCAFA31A47_TypeDefinitionIndex = 65896;

class Class_3_3CE615BCAFA31A47 : public ::Class_2_1889DE49D24AA9B9
{
public:
	static ::System::String** StaticGet_Field_3_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CE615BCAFA31A47_TypeDefinitionIndex)->GetStaticField(0x401B0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CE615BCAFA31A47__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_3CE615BCAFA31A47__CCTOR_OFFSET))();
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CE615BCAFA31A47__ONBIND_OFFSET))(this);
	}

	::System::Void Method_3_F6EB917C5A67C7BA(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3CE615BCAFA31A47_METHOD_3_F6EB917C5A67C7BA_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CE615BCAFA31A47___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_3_287DEB15CF6F7BD8(::System::Boolean P0, ::System::Boolean P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3CE615BCAFA31A47_METHOD_3_287DEB15CF6F7BD8_OFFSET))(this, P0, P1);
	}
};
