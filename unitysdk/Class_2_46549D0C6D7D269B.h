#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_0_16E4307DCC419505_950;
namespace RPG::GameCore { class BattleEventDataComponent; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelBattleEventCreate; }
namespace RPG::GameCore { class LevelBattleEventDie; }
namespace RPG::GameCore { class LevelCharacterDie; }
namespace RPG::GameCore { class LevelEntityEscape; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_46549D0C6D7D269B_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x980CD40)
#define CLASS_2_46549D0C6D7D269B_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x980D110)
#define CLASS_2_46549D0C6D7D269B_METHOD_2_0DB5947CF40F2245_OFFSET UNITYSDK_OFFSET(0x980BF70)
#define CLASS_2_46549D0C6D7D269B_METHOD_2_35D3CCDADBED2058_OFFSET UNITYSDK_OFFSET(0x980BEA0)
#define CLASS_2_46549D0C6D7D269B_METHOD_2_3C7DB26DBC02A9C6_OFFSET UNITYSDK_OFFSET(0x980BDD0)
#define CLASS_2_46549D0C6D7D269B_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x980B590)
#define CLASS_2_46549D0C6D7D269B_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x980D6D0)
#define CLASS_2_46549D0C6D7D269B_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x980D670)
#define CLASS_2_46549D0C6D7D269B_METHOD_2_67622E8270A5AACD_OFFSET UNITYSDK_OFFSET(0x980C8B0)
#define CLASS_2_46549D0C6D7D269B_METHOD_2_8003D64C299A1B53_OFFSET UNITYSDK_OFFSET(0x980C110)
#define CLASS_2_46549D0C6D7D269B_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x980B530)
#define CLASS_2_46549D0C6D7D269B_METHOD_2_91B1D0230882FAE3_OFFSET UNITYSDK_OFFSET(0x980B6B0)
#define CLASS_2_46549D0C6D7D269B_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x980CA10)
#define CLASS_2_46549D0C6D7D269B_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0x980CB20)
#define CLASS_2_46549D0C6D7D269B_METHOD_2_A27D06F9481FAFDB_3_OFFSET UNITYSDK_OFFSET(0x980CC30)
#define CLASS_2_46549D0C6D7D269B_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x980C960)
#define CLASS_2_46549D0C6D7D269B_METHOD_2_B2D0C393C5A33FA5_OFFSET UNITYSDK_OFFSET(0x980C070)
#define CLASS_2_46549D0C6D7D269B_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0x980D600)
#define CLASS_2_46549D0C6D7D269B_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x980BE50)
#define CLASS_2_46549D0C6D7D269B_METHOD_2_CB8A488580BF693E_OFFSET UNITYSDK_OFFSET(0x980C320)
#define CLASS_2_46549D0C6D7D269B_METHOD_2_D70C8B847AF08ADE_OFFSET UNITYSDK_OFFSET(0x980B700)
#define CLASS_2_46549D0C6D7D269B_METHOD_2_DC1EC38F5CAAD24A_OFFSET UNITYSDK_OFFSET(0x980BFF0)
#define CLASS_2_46549D0C6D7D269B_METHOD_2_F7C81523AA9474EE_OFFSET UNITYSDK_OFFSET(0x980BEF0)
#define CLASS_2_46549D0C6D7D269B__CTOR_OFFSET UNITYSDK_OFFSET(0x980D4A0)
#define CLASS_2_46549D0C6D7D269B__ONBIND_OFFSET UNITYSDK_OFFSET(0x980B4C0)
#define CLASS_2_46549D0C6D7D269B___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x980D730)
#define CLASS_2_46549D0C6D7D269B___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x980D790)
#define CLASS_2_46549D0C6D7D269B___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x980D5A0)

inline static constexpr unsigned int Class_2_46549D0C6D7D269B_TypeDefinitionIndex = 66011;

class Class_2_46549D0C6D7D269B : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::Int32 Field_2_5 = 0x2; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>* Field_2_2; // 0x60
	::RPG::GameCore::GameEntity* Field_2_1; // 0x68
	::UnityEngine::UI::Image* Field_2_0; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_0_16E4307DCC419505_950*>* Field_2_3; // 0x78
	::RPG::GameCore::BattleInstance* Field_2_4; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_46549D0C6D7D269B__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_46549D0C6D7D269B__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_46549D0C6D7D269B_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_46549D0C6D7D269B_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_91B1D0230882FAE3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_46549D0C6D7D269B_METHOD_2_91B1D0230882FAE3_OFFSET))(this);
	}

	::System::Void Method_2_3C7DB26DBC02A9C6(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_46549D0C6D7D269B_METHOD_2_3C7DB26DBC02A9C6_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_46549D0C6D7D269B_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_35D3CCDADBED2058(::RPG::GameCore::LevelBattleEventCreate* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelBattleEventCreate*))((::PBYTE)hIl2Cpp + CLASS_2_46549D0C6D7D269B_METHOD_2_35D3CCDADBED2058_OFFSET))(this, a1);
	}

	::System::Void Method_2_F7C81523AA9474EE(::RPG::GameCore::LevelEntityEscape* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityEscape*))((::PBYTE)hIl2Cpp + CLASS_2_46549D0C6D7D269B_METHOD_2_F7C81523AA9474EE_OFFSET))(this, a1);
	}

	::System::Void Method_2_0DB5947CF40F2245(::RPG::GameCore::LevelCharacterDie* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterDie*))((::PBYTE)hIl2Cpp + CLASS_2_46549D0C6D7D269B_METHOD_2_0DB5947CF40F2245_OFFSET))(this, a1);
	}

	::System::Void Method_2_DC1EC38F5CAAD24A(::RPG::GameCore::LevelBattleEventDie* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelBattleEventDie*))((::PBYTE)hIl2Cpp + CLASS_2_46549D0C6D7D269B_METHOD_2_DC1EC38F5CAAD24A_OFFSET))(this, a1);
	}

	::System::Void Method_2_D70C8B847AF08ADE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_46549D0C6D7D269B_METHOD_2_D70C8B847AF08ADE_OFFSET))(this);
	}

	::System::UInt32 Method_2_B2D0C393C5A33FA5(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_46549D0C6D7D269B_METHOD_2_B2D0C393C5A33FA5_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_8003D64C299A1B53(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_46549D0C6D7D269B_METHOD_2_8003D64C299A1B53_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CB8A488580BF693E(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_46549D0C6D7D269B_METHOD_2_CB8A488580BF693E_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_67622E8270A5AACD(::RPG::GameCore::BattleEventDataComponent* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::BattleEventDataComponent*))((::PBYTE)hIl2Cpp + CLASS_2_46549D0C6D7D269B_METHOD_2_67622E8270A5AACD_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_46549D0C6D7D269B_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_46549D0C6D7D269B_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_46549D0C6D7D269B_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_46549D0C6D7D269B_METHOD_2_A27D06F9481FAFDB_3_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_46549D0C6D7D269B_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_46549D0C6D7D269B_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_46549D0C6D7D269B___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_46549D0C6D7D269B_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_46549D0C6D7D269B_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_46549D0C6D7D269B_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_46549D0C6D7D269B___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_46549D0C6D7D269B___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
