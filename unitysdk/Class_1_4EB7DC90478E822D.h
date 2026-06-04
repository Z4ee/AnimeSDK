#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_684;
class Class_1_A05AF49AB4C19659;
namespace RPG::Client { class GridFightTraitElationEffect; }

#define CLASS_1_4EB7DC90478E822D_METHOD_1_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0xD19F3A0)
#define CLASS_1_4EB7DC90478E822D_METHOD_1_AC425167B3BD4E59_OFFSET UNITYSDK_OFFSET(0xD19F500)
#define CLASS_1_4EB7DC90478E822D__CTOR_OFFSET UNITYSDK_OFFSET(0xD19F2C0)

inline static constexpr unsigned int Class_1_4EB7DC90478E822D_TypeDefinitionIndex = 61136;

class Class_1_4EB7DC90478E822D : public ::System::Object
{
public:
	::Class_1_A05AF49AB4C19659* Field_1_0; // 0x10
	::RPG::Client::GridFightTraitElationEffect* Field_1_1; // 0x18

	::System::Void _ctor(::RPG::Client::GridFightTraitElationEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitElationEffect*))((::PBYTE)hIl2Cpp + CLASS_1_4EB7DC90478E822D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_5A124CAF1E48B74F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4EB7DC90478E822D_METHOD_1_5A124CAF1E48B74F_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_684* Method_1_AC425167B3BD4E59(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::Class_0_16E4307DCC419505_684*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_4EB7DC90478E822D_METHOD_1_AC425167B3BD4E59_OFFSET))(this, a1);
	}
};
