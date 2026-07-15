#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class AdventurePhase; }
namespace System { class String; }

#define CLASS_1_45E6CA349D5D1707_METHOD_1_C697C26278BBC189_OFFSET UNITYSDK_OFFSET(0x15F5EFD0)
#define CLASS_1_45E6CA349D5D1707__CTOR_OFFSET UNITYSDK_OFFSET(0x15F5FA70)

inline static constexpr unsigned int Class_1_45E6CA349D5D1707_TypeDefinitionIndex = 58164;

class Class_1_45E6CA349D5D1707 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::UnityEngine::Quaternion Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x30
	::UnityEngine::Vector3 Field_1_4; // 0x34
	::System::Boolean Field_1_5; // 0x40
	::System::Boolean Field_1_6; // 0x41
	::System::UInt32 Field_1_7; // 0x44
	::System::UInt32 Field_1_8; // 0x48
	::System::UInt32 Field_1_9; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45E6CA349D5D1707__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_C697C26278BBC189(::RPG::Client::AdventurePhase* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + CLASS_1_45E6CA349D5D1707_METHOD_1_C697C26278BBC189_OFFSET))(this, a1);
	}
};
