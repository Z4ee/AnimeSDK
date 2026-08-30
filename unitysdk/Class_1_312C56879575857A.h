#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TimeRewindState.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EntityTimeRewindComponent; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_312C56879575857A_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A7B8A60)
#define CLASS_1_312C56879575857A_METHOD_1_63BCAEC965717222_OFFSET UNITYSDK_OFFSET(0x1A7B8AB0)
#define CLASS_1_312C56879575857A_METHOD_1_71888ED327BE7A2D_OFFSET UNITYSDK_OFFSET(0x1A7B89E0)
#define CLASS_1_312C56879575857A_METHOD_1_8D663435C6E609D2_OFFSET UNITYSDK_OFFSET(0x1A7B8D30)
#define CLASS_1_312C56879575857A_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x1A7B8E00)
#define CLASS_1_312C56879575857A_METHOD_1_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0x1A7B8C90)
#define CLASS_1_312C56879575857A_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1A7B8DC0)
#define CLASS_1_312C56879575857A_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x1A7B8E50)
#define CLASS_1_312C56879575857A_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A7B8D80)
#define CLASS_1_312C56879575857A__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7B8E90)

inline static constexpr unsigned int Class_1_312C56879575857A_TypeDefinitionIndex = 60902;

class Class_1_312C56879575857A : public ::System::Object
{
public:
	::RPG::GameCore::EntityTimeRewindComponent* KCONLBKIGHD; // 0x10
	::System::Single LDFDNKPCLGJ; // 0x18
	::System::Single ONMEOCDIPMM; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_312C56879575857A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_71888ED327BE7A2D(::RPG::GameCore::GameEntity* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_312C56879575857A_METHOD_1_71888ED327BE7A2D_OFFSET))(this, a1, a2);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_312C56879575857A_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_63BCAEC965717222(::System::Single a1, ::RPG::GameCore::TimeRewindState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::TimeRewindState))((::PBYTE)hIl2Cpp + CLASS_1_312C56879575857A_METHOD_1_63BCAEC965717222_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B9A97467188E4B69()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_312C56879575857A_METHOD_1_B9A97467188E4B69_OFFSET))(this);
	}

	::System::Void Method_1_8D663435C6E609D2(::RPG::GameCore::TimeRewindState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindState))((::PBYTE)hIl2Cpp + CLASS_1_312C56879575857A_METHOD_1_8D663435C6E609D2_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_312C56879575857A_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_312C56879575857A_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_312C56879575857A_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_312C56879575857A_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}
};
