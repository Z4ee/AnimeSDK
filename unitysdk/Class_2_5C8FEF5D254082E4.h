#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9DFEED9E47A49175.h"

class Class_1_D1403D5EBDB678B3;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_5C8FEF5D254082E4_METHOD_2_4C288C0C3DC7B4CA_OFFSET UNITYSDK_OFFSET(0x9856730)
#define CLASS_2_5C8FEF5D254082E4_METHOD_2_77DC90F3930C60B5_OFFSET UNITYSDK_OFFSET(0x9856920)
#define CLASS_2_5C8FEF5D254082E4_METHOD_2_7E89FE134091400F_OFFSET UNITYSDK_OFFSET(0x9856670)
#define CLASS_2_5C8FEF5D254082E4_METHOD_2_8A0C05ECADC6319B_OFFSET UNITYSDK_OFFSET(0x9856860)
#define CLASS_2_5C8FEF5D254082E4_METHOD_2_AC87ED171D71F877_OFFSET UNITYSDK_OFFSET(0x9856BB0)
#define CLASS_2_5C8FEF5D254082E4__CTOR_OFFSET UNITYSDK_OFFSET(0x9856C40)

inline static constexpr unsigned int Class_2_5C8FEF5D254082E4_TypeDefinitionIndex = 49500;

class Class_2_5C8FEF5D254082E4 : public ::Class_1_9DFEED9E47A49175
{
public:
	::RPG::GameCore::GameEntity* Field_2_1; // 0x20
	::System::Collections::Generic::List_1<::Class_1_D1403D5EBDB678B3*>* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C8FEF5D254082E4__CTOR_OFFSET))(this);
	}

	::Class_1_D1403D5EBDB678B3* Method_2_7E89FE134091400F(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
	{
		return ((::Class_1_D1403D5EBDB678B3*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5C8FEF5D254082E4_METHOD_2_7E89FE134091400F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8A0C05ECADC6319B(::Class_1_D1403D5EBDB678B3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D1403D5EBDB678B3*))((::PBYTE)hIl2Cpp + CLASS_2_5C8FEF5D254082E4_METHOD_2_8A0C05ECADC6319B_OFFSET))(this, a1);
	}

	::System::Void Method_2_4C288C0C3DC7B4CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C8FEF5D254082E4_METHOD_2_4C288C0C3DC7B4CA_OFFSET))(this);
	}

	static ::RPG::GameCore::GameEntity* Method_2_77DC90F3930C60B5(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_5C8FEF5D254082E4_METHOD_2_77DC90F3930C60B5_OFFSET))(a1);
	}

	::RPG::GameCore::GameEntity* Method_2_AC87ED171D71F877()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C8FEF5D254082E4_METHOD_2_AC87ED171D71F877_OFFSET))(this);
	}
};
