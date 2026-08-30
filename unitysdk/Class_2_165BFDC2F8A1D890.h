#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_0_16E4307DCC419505_460;
class Class_1_64D890C466F37235;
namespace RPG::Client { class MonoMapPoseSwitcher; }
namespace RPG::GameCore { class CharacterVisibleComponent; }

#define CLASS_2_165BFDC2F8A1D890_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18479A20)
#define CLASS_2_165BFDC2F8A1D890_METHOD_2_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0x184797B0)
#define CLASS_2_165BFDC2F8A1D890_METHOD_2_E21AC6EE08DC160A_OFFSET UNITYSDK_OFFSET(0x18479B50)
#define CLASS_2_165BFDC2F8A1D890_METHOD_2_F68F6F2F168E0D7D_OFFSET UNITYSDK_OFFSET(0x18479BE0)
#define CLASS_2_165BFDC2F8A1D890__CTOR_OFFSET UNITYSDK_OFFSET(0x18479CB0)

inline static constexpr unsigned int Class_2_165BFDC2F8A1D890_TypeDefinitionIndex = 57463;

class Class_2_165BFDC2F8A1D890 : public ::RPG::GameCore::GameComponentBase
{
public:
	::Class_1_64D890C466F37235* FGNBCPELJEO; // 0x18
	::RPG::Client::MonoMapPoseSwitcher* KEMBAIBGFPD; // 0x20
	::RPG::GameCore::CharacterVisibleComponent* PLDFJEONENF; // 0x28
	::System::Boolean MLBNILBLHLK; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_165BFDC2F8A1D890__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_45AA2F5085C2C40D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_165BFDC2F8A1D890_METHOD_2_45AA2F5085C2C40D_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_165BFDC2F8A1D890_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_E21AC6EE08DC160A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_165BFDC2F8A1D890_METHOD_2_E21AC6EE08DC160A_OFFSET))(this);
	}

	::System::Void Method_2_F68F6F2F168E0D7D(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_2_165BFDC2F8A1D890_METHOD_2_F68F6F2F168E0D7D_OFFSET))(this, a1);
	}
};
