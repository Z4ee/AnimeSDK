#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define CLASS_2_5D99992BD45517C7_METHOD_2_DC56CD9EB10B2EE8_OFFSET UNITYSDK_OFFSET(0x164E14C0)
#define CLASS_2_5D99992BD45517C7__CTOR_OFFSET UNITYSDK_OFFSET(0x164E1580)
#define CLASS_2_5D99992BD45517C7__ONBIND_OFFSET UNITYSDK_OFFSET(0x164E1380)

inline static constexpr unsigned int Class_2_5D99992BD45517C7_TypeDefinitionIndex = 71872;

class Class_2_5D99992BD45517C7 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* FPGPODGIBFN; // 0x0
	::UnityEngine::Transform* NLOFDELKDOI; // 0x60
	::UnityEngine::Transform* GHGAKNDLKGM; // 0x68
	::UnityEngine::Animation* KCOAILOHDND; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D99992BD45517C7__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D99992BD45517C7__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_DC56CD9EB10B2EE8(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5D99992BD45517C7_METHOD_2_DC56CD9EB10B2EE8_OFFSET))(this, a1, a2);
	}
};
