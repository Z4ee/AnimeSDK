#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/Client/AcheronPowerNodeState.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define CLASS_2_FD1484826C7B8317_METHOD_2_14045882BC5C6CA9_OFFSET UNITYSDK_OFFSET(0x9029B90)
#define CLASS_2_FD1484826C7B8317_METHOD_2_1A6C778433F4964B_OFFSET UNITYSDK_OFFSET(0x9029A40)
#define CLASS_2_FD1484826C7B8317__CTOR_OFFSET UNITYSDK_OFFSET(0x9029BE0)
#define CLASS_2_FD1484826C7B8317__ONBIND_OFFSET UNITYSDK_OFFSET(0x9029930)
#define CLASS_2_FD1484826C7B8317___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x9029C10)

inline static constexpr unsigned int Class_2_FD1484826C7B8317_TypeDefinitionIndex = 66214;

class Class_2_FD1484826C7B8317 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::String* Field_2_5; // 0x0
	// static const ::System::String* Field_2_6; // 0x0
	::UnityEngine::Transform* Field_2_0; // 0x60
	::UnityEngine::Transform* Field_2_1; // 0x68
	::UnityEngine::Animation* Field_2_2; // 0x70
	::System::Boolean Field_2_3; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD1484826C7B8317__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD1484826C7B8317__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_1A6C778433F4964B(::RPG::Client::AcheronPowerNodeState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AcheronPowerNodeState))((::PBYTE)hIl2Cpp + CLASS_2_FD1484826C7B8317_METHOD_2_1A6C778433F4964B_OFFSET))(this, a1);
	}

	::System::Void Method_2_14045882BC5C6CA9(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_FD1484826C7B8317_METHOD_2_14045882BC5C6CA9_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD1484826C7B8317___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
