#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A696AB4980B3D7B5.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

class Class_1_3E7CB4EB71D78E39;
class Class_2_9D4DD2F4235F8658;
namespace RPG::GameCore { class ButtonListTrigger_RuntimeButton; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B97395A7A10E835D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA3F0410)
#define CLASS_2_B97395A7A10E835D_DOONENTER_OFFSET UNITYSDK_OFFSET(0xA3F0690)
#define CLASS_2_B97395A7A10E835D_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xA3F0960)
#define CLASS_2_B97395A7A10E835D_DOONTICK_OFFSET UNITYSDK_OFFSET(0xA3F09D0)
#define CLASS_2_B97395A7A10E835D_METHOD_2_0E00D903BD55E67C_OFFSET UNITYSDK_OFFSET(0xA3F1170)
#define CLASS_2_B97395A7A10E835D_METHOD_2_15377485F84CA64E_OFFSET UNITYSDK_OFFSET(0xA3F0E20)
#define CLASS_2_B97395A7A10E835D_METHOD_2_6055A93732CC885D_OFFSET UNITYSDK_OFFSET(0xA3F0A90)
#define CLASS_2_B97395A7A10E835D_METHOD_2_885DF4DA0F709E3E_1_OFFSET UNITYSDK_OFFSET(0xA3F04E0)
#define CLASS_2_B97395A7A10E835D_METHOD_2_885DF4DA0F709E3E_OFFSET UNITYSDK_OFFSET(0xA3F0700)
#define CLASS_2_B97395A7A10E835D_METHOD_2_A8F6F688241E6DBC_OFFSET UNITYSDK_OFFSET(0xA3F0B00)
#define CLASS_2_B97395A7A10E835D__CCTOR_OFFSET UNITYSDK_OFFSET(0xA3F1320)
#define CLASS_2_B97395A7A10E835D__CTOR_OFFSET UNITYSDK_OFFSET(0xA3F01B0)
#define CLASS_2_B97395A7A10E835D___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA3F1360)
#define CLASS_2_B97395A7A10E835D___IFIXBASEPROXY_DOONENTER_OFFSET UNITYSDK_OFFSET(0xA3F1370)
#define CLASS_2_B97395A7A10E835D___IFIXBASEPROXY_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xA3F1380)

inline static constexpr unsigned int Class_2_B97395A7A10E835D_TypeDefinitionIndex = 53730;

class Class_2_B97395A7A10E835D : public ::Class_1_A696AB4980B3D7B5
{
public:
	static ::System::String** StaticGet_Field_2_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B97395A7A10E835D_TypeDefinitionIndex)->GetStaticField(0x44BD0);
	}
	::Class_2_9D4DD2F4235F8658* Field_2_1; // 0x98
	::System::Collections::Generic::List_1<::RPG::GameCore::ButtonListTrigger_RuntimeButton*>* Field_2_2; // 0xA0
	::System::Single Field_2_3; // 0xA8
	::System::Boolean Field_2_4; // 0xAC
	::System::Boolean Field_2_5; // 0xAD
	::System::Boolean Field_2_6; // 0xAE

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

	::System::Void Method_2_15377485F84CA64E(::System::Collections::Generic::List_1<::Class_1_3E7CB4EB71D78E39*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_3E7CB4EB71D78E39*>*))((::PBYTE)hIl2Cpp + CLASS_2_B97395A7A10E835D_METHOD_2_15377485F84CA64E_OFFSET))(this, a1);
	}

	::System::Void Method_2_885DF4DA0F709E3E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B97395A7A10E835D_METHOD_2_885DF4DA0F709E3E_OFFSET))(this);
	}

	::System::Void Method_2_885DF4DA0F709E3E_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B97395A7A10E835D_METHOD_2_885DF4DA0F709E3E_1_OFFSET))(this);
	}

	::System::Void Method_2_0E00D903BD55E67C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B97395A7A10E835D_METHOD_2_0E00D903BD55E67C_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A8F6F688241E6DBC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B97395A7A10E835D_METHOD_2_A8F6F688241E6DBC_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B97395A7A10E835D___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_B97395A7A10E835D___IFIXBASEPROXY_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_B97395A7A10E835D___IFIXBASEPROXY_DOONEXIT_OFFSET))(this, a1, a2);
	}
};
