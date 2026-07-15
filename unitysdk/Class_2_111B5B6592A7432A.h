#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Entity.h"

class Class_1_F5E46610D107584E;
namespace RPG::Client::LittleGame { class MovieBossConfig; }
namespace RPG::Client::LittleGame { class MovieGameLevelConfig; }

#define CLASS_2_111B5B6592A7432A_METHOD_2_04BAE846E4F7DA88_OFFSET UNITYSDK_OFFSET(0x1A021AF0)
#define CLASS_2_111B5B6592A7432A_METHOD_2_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0x1A021EB0)
#define CLASS_2_111B5B6592A7432A_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x1A021A90)
#define CLASS_2_111B5B6592A7432A_METHOD_2_6F95FC560A0179F8_OFFSET UNITYSDK_OFFSET(0x1A021C50)
#define CLASS_2_111B5B6592A7432A_METHOD_2_AD2B2AFEF3192F72_OFFSET UNITYSDK_OFFSET(0x1A021DB0)
#define CLASS_2_111B5B6592A7432A_METHOD_2_AECF8BEC293ED42A_1_OFFSET UNITYSDK_OFFSET(0x1A021E00)
#define CLASS_2_111B5B6592A7432A_METHOD_2_AECF8BEC293ED42A_OFFSET UNITYSDK_OFFSET(0x1A0219E0)
#define CLASS_2_111B5B6592A7432A__CTOR_OFFSET UNITYSDK_OFFSET(0x1A021F10)

inline static constexpr unsigned int Class_2_111B5B6592A7432A_TypeDefinitionIndex = 39915;

class Class_2_111B5B6592A7432A : public ::Entitas::Entity
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_111B5B6592A7432A__CTOR_OFFSET))(this);
	}

	::Class_1_F5E46610D107584E* Method_2_AECF8BEC293ED42A()
	{
		return ((::Class_1_F5E46610D107584E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_111B5B6592A7432A_METHOD_2_AECF8BEC293ED42A_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_111B5B6592A7432A_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_04BAE846E4F7DA88(::RPG::Client::LittleGame::MovieGameLevelConfig* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::RPG::Client::LittleGame::MovieBossConfig* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::MovieGameLevelConfig*, ::System::Single, ::System::Single, ::System::Single, ::RPG::Client::LittleGame::MovieBossConfig*))((::PBYTE)hIl2Cpp + CLASS_2_111B5B6592A7432A_METHOD_2_04BAE846E4F7DA88_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_6F95FC560A0179F8(::RPG::Client::LittleGame::MovieGameLevelConfig* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::RPG::Client::LittleGame::MovieBossConfig* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::MovieGameLevelConfig*, ::System::Single, ::System::Single, ::System::Single, ::RPG::Client::LittleGame::MovieBossConfig*))((::PBYTE)hIl2Cpp + CLASS_2_111B5B6592A7432A_METHOD_2_6F95FC560A0179F8_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_AD2B2AFEF3192F72()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_111B5B6592A7432A_METHOD_2_AD2B2AFEF3192F72_OFFSET))(this);
	}

	::Class_1_F5E46610D107584E* Method_2_AECF8BEC293ED42A_1()
	{
		return ((::Class_1_F5E46610D107584E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_111B5B6592A7432A_METHOD_2_AECF8BEC293ED42A_1_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_111B5B6592A7432A_METHOD_2_1808E1CF7A125519_1_OFFSET))(this);
	}
};
