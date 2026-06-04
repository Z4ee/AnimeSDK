#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/LevelVariable_1.h"

namespace RPG::GameCore { class LittleGameLevelVariable; }
namespace System { class String; }

#define CLASS_3_5890F772F003B683_2_METHOD_3_182BA737D561CA10_OFFSET UNITYSDK_OFFSET(0x13C51CA0)
#define CLASS_3_5890F772F003B683_2_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x13C51DD0)
#define CLASS_3_5890F772F003B683_2_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x13C51D70)
#define CLASS_3_5890F772F003B683_2_METHOD_3_946A54FF330353F1_OFFSET UNITYSDK_OFFSET(0x13C51D10)
#define CLASS_3_5890F772F003B683_2_METHOD_3_C495FC84AA2302E0_OFFSET UNITYSDK_OFFSET(0x13C51BE0)
#define CLASS_3_5890F772F003B683_2_METHOD_3_E942A4C350694BAC_OFFSET UNITYSDK_OFFSET(0x13C51B20)
#define CLASS_3_5890F772F003B683_2__CTOR_OFFSET UNITYSDK_OFFSET(0x13C51CF0)

inline static constexpr unsigned int Class_3_5890F772F003B683_2_TypeDefinitionIndex = 71076;

class Class_3_5890F772F003B683_2 : public ::RPG::Client::LittleGame::LevelVariable_1<::System::String*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5890F772F003B683_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_E942A4C350694BAC(::RPG::GameCore::LittleGameLevelVariable* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelVariable*))((::PBYTE)hIl2Cpp + CLASS_3_5890F772F003B683_2_METHOD_3_E942A4C350694BAC_OFFSET))(this, a1);
	}

	::System::Void Method_3_C495FC84AA2302E0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5890F772F003B683_2_METHOD_3_C495FC84AA2302E0_OFFSET))(this);
	}

	::System::Void Method_3_182BA737D561CA10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5890F772F003B683_2_METHOD_3_182BA737D561CA10_OFFSET))(this);
	}

	::System::Void Method_3_946A54FF330353F1(::RPG::GameCore::LittleGameLevelVariable* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelVariable*))((::PBYTE)hIl2Cpp + CLASS_3_5890F772F003B683_2_METHOD_3_946A54FF330353F1_OFFSET))(this, a1);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5890F772F003B683_2_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5890F772F003B683_2_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
	}
};
