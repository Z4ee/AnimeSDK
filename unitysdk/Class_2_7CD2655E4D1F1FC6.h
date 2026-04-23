#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_89D8044AB73F8F6D.h"

namespace RPG::Client { class HPBar; }
namespace RPG::Client { class LongPressEvent; }
namespace RPG::Client { class MonoInControlButton; }
namespace RPG::Client { class MonoInControlTip; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_7CD2655E4D1F1FC6_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x111B5A30)
#define CLASS_2_7CD2655E4D1F1FC6_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x111B5AC0)
#define CLASS_2_7CD2655E4D1F1FC6__CCTOR_OFFSET UNITYSDK_OFFSET(0x111B5F10)
#define CLASS_2_7CD2655E4D1F1FC6__CTOR_OFFSET UNITYSDK_OFFSET(0x111B5F00)

inline static constexpr unsigned int Class_2_7CD2655E4D1F1FC6_TypeDefinitionIndex = 66659;

class Class_2_7CD2655E4D1F1FC6 : public ::Class_1_89D8044AB73F8F6D
{
public:
	static ::System::String** StaticGet_Field_2_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7CD2655E4D1F1FC6_TypeDefinitionIndex)->GetStaticField(0x19690);
	}
	::UnityEngine::UI::Image* Field_2_8; // 0x18
	::UnityEngine::UI::Button* Field_2_32; // 0x20
	::UnityEngine::Animation* Field_2_11; // 0x28
	::UnityEngine::Animation* Field_2_14; // 0x30
	::UnityEngine::Animation* Field_2_18; // 0x38
	::UnityEngine::Transform* Field_2_12; // 0x40
	::UnityEngine::UI::Image* Field_2_9; // 0x48
	::RPG::Client::HPBar* Field_2_1; // 0x50
	::RPG::Client::MonoInControlButton* Field_2_29; // 0x58
	::UnityEngine::Transform* Field_2_10; // 0x60
	::RPG::Client::MonoInControlTip* Field_2_26; // 0x68
	::UnityEngine::UI::Image* Field_2_15; // 0x70
	::UnityEngine::Animation* Field_2_17; // 0x78
	::UnityEngine::Transform* Field_2_3; // 0x80
	::UnityEngine::Transform* Field_2_16; // 0x88
	::UnityEngine::Transform* Field_2_20; // 0x90
	::UnityEngine::Transform* Field_2_27; // 0x98
	::RPG::Client::LongPressEvent* Field_2_30; // 0xA0
	::RPG::Client::HPBar* Field_2_2; // 0xA8
	::RPG::Client::LongPressEvent* Field_2_31; // 0xB0
	::UnityEngine::UI::Button* Field_2_6; // 0xB8
	::UnityEngine::UI::Text* Field_2_25; // 0xC0
	::UnityEngine::UI::Text* Field_2_13; // 0xC8
	::UnityEngine::Transform* Field_2_24; // 0xD0
	::UnityEngine::Transform* Field_2_19; // 0xD8
	::UnityEngine::Animation* Field_2_23; // 0xE0
	::UnityEngine::UI::Button* Field_2_7; // 0xE8
	::UnityEngine::Transform* Field_2_4; // 0xF0
	::UnityEngine::Transform* Field_2_33; // 0xF8
	::UnityEngine::UI::Image* Field_2_5; // 0x100
	::UnityEngine::Transform* Field_2_21; // 0x108
	::UnityEngine::Transform* Field_2_28; // 0x110
	::UnityEngine::Transform* Field_2_22; // 0x118

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CD2655E4D1F1FC6__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7CD2655E4D1F1FC6__CCTOR_OFFSET))();
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CD2655E4D1F1FC6_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CD2655E4D1F1FC6_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};
