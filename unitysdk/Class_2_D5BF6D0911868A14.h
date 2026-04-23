#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Context_1.h"

class Class_1_F5E46610D107584E;
class Class_2_BBF288E7BC196760;
namespace RPG::Client::LittleGame { class MovieBossConfig; }
namespace RPG::Client::LittleGame { class MovieGameLevelConfig; }

#define CLASS_2_D5BF6D0911868A14_METHOD_2_189D64BF9E0BCB9F_OFFSET UNITYSDK_OFFSET(0x17F71290)
#define CLASS_2_D5BF6D0911868A14_METHOD_2_347B96E569BEA522_OFFSET UNITYSDK_OFFSET(0x17F71100)
#define CLASS_2_D5BF6D0911868A14_METHOD_2_58EA5F4E77C0F4AE_OFFSET UNITYSDK_OFFSET(0x17F70F60)
#define CLASS_2_D5BF6D0911868A14_METHOD_2_7183C790EA8096D2_OFFSET UNITYSDK_OFFSET(0x17F71380)
#define CLASS_2_D5BF6D0911868A14_METHOD_2_E14A7FCF78650419_OFFSET UNITYSDK_OFFSET(0x17F71080)
#define CLASS_2_D5BF6D0911868A14_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17F710E0)
#define CLASS_2_D5BF6D0911868A14__CTOR_OFFSET UNITYSDK_OFFSET(0x17F713E0)

inline static constexpr unsigned int Class_2_D5BF6D0911868A14_TypeDefinitionIndex = 38341;

class Class_2_D5BF6D0911868A14 : public ::Entitas::Context_1<::Class_2_BBF288E7BC196760*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5BF6D0911868A14__CTOR_OFFSET))(this);
	}

	::Class_2_BBF288E7BC196760* Method_2_58EA5F4E77C0F4AE()
	{
		return ((::Class_2_BBF288E7BC196760*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5BF6D0911868A14_METHOD_2_58EA5F4E77C0F4AE_OFFSET))(this);
	}

	::Class_1_F5E46610D107584E* Method_2_E14A7FCF78650419()
	{
		return ((::Class_1_F5E46610D107584E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5BF6D0911868A14_METHOD_2_E14A7FCF78650419_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5BF6D0911868A14_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::Class_2_BBF288E7BC196760* Method_2_347B96E569BEA522(::RPG::Client::LittleGame::MovieGameLevelConfig* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::RPG::Client::LittleGame::MovieBossConfig* a5)
	{
		return ((::Class_2_BBF288E7BC196760*(*)(::PVOID, ::RPG::Client::LittleGame::MovieGameLevelConfig*, ::System::Single, ::System::Single, ::System::Single, ::RPG::Client::LittleGame::MovieBossConfig*))((::PBYTE)hIl2Cpp + CLASS_2_D5BF6D0911868A14_METHOD_2_347B96E569BEA522_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_189D64BF9E0BCB9F(::RPG::Client::LittleGame::MovieGameLevelConfig* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::RPG::Client::LittleGame::MovieBossConfig* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::MovieGameLevelConfig*, ::System::Single, ::System::Single, ::System::Single, ::RPG::Client::LittleGame::MovieBossConfig*))((::PBYTE)hIl2Cpp + CLASS_2_D5BF6D0911868A14_METHOD_2_189D64BF9E0BCB9F_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_7183C790EA8096D2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5BF6D0911868A14_METHOD_2_7183C790EA8096D2_OFFSET))(this);
	}
};
