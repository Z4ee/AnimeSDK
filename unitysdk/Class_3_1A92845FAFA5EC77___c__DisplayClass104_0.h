#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimAvatarConfig; }

#define CLASS_3_1A92845FAFA5EC77___C__DISPLAYCLASS104_0__CREATEPHANTOMPLAYERVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x180EFAF0)
#define CLASS_3_1A92845FAFA5EC77___C__DISPLAYCLASS104_0__CTOR_OFFSET UNITYSDK_OFFSET(0x180C4FC0)

inline static constexpr unsigned int Class_3_1A92845FAFA5EC77___c__DisplayClass104_0_TypeDefinitionIndex = 39408;

class Class_3_1A92845FAFA5EC77___c__DisplayClass104_0 : public ::System::Object
{
public:
	::System::UInt32 avatarID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1A92845FAFA5EC77___C__DISPLAYCLASS104_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _CreatePhantomPlayerView_b__0(::RPG::GameCore::FiveDimAvatarConfig* config)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FiveDimAvatarConfig*))((::PBYTE)hIl2Cpp + CLASS_3_1A92845FAFA5EC77___C__DISPLAYCLASS104_0__CREATEPHANTOMPLAYERVIEW_B__0_OFFSET))(this, config);
	}
};
