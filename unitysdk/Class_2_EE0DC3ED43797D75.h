#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_0_16E4307DCC419505_999;
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

#define CLASS_2_EE0DC3ED43797D75_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB026AD0)
#define CLASS_2_EE0DC3ED43797D75_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB026F10)
#define CLASS_2_EE0DC3ED43797D75_METHOD_2_045C1EFF30C8BD5F_OFFSET UNITYSDK_OFFSET(0xB025CC0)
#define CLASS_2_EE0DC3ED43797D75_METHOD_2_0495C1A44040D44A_OFFSET UNITYSDK_OFFSET(0xB025F60)
#define CLASS_2_EE0DC3ED43797D75_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xB025390)
#define CLASS_2_EE0DC3ED43797D75_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xB027540)
#define CLASS_2_EE0DC3ED43797D75_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xB0274E0)
#define CLASS_2_EE0DC3ED43797D75_METHOD_2_5D9CF83CFC617CF9_OFFSET UNITYSDK_OFFSET(0xB027480)
#define CLASS_2_EE0DC3ED43797D75_METHOD_2_67622E8270A5AACD_OFFSET UNITYSDK_OFFSET(0xB026790)
#define CLASS_2_EE0DC3ED43797D75_METHOD_2_7A097E7EF929F289_OFFSET UNITYSDK_OFFSET(0xB025500)
#define CLASS_2_EE0DC3ED43797D75_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0xB025330)
#define CLASS_2_EE0DC3ED43797D75_METHOD_2_9AE4EDB37C3CFA2F_OFFSET UNITYSDK_OFFSET(0xB025D10)
#define CLASS_2_EE0DC3ED43797D75_METHOD_2_9B8097E8AA6A8F9B_OFFSET UNITYSDK_OFFSET(0xB025E30)
#define CLASS_2_EE0DC3ED43797D75_METHOD_2_9D6D19A5F2BD69B1_OFFSET UNITYSDK_OFFSET(0xB025BF0)
#define CLASS_2_EE0DC3ED43797D75_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0xB0268F0)
#define CLASS_2_EE0DC3ED43797D75_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0xB026990)
#define CLASS_2_EE0DC3ED43797D75_METHOD_2_A27D06F9481FAFDB_3_OFFSET UNITYSDK_OFFSET(0xB026A30)
#define CLASS_2_EE0DC3ED43797D75_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xB026840)
#define CLASS_2_EE0DC3ED43797D75_METHOD_2_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0xB0254B0)
#define CLASS_2_EE0DC3ED43797D75_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB025C70)
#define CLASS_2_EE0DC3ED43797D75_METHOD_2_CB8A488580BF693E_OFFSET UNITYSDK_OFFSET(0xB026210)
#define CLASS_2_EE0DC3ED43797D75_METHOD_2_E0E8085812DD34DC_OFFSET UNITYSDK_OFFSET(0xB025EC0)
#define CLASS_2_EE0DC3ED43797D75_METHOD_2_F7974E8140DB5BF8_OFFSET UNITYSDK_OFFSET(0xB025DA0)
#define CLASS_2_EE0DC3ED43797D75__CTOR_OFFSET UNITYSDK_OFFSET(0xB027310)
#define CLASS_2_EE0DC3ED43797D75__ONBIND_OFFSET UNITYSDK_OFFSET(0xB0252C0)
#define CLASS_2_EE0DC3ED43797D75___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB0275A0)
#define CLASS_2_EE0DC3ED43797D75___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB027600)
#define CLASS_2_EE0DC3ED43797D75___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xB027420)

inline static constexpr unsigned int Class_2_EE0DC3ED43797D75_TypeDefinitionIndex = 66944;

class Class_2_EE0DC3ED43797D75 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::Int32 Field_2_0 = 0x2; // 0x0
	::UnityEngine::UI::Image* Field_2_1; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_0_16E4307DCC419505_999*>* Field_2_2; // 0x68
	::RPG::GameCore::BattleInstance* Field_2_3; // 0x70
	::RPG::GameCore::GameEntity* Field_2_4; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>* Field_2_5; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE0DC3ED43797D75__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE0DC3ED43797D75__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_EE0DC3ED43797D75_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE0DC3ED43797D75_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE0DC3ED43797D75_METHOD_2_B2C0ADBFEA309440_OFFSET))(this);
	}

	::System::Void Method_2_9D6D19A5F2BD69B1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_EE0DC3ED43797D75_METHOD_2_9D6D19A5F2BD69B1_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE0DC3ED43797D75_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_045C1EFF30C8BD5F(::RPG::GameCore::LevelBattleEventCreate* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelBattleEventCreate*))((::PBYTE)hIl2Cpp + CLASS_2_EE0DC3ED43797D75_METHOD_2_045C1EFF30C8BD5F_OFFSET))(this, a1);
	}

	::System::Void Method_2_9AE4EDB37C3CFA2F(::RPG::GameCore::LevelEntityEscape* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityEscape*))((::PBYTE)hIl2Cpp + CLASS_2_EE0DC3ED43797D75_METHOD_2_9AE4EDB37C3CFA2F_OFFSET))(this, a1);
	}

	::System::Void Method_2_F7974E8140DB5BF8(::RPG::GameCore::LevelCharacterDie* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterDie*))((::PBYTE)hIl2Cpp + CLASS_2_EE0DC3ED43797D75_METHOD_2_F7974E8140DB5BF8_OFFSET))(this, a1);
	}

	::System::Void Method_2_9B8097E8AA6A8F9B(::RPG::GameCore::LevelBattleEventDie* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelBattleEventDie*))((::PBYTE)hIl2Cpp + CLASS_2_EE0DC3ED43797D75_METHOD_2_9B8097E8AA6A8F9B_OFFSET))(this, a1);
	}

	::System::Void Method_2_7A097E7EF929F289()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE0DC3ED43797D75_METHOD_2_7A097E7EF929F289_OFFSET))(this);
	}

	::System::UInt32 Method_2_E0E8085812DD34DC(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_EE0DC3ED43797D75_METHOD_2_E0E8085812DD34DC_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0495C1A44040D44A(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_EE0DC3ED43797D75_METHOD_2_0495C1A44040D44A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CB8A488580BF693E(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_EE0DC3ED43797D75_METHOD_2_CB8A488580BF693E_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_67622E8270A5AACD(::RPG::GameCore::BattleEventDataComponent* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::BattleEventDataComponent*))((::PBYTE)hIl2Cpp + CLASS_2_EE0DC3ED43797D75_METHOD_2_67622E8270A5AACD_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_EE0DC3ED43797D75_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_EE0DC3ED43797D75_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_EE0DC3ED43797D75_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_EE0DC3ED43797D75_METHOD_2_A27D06F9481FAFDB_3_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE0DC3ED43797D75_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE0DC3ED43797D75_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE0DC3ED43797D75___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5D9CF83CFC617CF9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_EE0DC3ED43797D75_METHOD_2_5D9CF83CFC617CF9_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE0DC3ED43797D75_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE0DC3ED43797D75_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE0DC3ED43797D75___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE0DC3ED43797D75___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
