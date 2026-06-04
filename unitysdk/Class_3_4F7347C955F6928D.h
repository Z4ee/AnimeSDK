#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_1889DE49D24AA9B9.h"

namespace System { class String; }

#define CLASS_3_4F7347C955F6928D_METHOD_3_24AA9274E336FBB3_OFFSET UNITYSDK_OFFSET(0xA600850)
#define CLASS_3_4F7347C955F6928D_METHOD_3_F6EB917C5A67C7BA_OFFSET UNITYSDK_OFFSET(0xA600730)
#define CLASS_3_4F7347C955F6928D__CCTOR_OFFSET UNITYSDK_OFFSET(0xA6007B0)
#define CLASS_3_4F7347C955F6928D__CTOR_OFFSET UNITYSDK_OFFSET(0xA600780)
#define CLASS_3_4F7347C955F6928D__ONBIND_OFFSET UNITYSDK_OFFSET(0xA600410)
#define CLASS_3_4F7347C955F6928D___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xA6007F0)

inline static constexpr unsigned int Class_3_4F7347C955F6928D_TypeDefinitionIndex = 66829;

class Class_3_4F7347C955F6928D : public ::Class_2_1889DE49D24AA9B9
{
public:
	static ::System::String** StaticGet_Field_3_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_4F7347C955F6928D_TypeDefinitionIndex)->GetStaticField(0x63130);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F7347C955F6928D__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_4F7347C955F6928D__CCTOR_OFFSET))();
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F7347C955F6928D__ONBIND_OFFSET))(this);
	}

	::System::Void Method_3_F6EB917C5A67C7BA(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_4F7347C955F6928D_METHOD_3_F6EB917C5A67C7BA_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F7347C955F6928D___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_3_24AA9274E336FBB3(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_4F7347C955F6928D_METHOD_3_24AA9274E336FBB3_OFFSET))(this, a1, a2);
	}
};
