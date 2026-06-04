#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_89D8044AB73F8F6D.h"

namespace RPG::Client { class CustomButton; }
namespace RPG::Client { class LocalizedText; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_2957BF86A7FB499A_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x143A6BB0)
#define CLASS_2_2957BF86A7FB499A_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x143A6DA0)
#define CLASS_2_2957BF86A7FB499A__CTOR_OFFSET UNITYSDK_OFFSET(0x143A6E10)

inline static constexpr unsigned int Class_2_2957BF86A7FB499A_TypeDefinitionIndex = 67937;

class Class_2_2957BF86A7FB499A : public ::Class_1_89D8044AB73F8F6D
{
public:
	::RPG::Client::CustomButton* Field_2_0; // 0x18
	::UnityEngine::Transform* Field_2_1; // 0x20
	::UnityEngine::Transform* Field_2_2; // 0x28
	::RPG::Client::LocalizedText* Field_2_3; // 0x30
	::RPG::Client::LocalizedText* Field_2_4; // 0x38
	::RPG::Client::CustomButton* Field_2_5; // 0x40
	::RPG::Client::CustomButton* Field_2_6; // 0x48
	::UnityEngine::Transform* Field_2_7; // 0x50
	::RPG::Client::CustomButton* Field_2_8; // 0x58
	::RPG::Client::CustomButton* Field_2_9; // 0x60
	::UnityEngine::Transform* Field_2_10; // 0x68
	::RPG::Client::CustomButton* Field_2_11; // 0x70
	::RPG::Client::LocalizedText* Field_2_12; // 0x78
	::RPG::Client::LocalizedText* Field_2_13; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2957BF86A7FB499A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2957BF86A7FB499A_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2957BF86A7FB499A_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}
};
