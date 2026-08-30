#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/MonsterEnergyBarNumColor.h"
#include "unitysdk/RPG/GameCore/MonsterEnergyBarType.h"
#include "unitysdk/System/Object.h"

class Class_1_945ACFB1FEBC7A2C_20;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MonsterEnergyBarCustomColor; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_70697F531F566942_2_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x19C1ED90)
#define CLASS_1_70697F531F566942_2__CTOR_OFFSET UNITYSDK_OFFSET(0x19C1EE60)

inline static constexpr unsigned int Class_1_70697F531F566942_2_TypeDefinitionIndex = 57793;

class Class_1_70697F531F566942_2 : public ::System::Object
{
public:
	::System::String* KOOOKCNNPFE; // 0x10
	::System::String* OLOIFNNLKJP; // 0x18
	::RPG::GameCore::GameEntity* OFHDAHHPNPJ; // 0x20
	::System::String* JKMABBEGEAH; // 0x28
	::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_20*>* BNCNCFMAMIG; // 0x30
	::RPG::GameCore::MonsterEnergyBarCustomColor* OCHLDEHBDOL; // 0x38
	::System::String* FCAHMLGMDMN; // 0x40
	::System::String* ECLCEDOLOBG; // 0x48
	::Il2CppArray<::System::String*>* PKKDIAENBEK; // 0x50
	::System::Boolean CAGCHKJHMPD; // 0x58
	::System::Boolean OMKOELNJMGO; // 0x59
	::RPG::GameCore::MonsterEnergyBarNumColor IBNBFBBNBBH; // 0x5C
	::RPG::GameCore::EnergyBarState NPCFKONPCCK; // 0x60
	::System::Int32 EIADCADKKDN; // 0x64
	::RPG::GameCore::FixPoint HOCMHABKLGJ; // 0x68
	::RPG::GameCore::FixPoint JADMAPDKLKL; // 0x70
	::RPG::GameCore::MonsterEnergyBarType OPFMFGGBAKC; // 0x78
	::System::Int32 IMPAJLCMHFP; // 0x7C
	::System::Int32 EOIHOACNHDH; // 0x80
	::RPG::GameCore::FixPoint APHMDCIGKEK; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70697F531F566942_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_70697F531F566942_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942_2*))((::PBYTE)hIl2Cpp + CLASS_1_70697F531F566942_2_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}
};
