#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }

#define CLASS_1_1F7B5F5E8BAE0D03_CLEAR_OFFSET UNITYSDK_OFFSET(0x9E50630)
#define CLASS_1_1F7B5F5E8BAE0D03_METHOD_1_9A6DA36CCAE7D188_1_OFFSET UNITYSDK_OFFSET(0x9E506D0)
#define CLASS_1_1F7B5F5E8BAE0D03_METHOD_1_9A6DA36CCAE7D188_2_OFFSET UNITYSDK_OFFSET(0x9E50720)
#define CLASS_1_1F7B5F5E8BAE0D03_METHOD_1_9A6DA36CCAE7D188_OFFSET UNITYSDK_OFFSET(0x9E50680)
#define CLASS_1_1F7B5F5E8BAE0D03__CTOR_OFFSET UNITYSDK_OFFSET(0x9E50770)

inline static constexpr unsigned int Class_1_1F7B5F5E8BAE0D03_TypeDefinitionIndex = 56038;

class Class_1_1F7B5F5E8BAE0D03 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_1; // 0x10
	::System::Action* Field_1_5; // 0x18
	::RPG::GameCore::GameEntity* Field_1_0; // 0x20
	::System::Action* Field_1_4; // 0x28
	::System::Action* Field_1_3; // 0x30
	::System::Boolean Field_1_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F7B5F5E8BAE0D03__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F7B5F5E8BAE0D03_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_9A6DA36CCAE7D188()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F7B5F5E8BAE0D03_METHOD_1_9A6DA36CCAE7D188_OFFSET))(this);
	}

	::System::Void Method_1_9A6DA36CCAE7D188_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F7B5F5E8BAE0D03_METHOD_1_9A6DA36CCAE7D188_1_OFFSET))(this);
	}

	::System::Void Method_1_9A6DA36CCAE7D188_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F7B5F5E8BAE0D03_METHOD_1_9A6DA36CCAE7D188_2_OFFSET))(this);
	}
};
