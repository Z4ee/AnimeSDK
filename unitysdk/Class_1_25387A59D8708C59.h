#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/VCameraState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_25387A59D8708C59__CTOR_OFFSET UNITYSDK_OFFSET(0xF875770)

inline static constexpr unsigned int Class_1_25387A59D8708C59_TypeDefinitionIndex = 69620;

class Class_1_25387A59D8708C59 : public ::System::Object
{
public:
	::RPG::GameCore::VCameraState FIOICBCELHD; // 0x10
	::System::Single EOJHKLHPGAM; // 0x14
	::System::Single CDCLODPBBFM; // 0x18
	::System::Boolean JFAELDAFPKG; // 0x1C
	::System::Single IDKONBFPBLH; // 0x20
	::System::Single FOOAENGFEFH; // 0x24
	::UnityEngine::Vector3 HOLEMFENGNB; // 0x28
	::System::Single LIPGDJLDNOJ; // 0x34
	::UnityEngine::Vector3 BNGJDBHHMFO; // 0x38
	::UnityEngine::Vector3 NKEIBNDEAOE; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25387A59D8708C59__CTOR_OFFSET))(this);
	}
};
