#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_7CF816AC37345523_METHOD_2_F6DF67569CE8FE27_OFFSET UNITYSDK_OFFSET(0xA440B80)
#define CLASS_2_7CF816AC37345523__CTOR_OFFSET UNITYSDK_OFFSET(0xA440E00)
#define CLASS_2_7CF816AC37345523__ONBIND_OFFSET UNITYSDK_OFFSET(0xA4409B0)
#define CLASS_2_7CF816AC37345523___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xA440E30)

inline static constexpr unsigned int Class_2_7CF816AC37345523_TypeDefinitionIndex = 66720;

class Class_2_7CF816AC37345523 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::UI::Image* Field_2_0; // 0x60
	::UnityEngine::Transform* Field_2_1; // 0x68
	::UnityEngine::UI::Text* Field_2_2; // 0x70
	::UnityEngine::Transform* Field_2_3; // 0x78
	::UnityEngine::Transform* Field_2_4; // 0x80

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

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CF816AC37345523___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
