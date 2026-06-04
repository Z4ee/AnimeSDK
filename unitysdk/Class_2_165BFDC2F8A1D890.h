#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_0_16E4307DCC419505_401;
class Class_1_64D890C466F37235;
namespace RPG::Client { class MonoMapPoseSwitcher; }
namespace RPG::GameCore { class CharacterVisibleComponent; }

#define CLASS_2_165BFDC2F8A1D890_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA46E240)
#define CLASS_2_165BFDC2F8A1D890_METHOD_2_458DAEAB6170C584_OFFSET UNITYSDK_OFFSET(0xA46DFA0)
#define CLASS_2_165BFDC2F8A1D890_METHOD_2_D9EF75A2D048B8A1_OFFSET UNITYSDK_OFFSET(0xA46E3A0)
#define CLASS_2_165BFDC2F8A1D890_METHOD_2_F68F6F2F168E0D7D_OFFSET UNITYSDK_OFFSET(0xA46E430)
#define CLASS_2_165BFDC2F8A1D890__CTOR_OFFSET UNITYSDK_OFFSET(0xA46E500)

inline static constexpr unsigned int Class_2_165BFDC2F8A1D890_TypeDefinitionIndex = 53526;

class Class_2_165BFDC2F8A1D890 : public ::RPG::GameCore::GameComponentBase
{
public:
	::Class_1_64D890C466F37235* Field_2_0; // 0x18
	::RPG::Client::MonoMapPoseSwitcher* Field_2_1; // 0x20
	::RPG::GameCore::CharacterVisibleComponent* Field_2_2; // 0x28
	::System::Boolean Field_2_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_165BFDC2F8A1D890__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_458DAEAB6170C584()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_165BFDC2F8A1D890_METHOD_2_458DAEAB6170C584_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_165BFDC2F8A1D890_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_D9EF75A2D048B8A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_165BFDC2F8A1D890_METHOD_2_D9EF75A2D048B8A1_OFFSET))(this);
	}

	::System::Void Method_2_F68F6F2F168E0D7D(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_165BFDC2F8A1D890_METHOD_2_F68F6F2F168E0D7D_OFFSET))(this, a1);
	}
};
