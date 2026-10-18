#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BEFFF38E22C3198D;
class Class_1_E0103A0EA6CD0F4C;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace System { class String; }

#define CLASS_1_F05AF62BF42805D9_CLASS_1_60FD03160B03F7FD__CTOR_OFFSET UNITYSDK_OFFSET(0xC477800)

inline static constexpr unsigned int Class_1_F05AF62BF42805D9_Class_1_60FD03160B03F7FD_TypeDefinitionIndex = 60560;

class Class_1_F05AF62BF42805D9_Class_1_60FD03160B03F7FD : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* IFCOJBEEAKG; // 0x10
	::RPG::GameCore::LittleGameLevelConfig* PDKOBKPIBPN; // 0x18
	::Class_1_BEFFF38E22C3198D* MKLOJCHCKPN; // 0x20
	::RPG::GameCore::GameEntity* OFHDAHHPNPJ; // 0x28
	::Class_1_E0103A0EA6CD0F4C* FMJPMFEDIJL; // 0x30
	::System::String* NMELLLLPDPM; // 0x38
	::System::UInt32 OAJHOILAHJG; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F05AF62BF42805D9_CLASS_1_60FD03160B03F7FD__CTOR_OFFSET))(this);
	}
};
