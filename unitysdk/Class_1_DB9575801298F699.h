#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }

#define CLASS_1_DB9575801298F699_CLEAR_OFFSET UNITYSDK_OFFSET(0x192708B0)
#define CLASS_1_DB9575801298F699_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x19270960)
#define CLASS_1_DB9575801298F699_METHOD_1_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x192709C0)
#define CLASS_1_DB9575801298F699_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x19270900)
#define CLASS_1_DB9575801298F699__CTOR_OFFSET UNITYSDK_OFFSET(0x19270A20)

inline static constexpr unsigned int Class_1_DB9575801298F699_TypeDefinitionIndex = 60874;

class Class_1_DB9575801298F699 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* LGIABFPBNPG; // 0x10
	::RPG::GameCore::GameEntity* JPBIPLGPMFO; // 0x18
	::System::Action* LNNLMNBOPCB; // 0x20
	::System::Action* CDJGBPCECMB; // 0x28
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
