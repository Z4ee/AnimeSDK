#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/MonsterEnergyBarNumColor.h"
#include "unitysdk/RPG/GameCore/MonsterEnergyBarType.h"
#include "unitysdk/System/Object.h"

class Class_1_945ACFB1FEBC7A2C_19;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MonsterEnergyBarBaseClickConfig; }
namespace RPG::GameCore { class MonsterEnergyBarCustomColor; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_70697F531F566942_2_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0xB33DC40)
#define CLASS_1_70697F531F566942_2__CTOR_OFFSET UNITYSDK_OFFSET(0xB33DD30)

inline static constexpr unsigned int Class_1_70697F531F566942_2_TypeDefinitionIndex = 57639;

class Class_1_70697F531F566942_2 : public ::System::Object
{
public:
	::System::String* ECLCEDOLOBG; // 0x10
	::Il2CppArray<::System::String*>* PKKDIAENBEK; // 0x18
	::RPG::GameCore::MonsterEnergyBarBaseClickConfig* LBNFEKIPKCL; // 0x20
	::System::String* JKMABBEGEAH; // 0x28
	::System::String* OLOIFNNLKJP; // 0x30
	::RPG::GameCore::GameEntity* OFHDAHHPNPJ; // 0x38
	::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_19*>* BNCNCFMAMIG; // 0x40
	::System::String* FCAHMLGMDMN; // 0x48
	::RPG::GameCore::MonsterEnergyBarCustomColor* OCHLDEHBDOL; // 0x50
	::System::String* KOOOKCNNPFE; // 0x58
	::RPG::GameCore::MonsterEnergyBarType OPFMFGGBAKC; // 0x60
	::System::Int32 EOIHOACNHDH; // 0x64
	::System::Int32 EIADCADKKDN; // 0x68
	::System::Boolean OMKOELNJMGO; // 0x6C
	::System::Boolean CAGCHKJHMPD; // 0x6D
	::RPG::GameCore::FixPoint HOCMHABKLGJ; // 0x70
	::RPG::GameCore::FixPoint APHMDCIGKEK; // 0x78
	::RPG::GameCore::FixPoint JADMAPDKLKL; // 0x80
	::RPG::GameCore::EnergyBarState NPCFKONPCCK; // 0x88
	::RPG::GameCore::MonsterEnergyBarNumColor IBNBFBBNBBH; // 0x8C
	::System::Int32 IMPAJLCMHFP; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70697F531F566942_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_70697F531F566942_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942_2*))((::PBYTE)hIl2Cpp + CLASS_1_70697F531F566942_2_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}
};
