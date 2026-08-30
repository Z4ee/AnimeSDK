#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_7CF816AC37345523_METHOD_2_F6DF67569CE8FE27_OFFSET UNITYSDK_OFFSET(0x18FDDAB0)
#define CLASS_2_7CF816AC37345523__CTOR_OFFSET UNITYSDK_OFFSET(0x18FDDD30)
#define CLASS_2_7CF816AC37345523__ONBIND_OFFSET UNITYSDK_OFFSET(0x18FDD8E0)

inline static constexpr unsigned int Class_2_7CF816AC37345523_TypeDefinitionIndex = 71335;

class Class_2_7CF816AC37345523 : public ::Class_1_34917908B7833130
{
public:
	::UnityEngine::UI::Image* HPCAJDKDMEI; // 0x60
	::UnityEngine::Transform* LHIBEDODAHA; // 0x68
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
