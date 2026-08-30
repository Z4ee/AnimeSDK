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

#define CLASS_1_70697F531F566942_2_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0xB501B70)
#define CLASS_1_70697F531F566942_2__CTOR_OFFSET UNITYSDK_OFFSET(0xB501C50)

inline static constexpr unsigned int Class_1_70697F531F566942_2_TypeDefinitionIndex = 57793;

class Class_1_70697F531F566942_2 : public ::System::Object
{
public:
	::RPG::GameCore::MonsterEnergyBarCustomColor* OCHLDEHBDOL; // 0x10
	::System::String* OLOIFNNLKJP; // 0x18
	::System::String* ECLCEDOLOBG; // 0x20
	::RPG::GameCore::GameEntity* OFHDAHHPNPJ; // 0x28
	::Il2CppArray<::System::String*>* PKKDIAENBEK; // 0x30
	::System::String* FCAHMLGMDMN; // 0x38
	::System::String* KOOOKCNNPFE; // 0x40
	::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_20*>* BNCNCFMAMIG; // 0x48
	::System::String* JKMABBEGEAH; // 0x50
	::RPG::GameCore::FixPoint JADMAPDKLKL; // 0x58
	::RPG::GameCore::FixPoint APHMDCIGKEK; // 0x60
	::System::Int32 IMPAJLCMHFP; // 0x68
	::System::Int32 EIADCADKKDN; // 0x6C
	::RPG::GameCore::MonsterEnergyBarNumColor IBNBFBBNBBH; // 0x70
	::System::Int32 EOIHOACNHDH; // 0x74
	::System::Boolean CAGCHKJHMPD; // 0x78
	::System::Boolean OMKOELNJMGO; // 0x79
	::RPG::GameCore::MonsterEnergyBarType OPFMFGGBAKC; // 0x7C
	::RPG::GameCore::EnergyBarState NPCFKONPCCK; // 0x80
	::RPG::GameCore::FixPoint HOCMHABKLGJ; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70697F531F566942_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_70697F531F566942_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942_2*))((::PBYTE)hIl2Cpp + CLASS_1_70697F531F566942_2_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}
};
