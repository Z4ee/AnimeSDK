#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define CLASS_2_C23DD4758FBF845D_METHOD_2_A86E06724FDFAF8F_OFFSET UNITYSDK_OFFSET(0x1616DEF0)
#define CLASS_2_C23DD4758FBF845D__CTOR_OFFSET UNITYSDK_OFFSET(0x1616DF90)
#define CLASS_2_C23DD4758FBF845D__ONBIND_OFFSET UNITYSDK_OFFSET(0x1616DDE0)

inline static constexpr unsigned int Class_2_C23DD4758FBF845D_TypeDefinitionIndex = 71807;

class Class_2_C23DD4758FBF845D : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* FPGPODGIBFN; // 0x0
	::UnityEngine::Transform* GHGAKNDLKGM; // 0x60
	::UnityEngine::Animation* KCOAILOHDND; // 0x68
	::UnityEngine::Transform* NLOFDELKDOI; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C23DD4758FBF845D__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C23DD4758FBF845D__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_A86E06724FDFAF8F(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C23DD4758FBF845D_METHOD_2_A86E06724FDFAF8F_OFFSET))(this, a1, a2);
	}
};
