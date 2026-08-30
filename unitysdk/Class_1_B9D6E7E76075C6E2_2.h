#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0471857D35382E2E;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B9D6E7E76075C6E2_2_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB78BED0)
#define CLASS_1_B9D6E7E76075C6E2_2_GET_ENEMYLIST_OFFSET UNITYSDK_OFFSET(0xB78C970)
#define CLASS_1_B9D6E7E76075C6E2_2_METHOD_1_12E3DC93F4B067DF_OFFSET UNITYSDK_OFFSET(0xB78C7F0)
#define CLASS_1_B9D6E7E76075C6E2_2_METHOD_1_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0xB78C1E0)
#define CLASS_1_B9D6E7E76075C6E2_2_METHOD_1_ACA133530085D272_OFFSET UNITYSDK_OFFSET(0xB78C6D0)
#define CLASS_1_B9D6E7E76075C6E2_2_METHOD_1_AD2E99880A0E2029_OFFSET UNITYSDK_OFFSET(0xB78C0F0)
#define CLASS_1_B9D6E7E76075C6E2_2_METHOD_1_D97CA238E002BAEE_OFFSET UNITYSDK_OFFSET(0xB78BF70)
#define CLASS_1_B9D6E7E76075C6E2_2_SET_ENEMYLIST_OFFSET UNITYSDK_OFFSET(0xB78C980)
#define CLASS_1_B9D6E7E76075C6E2_2__CTOR_OFFSET UNITYSDK_OFFSET(0xB78BE80)

inline static constexpr unsigned int Class_1_B9D6E7E76075C6E2_2_TypeDefinitionIndex = 79677;

class Class_1_B9D6E7E76075C6E2_2 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_0471857D35382E2E*>* _EnemyList_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9D6E7E76075C6E2_2__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9D6E7E76075C6E2_2_DISPOSE_OFFSET))(this);
	}

	::Class_1_0471857D35382E2E* Method_1_D97CA238E002BAEE(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_0471857D35382E2E*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B9D6E7E76075C6E2_2_METHOD_1_D97CA238E002BAEE_OFFSET))(this, a1);
	}

	::System::Void Method_1_ACA133530085D272(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B9D6E7E76075C6E2_2_METHOD_1_ACA133530085D272_OFFSET))(this, a1);
	}

	::Class_1_0471857D35382E2E* Method_1_AD2E99880A0E2029(::System::UInt32 a1)
	{
		return ((::Class_1_0471857D35382E2E*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B9D6E7E76075C6E2_2_METHOD_1_AD2E99880A0E2029_OFFSET))(this, a1);
	}

	::Class_1_0471857D35382E2E* Method_1_12E3DC93F4B067DF()
	{
		return ((::Class_1_0471857D35382E2E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9D6E7E76075C6E2_2_METHOD_1_12E3DC93F4B067DF_OFFSET))(this);
	}

	::System::Void Method_1_8542E37E74FDE1B5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9D6E7E76075C6E2_2_METHOD_1_8542E37E74FDE1B5_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_0471857D35382E2E*>* get_EnemyList()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_0471857D35382E2E*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9D6E7E76075C6E2_2_GET_ENEMYLIST_OFFSET))(this);
	}

	::System::Void set_EnemyList(::System::Collections::Generic::List_1<::Class_1_0471857D35382E2E*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0471857D35382E2E*>*))((::PBYTE)hIl2Cpp + CLASS_1_B9D6E7E76075C6E2_2_SET_ENEMYLIST_OFFSET))(this, a1);
	}
};
