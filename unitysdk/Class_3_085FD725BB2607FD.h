#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/LevelVariable_1.h"

namespace RPG::GameCore { class LGameEntityRef; }
namespace RPG::GameCore { class LittleGameLevelVariable; }

#define CLASS_3_085FD725BB2607FD_ISVALUEEQUALSTO_OFFSET UNITYSDK_OFFSET(0x8D7EA80)
#define CLASS_3_085FD725BB2607FD_METHOD_3_09AF08DB379DD8E3_OFFSET UNITYSDK_OFFSET(0x8D7E9C0)
#define CLASS_3_085FD725BB2607FD_METHOD_3_522401B8AE5EA491_OFFSET UNITYSDK_OFFSET(0x8D7EB20)
#define CLASS_3_085FD725BB2607FD__CTOR_OFFSET UNITYSDK_OFFSET(0x8D7EB00)

inline static constexpr unsigned int Class_3_085FD725BB2607FD_TypeDefinitionIndex = 62262;

class Class_3_085FD725BB2607FD : public ::RPG::Client::LittleGame::LevelVariable_1<::RPG::GameCore::LGameEntityRef*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_085FD725BB2607FD__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_09AF08DB379DD8E3(::RPG::GameCore::LittleGameLevelVariable* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelVariable*))((::PBYTE)hIl2Cpp + CLASS_3_085FD725BB2607FD_METHOD_3_09AF08DB379DD8E3_OFFSET))(this, a1);
	}

	::System::Boolean IsValueEqualsTo(::RPG::GameCore::LGameEntityRef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LGameEntityRef*))((::PBYTE)hIl2Cpp + CLASS_3_085FD725BB2607FD_ISVALUEEQUALSTO_OFFSET))(this, a1);
	}

	::System::Void Method_3_522401B8AE5EA491(::RPG::GameCore::LittleGameLevelVariable* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelVariable*))((::PBYTE)hIl2Cpp + CLASS_3_085FD725BB2607FD_METHOD_3_522401B8AE5EA491_OFFSET))(this, P0);
	}
};
