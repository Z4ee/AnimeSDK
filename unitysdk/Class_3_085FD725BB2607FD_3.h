#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/LevelVariable_1.h"

namespace RPG::GameCore { class LittleGameLevelVariable; }
namespace System { class String; }

#define CLASS_3_085FD725BB2607FD_3_METHOD_3_03A81715BD2AFEF3_OFFSET UNITYSDK_OFFSET(0x9A88FE0)
#define CLASS_3_085FD725BB2607FD_3_METHOD_3_09AF08DB379DD8E3_OFFSET UNITYSDK_OFFSET(0x9A88F20)
#define CLASS_3_085FD725BB2607FD_3_METHOD_3_522401B8AE5EA491_OFFSET UNITYSDK_OFFSET(0x9A89100)
#define CLASS_3_085FD725BB2607FD_3_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x9A891D0)
#define CLASS_3_085FD725BB2607FD_3_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x9A89170)
#define CLASS_3_085FD725BB2607FD_3_METHOD_3_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x9A89090)
#define CLASS_3_085FD725BB2607FD_3__CTOR_OFFSET UNITYSDK_OFFSET(0x9A890E0)

inline static constexpr unsigned int Class_3_085FD725BB2607FD_3_TypeDefinitionIndex = 70264;

class Class_3_085FD725BB2607FD_3 : public ::RPG::Client::LittleGame::LevelVariable_1<::System::String*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_085FD725BB2607FD_3__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_09AF08DB379DD8E3(::RPG::GameCore::LittleGameLevelVariable* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelVariable*))((::PBYTE)hIl2Cpp + CLASS_3_085FD725BB2607FD_3_METHOD_3_09AF08DB379DD8E3_OFFSET))(this, a1);
	}

	::System::Void Method_3_03A81715BD2AFEF3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_085FD725BB2607FD_3_METHOD_3_03A81715BD2AFEF3_OFFSET))(this);
	}

	::System::Void Method_3_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_085FD725BB2607FD_3_METHOD_3_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_3_522401B8AE5EA491(::RPG::GameCore::LittleGameLevelVariable* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelVariable*))((::PBYTE)hIl2Cpp + CLASS_3_085FD725BB2607FD_3_METHOD_3_522401B8AE5EA491_OFFSET))(this, P0);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_085FD725BB2607FD_3_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_085FD725BB2607FD_3_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
	}
};
