#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_7CF816AC37345523_METHOD_2_F6DF67569CE8FE27_OFFSET UNITYSDK_OFFSET(0xB5837A0)
#define CLASS_2_7CF816AC37345523__CTOR_OFFSET UNITYSDK_OFFSET(0xB583A20)
#define CLASS_2_7CF816AC37345523__ONBIND_OFFSET UNITYSDK_OFFSET(0xB5835D0)

inline static constexpr unsigned int Class_2_7CF816AC37345523_TypeDefinitionIndex = 71374;

class Class_2_7CF816AC37345523 : public ::Class_1_34917908B7833130
{
public:
	::UnityEngine::Transform* LHIBEDODAHA; // 0x60
	::UnityEngine::UI::Image* HPCAJDKDMEI; // 0x68
	::UnityEngine::UI::Text* EGAEPHINFAP; // 0x70
	::UnityEngine::Transform* FCDDMEAANPH; // 0x78
	::UnityEngine::Transform* AOKHJDHAAKP; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CF816AC37345523__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CF816AC37345523__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_F6DF67569CE8FE27(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_7CF816AC37345523_METHOD_2_F6DF67569CE8FE27_OFFSET))(this, a1);
	}
};
