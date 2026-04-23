#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_151B93D9C4BBDCA4;
class Class_1_BEA934240A310541_Class_1_DDF59D027B6AAE4C;
class Class_2_D9D2DA2BB37A3C3D;
namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class HoyoTag; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_1_BEA934240A310541_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12391060)
#define CLASS_1_BEA934240A310541_METHOD_1_0501746CF8CCEFB4_OFFSET UNITYSDK_OFFSET(0x123918B0)
#define CLASS_1_BEA934240A310541_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x12392B80)
#define CLASS_1_BEA934240A310541_METHOD_1_23AB5DF15D39C9C9_OFFSET UNITYSDK_OFFSET(0x12391BC0)
#define CLASS_1_BEA934240A310541_METHOD_1_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x12391230)
#define CLASS_1_BEA934240A310541_METHOD_1_29861B2485680DBB_OFFSET UNITYSDK_OFFSET(0x12391730)
#define CLASS_1_BEA934240A310541_METHOD_1_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x12392BE0)
#define CLASS_1_BEA934240A310541_METHOD_1_685EA12A8439ED7E_OFFSET UNITYSDK_OFFSET(0x12392860)
#define CLASS_1_BEA934240A310541_METHOD_1_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x12392250)
#define CLASS_1_BEA934240A310541_METHOD_1_8A2B45860DC4AF1E_OFFSET UNITYSDK_OFFSET(0x12390CB0)
#define CLASS_1_BEA934240A310541_METHOD_1_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x123916D0)
#define CLASS_1_BEA934240A310541_METHOD_1_B646DBE6BD5FA947_OFFSET UNITYSDK_OFFSET(0x12392000)
#define CLASS_1_BEA934240A310541_METHOD_1_BBAF4B070327A414_OFFSET UNITYSDK_OFFSET(0x123924A0)
#define CLASS_1_BEA934240A310541_METHOD_1_DC715239B8B98D9C_OFFSET UNITYSDK_OFFSET(0x12390A70)
#define CLASS_1_BEA934240A310541_METHOD_1_DF3C54A5ADEABAF1_OFFSET UNITYSDK_OFFSET(0x12391780)
#define CLASS_1_BEA934240A310541_METHOD_1_F1FEBBADC39F3EAB_OFFSET UNITYSDK_OFFSET(0x12391AF0)
#define CLASS_1_BEA934240A310541_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x12392820)
#define CLASS_1_BEA934240A310541__CCTOR_OFFSET UNITYSDK_OFFSET(0x12393040)
#define CLASS_1_BEA934240A310541__CTOR_OFFSET UNITYSDK_OFFSET(0x12390BA0)
#define CLASS_1_BEA934240A310541___OPENUI_B__13_0_OFFSET UNITYSDK_OFFSET(0x12393160)

inline static constexpr unsigned int Class_1_BEA934240A310541_TypeDefinitionIndex = 55838;

class Class_1_BEA934240A310541 : public ::System::Object
{
public:
	static ::RPG::GameCore::HoyoTag** StaticGet_Field_1_3()
	{
		return (::RPG::GameCore::HoyoTag**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BEA934240A310541_TypeDefinitionIndex)->GetStaticField(0x2FD40);
	}
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BEA934240A310541_TypeDefinitionIndex)->GetStaticField(0xC010);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BEA934240A310541_TypeDefinitionIndex)->GetStaticField(0xC011);
	}
	static ::System::Boolean* StaticGet_Field_1_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BEA934240A310541_TypeDefinitionIndex)->GetStaticField(0xC012);
	}
	::System::Collections::Generic::Stack_1<::Class_1_BEA934240A310541_Class_1_DDF59D027B6AAE4C*>* Field_1_19; // 0x10
	::Class_1_151B93D9C4BBDCA4* Field_1_13; // 0x18
	::RPG::GameCore::GameEntity* Field_1_14; // 0x20
	::System::Action* Field_1_18; // 0x28
	::System::Action* Field_1_17; // 0x30
	::RPG::Client::UIController* Field_1_15; // 0x38
	::RPG::GameCore::GameEntity* Field_1_12; // 0x40
	::System::Boolean Field_1_6; // 0x48
	::System::Boolean Field_1_8; // 0x49
	::System::Boolean Field_1_4; // 0x4A
	::System::Boolean Field_1_10; // 0x4B
	::UnityEngine::Vector3 Field_1_5; // 0x4C
	::System::Int32 Field_1_11; // 0x58
	::System::UInt32 Field_1_16; // 0x5C
	::System::Boolean Field_1_7; // 0x60
	::System::Boolean Field_1_9; // 0x61

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEA934240A310541__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BEA934240A310541__CCTOR_OFFSET))();
	}

	::System::Void Method_1_DC715239B8B98D9C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEA934240A310541_METHOD_1_DC715239B8B98D9C_OFFSET))(this);
	}

	::System::Void Method_1_8A2B45860DC4AF1E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BEA934240A310541_METHOD_1_8A2B45860DC4AF1E_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEA934240A310541_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_BEA934240A310541_METHOD_1_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_1_29861B2485680DBB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_BEA934240A310541_METHOD_1_29861B2485680DBB_OFFSET))(this, a1);
	}

	::System::Void Method_1_0501746CF8CCEFB4(::System::String* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_BEA934240A310541_METHOD_1_0501746CF8CCEFB4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_23AB5DF15D39C9C9(::System::String* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::System::Action* a4, ::System::Action* a5, ::System::Boolean a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Action*, ::System::Action*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BEA934240A310541_METHOD_1_23AB5DF15D39C9C9_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_B646DBE6BD5FA947(::System::Action* a1, ::System::Action* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BEA934240A310541_METHOD_1_B646DBE6BD5FA947_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEA934240A310541_METHOD_1_85377D41FEE05B66_OFFSET))(this);
	}

	::System::Void Method_1_F1FEBBADC39F3EAB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BEA934240A310541_METHOD_1_F1FEBBADC39F3EAB_OFFSET))(this, a1);
	}

	::System::Void Method_1_DF3C54A5ADEABAF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEA934240A310541_METHOD_1_DF3C54A5ADEABAF1_OFFSET))(this);
	}

	::Class_1_151B93D9C4BBDCA4* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_151B93D9C4BBDCA4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEA934240A310541_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Boolean Method_1_685EA12A8439ED7E(::System::UInt32 a1, ::System::UInt32 a2, ::Class_2_D9D2DA2BB37A3C3D*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Class_2_D9D2DA2BB37A3C3D*&))((::PBYTE)hIl2Cpp + CLASS_1_BEA934240A310541_METHOD_1_685EA12A8439ED7E_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEA934240A310541_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_BBAF4B070327A414(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_BEA934240A310541_METHOD_1_BBAF4B070327A414_OFFSET))(this, a1);
	}

	::System::Void Method_1_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEA934240A310541_METHOD_1_367B9590522079D1_OFFSET))(this);
	}

	::System::Void Method_1_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEA934240A310541_METHOD_1_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Void __OpenUI_b__13_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEA934240A310541___OPENUI_B__13_0_OFFSET))(this);
	}
};
