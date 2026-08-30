#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_73D810C51FF41945_METHOD_2_078D85152011B919_1_OFFSET UNITYSDK_OFFSET(0xC41D720)
#define CLASS_2_73D810C51FF41945_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0xC41D6C0)
#define CLASS_2_73D810C51FF41945_METHOD_2_A0CFDB5F5B1DB2D6_OFFSET UNITYSDK_OFFSET(0xC41D780)
#define CLASS_2_73D810C51FF41945__CTOR_OFFSET UNITYSDK_OFFSET(0xC41D8E0)
#define CLASS_2_73D810C51FF41945__ONBIND_OFFSET UNITYSDK_OFFSET(0xC41D830)

inline static constexpr unsigned int Class_2_73D810C51FF41945_TypeDefinitionIndex = 71772;

class Class_2_73D810C51FF41945 : public ::Class_1_34917908B7833130
{
public:
	::System::String* OLOIFNNLKJP; // 0x60
	::UnityEngine::Transform* DPHGGCPKAPF; // 0x68
	::UnityEngine::UI::Image* DNICBKPAIDN; // 0x70

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
};
