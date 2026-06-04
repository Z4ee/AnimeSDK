#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_0_16E4307DCC419505_401;
namespace RPG::GameCore { class TeamDataComponent; }

#define CLASS_2_AD17E3B72B70F968_DISPOSE_OFFSET UNITYSDK_OFFSET(0xABA12B0)
#define CLASS_2_AD17E3B72B70F968_METHOD_2_3BDC4BFEACF5FA67_OFFSET UNITYSDK_OFFSET(0xABA13E0)
#define CLASS_2_AD17E3B72B70F968_METHOD_2_5B0531D5B96D6B96_1_OFFSET UNITYSDK_OFFSET(0xABA15B0)
#define CLASS_2_AD17E3B72B70F968_METHOD_2_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0xABA1520)
#define CLASS_2_AD17E3B72B70F968__CTOR_OFFSET UNITYSDK_OFFSET(0xABA1640)

inline static constexpr unsigned int Class_2_AD17E3B72B70F968_TypeDefinitionIndex = 53678;

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

	::System::Void Method_2_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_AD17E3B72B70F968_METHOD_2_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void Method_2_5B0531D5B96D6B96_1(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_AD17E3B72B70F968_METHOD_2_5B0531D5B96D6B96_1_OFFSET))(this, a1);
	}
};
