#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }

#define CLASS_1_DB9575801298F699_CLEAR_OFFSET UNITYSDK_OFFSET(0xC0FFE70)
#define CLASS_1_DB9575801298F699_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xC0FFF20)
#define CLASS_1_DB9575801298F699_METHOD_1_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0xC0FFF80)
#define CLASS_1_DB9575801298F699_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xC0FFEC0)
#define CLASS_1_DB9575801298F699__CTOR_OFFSET UNITYSDK_OFFSET(0xC0FFFE0)

inline static constexpr unsigned int Class_1_DB9575801298F699_TypeDefinitionIndex = 60874;

class Class_1_DB9575801298F699 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* LGIABFPBNPG; // 0x10
	::System::Action* LNNLMNBOPCB; // 0x18
	::System::Action* CDJGBPCECMB; // 0x20
	::RPG::GameCore::GameEntity* JPBIPLGPMFO; // 0x28
	::System::Action* OLHHIJIBKEM; // 0x30
	::System::Boolean FKAJFHIEOAH; // 0x38

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
