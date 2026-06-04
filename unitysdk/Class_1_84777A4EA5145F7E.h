#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define CLASS_1_84777A4EA5145F7E_METHOD_1_93188C301720DB57_OFFSET UNITYSDK_OFFSET(0xB51CD60)
#define CLASS_1_84777A4EA5145F7E__CTOR_OFFSET UNITYSDK_OFFSET(0xB51CE10)

inline static constexpr unsigned int Class_1_84777A4EA5145F7E_TypeDefinitionIndex = 61538;

class Class_1_84777A4EA5145F7E : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x1C
	::RPG::Client::TextID Field_1_3; // 0x20
	::System::Single Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84777A4EA5145F7E__CTOR_OFFSET))(this);
	}

	static ::RPG::Client::TextID Method_1_93188C301720DB57(::System::UInt32 a1)
	{
		return ((::RPG::Client::TextID(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_84777A4EA5145F7E_METHOD_1_93188C301720DB57_OFFSET))(a1);
	}
};
