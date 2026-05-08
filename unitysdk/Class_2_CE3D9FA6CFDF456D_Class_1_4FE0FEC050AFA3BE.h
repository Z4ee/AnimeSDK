#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_3B0F8CEEFA465A87;
namespace MoleMole::MiniGame::AutoBattle { class MonoBangBooAutoBattleSlot; }

#define CLASS_2_CE3D9FA6CFDF456D_CLASS_1_4FE0FEC050AFA3BE_METHOD_1_32E47D6A527E924D_OFFSET UNITYSDK_OFFSET(0x7798230)
#define CLASS_2_CE3D9FA6CFDF456D_CLASS_1_4FE0FEC050AFA3BE__CTOR_OFFSET UNITYSDK_OFFSET(0x7798220)

inline static constexpr unsigned int Class_2_CE3D9FA6CFDF456D_Class_1_4FE0FEC050AFA3BE_TypeDefinitionIndex = 64377;

class Class_2_CE3D9FA6CFDF456D_Class_1_4FE0FEC050AFA3BE : public ::System::Object
{
public:
	::MoleMole::MiniGame::AutoBattle::MonoBangBooAutoBattleSlot* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE3D9FA6CFDF456D_CLASS_1_4FE0FEC050AFA3BE__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_32E47D6A527E924D(::Class_2_3B0F8CEEFA465A87* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_3B0F8CEEFA465A87*))((::PBYTE)hIl2Cpp + CLASS_2_CE3D9FA6CFDF456D_CLASS_1_4FE0FEC050AFA3BE_METHOD_1_32E47D6A527E924D_OFFSET))(this, a1);
	}
};
