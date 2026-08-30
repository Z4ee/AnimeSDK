#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/VCameraState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_25387A59D8708C59__CTOR_OFFSET UNITYSDK_OFFSET(0x17AE9040)

inline static constexpr unsigned int Class_1_25387A59D8708C59_TypeDefinitionIndex = 69584;

class Class_1_25387A59D8708C59 : public ::System::Object
{
public:
	::System::Single CDCLODPBBFM; // 0x10
	::System::Single FOOAENGFEFH; // 0x14
	::System::Single EOJHKLHPGAM; // 0x18
	::RPG::GameCore::VCameraState FIOICBCELHD; // 0x1C
	::UnityEngine::Vector3 HOLEMFENGNB; // 0x20
	::System::Single LIPGDJLDNOJ; // 0x2C
	::UnityEngine::Vector3 BNGJDBHHMFO; // 0x30
	::System::Boolean JFAELDAFPKG; // 0x3C
	::UnityEngine::Vector3 NKEIBNDEAOE; // 0x40
	::System::Single IDKONBFPBLH; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25387A59D8708C59__CTOR_OFFSET))(this);
	}
};
