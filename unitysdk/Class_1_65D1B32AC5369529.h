#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_758;
class Class_1_A05AF49AB4C19659;
namespace RPG::Client { class GridFightTrait; }

#define CLASS_1_65D1B32AC5369529_METHOD_1_AC425167B3BD4E59_OFFSET UNITYSDK_OFFSET(0xB6F79E0)
#define CLASS_1_65D1B32AC5369529_METHOD_1_EAC2737A96E071C9_OFFSET UNITYSDK_OFFSET(0xB6F77F0)
#define CLASS_1_65D1B32AC5369529__CTOR_OFFSET UNITYSDK_OFFSET(0xB6F7710)

inline static constexpr unsigned int Class_1_65D1B32AC5369529_TypeDefinitionIndex = 65426;

class Class_1_65D1B32AC5369529 : public ::System::Object
{
public:
	::RPG::Client::GridFightTrait* ENFAMOIAMGL; // 0x10
	::Class_1_A05AF49AB4C19659* IAFNNMFIMOI; // 0x18

	::System::Void _ctor(::RPG::Client::GridFightTrait* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + CLASS_1_65D1B32AC5369529__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_EAC2737A96E071C9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65D1B32AC5369529_METHOD_1_EAC2737A96E071C9_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_758* Method_1_AC425167B3BD4E59(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::Class_0_16E4307DCC419505_758*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_65D1B32AC5369529_METHOD_1_AC425167B3BD4E59_OFFSET))(this, a1);
	}
};
