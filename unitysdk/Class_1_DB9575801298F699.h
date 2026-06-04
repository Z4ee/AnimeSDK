#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }

#define CLASS_1_DB9575801298F699_CLEAR_OFFSET UNITYSDK_OFFSET(0xAD1F010)
#define CLASS_1_DB9575801298F699_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xAD1F0C0)
#define CLASS_1_DB9575801298F699_METHOD_1_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0xAD1F120)
#define CLASS_1_DB9575801298F699_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xAD1F060)
#define CLASS_1_DB9575801298F699__CTOR_OFFSET UNITYSDK_OFFSET(0xAD1F180)

inline static constexpr unsigned int Class_1_DB9575801298F699_TypeDefinitionIndex = 56800;

class Class_1_DB9575801298F699 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::RPG::GameCore::GameEntity* Field_1_1; // 0x18
	::RPG::GameCore::GameEntity* Field_1_2; // 0x20
	::System::Action* Field_1_3; // 0x28
	::System::Action* Field_1_4; // 0x30
	::System::Boolean Field_1_5; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB9575801298F699__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB9575801298F699_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB9575801298F699_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB9575801298F699_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB9575801298F699_METHOD_1_4343F372F34C05BF_2_OFFSET))(this);
	}
};
