#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::Client { class CameraBlendCurve; }

#define CLASS_1_F1C57540A2293C7F_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA7989D0)
#define CLASS_1_F1C57540A2293C7F__CTOR_OFFSET UNITYSDK_OFFSET(0xA798A40)

inline static constexpr unsigned int Class_1_F1C57540A2293C7F_TypeDefinitionIndex = 53289;

class Class_1_F1C57540A2293C7F : public ::System::Object
{
public:
	::Class_3_07C3C4D2990C49EE* Field_1_0; // 0x10
	::RPG::Client::CameraBlendCurve* Field_1_1; // 0x18
	::UnityEngine::Vector3 Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x2C
	::System::Single Field_1_4; // 0x30
	::System::Single Field_1_5; // 0x34
	::System::UInt32 Field_1_6; // 0x38
	::System::UInt32 Field_1_7; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1C57540A2293C7F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1C57540A2293C7F_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}
};
