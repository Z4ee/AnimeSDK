#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIController; }
namespace RPG::Client::Promises { class Promise; }

#define CLASS_1_09F9B94762F07206_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1051FE50)
#define CLASS_1_09F9B94762F07206_METHOD_1_23150B42D028B133_OFFSET UNITYSDK_OFFSET(0x10520230)
#define CLASS_1_09F9B94762F07206_METHOD_1_3EA7796C575B0AE8_OFFSET UNITYSDK_OFFSET(0x10520390)
#define CLASS_1_09F9B94762F07206_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x1051FEE0)
#define CLASS_1_09F9B94762F07206_METHOD_1_F49C989D6A9C1D2A_OFFSET UNITYSDK_OFFSET(0x1051FFA0)
#define CLASS_1_09F9B94762F07206__CTOR_OFFSET UNITYSDK_OFFSET(0x1051FE40)

inline static constexpr unsigned int Class_1_09F9B94762F07206_TypeDefinitionIndex = 54483;

class Class_1_09F9B94762F07206 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise* Field_1_4; // 0x10
	::RPG::Client::UIController* Field_1_3; // 0x18
	::System::Boolean Field_1_2; // 0x20
	::System::Boolean Field_1_0; // 0x21
	::RPG::GameCore::RogueSubMode Field_1_1; // 0x24

	::System::Void _ctor(::RPG::GameCore::RogueSubMode a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueSubMode, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_09F9B94762F07206__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09F9B94762F07206_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09F9B94762F07206_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_1_F49C989D6A9C1D2A()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09F9B94762F07206_METHOD_1_F49C989D6A9C1D2A_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_1_23150B42D028B133()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09F9B94762F07206_METHOD_1_23150B42D028B133_OFFSET))(this);
	}

	::System::Void Method_1_3EA7796C575B0AE8(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_09F9B94762F07206_METHOD_1_3EA7796C575B0AE8_OFFSET))(this, a1);
	}
};
