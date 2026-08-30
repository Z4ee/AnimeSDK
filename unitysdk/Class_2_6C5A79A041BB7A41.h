#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3207B23A0433048D.h"

class Class_1_D1403D5EBDB678B3;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_6C5A79A041BB7A41_METHOD_2_737A0DBAF31EEDEB_OFFSET UNITYSDK_OFFSET(0x19860AB0)
#define CLASS_2_6C5A79A041BB7A41_METHOD_2_80834E600E5BA350_OFFSET UNITYSDK_OFFSET(0x198607A0)
#define CLASS_2_6C5A79A041BB7A41_METHOD_2_8A0C05ECADC6319B_OFFSET UNITYSDK_OFFSET(0x198609F0)
#define CLASS_2_6C5A79A041BB7A41_METHOD_2_AC87ED171D71F877_OFFSET UNITYSDK_OFFSET(0x19860E00)
#define CLASS_2_6C5A79A041BB7A41_METHOD_2_E824431C22EF9361_OFFSET UNITYSDK_OFFSET(0x198608D0)
#define CLASS_2_6C5A79A041BB7A41__CTOR_OFFSET UNITYSDK_OFFSET(0x19860E90)

inline static constexpr unsigned int Class_2_6C5A79A041BB7A41_TypeDefinitionIndex = 53933;

class Class_2_6C5A79A041BB7A41 : public ::Class_1_3207B23A0433048D
{
public:
	::RPG::GameCore::GameEntity* AKJFHPNOGEJ; // 0x20
	::System::Collections::Generic::List_1<::Class_1_D1403D5EBDB678B3*>* IHDKHABKMDI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C5A79A041BB7A41__CTOR_OFFSET))(this);
	}

	::Class_1_D1403D5EBDB678B3* Method_2_80834E600E5BA350(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
	{
		return ((::Class_1_D1403D5EBDB678B3*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6C5A79A041BB7A41_METHOD_2_80834E600E5BA350_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8A0C05ECADC6319B(::Class_1_D1403D5EBDB678B3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D1403D5EBDB678B3*))((::PBYTE)hIl2Cpp + CLASS_2_6C5A79A041BB7A41_METHOD_2_8A0C05ECADC6319B_OFFSET))(this, a1);
	}

	::System::Void Method_2_E824431C22EF9361()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C5A79A041BB7A41_METHOD_2_E824431C22EF9361_OFFSET))(this);
	}

	static ::RPG::GameCore::GameEntity* Method_2_737A0DBAF31EEDEB(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_6C5A79A041BB7A41_METHOD_2_737A0DBAF31EEDEB_OFFSET))(a1);
	}

	::RPG::GameCore::GameEntity* Method_2_AC87ED171D71F877()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C5A79A041BB7A41_METHOD_2_AC87ED171D71F877_OFFSET))(this);
	}
};
