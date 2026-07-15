#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_0_16E4307DCC419505_1041;
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

#define CLASS_2_EE0DC3ED43797D75_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x170866A0)
#define CLASS_2_EE0DC3ED43797D75_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x17086AD0)
#define CLASS_2_EE0DC3ED43797D75_METHOD_2_0495C1A44040D44A_OFFSET UNITYSDK_OFFSET(0x17085940)
#define CLASS_2_EE0DC3ED43797D75_METHOD_2_17AAA827AB277388_OFFSET UNITYSDK_OFFSET(0x170857A0)
#define CLASS_2_EE0DC3ED43797D75_METHOD_2_2FBFBCF7021F45DA_OFFSET UNITYSDK_OFFSET(0x17085600)
#define CLASS_2_EE0DC3ED43797D75_METHOD_2_40EBA7013E4CCDDF_OFFSET UNITYSDK_OFFSET(0x17084E80)
#define CLASS_2_EE0DC3ED43797D75_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x17084D60)
#define CLASS_2_EE0DC3ED43797D75_METHOD_2_579C1EC2B96B2B45_OFFSET UNITYSDK_OFFSET(0x17085820)
#define CLASS_2_EE0DC3ED43797D75_METHOD_2_67622E8270A5AACD_OFFSET UNITYSDK_OFFSET(0x170862D0)
#define CLASS_2_EE0DC3ED43797D75_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x17084D00)
#define CLASS_2_EE0DC3ED43797D75_METHOD_2_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0x17084ED0)
#define CLASS_2_EE0DC3ED43797D75_METHOD_2_B6CFF7522BC9E031_OFFSET UNITYSDK_OFFSET(0x17085720)
#define CLASS_2_EE0DC3ED43797D75_METHOD_2_C4C193DFE428703D_OFFSET UNITYSDK_OFFSET(0x170856D0)
#define CLASS_2_EE0DC3ED43797D75_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17085680)
#define CLASS_2_EE0DC3ED43797D75_METHOD_2_CB8A488580BF693E_OFFSET UNITYSDK_OFFSET(0x17085BF0)
#define CLASS_2_EE0DC3ED43797D75_METHOD_2_E0E8085812DD34DC_OFFSET UNITYSDK_OFFSET(0x170858A0)
#define CLASS_2_EE0DC3ED43797D75_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x17086460)
#define CLASS_2_EE0DC3ED43797D75_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x17086520)
#define CLASS_2_EE0DC3ED43797D75_METHOD_2_F37CDBD6D46274D2_3_OFFSET UNITYSDK_OFFSET(0x170865E0)
#define CLASS_2_EE0DC3ED43797D75_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x17086380)
#define CLASS_2_EE0DC3ED43797D75__CTOR_OFFSET UNITYSDK_OFFSET(0x17086EC0)
#define CLASS_2_EE0DC3ED43797D75__ONBIND_OFFSET UNITYSDK_OFFSET(0x17084C90)

inline static constexpr unsigned int Class_2_EE0DC3ED43797D75_TypeDefinitionIndex = 68388;

class Class_2_EE0DC3ED43797D75 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::Int32 Field_2_0 = 0x2; // 0x0
	::RPG::GameCore::GameEntity* Field_2_1; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_0_16E4307DCC419505_1041*>* Field_2_2; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>* Field_2_3; // 0x70
	::RPG::GameCore::BattleInstance* Field_2_4; // 0x78
	::UnityEngine::UI::Image* Field_2_5; // 0x80

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

	::System::Void Method_2_40EBA7013E4CCDDF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE0DC3ED43797D75_METHOD_2_40EBA7013E4CCDDF_OFFSET))(this);
	}

	::System::Void Method_2_2FBFBCF7021F45DA(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_EE0DC3ED43797D75_METHOD_2_2FBFBCF7021F45DA_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE0DC3ED43797D75_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_C4C193DFE428703D(::RPG::GameCore::LevelBattleEventCreate* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelBattleEventCreate*))((::PBYTE)hIl2Cpp + CLASS_2_EE0DC3ED43797D75_METHOD_2_C4C193DFE428703D_OFFSET))(this, a1);
	}

	::System::Void Method_2_B6CFF7522BC9E031(::RPG::GameCore::LevelEntityEscape* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityEscape*))((::PBYTE)hIl2Cpp + CLASS_2_EE0DC3ED43797D75_METHOD_2_B6CFF7522BC9E031_OFFSET))(this, a1);
	}

	::System::Void Method_2_17AAA827AB277388(::RPG::GameCore::LevelCharacterDie* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterDie*))((::PBYTE)hIl2Cpp + CLASS_2_EE0DC3ED43797D75_METHOD_2_17AAA827AB277388_OFFSET))(this, a1);
	}

	::System::Void Method_2_579C1EC2B96B2B45(::RPG::GameCore::LevelBattleEventDie* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelBattleEventDie*))((::PBYTE)hIl2Cpp + CLASS_2_EE0DC3ED43797D75_METHOD_2_579C1EC2B96B2B45_OFFSET))(this, a1);
	}

	::System::Void Method_2_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE0DC3ED43797D75_METHOD_2_B2C0ADBFEA309440_OFFSET))(this);
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

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_EE0DC3ED43797D75_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_EE0DC3ED43797D75_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_EE0DC3ED43797D75_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_EE0DC3ED43797D75_METHOD_2_F37CDBD6D46274D2_3_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE0DC3ED43797D75_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE0DC3ED43797D75_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
