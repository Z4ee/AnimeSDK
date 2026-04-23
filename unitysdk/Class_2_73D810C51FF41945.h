#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_73D810C51FF41945_METHOD_2_078D85152011B919_1_OFFSET UNITYSDK_OFFSET(0x11977080)
#define CLASS_2_73D810C51FF41945_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x11977020)
#define CLASS_2_73D810C51FF41945_METHOD_2_A0CFDB5F5B1DB2D6_OFFSET UNITYSDK_OFFSET(0x119770E0)
#define CLASS_2_73D810C51FF41945__CTOR_OFFSET UNITYSDK_OFFSET(0x11977240)
#define CLASS_2_73D810C51FF41945__ONBIND_OFFSET UNITYSDK_OFFSET(0x11977190)
#define CLASS_2_73D810C51FF41945___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x11977270)

inline static constexpr unsigned int Class_2_73D810C51FF41945_TypeDefinitionIndex = 66193;

class Class_2_73D810C51FF41945 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::Transform* Field_2_1; // 0x60
	::UnityEngine::UI::Image* Field_2_0; // 0x68
	::System::String* Field_2_2; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73D810C51FF41945__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73D810C51FF41945_METHOD_2_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_2_078D85152011B919_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73D810C51FF41945_METHOD_2_078D85152011B919_1_OFFSET))(this);
	}

	::System::Void Method_2_A0CFDB5F5B1DB2D6(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_73D810C51FF41945_METHOD_2_A0CFDB5F5B1DB2D6_OFFSET))(this, a1);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73D810C51FF41945__ONBIND_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73D810C51FF41945___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
