#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Context_1.h"

class Class_1_F5E46610D107584E;
class Class_2_111B5B6592A7432A;
namespace RPG::Client::LittleGame { class MovieBossConfig; }
namespace RPG::Client::LittleGame { class MovieGameLevelConfig; }

#define CLASS_2_9C8D3D102333363B_METHOD_2_1561BFA77991A03A_OFFSET UNITYSDK_OFFSET(0x18DC6A30)
#define CLASS_2_9C8D3D102333363B_METHOD_2_347B96E569BEA522_OFFSET UNITYSDK_OFFSET(0x18DC6AB0)
#define CLASS_2_9C8D3D102333363B_METHOD_2_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0x18DC6D30)
#define CLASS_2_9C8D3D102333363B_METHOD_2_673DE15674E18423_OFFSET UNITYSDK_OFFSET(0x18DC6950)
#define CLASS_2_9C8D3D102333363B_METHOD_2_69529EDDE7D15317_OFFSET UNITYSDK_OFFSET(0x18DC6C40)
#define CLASS_2_9C8D3D102333363B_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x18DC6A90)
#define CLASS_2_9C8D3D102333363B__CTOR_OFFSET UNITYSDK_OFFSET(0x18DC6D90)

inline static constexpr unsigned int Class_2_9C8D3D102333363B_TypeDefinitionIndex = 39104;

class Class_2_9C8D3D102333363B : public ::Entitas::Context_1<::Class_2_111B5B6592A7432A*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C8D3D102333363B__CTOR_OFFSET))(this);
	}

	::Class_2_111B5B6592A7432A* Method_2_673DE15674E18423()
	{
		return ((::Class_2_111B5B6592A7432A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C8D3D102333363B_METHOD_2_673DE15674E18423_OFFSET))(this);
	}

	::Class_1_F5E46610D107584E* Method_2_1561BFA77991A03A()
	{
		return ((::Class_1_F5E46610D107584E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C8D3D102333363B_METHOD_2_1561BFA77991A03A_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C8D3D102333363B_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::Class_2_111B5B6592A7432A* Method_2_347B96E569BEA522(::RPG::Client::LittleGame::MovieGameLevelConfig* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::RPG::Client::LittleGame::MovieBossConfig* a5)
	{
		return ((::Class_2_111B5B6592A7432A*(*)(::PVOID, ::RPG::Client::LittleGame::MovieGameLevelConfig*, ::System::Single, ::System::Single, ::System::Single, ::RPG::Client::LittleGame::MovieBossConfig*))((::PBYTE)hIl2Cpp + CLASS_2_9C8D3D102333363B_METHOD_2_347B96E569BEA522_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_69529EDDE7D15317(::RPG::Client::LittleGame::MovieGameLevelConfig* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::RPG::Client::LittleGame::MovieBossConfig* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::MovieGameLevelConfig*, ::System::Single, ::System::Single, ::System::Single, ::RPG::Client::LittleGame::MovieBossConfig*))((::PBYTE)hIl2Cpp + CLASS_2_9C8D3D102333363B_METHOD_2_69529EDDE7D15317_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_455E250D679F9642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C8D3D102333363B_METHOD_2_455E250D679F9642_OFFSET))(this);
	}
};
