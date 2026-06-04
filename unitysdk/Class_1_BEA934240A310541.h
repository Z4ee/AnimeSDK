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

#define CLASS_1_BEA934240A310541_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB0403F0)
#define CLASS_1_BEA934240A310541_METHOD_1_0501746CF8CCEFB4_OFFSET UNITYSDK_OFFSET(0xB040C90)
#define CLASS_1_BEA934240A310541_METHOD_1_07E567B3C6C3D7D7_OFFSET UNITYSDK_OFFSET(0xB03FDD0)
#define CLASS_1_BEA934240A310541_METHOD_1_168BFDA3F1FBEF09_OFFSET UNITYSDK_OFFSET(0xB041C60)
#define CLASS_1_BEA934240A310541_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xB041FB0)
#define CLASS_1_BEA934240A310541_METHOD_1_1EFC5A8A94CA6BE7_OFFSET UNITYSDK_OFFSET(0xB0418A0)
#define CLASS_1_BEA934240A310541_METHOD_1_23AB5DF15D39C9C9_OFFSET UNITYSDK_OFFSET(0xB040FA0)
#define CLASS_1_BEA934240A310541_METHOD_1_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0xB040600)
#define CLASS_1_BEA934240A310541_METHOD_1_29861B2485680DBB_OFFSET UNITYSDK_OFFSET(0xB040B10)
#define CLASS_1_BEA934240A310541_METHOD_1_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0xB042010)
#define CLASS_1_BEA934240A310541_METHOD_1_67092B198ADCB2A8_OFFSET UNITYSDK_OFFSET(0xB040ED0)
#define CLASS_1_BEA934240A310541_METHOD_1_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0xB041640)
#define CLASS_1_BEA934240A310541_METHOD_1_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xB040AA0)
#define CLASS_1_BEA934240A310541_METHOD_1_ABE7715DB28B2DD1_OFFSET UNITYSDK_OFFSET(0xB040B60)
#define CLASS_1_BEA934240A310541_METHOD_1_B646DBE6BD5FA947_OFFSET UNITYSDK_OFFSET(0xB0413F0)
#define CLASS_1_BEA934240A310541_METHOD_1_E6451DD1ECA91329_OFFSET UNITYSDK_OFFSET(0xB040040)
#define CLASS_1_BEA934240A310541_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0xB041C20)
#define CLASS_1_BEA934240A310541__CCTOR_OFFSET UNITYSDK_OFFSET(0xB042470)
#define CLASS_1_BEA934240A310541__CTOR_OFFSET UNITYSDK_OFFSET(0xB03FF00)
#define CLASS_1_BEA934240A310541___OPENUI_B__13_0_OFFSET UNITYSDK_OFFSET(0xB042590)

inline static constexpr unsigned int Class_1_BEA934240A310541_TypeDefinitionIndex = 56593;

class Class_1_BEA934240A310541 : public ::System::Object
{
public:
	static ::RPG::GameCore::HoyoTag** StaticGet_Field_1_0()
	{
		return (::RPG::GameCore::HoyoTag**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BEA934240A310541_TypeDefinitionIndex)->GetStaticField(0x8880);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BEA934240A310541_TypeDefinitionIndex)->GetStaticField(0x3930);
	}
	static ::System::Boolean* StaticGet_Field_1_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BEA934240A310541_TypeDefinitionIndex)->GetStaticField(0x3931);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BEA934240A310541_TypeDefinitionIndex)->GetStaticField(0x3932);
	}
	::RPG::GameCore::GameEntity* Field_1_4; // 0x10
	::System::Action* Field_1_5; // 0x18
	::RPG::Client::UIController* Field_1_6; // 0x20
	::RPG::GameCore::GameEntity* Field_1_7; // 0x28
	::Class_1_151B93D9C4BBDCA4* Field_1_8; // 0x30
	::System::Collections::Generic::Stack_1<::Class_1_BEA934240A310541_Class_1_DDF59D027B6AAE4C*>* Field_1_9; // 0x38
	::System::Action* Field_1_10; // 0x40
	::System::Boolean Field_1_11; // 0x48
	::System::Boolean Field_1_12; // 0x49
	::System::Boolean Field_1_13; // 0x4A
	::System::Boolean Field_1_14; // 0x4B
	::System::Boolean Field_1_15; // 0x4C
	::System::Boolean Field_1_16; // 0x4D
	::UnityEngine::Vector3 Field_1_17; // 0x50
	::System::Int32 Field_1_18; // 0x5C
	::System::UInt32 Field_1_19; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEA934240A310541__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BEA934240A310541__CCTOR_OFFSET))();
	}

	::System::Void Method_1_07E567B3C6C3D7D7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEA934240A310541_METHOD_1_07E567B3C6C3D7D7_OFFSET))(this);
	}

	::System::Void Method_1_E6451DD1ECA91329(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BEA934240A310541_METHOD_1_E6451DD1ECA91329_OFFSET))(this, a1);
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

	::System::Void Method_1_67092B198ADCB2A8(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BEA934240A310541_METHOD_1_67092B198ADCB2A8_OFFSET))(this, a1);
	}

	::System::Void Method_1_ABE7715DB28B2DD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEA934240A310541_METHOD_1_ABE7715DB28B2DD1_OFFSET))(this);
	}

	::Class_1_151B93D9C4BBDCA4* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_151B93D9C4BBDCA4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEA934240A310541_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Boolean Method_1_168BFDA3F1FBEF09(::System::UInt32 a1, ::System::UInt32 a2, ::Class_2_D9D2DA2BB37A3C3D*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Class_2_D9D2DA2BB37A3C3D*&))((::PBYTE)hIl2Cpp + CLASS_1_BEA934240A310541_METHOD_1_168BFDA3F1FBEF09_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEA934240A310541_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_1EFC5A8A94CA6BE7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_BEA934240A310541_METHOD_1_1EFC5A8A94CA6BE7_OFFSET))(this, a1);
	}

	::System::Void Method_1_2B9D478141E0F891()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEA934240A310541_METHOD_1_2B9D478141E0F891_OFFSET))(this);
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
