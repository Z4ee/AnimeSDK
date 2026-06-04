#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_89D8044AB73F8F6D.h"

namespace RPG::Client { class AnimatorButton; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_A1F2D7D9DD4AE626_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x13966F50)
#define CLASS_2_A1F2D7D9DD4AE626_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x13966EE0)
#define CLASS_2_A1F2D7D9DD4AE626__CTOR_OFFSET UNITYSDK_OFFSET(0x139670D0)

inline static constexpr unsigned int Class_2_A1F2D7D9DD4AE626_TypeDefinitionIndex = 68122;

class Class_2_A1F2D7D9DD4AE626 : public ::Class_1_89D8044AB73F8F6D
{
public:
	::UnityEngine::UI::Button* Field_2_0; // 0x18
	::UnityEngine::UI::Text* Field_2_1; // 0x20
	::UnityEngine::UI::Button* Field_2_2; // 0x28
	::UnityEngine::Transform* Field_2_3; // 0x30
	::RPG::Client::AnimatorButton* Field_2_4; // 0x38
	::UnityEngine::Transform* Field_2_5; // 0x40
	::UnityEngine::UI::Text* Field_2_6; // 0x48
	::UnityEngine::Transform* Field_2_7; // 0x50
	::UnityEngine::UI::Text* Field_2_8; // 0x58
	::UnityEngine::UI::Button* Field_2_9; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1F2D7D9DD4AE626__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1F2D7D9DD4AE626_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1F2D7D9DD4AE626_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};
