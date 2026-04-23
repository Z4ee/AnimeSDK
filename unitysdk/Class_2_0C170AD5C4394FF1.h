#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Class_2_0C170AD5C4394FF1_EffectType.h"

class Class_2_50DFF4BEBCE7B7DC;
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class BattleGridFightEquipData; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }

#define CLASS_2_0C170AD5C4394FF1_METHOD_2_1947BC35B7A7FCB8_OFFSET UNITYSDK_OFFSET(0x12ACD2B0)
#define CLASS_2_0C170AD5C4394FF1_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x12ACCEC0)
#define CLASS_2_0C170AD5C4394FF1_METHOD_2_3153D82DE4567702_OFFSET UNITYSDK_OFFSET(0x12ACD1D0)
#define CLASS_2_0C170AD5C4394FF1_METHOD_2_46C57C13F50DE61C_OFFSET UNITYSDK_OFFSET(0x12ACD150)
#define CLASS_2_0C170AD5C4394FF1_METHOD_2_82342D248FADF8D1_OFFSET UNITYSDK_OFFSET(0x12ACCF90)
#define CLASS_2_0C170AD5C4394FF1_METHOD_2_A86A455D6AB5B836_OFFSET UNITYSDK_OFFSET(0x12ACCF40)
#define CLASS_2_0C170AD5C4394FF1_METHOD_2_B4BE7CCBC65AB443_OFFSET UNITYSDK_OFFSET(0x12ACD250)
#define CLASS_2_0C170AD5C4394FF1__CTOR_OFFSET UNITYSDK_OFFSET(0x12ACD580)
#define CLASS_2_0C170AD5C4394FF1__ONBIND_OFFSET UNITYSDK_OFFSET(0x12ACCD50)
#define CLASS_2_0C170AD5C4394FF1___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x12ACD5B0)

inline static constexpr unsigned int Class_2_0C170AD5C4394FF1_TypeDefinitionIndex = 66569;

class Class_2_0C170AD5C4394FF1 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_8; // 0x0
	// static const ::System::String* Field_2_9; // 0x0
	::UnityEngine::UI::Button* Field_2_1; // 0x60
	::Class_2_50DFF4BEBCE7B7DC* Field_2_3; // 0x68
	::UnityEngine::GameObject* Field_2_7; // 0x70
	::RPG::Client::GridFightEquipItemConfig* Field_2_5; // 0x78
	::UnityEngine::Animator* Field_2_4; // 0x80
	::RPG::Client::PrefabLoadMeta* Field_2_2; // 0x88
	::System::Boolean Field_2_6; // 0x90

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

	::System::Void Method_2_82342D248FADF8D1(::RPG::GameCore::BattleGridFightEquipData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightEquipData*))((::PBYTE)hIl2Cpp + CLASS_2_0C170AD5C4394FF1_METHOD_2_82342D248FADF8D1_OFFSET))(this, a1);
	}

	::System::Void Method_2_46C57C13F50DE61C(::RPG::Client::GridFightEquipItemConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + CLASS_2_0C170AD5C4394FF1_METHOD_2_46C57C13F50DE61C_OFFSET))(this, a1);
	}

	::System::Void Method_2_3153D82DE4567702(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0C170AD5C4394FF1_METHOD_2_3153D82DE4567702_OFFSET))(this, a1);
	}

	::System::Void Method_2_B4BE7CCBC65AB443(::Class_2_0C170AD5C4394FF1_EffectType a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C170AD5C4394FF1_EffectType))((::PBYTE)hIl2Cpp + CLASS_2_0C170AD5C4394FF1_METHOD_2_B4BE7CCBC65AB443_OFFSET))(this, a1);
	}

	::System::Void Method_2_1947BC35B7A7FCB8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C170AD5C4394FF1_METHOD_2_1947BC35B7A7FCB8_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C170AD5C4394FF1___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
