#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/GameCore/EnergyBarType.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace RPG::Client { class BattleAvatarCustomData; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_2_10CD97FE33A011C2_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xBA3A580)
#define CLASS_2_10CD97FE33A011C2_METHOD_2_5BF0E61BD5CA40A5_OFFSET UNITYSDK_OFFSET(0xBA3A760)
#define CLASS_2_10CD97FE33A011C2_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0xBA3A520)
#define CLASS_2_10CD97FE33A011C2_METHOD_2_A2E49692AE6C427C_OFFSET UNITYSDK_OFFSET(0xBA3A880)
#define CLASS_2_10CD97FE33A011C2_METHOD_2_EC00644AF39B5DED_OFFSET UNITYSDK_OFFSET(0xBA3A000)
#define CLASS_2_10CD97FE33A011C2_METHOD_2_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0xBA3A4D0)
#define CLASS_2_10CD97FE33A011C2_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xBA39FB0)
#define CLASS_2_10CD97FE33A011C2_ONRETURN_OFFSET UNITYSDK_OFFSET(0xBA3A480)
#define CLASS_2_10CD97FE33A011C2__CTOR_OFFSET UNITYSDK_OFFSET(0xBA3AB30)
#define CLASS_2_10CD97FE33A011C2__ONBIND_OFFSET UNITYSDK_OFFSET(0xBA3A6F0)

inline static constexpr unsigned int Class_2_10CD97FE33A011C2_TypeDefinitionIndex = 71609;

class Class_2_10CD97FE33A011C2 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* OMKOHJDEIAI; // 0x0
	// static const ::System::String* HNIJMOIBJGH; // 0x0
	// static const ::System::String* MNEEHHBPLFM; // 0x0
	// static const ::System::String* KKKELDLCKEH; // 0x0
	// static const ::System::String* PEHOGBGBAFO; // 0x0
	// static const ::System::String* PNNOCABOKLG; // 0x0
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x60
	::RPG::Client::BattleAvatarCustomData* NCFIJKJAGIJ; // 0x68
	::System::String* GEJIJFFILEB; // 0x70
	::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x78
	::Class_1_34917908B7833130* HEBFHCBPMFI; // 0x80
	::RPG::Client::PrefabLoadMeta* OGJJJANDJMP; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10CD97FE33A011C2__CTOR_OFFSET))(this);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_10CD97FE33A011C2_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10CD97FE33A011C2_ONRETURN_OFFSET))(this);
	}

	::Class_1_34917908B7833130* Method_2_F8B73ECE7F883AC1()
	{
		return ((::Class_1_34917908B7833130*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10CD97FE33A011C2_METHOD_2_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_10CD97FE33A011C2_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10CD97FE33A011C2_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10CD97FE33A011C2__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_EC00644AF39B5DED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10CD97FE33A011C2_METHOD_2_EC00644AF39B5DED_OFFSET))(this);
	}

	::System::Void Method_2_A2E49692AE6C427C(::RPG::GameCore::EnergyBarType a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnergyBarType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_10CD97FE33A011C2_METHOD_2_A2E49692AE6C427C_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_5BF0E61BD5CA40A5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10CD97FE33A011C2_METHOD_2_5BF0E61BD5CA40A5_OFFSET))(this);
	}
};
