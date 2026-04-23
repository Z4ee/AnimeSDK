#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_47C4886CB6C61234.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/RPG/GameCore/CharacterResourceLoadOption.h"

class Class_0_16E4307DCC419505_382;
class Class_2_6D453965E755326A;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B27DACB4D6C4EE79_METHOD_2_326A6AB8CD444F36_OFFSET UNITYSDK_OFFSET(0xD363520)
#define CLASS_2_B27DACB4D6C4EE79_METHOD_2_41B0DC419524DD07_OFFSET UNITYSDK_OFFSET(0xD364480)
#define CLASS_2_B27DACB4D6C4EE79_METHOD_2_4AC38C7D74462263_OFFSET UNITYSDK_OFFSET(0xD363C70)
#define CLASS_2_B27DACB4D6C4EE79_METHOD_2_58E4F6A5F8FAF17F_1_OFFSET UNITYSDK_OFFSET(0xD363E30)
#define CLASS_2_B27DACB4D6C4EE79_METHOD_2_58E4F6A5F8FAF17F_2_OFFSET UNITYSDK_OFFSET(0xD363EE0)
#define CLASS_2_B27DACB4D6C4EE79_METHOD_2_58E4F6A5F8FAF17F_3_OFFSET UNITYSDK_OFFSET(0xD363F70)
#define CLASS_2_B27DACB4D6C4EE79_METHOD_2_58E4F6A5F8FAF17F_4_OFFSET UNITYSDK_OFFSET(0xD3640C0)
#define CLASS_2_B27DACB4D6C4EE79_METHOD_2_58E4F6A5F8FAF17F_5_OFFSET UNITYSDK_OFFSET(0xD364180)
#define CLASS_2_B27DACB4D6C4EE79_METHOD_2_58E4F6A5F8FAF17F_6_OFFSET UNITYSDK_OFFSET(0xD364240)
#define CLASS_2_B27DACB4D6C4EE79_METHOD_2_58E4F6A5F8FAF17F_OFFSET UNITYSDK_OFFSET(0xD363DA0)
#define CLASS_2_B27DACB4D6C4EE79_METHOD_2_5B0531D5B96D6B96_1_OFFSET UNITYSDK_OFFSET(0xD3642F0)
#define CLASS_2_B27DACB4D6C4EE79_METHOD_2_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0xD364000)
#define CLASS_2_B27DACB4D6C4EE79_METHOD_2_77D3A713790E6153_OFFSET UNITYSDK_OFFSET(0xD363860)
#define CLASS_2_B27DACB4D6C4EE79_METHOD_2_C2637EBBF9112AC1_OFFSET UNITYSDK_OFFSET(0xD3639C0)
#define CLASS_2_B27DACB4D6C4EE79_METHOD_2_CC355FE9517A09BB_OFFSET UNITYSDK_OFFSET(0xD362B00)
#define CLASS_2_B27DACB4D6C4EE79_METHOD_2_CF3E9B549DD9F425_OFFSET UNITYSDK_OFFSET(0xD363D40)
#define CLASS_2_B27DACB4D6C4EE79_METHOD_2_D7E7B17A71976D23_OFFSET UNITYSDK_OFFSET(0xD362C50)
#define CLASS_2_B27DACB4D6C4EE79_METHOD_2_DEF2DE40AFA48D53_OFFSET UNITYSDK_OFFSET(0xD364490)
#define CLASS_2_B27DACB4D6C4EE79_METHOD_2_E75622EEC310B11F_OFFSET UNITYSDK_OFFSET(0xD363410)
#define CLASS_2_B27DACB4D6C4EE79_METHOD_2_ED65AE7582736594_OFFSET UNITYSDK_OFFSET(0xD362D10)
#define CLASS_2_B27DACB4D6C4EE79_METHOD_2_EEB340E9273B82CD_1_OFFSET UNITYSDK_OFFSET(0xD364430)
#define CLASS_2_B27DACB4D6C4EE79_METHOD_2_EEB340E9273B82CD_OFFSET UNITYSDK_OFFSET(0xD3643E0)
#define CLASS_2_B27DACB4D6C4EE79_ONINIT_OFFSET UNITYSDK_OFFSET(0xD361A30)
#define CLASS_2_B27DACB4D6C4EE79_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xD362640)
#define CLASS_2_B27DACB4D6C4EE79__CTOR_OFFSET UNITYSDK_OFFSET(0xD3644A0)
#define CLASS_2_B27DACB4D6C4EE79___IFIXBASEPROXY_ONINIT_OFFSET UNITYSDK_OFFSET(0xD364680)
#define CLASS_2_B27DACB4D6C4EE79___IFIXBASEPROXY_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xD3646E0)

inline static constexpr unsigned int Class_2_B27DACB4D6C4EE79_TypeDefinitionIndex = 67535;

