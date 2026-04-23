#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/LevelVariable_1.h"

namespace RPG::GameCore { class LevelEntityRef; }
namespace RPG::GameCore { class LittleGameLevelVariable; }

#define CLASS_3_085FD725BB2607FD_1_ISVALUEEQUALSTO_OFFSET UNITYSDK_OFFSET(0x8F5C330)
#define CLASS_3_085FD725BB2607FD_1_METHOD_3_09AF08DB379DD8E3_OFFSET UNITYSDK_OFFSET(0x8F5C270)
#define CLASS_3_085FD725BB2607FD_1_METHOD_3_522401B8AE5EA491_OFFSET UNITYSDK_OFFSET(0x8F5C3D0)
#define CLASS_3_085FD725BB2607FD_1__CTOR_OFFSET UNITYSDK_OFFSET(0x8F5C3B0)

inline static constexpr unsigned int Class_3_085FD725BB2607FD_1_TypeDefinitionIndex = 70262;

class Class_3_085FD725BB2607FD_1 : public ::RPG::Client::LittleGame::LevelVariable_1<::RPG::GameCore::LevelEntityRef*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_085FD725BB2607FD_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_09AF08DB379DD8E3(::RPG::GameCore::LittleGameLevelVariable* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelVariable*))((::PBYTE)hIl2Cpp + CLASS_3_085FD725BB2607FD_1_METHOD_3_09AF08DB379DD8E3_OFFSET))(this, a1);
	}

	::System::Boolean IsValueEqualsTo(::RPG::GameCore::LevelEntityRef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelEntityRef*))((::PBYTE)hIl2Cpp + CLASS_3_085FD725BB2607FD_1_ISVALUEEQUALSTO_OFFSET))(this, a1);
	}

	::System::Void Method_3_522401B8AE5EA491(::RPG::GameCore::LittleGameLevelVariable* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelVariable*))((::PBYTE)hIl2Cpp + CLASS_3_085FD725BB2607FD_1_METHOD_3_522401B8AE5EA491_OFFSET))(this, P0);
	}
};
