#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_E0103A0EA6CD0F4C;
class Class_1_F1A0CB87ADEC1771_Class_1_D2CF375D5CBE026A;
class Class_2_47C66A3BEB7A5F01;
class Class_3_001D9EA49F6215B6;
namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class FiveDimPortalTarget; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class HoyoTag; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_1_F1A0CB87ADEC1771_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18BB0650)
#define CLASS_1_F1A0CB87ADEC1771_METHOD_1_07E567B3C6C3D7D7_OFFSET UNITYSDK_OFFSET(0x18BAFC70)
#define CLASS_1_F1A0CB87ADEC1771_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x18BB2440)
#define CLASS_1_F1A0CB87ADEC1771_METHOD_1_1A8AEA0091C7B185_OFFSET UNITYSDK_OFFSET(0x18BB1320)
#define CLASS_1_F1A0CB87ADEC1771_METHOD_1_2372762F4122DEB8_OFFSET UNITYSDK_OFFSET(0x18BB3240)
#define CLASS_1_F1A0CB87ADEC1771_METHOD_1_276036CDF4BFF5A6_OFFSET UNITYSDK_OFFSET(0x18BB24A0)
#define CLASS_1_F1A0CB87ADEC1771_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x18BB0540)
#define CLASS_1_F1A0CB87ADEC1771_METHOD_1_4842CD3F21E04643_OFFSET UNITYSDK_OFFSET(0x18BB35A0)
#define CLASS_1_F1A0CB87ADEC1771_METHOD_1_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0x18BB3140)
#define CLASS_1_F1A0CB87ADEC1771_METHOD_1_5D2C76B9A51C9650_OFFSET UNITYSDK_OFFSET(0x18BB2000)
#define CLASS_1_F1A0CB87ADEC1771_METHOD_1_60BAB51FAB46DBD1_OFFSET UNITYSDK_OFFSET(0x18BB1250)
#define CLASS_1_F1A0CB87ADEC1771_METHOD_1_685EA12A8439ED7E_OFFSET UNITYSDK_OFFSET(0x18BB2120)
#define CLASS_1_F1A0CB87ADEC1771_METHOD_1_6CE3658623BE8932_OFFSET UNITYSDK_OFFSET(0x18BAFEC0)
#define CLASS_1_F1A0CB87ADEC1771_METHOD_1_7B7D6BD6F55BCF32_OFFSET UNITYSDK_OFFSET(0x18BB0EA0)
#define CLASS_1_F1A0CB87ADEC1771_METHOD_1_84A7EA7055456CBD_OFFSET UNITYSDK_OFFSET(0x18BB1020)
#define CLASS_1_F1A0CB87ADEC1771_METHOD_1_8BF54F977F33DDBE_OFFSET UNITYSDK_OFFSET(0x18BB17A0)
#define CLASS_1_F1A0CB87ADEC1771_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x18BB05F0)
#define CLASS_1_F1A0CB87ADEC1771_METHOD_1_9AF91962BC6E178A_OFFSET UNITYSDK_OFFSET(0x18BB29D0)
#define CLASS_1_F1A0CB87ADEC1771_METHOD_1_9B2E710EB9D49BA6_OFFSET UNITYSDK_OFFSET(0x18BB0870)
#define CLASS_1_F1A0CB87ADEC1771_METHOD_1_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x18BB0E30)
#define CLASS_1_F1A0CB87ADEC1771_METHOD_1_ABE7715DB28B2DD1_OFFSET UNITYSDK_OFFSET(0x18BB0EF0)
#define CLASS_1_F1A0CB87ADEC1771_METHOD_1_B8BCCD47F169CB0E_OFFSET UNITYSDK_OFFSET(0x18BB1BF0)
#define CLASS_1_F1A0CB87ADEC1771_METHOD_1_C5CB317C58335D0E_OFFSET UNITYSDK_OFFSET(0x18BB32C0)
#define CLASS_1_F1A0CB87ADEC1771_METHOD_1_C7C8E8CA7C1063A4_OFFSET UNITYSDK_OFFSET(0x18BB2FC0)
#define CLASS_1_F1A0CB87ADEC1771_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x18BB20E0)
#define CLASS_1_F1A0CB87ADEC1771_METHOD_1_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0x18BB19C0)
#define CLASS_1_F1A0CB87ADEC1771__CCTOR_OFFSET UNITYSDK_OFFSET(0x18BB38E0)
#define CLASS_1_F1A0CB87ADEC1771__CTOR_OFFSET UNITYSDK_OFFSET(0x18BAFD70)
#define CLASS_1_F1A0CB87ADEC1771___OPENUI_B__15_0_OFFSET UNITYSDK_OFFSET(0x18BB39F0)

