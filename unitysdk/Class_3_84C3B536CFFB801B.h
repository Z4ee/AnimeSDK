#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_8D452416EAB7B077.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_3_84C3B536CFFB801B_METHOD_3_04E967564E8CD234_OFFSET UNITYSDK_OFFSET(0x1351F5D0)
#define CLASS_3_84C3B536CFFB801B_METHOD_3_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x1351F510)
#define CLASS_3_84C3B536CFFB801B_METHOD_3_42D74E8C949A6883_OFFSET UNITYSDK_OFFSET(0x1351F640)
#define CLASS_3_84C3B536CFFB801B_METHOD_3_B9164D1137694C18_OFFSET UNITYSDK_OFFSET(0x1351F740)
#define CLASS_3_84C3B536CFFB801B_METHOD_3_C91E5170F9E36EED_OFFSET UNITYSDK_OFFSET(0x1351F7A0)
#define CLASS_3_84C3B536CFFB801B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1351F710)
#define CLASS_3_84C3B536CFFB801B__CTOR_OFFSET UNITYSDK_OFFSET(0x1351F6D0)
#define CLASS_3_84C3B536CFFB801B__ONBIND_OFFSET UNITYSDK_OFFSET(0x1351F4B0)
#define CLASS_3_84C3B536CFFB801B___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x1351F730)

inline static constexpr unsigned int Class_3_84C3B536CFFB801B_TypeDefinitionIndex = 67157;

class Class_3_84C3B536CFFB801B : public ::Class_2_8D452416EAB7B077
{
public:
	static ::System::String** StaticGet_Field_3_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_84C3B536CFFB801B_TypeDefinitionIndex)->GetStaticField(0x16760);
	}
	// static const ::System::String* Field_3_1; // 0x0
	// static const ::System::String* Field_3_2; // 0x0
	::UnityEngine::Animation* Field_3_3; // 0xD0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_84C3B536CFFB801B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_84C3B536CFFB801B__CCTOR_OFFSET))();
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_84C3B536CFFB801B__ONBIND_OFFSET))(this);
	}

	::System::Void Method_3_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_84C3B536CFFB801B_METHOD_3_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_3_42D74E8C949A6883(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_84C3B536CFFB801B_METHOD_3_42D74E8C949A6883_OFFSET))(this, a1);
	}

	::System::Void Method_3_04E967564E8CD234(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_84C3B536CFFB801B_METHOD_3_04E967564E8CD234_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_84C3B536CFFB801B___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_3_B9164D1137694C18()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_84C3B536CFFB801B_METHOD_3_B9164D1137694C18_OFFSET))(this);
	}

	::System::Void Method_3_C91E5170F9E36EED(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_84C3B536CFFB801B_METHOD_3_C91E5170F9E36EED_OFFSET))(this, a1);
	}
};
