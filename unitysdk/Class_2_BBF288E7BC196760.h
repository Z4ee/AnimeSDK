#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Entity.h"

class Class_1_F5E46610D107584E;
namespace RPG::Client::LittleGame { class MovieBossConfig; }
namespace RPG::Client::LittleGame { class MovieGameLevelConfig; }

#define CLASS_2_BBF288E7BC196760_METHOD_2_0A01213A153BADCC_OFFSET UNITYSDK_OFFSET(0x180845D0)
#define CLASS_2_BBF288E7BC196760_METHOD_2_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0x18084990)
#define CLASS_2_BBF288E7BC196760_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x18084560)
#define CLASS_2_BBF288E7BC196760_METHOD_2_7803AFFAD1904479_OFFSET UNITYSDK_OFFSET(0x18084730)
#define CLASS_2_BBF288E7BC196760_METHOD_2_B64C60973842FE45_1_OFFSET UNITYSDK_OFFSET(0x180848E0)
#define CLASS_2_BBF288E7BC196760_METHOD_2_B64C60973842FE45_OFFSET UNITYSDK_OFFSET(0x180844B0)
#define CLASS_2_BBF288E7BC196760_METHOD_2_D20F759FC2EC43FB_OFFSET UNITYSDK_OFFSET(0x18084890)
#define CLASS_2_BBF288E7BC196760__CTOR_OFFSET UNITYSDK_OFFSET(0x18084A00)

inline static constexpr unsigned int Class_2_BBF288E7BC196760_TypeDefinitionIndex = 38343;

class Class_2_BBF288E7BC196760 : public ::Entitas::Entity
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BBF288E7BC196760__CTOR_OFFSET))(this);
	}

	::Class_1_F5E46610D107584E* Method_2_B64C60973842FE45()
	{
		return ((::Class_1_F5E46610D107584E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BBF288E7BC196760_METHOD_2_B64C60973842FE45_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BBF288E7BC196760_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_0A01213A153BADCC(::RPG::Client::LittleGame::MovieGameLevelConfig* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::RPG::Client::LittleGame::MovieBossConfig* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::MovieGameLevelConfig*, ::System::Single, ::System::Single, ::System::Single, ::RPG::Client::LittleGame::MovieBossConfig*))((::PBYTE)hIl2Cpp + CLASS_2_BBF288E7BC196760_METHOD_2_0A01213A153BADCC_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_7803AFFAD1904479(::RPG::Client::LittleGame::MovieGameLevelConfig* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::RPG::Client::LittleGame::MovieBossConfig* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::MovieGameLevelConfig*, ::System::Single, ::System::Single, ::System::Single, ::RPG::Client::LittleGame::MovieBossConfig*))((::PBYTE)hIl2Cpp + CLASS_2_BBF288E7BC196760_METHOD_2_7803AFFAD1904479_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_D20F759FC2EC43FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BBF288E7BC196760_METHOD_2_D20F759FC2EC43FB_OFFSET))(this);
	}

	::Class_1_F5E46610D107584E* Method_2_B64C60973842FE45_1()
	{
		return ((::Class_1_F5E46610D107584E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BBF288E7BC196760_METHOD_2_B64C60973842FE45_1_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BBF288E7BC196760_METHOD_2_1808E1CF7A125519_1_OFFSET))(this);
	}
};