inline static constexpr unsigned int Class_1_F1A0CB87ADEC1771_TypeDefinitionIndex = 57838;

class Class_1_F1A0CB87ADEC1771 : public ::System::Object
{
public:
	static ::RPG::GameCore::HoyoTag** StaticGet_Field_1_0()
	{
		return (::RPG::GameCore::HoyoTag**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F1A0CB87ADEC1771_TypeDefinitionIndex)->GetStaticField(0x3BCE0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F1A0CB87ADEC1771_TypeDefinitionIndex)->GetStaticField(0x9FF0);
	}
	static ::System::Boolean* StaticGet_Field_1_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F1A0CB87ADEC1771_TypeDefinitionIndex)->GetStaticField(0x9FF1);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F1A0CB87ADEC1771_TypeDefinitionIndex)->GetStaticField(0x9FF2);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F1A0CB87ADEC1771_TypeDefinitionIndex)->GetStaticField(0x9FF3);
	}
	::System::Action* Field_1_5; // 0x10
	::System::Action* Field_1_6; // 0x18
	::Class_3_001D9EA49F6215B6* Field_1_7; // 0x20
	::System::Collections::Generic::Stack_1<::Class_1_F1A0CB87ADEC1771_Class_1_D2CF375D5CBE026A*>* Field_1_8; // 0x28
	::RPG::GameCore::GameEntity* Field_1_9; // 0x30
	::RPG::GameCore::GameEntity* Field_1_10; // 0x38
	::Class_1_E0103A0EA6CD0F4C* Field_1_11; // 0x40
	::System::Action* Field_1_12; // 0x48
	::RPG::GameCore::FiveDimPortalTarget* Field_1_13; // 0x50
	::RPG::Client::UIController* Field_1_14; // 0x58
	::System::Boolean Field_1_15; // 0x60
	::System::Boolean Field_1_16; // 0x61
	::System::Boolean Field_1_17; // 0x62
	::System::Boolean Field_1_18; // 0x63
	::System::Boolean Field_1_19; // 0x64
	::System::Boolean Field_1_20; // 0x65
	::System::Int32 Field_1_21; // 0x68
	::UnityEngine::Vector3 Field_1_22; // 0x6C
	::System::Boolean Field_1_23; // 0x78
	::System::Boolean Field_1_24; // 0x79
	::System::Boolean Field_1_25; // 0x7A
	::System::Boolean Field_1_26; // 0x7B
	::System::UInt32 Field_1_27; // 0x7C
	::System::Int32 Field_1_28; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1A0CB87ADEC1771__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F1A0CB87ADEC1771__CCTOR_OFFSET))();
	}

	::System::Void Method_1_07E567B3C6C3D7D7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1A0CB87ADEC1771_METHOD_1_07E567B3C6C3D7D7_OFFSET))(this);
	}

	::System::Void Method_1_6CE3658623BE8932(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F1A0CB87ADEC1771_METHOD_1_6CE3658623BE8932_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1A0CB87ADEC1771_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F1A0CB87ADEC1771_METHOD_1_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_1_7B7D6BD6F55BCF32(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F1A0CB87ADEC1771_METHOD_1_7B7D6BD6F55BCF32_OFFSET))(this, a1);
	}

	::System::Void Method_1_84A7EA7055456CBD(::System::String* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_F1A0CB87ADEC1771_METHOD_1_84A7EA7055456CBD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1A8AEA0091C7B185(::System::String* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::System::Action* a4, ::System::Action* a5, ::System::Boolean a6, ::System::Boolean a7, ::System::UInt32 a8, ::System::Int32 a9)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Action*, ::System::Action*, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F1A0CB87ADEC1771_METHOD_1_1A8AEA0091C7B185_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_1_8BF54F977F33DDBE(::System::Action* a1, ::System::Action* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F1A0CB87ADEC1771_METHOD_1_8BF54F977F33DDBE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_F978A1D172468895()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1A0CB87ADEC1771_METHOD_1_F978A1D172468895_OFFSET))(this);
	}

	::System::Void Method_1_60BAB51FAB46DBD1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F1A0CB87ADEC1771_METHOD_1_60BAB51FAB46DBD1_OFFSET))(this, a1);
	}

	::System::Void Method_1_5D2C76B9A51C9650(::RPG::GameCore::FiveDimPortalTarget* a1, ::Class_3_001D9EA49F6215B6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimPortalTarget*, ::Class_3_001D9EA49F6215B6*))((::PBYTE)hIl2Cpp + CLASS_1_F1A0CB87ADEC1771_METHOD_1_5D2C76B9A51C9650_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_ABE7715DB28B2DD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1A0CB87ADEC1771_METHOD_1_ABE7715DB28B2DD1_OFFSET))(this);
	}

	::Class_1_E0103A0EA6CD0F4C* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_E0103A0EA6CD0F4C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1A0CB87ADEC1771_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Boolean Method_1_685EA12A8439ED7E(::System::UInt32 a1, ::System::UInt32 a2, ::Class_2_47C66A3BEB7A5F01*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Class_2_47C66A3BEB7A5F01*&))((::PBYTE)hIl2Cpp + CLASS_1_F1A0CB87ADEC1771_METHOD_1_685EA12A8439ED7E_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1A0CB87ADEC1771_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_B8BCCD47F169CB0E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F1A0CB87ADEC1771_METHOD_1_B8BCCD47F169CB0E_OFFSET))(this, a1);
	}

	::System::Void Method_1_9AF91962BC6E178A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1A0CB87ADEC1771_METHOD_1_9AF91962BC6E178A_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1A0CB87ADEC1771_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1A0CB87ADEC1771_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Boolean Method_1_568AE7A1499723FD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1A0CB87ADEC1771_METHOD_1_568AE7A1499723FD_OFFSET))(this);
	}

	::System::Void Method_1_C7C8E8CA7C1063A4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F1A0CB87ADEC1771_METHOD_1_C7C8E8CA7C1063A4_OFFSET))(this, a1);
	}

	::System::Void Method_1_276036CDF4BFF5A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1A0CB87ADEC1771_METHOD_1_276036CDF4BFF5A6_OFFSET))(this);
	}

	::System::Void Method_1_9B2E710EB9D49BA6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1A0CB87ADEC1771_METHOD_1_9B2E710EB9D49BA6_OFFSET))(this);
	}

	::System::UInt32 Method_1_2372762F4122DEB8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1A0CB87ADEC1771_METHOD_1_2372762F4122DEB8_OFFSET))(this);
	}

	::System::Boolean Method_1_C5CB317C58335D0E(::System::UInt32& a1, ::System::UInt32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_F1A0CB87ADEC1771_METHOD_1_C5CB317C58335D0E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4842CD3F21E04643(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F1A0CB87ADEC1771_METHOD_1_4842CD3F21E04643_OFFSET))(this, a1);
	}

	::System::Void __OpenUI_b__15_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1A0CB87ADEC1771___OPENUI_B__15_0_OFFSET))(this);
	}
};
