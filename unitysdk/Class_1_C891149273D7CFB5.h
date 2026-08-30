#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::Client { class CameraBlendCurve; }

#define CLASS_1_C891149273D7CFB5_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0xBAE5170)
#define CLASS_1_C891149273D7CFB5__CTOR_OFFSET UNITYSDK_OFFSET(0xBAE5250)

inline static constexpr unsigned int Class_1_C891149273D7CFB5_TypeDefinitionIndex = 57225;

class Class_1_C891149273D7CFB5 : public ::System::Object
{
public:
	::RPG::Client::CameraBlendCurve* KFCELIGJDAD; // 0x10
	::Class_3_07C3C4D2990C49EE* MGJLINFADJK; // 0x18
	::System::Boolean FKLBDDFFBMD; // 0x20
	::System::Single MFOKFOOCHPA; // 0x24
	::UnityEngine::Vector3 HMFELPGGPMI; // 0x28
	::System::Single DGLGPLADDFB; // 0x34
	::System::UInt32 IHKEHJCACDO; // 0x38
	::System::UInt32 CDPKHFMJBPF; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C891149273D7CFB5__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C891149273D7CFB5_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}
};
