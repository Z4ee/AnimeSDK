#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define CLASS_1_438544502172BDB5_METHOD_1_1ECDF1C47C8D4E7A_OFFSET UNITYSDK_OFFSET(0x1284A3C0)
#define CLASS_1_438544502172BDB5__CTOR_OFFSET UNITYSDK_OFFSET(0x1284A460)

inline static constexpr unsigned int Class_1_438544502172BDB5_TypeDefinitionIndex = 60604;

class Class_1_438544502172BDB5 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_4; // 0x10
	::RPG::Client::TextID Field_1_0; // 0x18
	::System::Single Field_1_2; // 0x28
	::System::Single Field_1_3; // 0x2C
	::System::UInt32 Field_1_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_438544502172BDB5__CTOR_OFFSET))(this);
	}

	static ::RPG::Client::TextID Method_1_1ECDF1C47C8D4E7A(::System::UInt32 a1)
	{
		return ((::RPG::Client::TextID(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_438544502172BDB5_METHOD_1_1ECDF1C47C8D4E7A_OFFSET))(a1);
	}
};
