#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/Client/AcheronPowerNodeState.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define CLASS_2_FD1484826C7B8317_METHOD_2_14045882BC5C6CA9_OFFSET UNITYSDK_OFFSET(0xA52C090)
#define CLASS_2_FD1484826C7B8317_METHOD_2_A65E76E2354D0E94_OFFSET UNITYSDK_OFFSET(0xA52BF70)
#define CLASS_2_FD1484826C7B8317__CTOR_OFFSET UNITYSDK_OFFSET(0xA52C0E0)
#define CLASS_2_FD1484826C7B8317__ONBIND_OFFSET UNITYSDK_OFFSET(0xA52BE60)
#define CLASS_2_FD1484826C7B8317___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xA52C110)

inline static constexpr unsigned int Class_2_FD1484826C7B8317_TypeDefinitionIndex = 67153;

class Class_2_FD1484826C7B8317 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	::UnityEngine::Transform* Field_2_3; // 0x60
	::UnityEngine::Animation* Field_2_4; // 0x68
	::UnityEngine::Transform* Field_2_5; // 0x70
	::System::Boolean Field_2_6; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD1484826C7B8317__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD1484826C7B8317__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_A65E76E2354D0E94(::RPG::Client::AcheronPowerNodeState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AcheronPowerNodeState))((::PBYTE)hIl2Cpp + CLASS_2_FD1484826C7B8317_METHOD_2_A65E76E2354D0E94_OFFSET))(this, a1);
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
