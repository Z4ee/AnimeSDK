#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_89D8044AB73F8F6D.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class CustomButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MonoInControlTip; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class HorizontalLayoutGroup; }

#define CLASS_2_9E8CD0C1037EB98E_1_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB7A0FC0)
#define CLASS_2_9E8CD0C1037EB98E_1_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xB7A1240)
#define CLASS_2_9E8CD0C1037EB98E_1__CTOR_OFFSET UNITYSDK_OFFSET(0xB7A1290)

inline static constexpr unsigned int Class_2_9E8CD0C1037EB98E_1_TypeDefinitionIndex = 66990;

class Class_2_9E8CD0C1037EB98E_1 : public ::Class_1_89D8044AB73F8F6D
{
public:
	::RPG::Client::LocalizedText* Field_2_8; // 0x18
	::RPG::Client::AnimatorButton* Field_2_16; // 0x20
	::UnityEngine::Transform* Field_2_11; // 0x28
	::RPG::Client::LocalizedText* Field_2_2; // 0x30
	::RPG::Client::LocalizedText* Field_2_17; // 0x38
	::UnityEngine::Transform* Field_2_13; // 0x40
	::UnityEngine::UI::HorizontalLayoutGroup* Field_2_9; // 0x48
	::RPG::Client::MonoInControlTip* Field_2_10; // 0x50
	::RPG::Client::LocalizedText* Field_2_1; // 0x58
	::RPG::Client::LocalizedText* Field_2_14; // 0x60
	::RPG::Client::CustomButton* Field_2_3; // 0x68
	::RPG::Client::CustomButton* Field_2_6; // 0x70
	::UnityEngine::Transform* Field_2_15; // 0x78
	::UnityEngine::Transform* Field_2_0; // 0x80
	::RPG::Client::CustomButton* Field_2_5; // 0x88
	::RPG::Client::CustomButton* Field_2_4; // 0x90
	::UnityEngine::Transform* Field_2_12; // 0x98
	::RPG::Client::LocalizedText* Field_2_7; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E8CD0C1037EB98E_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E8CD0C1037EB98E_1_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E8CD0C1037EB98E_1_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}
};
