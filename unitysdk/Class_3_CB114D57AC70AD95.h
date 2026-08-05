#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define CLASS_3_CB114D57AC70AD95_METHOD_3_0C88AB06D46E777A_OFFSET UNITYSDK_OFFSET(0x18616F20)
#define CLASS_3_CB114D57AC70AD95_METHOD_3_4D71BCFB74C16073_1_OFFSET UNITYSDK_OFFSET(0x18617120)
#define CLASS_3_CB114D57AC70AD95_METHOD_3_4D71BCFB74C16073_OFFSET UNITYSDK_OFFSET(0x18617110)
#define CLASS_3_CB114D57AC70AD95_METHOD_3_BFB8A9EC107A5B24_1_OFFSET UNITYSDK_OFFSET(0x18617100)
#define CLASS_3_CB114D57AC70AD95_METHOD_3_BFB8A9EC107A5B24_OFFSET UNITYSDK_OFFSET(0x186170F0)
#define CLASS_3_CB114D57AC70AD95_METHOD_3_FA1CF250E644264D_OFFSET UNITYSDK_OFFSET(0x18616E70)
#define CLASS_3_CB114D57AC70AD95__CTOR_OFFSET UNITYSDK_OFFSET(0x18617060)

inline static constexpr unsigned int Class_3_CB114D57AC70AD95_TypeDefinitionIndex = 59499;

class Class_3_CB114D57AC70AD95 : public ::Class_2_E87F1D15F1D4AC72
{
public:
	::UnityEngine::Transform* Field_3_7; // 0x28
	::UnityEngine::Transform* Field_3_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CB114D57AC70AD95__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_FA1CF250E644264D(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_CB114D57AC70AD95_METHOD_3_FA1CF250E644264D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BFB8A9EC107A5B24(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_3_CB114D57AC70AD95_METHOD_3_BFB8A9EC107A5B24_OFFSET))(this, a1);
	}

	::System::Void Method_3_0C88AB06D46E777A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CB114D57AC70AD95_METHOD_3_0C88AB06D46E777A_OFFSET))(this);
	}

	::System::Void Method_3_BFB8A9EC107A5B24_1(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_3_CB114D57AC70AD95_METHOD_3_BFB8A9EC107A5B24_1_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_3_4D71BCFB74C16073()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CB114D57AC70AD95_METHOD_3_4D71BCFB74C16073_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_3_4D71BCFB74C16073_1()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CB114D57AC70AD95_METHOD_3_4D71BCFB74C16073_1_OFFSET))(this);
	}
};
