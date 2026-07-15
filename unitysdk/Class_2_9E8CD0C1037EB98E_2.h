#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A167209E71412818.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class CustomButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MonoInControlTip; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class HorizontalLayoutGroup; }

#define CLASS_2_9E8CD0C1037EB98E_2_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x16241DB0)
#define CLASS_2_9E8CD0C1037EB98E_2_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x16242060)
#define CLASS_2_9E8CD0C1037EB98E_2__CTOR_OFFSET UNITYSDK_OFFSET(0x162420D0)

inline static constexpr unsigned int Class_2_9E8CD0C1037EB98E_2_TypeDefinitionIndex = 69418;

class Class_2_9E8CD0C1037EB98E_2 : public ::Class_1_A167209E71412818
{
public:
	::RPG::Client::LocalizedText* Field_2_0; // 0x18
	::UnityEngine::Transform* Field_2_1; // 0x20
	::RPG::Client::LocalizedText* Field_2_2; // 0x28
	::UnityEngine::Transform* Field_2_3; // 0x30
	::RPG::Client::CustomButton* Field_2_4; // 0x38
	::RPG::Client::LocalizedText* Field_2_5; // 0x40
	::RPG::Client::MonoInControlTip* Field_2_6; // 0x48
	::RPG::Client::LocalizedText* Field_2_7; // 0x50
	::RPG::Client::LocalizedText* Field_2_8; // 0x58
	::RPG::Client::CustomButton* Field_2_9; // 0x60
	::RPG::Client::CustomButton* Field_2_10; // 0x68
	::RPG::Client::AnimatorButton* Field_2_11; // 0x70
	::RPG::Client::LocalizedText* Field_2_12; // 0x78
	::UnityEngine::Transform* Field_2_13; // 0x80
	::UnityEngine::UI::HorizontalLayoutGroup* Field_2_14; // 0x88
	::RPG::Client::CustomButton* Field_2_15; // 0x90
	::RPG::Client::CustomButton* Field_2_16; // 0x98
	::UnityEngine::Transform* Field_2_17; // 0xA0
	::UnityEngine::Transform* Field_2_18; // 0xA8
	::UnityEngine::Transform* Field_2_19; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E8CD0C1037EB98E_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E8CD0C1037EB98E_2_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E8CD0C1037EB98E_2_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}
};