class Class_2_B27DACB4D6C4EE79 : public ::Class_1_47C4886CB6C61234
{
public:
	// static const ::System::String* Field_2_10; // 0x0
	// static const ::System::String* Field_2_11; // 0x0
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::UInt32>* Field_2_5; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>* Field_2_3; // 0x28
	::Class_2_6D453965E755326A* Field_2_0; // 0x30
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_2; // 0x38
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_1; // 0x40
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* Field_2_4; // 0x48
	::RPG::GameCore::GameEntity* Field_2_7; // 0x50
	::System::UInt32 Field_2_8; // 0x58
	::System::Single Field_2_6; // 0x5C
	::System::UInt32 Field_2_9; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B27DACB4D6C4EE79__CTOR_OFFSET))(this);
	}

	::System::Void OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B27DACB4D6C4EE79_ONINIT_OFFSET))(this);
	}

	::System::Void OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B27DACB4D6C4EE79_ONUNINIT_OFFSET))(this);
	}

	::System::Void Method_2_CC355FE9517A09BB(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::CharacterResourceLoadOption a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::CharacterResourceLoadOption))((::PBYTE)hIl2Cpp + CLASS_2_B27DACB4D6C4EE79_METHOD_2_CC355FE9517A09BB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D7E7B17A71976D23(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_B27DACB4D6C4EE79_METHOD_2_D7E7B17A71976D23_OFFSET))(this, a1);
	}

	::System::Void Method_2_E75622EEC310B11F(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B27DACB4D6C4EE79_METHOD_2_E75622EEC310B11F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_326A6AB8CD444F36(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B27DACB4D6C4EE79_METHOD_2_326A6AB8CD444F36_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_77D3A713790E6153(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B27DACB4D6C4EE79_METHOD_2_77D3A713790E6153_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4AC38C7D74462263(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B27DACB4D6C4EE79_METHOD_2_4AC38C7D74462263_OFFSET))(this, a1);
	}

	::System::Void Method_2_C2637EBBF9112AC1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_B27DACB4D6C4EE79_METHOD_2_C2637EBBF9112AC1_OFFSET))(this, a1);
	}

	::System::Void Method_2_CF3E9B549DD9F425(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AliveState a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + CLASS_2_B27DACB4D6C4EE79_METHOD_2_CF3E9B549DD9F425_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_58E4F6A5F8FAF17F(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_B27DACB4D6C4EE79_METHOD_2_58E4F6A5F8FAF17F_OFFSET))(this, a1);
	}

	::System::Void Method_2_58E4F6A5F8FAF17F_1(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_B27DACB4D6C4EE79_METHOD_2_58E4F6A5F8FAF17F_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_58E4F6A5F8FAF17F_2(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_B27DACB4D6C4EE79_METHOD_2_58E4F6A5F8FAF17F_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_58E4F6A5F8FAF17F_3(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_B27DACB4D6C4EE79_METHOD_2_58E4F6A5F8FAF17F_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_B27DACB4D6C4EE79_METHOD_2_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void Method_2_58E4F6A5F8FAF17F_4(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_B27DACB4D6C4EE79_METHOD_2_58E4F6A5F8FAF17F_4_OFFSET))(this, a1);
	}

	::System::Void Method_2_58E4F6A5F8FAF17F_5(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_B27DACB4D6C4EE79_METHOD_2_58E4F6A5F8FAF17F_5_OFFSET))(this, a1);
	}

	::System::Void Method_2_58E4F6A5F8FAF17F_6(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_B27DACB4D6C4EE79_METHOD_2_58E4F6A5F8FAF17F_6_OFFSET))(this, a1);
	}

	::System::Void Method_2_5B0531D5B96D6B96_1(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_B27DACB4D6C4EE79_METHOD_2_5B0531D5B96D6B96_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_EEB340E9273B82CD(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B27DACB4D6C4EE79_METHOD_2_EEB340E9273B82CD_OFFSET))(this, a1);
	}

	::System::Void Method_2_EEB340E9273B82CD_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B27DACB4D6C4EE79_METHOD_2_EEB340E9273B82CD_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_ED65AE7582736594()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B27DACB4D6C4EE79_METHOD_2_ED65AE7582736594_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* Method_2_41B0DC419524DD07()
	{
		return ((::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B27DACB4D6C4EE79_METHOD_2_41B0DC419524DD07_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::UInt32>* Method_2_DEF2DE40AFA48D53()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B27DACB4D6C4EE79_METHOD_2_DEF2DE40AFA48D53_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B27DACB4D6C4EE79___IFIXBASEPROXY_ONINIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B27DACB4D6C4EE79___IFIXBASEPROXY_ONUNINIT_OFFSET))(this);
	}
};
