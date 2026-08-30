#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Class_2_0C170AD5C4394FF1_EffectType.h"

class Class_2_EF2B89DC64DBCCAC;
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class BattleGridFightEquipData; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }

#define CLASS_2_0C170AD5C4394FF1_METHOD_2_1947BC35B7A7FCB8_OFFSET UNITYSDK_OFFSET(0x15B67060)
#define CLASS_2_0C170AD5C4394FF1_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x15B66C40)
#define CLASS_2_0C170AD5C4394FF1_METHOD_2_5BBDE3444E6DBDDD_OFFSET UNITYSDK_OFFSET(0x15B66D10)
#define CLASS_2_0C170AD5C4394FF1_METHOD_2_A86A455D6AB5B836_OFFSET UNITYSDK_OFFSET(0x15B66CC0)
#define CLASS_2_0C170AD5C4394FF1_METHOD_2_B4BE7CCBC65AB443_OFFSET UNITYSDK_OFFSET(0x15B67000)
#define CLASS_2_0C170AD5C4394FF1_METHOD_2_BFAD1A6B2FBEFA4F_OFFSET UNITYSDK_OFFSET(0x15B66F80)
#define CLASS_2_0C170AD5C4394FF1_METHOD_2_FEF52EE4A196A309_OFFSET UNITYSDK_OFFSET(0x15B66EF0)
#define CLASS_2_0C170AD5C4394FF1__CTOR_OFFSET UNITYSDK_OFFSET(0x15B67330)
#define CLASS_2_0C170AD5C4394FF1__ONBIND_OFFSET UNITYSDK_OFFSET(0x15B66AC0)

inline static constexpr unsigned int Class_2_0C170AD5C4394FF1_TypeDefinitionIndex = 72191;

class Class_2_0C170AD5C4394FF1 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* BDACPPLKLGL; // 0x0
	// static const ::System::String* JNHGEEFDKFG; // 0x0
	// static const ::System::String* HJOGMPDEOIL; // 0x0
	::UnityEngine::UI::Button* AAFGIHCCPOP; // 0x60
	::RPG::Client::GridFightEquipItemConfig* CJMEHHAEPDA; // 0x68
	::UnityEngine::GameObject* PJDPBHBIFFF; // 0x70
	::RPG::Client::PrefabLoadMeta* JMJJBJOAEPB; // 0x78
	::UnityEngine::Animator* APPGGMLEPLN; // 0x80
	::Class_2_EF2B89DC64DBCCAC* HODEFJKEDJD; // 0x88
	::System::Boolean BFGEKIHIDAE; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C170AD5C4394FF1__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C170AD5C4394FF1__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0C170AD5C4394FF1_METHOD_2_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A86A455D6AB5B836(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0C170AD5C4394FF1_METHOD_2_A86A455D6AB5B836_OFFSET))(this, a1);
	}

	::System::Void Method_2_5BBDE3444E6DBDDD(::RPG::GameCore::BattleGridFightEquipData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightEquipData*))((::PBYTE)hIl2Cpp + CLASS_2_0C170AD5C4394FF1_METHOD_2_5BBDE3444E6DBDDD_OFFSET))(this, a1);
	}

	::System::Void Method_2_FEF52EE4A196A309(::RPG::Client::GridFightEquipItemConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + CLASS_2_0C170AD5C4394FF1_METHOD_2_FEF52EE4A196A309_OFFSET))(this, a1);
	}

	::System::Void Method_2_BFAD1A6B2FBEFA4F(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0C170AD5C4394FF1_METHOD_2_BFAD1A6B2FBEFA4F_OFFSET))(this, a1);
	}

	::System::Void Method_2_B4BE7CCBC65AB443(::Class_2_0C170AD5C4394FF1_EffectType a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C170AD5C4394FF1_EffectType))((::PBYTE)hIl2Cpp + CLASS_2_0C170AD5C4394FF1_METHOD_2_B4BE7CCBC65AB443_OFFSET))(this, a1);
	}

	::System::Void Method_2_1947BC35B7A7FCB8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C170AD5C4394FF1_METHOD_2_1947BC35B7A7FCB8_OFFSET))(this);
	}
};
