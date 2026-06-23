#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define CLASS_3_CB114D57AC70AD95_METHOD_3_0C88AB06D46E777A_OFFSET UNITYSDK_OFFSET(0x139027E0)
#define CLASS_3_CB114D57AC70AD95_METHOD_3_4D71BCFB74C16073_1_OFFSET UNITYSDK_OFFSET(0x139029E0)
#define CLASS_3_CB114D57AC70AD95_METHOD_3_4D71BCFB74C16073_OFFSET UNITYSDK_OFFSET(0x139029C0)
#define CLASS_3_CB114D57AC70AD95_METHOD_3_BFB8A9EC107A5B24_1_OFFSET UNITYSDK_OFFSET(0x139029D0)
#define CLASS_3_CB114D57AC70AD95_METHOD_3_BFB8A9EC107A5B24_OFFSET UNITYSDK_OFFSET(0x139029B0)
#define CLASS_3_CB114D57AC70AD95_METHOD_3_FA1CF250E644264D_OFFSET UNITYSDK_OFFSET(0x13902730)
#define CLASS_3_CB114D57AC70AD95__CTOR_OFFSET UNITYSDK_OFFSET(0x13902920)

inline static constexpr unsigned int Class_3_CB114D57AC70AD95_TypeDefinitionIndex = 49389;

class Class_3_CB114D57AC70AD95 : public ::Class_2_E87F1D15F1D4AC72
{
public:
	::UnityEngine::Transform* Field_3_1; // 0x28
	::UnityEngine::Transform* Field_3_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CB114D57AC70AD95__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_FA1CF250E644264D(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_CB114D57AC70AD95_METHOD_3_FA1CF250E644264D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_0C88AB06D46E777A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CB114D57AC70AD95_METHOD_3_0C88AB06D46E777A_OFFSET))(this);
	}

	::System::Void Method_3_BFB8A9EC107A5B24(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_3_CB114D57AC70AD95_METHOD_3_BFB8A9EC107A5B24_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_3_4D71BCFB74C16073()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CB114D57AC70AD95_METHOD_3_4D71BCFB74C16073_OFFSET))(this);
	}

	::System::Void Method_3_BFB8A9EC107A5B24_1(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_3_CB114D57AC70AD95_METHOD_3_BFB8A9EC107A5B24_1_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_3_4D71BCFB74C16073_1()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CB114D57AC70AD95_METHOD_3_4D71BCFB74C16073_1_OFFSET))(this);
	}
};
