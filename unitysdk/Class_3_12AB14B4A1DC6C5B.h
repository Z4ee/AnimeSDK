#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_8D452416EAB7B077.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_3_12AB14B4A1DC6C5B_METHOD_3_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x17E15DE0)
#define CLASS_3_12AB14B4A1DC6C5B_METHOD_3_848FDD59AB054F3D_OFFSET UNITYSDK_OFFSET(0x17E15EC0)
#define CLASS_3_12AB14B4A1DC6C5B_METHOD_3_F07808AF19FA033A_OFFSET UNITYSDK_OFFSET(0x17E15F50)
#define CLASS_3_12AB14B4A1DC6C5B__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E16040)
#define CLASS_3_12AB14B4A1DC6C5B__CTOR_OFFSET UNITYSDK_OFFSET(0x17E16000)
#define CLASS_3_12AB14B4A1DC6C5B__ONBIND_OFFSET UNITYSDK_OFFSET(0x17E15D80)

inline static constexpr unsigned int Class_3_12AB14B4A1DC6C5B_TypeDefinitionIndex = 71799;

class Class_3_12AB14B4A1DC6C5B : public ::Class_2_8D452416EAB7B077
{
public:
	static ::System::String** StaticGet_DJCBDJMACFH()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_12AB14B4A1DC6C5B_TypeDefinitionIndex)->GetStaticField(0x7390);
	}
	// static const ::System::String* IIFENECAOBG; // 0x0
	// static const ::System::String* CGNGHKIIGCM; // 0x0
	::UnityEngine::Animation* JPHOOFFIAAH; // 0xD0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_12AB14B4A1DC6C5B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_12AB14B4A1DC6C5B__CCTOR_OFFSET))();
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_12AB14B4A1DC6C5B__ONBIND_OFFSET))(this);
	}

	::System::Void Method_3_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_12AB14B4A1DC6C5B_METHOD_3_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_3_F07808AF19FA033A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_12AB14B4A1DC6C5B_METHOD_3_F07808AF19FA033A_OFFSET))(this, a1);
	}

	::System::Void Method_3_848FDD59AB054F3D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_12AB14B4A1DC6C5B_METHOD_3_848FDD59AB054F3D_OFFSET))(this, a1);
	}
};
