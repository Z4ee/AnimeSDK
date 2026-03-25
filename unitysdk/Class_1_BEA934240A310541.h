#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_151B93D9C4BBDCA4;
class Class_1_BEA934240A310541_Class_1_DDF59D027B6AAE4C;
namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class HoyoTag; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_1_BEA934240A310541_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10BF26D0)
#define CLASS_1_BEA934240A310541_METHOD_1_0501746CF8CCEFB4_OFFSET UNITYSDK_OFFSET(0x10BF2F50)
#define CLASS_1_BEA934240A310541_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x10BF3F00)
#define CLASS_1_BEA934240A310541_METHOD_1_1AEC14D3B3CAC7BB_OFFSET UNITYSDK_OFFSET(0x10BF22C0)
#define CLASS_1_BEA934240A310541_METHOD_1_1DE6433C25680F9D_OFFSET UNITYSDK_OFFSET(0x10BF28B0)
#define CLASS_1_BEA934240A310541_METHOD_1_23AB5DF15D39C9C9_OFFSET UNITYSDK_OFFSET(0x10BF3260)
#define CLASS_1_BEA934240A310541_METHOD_1_29861B2485680DBB_OFFSET UNITYSDK_OFFSET(0x10BF2DD0)
#define CLASS_1_BEA934240A310541_METHOD_1_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x10BF38F0)
#define CLASS_1_BEA934240A310541_METHOD_1_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x10BF2D70)
#define CLASS_1_BEA934240A310541_METHOD_1_B646DBE6BD5FA947_OFFSET UNITYSDK_OFFSET(0x10BF36A0)
#define CLASS_1_BEA934240A310541_METHOD_1_BBAF4B070327A414_OFFSET UNITYSDK_OFFSET(0x10BF3B40)
#define CLASS_1_BEA934240A310541_METHOD_1_C7BF9C1E6A78DCAB_OFFSET UNITYSDK_OFFSET(0x10BF3F60)
#define CLASS_1_BEA934240A310541_METHOD_1_DC715239B8B98D9C_OFFSET UNITYSDK_OFFSET(0x10BF2080)
#define CLASS_1_BEA934240A310541_METHOD_1_DF3C54A5ADEABAF1_OFFSET UNITYSDK_OFFSET(0x10BF2E20)
#define CLASS_1_BEA934240A310541_METHOD_1_F1FEBBADC39F3EAB_OFFSET UNITYSDK_OFFSET(0x10BF3190)
#define CLASS_1_BEA934240A310541_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x10BF3EC0)
#define CLASS_1_BEA934240A310541__CCTOR_OFFSET UNITYSDK_OFFSET(0x10BF43F0)
#define CLASS_1_BEA934240A310541__CTOR_OFFSET UNITYSDK_OFFSET(0x10BF21B0)
#define CLASS_1_BEA934240A310541___OPENUI_B__13_0_OFFSET UNITYSDK_OFFSET(0x10BF4510)

inline static constexpr unsigned int Class_1_BEA934240A310541_TypeDefinitionIndex = 49043;

class Class_1_BEA934240A310541 : public ::System::Object
{
public:
	static ::RPG::GameCore::HoyoTag** StaticGet_Field_1_3()
	{
		return (::RPG::GameCore::HoyoTag**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BEA934240A310541_TypeDefinitionIndex)->GetStaticField(0x25560);
	}
	static ::System::Boolean* StaticGet_Field_1_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BEA934240A310541_TypeDefinitionIndex)->GetStaticField(0xC010);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BEA934240A310541_TypeDefinitionIndex)->GetStaticField(0xC011);
	}
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BEA934240A310541_TypeDefinitionIndex)->GetStaticField(0xC012);
	}
	::Class_1_151B93D9C4BBDCA4* Field_1_13; // 0x10
	::System::Action* Field_1_18; // 0x18
	::System::Collections::Generic::Stack_1<::Class_1_BEA934240A310541_Class_1_DDF59D027B6AAE4C*>* Field_1_19; // 0x20
	::RPG::GameCore::GameEntity* Field_1_14; // 0x28
	::RPG::Client::UIController* Field_1_15; // 0x30
	::System::Action* Field_1_17; // 0x38
	::RPG::GameCore::GameEntity* Field_1_12; // 0x40
	::System::UInt32 Field_1_16; // 0x48
	::System::Boolean Field_1_4; // 0x4C
	::System::Boolean Field_1_9; // 0x4D
	::System::Boolean Field_1_10; // 0x4E
	::System::Boolean Field_1_6; // 0x4F
	::UnityEngine::Vector3 Field_1_5; // 0x50
	::System::Int32 Field_1_11; // 0x5C
	::System::Boolean Field_1_7; // 0x60
	::System::Boolean Field_1_8; // 0x61

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

	::System::Void Method_1_1AEC14D3B3CAC7BB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BEA934240A310541_METHOD_1_1AEC14D3B3CAC7BB_OFFSET))(this, a1);
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

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEA934240A310541_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_BBAF4B070327A414(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_BEA934240A310541_METHOD_1_BBAF4B070327A414_OFFSET))(this, a1);
	}

	::System::Void Method_1_C7BF9C1E6A78DCAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEA934240A310541_METHOD_1_C7BF9C1E6A78DCAB_OFFSET))(this);
	}

	::System::Void Method_1_1DE6433C25680F9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEA934240A310541_METHOD_1_1DE6433C25680F9D_OFFSET))(this);
	}

	::System::Void __OpenUI_b__13_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEA934240A310541___OPENUI_B__13_0_OFFSET))(this);
	}
};
