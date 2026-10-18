#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CBE3940117D4417A.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

class Class_1_3E7CB4EB71D78E39;
class Class_2_21055A9FA74B791E;
namespace RPG::GameCore { class ButtonListTrigger_RuntimeButton; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B97395A7A10E835D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB468F60)
#define CLASS_2_B97395A7A10E835D_DOONENTER_OFFSET UNITYSDK_OFFSET(0xB469230)
#define CLASS_2_B97395A7A10E835D_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xB469500)
#define CLASS_2_B97395A7A10E835D_DOONTICK_OFFSET UNITYSDK_OFFSET(0xB469570)
#define CLASS_2_B97395A7A10E835D_METHOD_2_2DE13BE11F24F545_OFFSET UNITYSDK_OFFSET(0xB469CF0)
#define CLASS_2_B97395A7A10E835D_METHOD_2_5BE5E73F9E1861B4_OFFSET UNITYSDK_OFFSET(0xB4699C0)
#define CLASS_2_B97395A7A10E835D_METHOD_2_6055A93732CC885D_OFFSET UNITYSDK_OFFSET(0xB469630)
#define CLASS_2_B97395A7A10E835D_METHOD_2_885DF4DA0F709E3E_1_OFFSET UNITYSDK_OFFSET(0xB469080)
#define CLASS_2_B97395A7A10E835D_METHOD_2_885DF4DA0F709E3E_OFFSET UNITYSDK_OFFSET(0xB4692A0)
#define CLASS_2_B97395A7A10E835D_METHOD_2_A8F6F688241E6DBC_OFFSET UNITYSDK_OFFSET(0xB4696A0)
#define CLASS_2_B97395A7A10E835D__CCTOR_OFFSET UNITYSDK_OFFSET(0xB469F10)
#define CLASS_2_B97395A7A10E835D__CTOR_OFFSET UNITYSDK_OFFSET(0xB468CF0)

inline static constexpr unsigned int Class_2_B97395A7A10E835D_TypeDefinitionIndex = 57519;

class Class_2_B97395A7A10E835D : public ::Class_1_CBE3940117D4417A
{
public:
	static ::System::String** StaticGet_JKMABBEGEAH()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B97395A7A10E835D_TypeDefinitionIndex)->GetStaticField(0x50210);
	}
	::System::Collections::Generic::List_1<::RPG::GameCore::ButtonListTrigger_RuntimeButton*>* OAOJLKIAHOJ; // 0xA0
	::Class_2_21055A9FA74B791E* BCKGBNAPOEL; // 0xA8
	::System::Single LJHMMPNPGNG; // 0xB0
	::System::Boolean FNLIMNILPMO; // 0xB4
	::System::Boolean FJEBDGJCEMM; // 0xB5
	::System::Boolean KIAFGDOOKHL; // 0xB6

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::Class_1_3E7CB4EB71D78E39*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::Class_1_3E7CB4EB71D78E39*>*))((::PBYTE)hIl2Cpp + CLASS_2_B97395A7A10E835D__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B97395A7A10E835D__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B97395A7A10E835D_DISPOSE_OFFSET))(this);
	}

	::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_B97395A7A10E835D_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_B97395A7A10E835D_DOONEXIT_OFFSET))(this, a1, a2);
	}

	::System::Void DoOnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B97395A7A10E835D_DOONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_6055A93732CC885D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B97395A7A10E835D_METHOD_2_6055A93732CC885D_OFFSET))(this);
	}

	::System::Void Method_2_5BE5E73F9E1861B4(::System::Collections::Generic::List_1<::Class_1_3E7CB4EB71D78E39*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_3E7CB4EB71D78E39*>*))((::PBYTE)hIl2Cpp + CLASS_2_B97395A7A10E835D_METHOD_2_5BE5E73F9E1861B4_OFFSET))(this, a1);
	}

	::System::Void Method_2_885DF4DA0F709E3E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B97395A7A10E835D_METHOD_2_885DF4DA0F709E3E_OFFSET))(this);
	}

	::System::Void Method_2_885DF4DA0F709E3E_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B97395A7A10E835D_METHOD_2_885DF4DA0F709E3E_1_OFFSET))(this);
	}

	::System::Void Method_2_2DE13BE11F24F545(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B97395A7A10E835D_METHOD_2_2DE13BE11F24F545_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A8F6F688241E6DBC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B97395A7A10E835D_METHOD_2_A8F6F688241E6DBC_OFFSET))(this);
	}
};
