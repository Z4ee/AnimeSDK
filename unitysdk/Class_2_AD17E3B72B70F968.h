#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_0_16E4307DCC419505_460;
namespace RPG::GameCore { class TeamDataComponent; }

#define CLASS_2_AD17E3B72B70F968_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF7FF20)
#define CLASS_2_AD17E3B72B70F968_METHOD_2_3BDC4BFEACF5FA67_OFFSET UNITYSDK_OFFSET(0xBF80050)
#define CLASS_2_AD17E3B72B70F968_METHOD_2_5B0531D5B96D6B96_1_OFFSET UNITYSDK_OFFSET(0xBF80220)
#define CLASS_2_AD17E3B72B70F968_METHOD_2_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0xBF80190)
#define CLASS_2_AD17E3B72B70F968__CTOR_OFFSET UNITYSDK_OFFSET(0xBF802B0)

inline static constexpr unsigned int Class_2_AD17E3B72B70F968_TypeDefinitionIndex = 57621;

class Class_2_AD17E3B72B70F968 : public ::RPG::GameCore::GameComponentBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD17E3B72B70F968__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD17E3B72B70F968_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_3BDC4BFEACF5FA67(::RPG::GameCore::TeamDataComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamDataComponent*))((::PBYTE)hIl2Cpp + CLASS_2_AD17E3B72B70F968_METHOD_2_3BDC4BFEACF5FA67_OFFSET))(this, a1);
	}

	::System::Void Method_2_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_2_AD17E3B72B70F968_METHOD_2_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void Method_2_5B0531D5B96D6B96_1(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_2_AD17E3B72B70F968_METHOD_2_5B0531D5B96D6B96_1_OFFSET))(this, a1);
	}
};
