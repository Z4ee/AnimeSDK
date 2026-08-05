#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

class Class_1_B7E341C5F1A6F199;

#define CLASS_3_3B056DDF437AD715_METHOD_3_87749A1306C73D01_OFFSET UNITYSDK_OFFSET(0x17EB88E0)
#define CLASS_3_3B056DDF437AD715_METHOD_3_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17EB8E00)
#define CLASS_3_3B056DDF437AD715_ONEVENT_OFFSET UNITYSDK_OFFSET(0x17EB8820)
#define CLASS_3_3B056DDF437AD715__CCTOR_OFFSET UNITYSDK_OFFSET(0x17EB86F0)
#define CLASS_3_3B056DDF437AD715__CTOR_OFFSET UNITYSDK_OFFSET(0x17EB8DC0)

inline static constexpr unsigned int Class_3_3B056DDF437AD715_TypeDefinitionIndex = 56495;

class Class_3_3B056DDF437AD715 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_3B056DDF437AD715*>
{
public:
	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_3B056DDF437AD715__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3B056DDF437AD715__CTOR_OFFSET))(this);
	}

	::System::Void OnEvent(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_3B056DDF437AD715_ONEVENT_OFFSET))(this, a1);
	}

	::System::Void Method_3_8C8625211DA811AE(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_3B056DDF437AD715_METHOD_3_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Void Method_3_87749A1306C73D01(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_3B056DDF437AD715_METHOD_3_87749A1306C73D01_OFFSET))(this, a1);
	}
};
