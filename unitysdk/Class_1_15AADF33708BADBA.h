#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SummonerEnergyBarType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DotBarTypeConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NumBarTypeConfig; }
namespace RPG::GameCore { class ProgressBarTypeConfig; }

#define CLASS_1_15AADF33708BADBA_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0xD239C30)
#define CLASS_1_15AADF33708BADBA__CTOR_OFFSET UNITYSDK_OFFSET(0xD239CB0)

inline static constexpr unsigned int Class_1_15AADF33708BADBA_TypeDefinitionIndex = 57055;

class Class_1_15AADF33708BADBA : public ::System::Object
{
public:
	::RPG::GameCore::ProgressBarTypeConfig* JJOBGHGHNPJ; // 0x10
	::RPG::GameCore::DotBarTypeConfig* CEPLINKFOHN; // 0x18
	::RPG::GameCore::NumBarTypeConfig* HOEEFFGDHOI; // 0x20
	::RPG::GameCore::GameEntity* OFHDAHHPNPJ; // 0x28
	::RPG::GameCore::SummonerEnergyBarType OPFMFGGBAKC; // 0x30
	::System::Int32 JADMAPDKLKL; // 0x34
	::System::Boolean CAGCHKJHMPD; // 0x38
	::System::Int32 HOCMHABKLGJ; // 0x3C
	::System::Int32 KMDEBAKFJML; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15AADF33708BADBA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_15AADF33708BADBA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_15AADF33708BADBA*))((::PBYTE)hIl2Cpp + CLASS_1_15AADF33708BADBA_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}
};
