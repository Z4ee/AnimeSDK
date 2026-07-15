#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A167209E71412818.h"

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

#define CLASS_2_7CD2655E4D1F1FC6_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x188B2120)
#define CLASS_2_7CD2655E4D1F1FC6_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x188B21B0)
#define CLASS_2_7CD2655E4D1F1FC6__CCTOR_OFFSET UNITYSDK_OFFSET(0x188B2600)
#define CLASS_2_7CD2655E4D1F1FC6__CTOR_OFFSET UNITYSDK_OFFSET(0x188B25F0)

inline static constexpr unsigned int Class_2_7CD2655E4D1F1FC6_TypeDefinitionIndex = 69083;

class Class_2_7CD2655E4D1F1FC6 : public ::Class_1_A167209E71412818
{
public:
	static ::System::String** StaticGet_Field_2_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7CD2655E4D1F1FC6_TypeDefinitionIndex)->GetStaticField(0x47880);
	}
	::UnityEngine::UI::Image* Field_2_1; // 0x18
	::UnityEngine::Animation* Field_2_2; // 0x20
	::UnityEngine::UI::Button* Field_2_3; // 0x28
	::UnityEngine::Transform* Field_2_4; // 0x30
	::UnityEngine::Transform* Field_2_5; // 0x38
	::UnityEngine::Transform* Field_2_6; // 0x40
	::UnityEngine::Transform* Field_2_7; // 0x48
	::RPG::Client::LongPressEvent* Field_2_8; // 0x50
	::UnityEngine::UI::Image* Field_2_9; // 0x58
	::UnityEngine::Transform* Field_2_10; // 0x60
	::UnityEngine::Animation* Field_2_11; // 0x68
	::UnityEngine::Transform* Field_2_12; // 0x70
	::UnityEngine::UI::Image* Field_2_13; // 0x78
	::UnityEngine::Transform* Field_2_14; // 0x80
	::UnityEngine::Animation* Field_2_15; // 0x88
	::UnityEngine::Transform* Field_2_16; // 0x90
	::UnityEngine::Animation* Field_2_17; // 0x98
	::RPG::Client::HPBar* Field_2_18; // 0xA0
	::UnityEngine::UI::Button* Field_2_19; // 0xA8
	::UnityEngine::Animation* Field_2_20; // 0xB0
	::UnityEngine::Transform* Field_2_21; // 0xB8
	::RPG::Client::LongPressEvent* Field_2_22; // 0xC0
	::UnityEngine::Transform* Field_2_23; // 0xC8
	::RPG::Client::HPBar* Field_2_24; // 0xD0
	::UnityEngine::Transform* Field_2_25; // 0xD8
	::RPG::Client::MonoInControlTip* Field_2_26; // 0xE0
	::UnityEngine::Transform* Field_2_27; // 0xE8
	::UnityEngine::UI::Button* Field_2_28; // 0xF0
	::UnityEngine::UI::Text* Field_2_29; // 0xF8
	::RPG::Client::MonoInControlButton* Field_2_30; // 0x100
	::UnityEngine::UI::Image* Field_2_31; // 0x108
	::UnityEngine::Transform* Field_2_32; // 0x110
	::UnityEngine::UI::Text* Field_2_33; // 0x118

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
