#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_0_16E4307DCC419505_950;
class Class_1_23F67DD15593C8D6;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class BattleEventDataComponent; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelBattleEventCreate; }
namespace RPG::GameCore { class LevelBattleEventDie; }
namespace RPG::GameCore { class LevelCharacterDie; }
namespace RPG::GameCore { class LevelEntityEscape; }
namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animation; }

#define CLASS_2_7AC5CDC6676C412B_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x12511AC0)
#define CLASS_2_7AC5CDC6676C412B_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x12511F80)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x125113D0)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_2377E17936196E10_OFFSET UNITYSDK_OFFSET(0x12510540)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_3CAB3F134E5CEF52_OFFSET UNITYSDK_OFFSET(0x1250FF20)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x1250EC70)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x12512690)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x125125C0)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_62D8D456C60B1D9D_OFFSET UNITYSDK_OFFSET(0x125105C0)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_67622E8270A5AACD_OFFSET UNITYSDK_OFFSET(0x12511320)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_67AEFE17318883D4_OFFSET UNITYSDK_OFFSET(0x1250F740)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0x1250EE60)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_87A84693C939DE46_OFFSET UNITYSDK_OFFSET(0x12510A30)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_88BEF7B7499FDBAA_OFFSET UNITYSDK_OFFSET(0x1250FAB0)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_99C9EEE541D93457_OFFSET UNITYSDK_OFFSET(0x1250F910)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x12511660)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0x12511770)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_A27D06F9481FAFDB_3_OFFSET UNITYSDK_OFFSET(0x12511880)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_A27D06F9481FAFDB_4_OFFSET UNITYSDK_OFFSET(0x12511A60)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x12511430)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x1250F880)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_B2D0C393C5A33FA5_OFFSET UNITYSDK_OFFSET(0x1250FA10)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x125109B0)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_C1C0CB2C8B6124DE_1_OFFSET UNITYSDK_OFFSET(0x12511990)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_C1C0CB2C8B6124DE_OFFSET UNITYSDK_OFFSET(0x12511500)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_C3FA16B393076D2B_OFFSET UNITYSDK_OFFSET(0x125104C0)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_CCD88C0D86A5A786_OFFSET UNITYSDK_OFFSET(0x1250EF20)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_CF8551534BA217CC_OFFSET UNITYSDK_OFFSET(0x1250F390)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_DAFD4F26397DCF6C_OFFSET UNITYSDK_OFFSET(0x1250FEA0)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_DD152A1A30757DCD_OFFSET UNITYSDK_OFFSET(0x1250EEB0)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_DFB53B789DEB4FB5_OFFSET UNITYSDK_OFFSET(0x1250F7B0)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_FD3B916300F77FDA_OFFSET UNITYSDK_OFFSET(0x1250EE00)
#define CLASS_2_7AC5CDC6676C412B__CTOR_OFFSET UNITYSDK_OFFSET(0x12512410)
#define CLASS_2_7AC5CDC6676C412B__ONBIND_OFFSET UNITYSDK_OFFSET(0x1250EBF0)
#define CLASS_2_7AC5CDC6676C412B__ONTICK_OFFSET UNITYSDK_OFFSET(0x1250ED90)
#define CLASS_2_7AC5CDC6676C412B__PLAYFADE_B__8_0_OFFSET UNITYSDK_OFFSET(0x12512520)
#define CLASS_2_7AC5CDC6676C412B___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x125126F0)
#define CLASS_2_7AC5CDC6676C412B___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x12512750)
#define CLASS_2_7AC5CDC6676C412B___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x12512560)
#define CLASS_2_7AC5CDC6676C412B___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x12512620)

inline static constexpr unsigned int Class_2_7AC5CDC6676C412B_TypeDefinitionIndex = 66018;

class Class_2_7AC5CDC6676C412B : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::Int32 Field_2_9 = 0x2; // 0x0
	// static const ::System::String* Field_2_10; // 0x0
	// static const ::System::String* Field_2_11; // 0x0
	// static const ::System::String* Field_2_12; // 0x0
	// static const ::System::String* Field_2_13; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>* Field_2_3; // 0x60
	::RPG::GameCore::BattleInstance* Field_2_4; // 0x68
	::RPG::Client::PrefabLoadMeta* Field_2_1; // 0x70
	::UnityEngine::Animation* Field_2_0; // 0x78
	::Class_1_23F67DD15593C8D6* Field_2_6; // 0x80
	::UnityEngine::Animation* Field_2_5; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_0_16E4307DCC419505_950*>* Field_2_2; // 0x90
	::System::Boolean Field_2_7; // 0x98
	::System::Boolean Field_2_8; // 0x99

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_FD3B916300F77FDA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_FD3B916300F77FDA_OFFSET))(this);
	}

	::System::Void Method_2_DD152A1A30757DCD(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_DD152A1A30757DCD_OFFSET))(this, a1);
	}

	::System::Void Method_2_CF8551534BA217CC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_CF8551534BA217CC_OFFSET))(this, a1);
	}

	::System::Void Method_2_67AEFE17318883D4(::RPG::GameCore::LevelGameModeStateChanged* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_67AEFE17318883D4_OFFSET))(this, a1);
	}

	::System::Void Method_2_DFB53B789DEB4FB5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_DFB53B789DEB4FB5_OFFSET))(this, a1);
	}

	::System::Void Method_2_99C9EEE541D93457(::RPG::GameCore::LevelBattleEventCreate* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelBattleEventCreate*))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_99C9EEE541D93457_OFFSET))(this, a1);
	}

	::System::Void Method_2_DAFD4F26397DCF6C(::RPG::GameCore::LevelEntityEscape* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityEscape*))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_DAFD4F26397DCF6C_OFFSET))(this, a1);
	}

	::System::Void Method_2_C3FA16B393076D2B(::RPG::GameCore::LevelCharacterDie* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterDie*))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_C3FA16B393076D2B_OFFSET))(this, a1);
	}

	::System::Void Method_2_2377E17936196E10(::RPG::GameCore::LevelBattleEventDie* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelBattleEventDie*))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_2377E17936196E10_OFFSET))(this, a1);
	}

	::System::Void Method_2_62D8D456C60B1D9D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_62D8D456C60B1D9D_OFFSET))(this, a1);
	}

	::System::Void Method_2_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Void Method_2_8542E37E74FDE1B5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_8542E37E74FDE1B5_OFFSET))(this);
	}

	::System::Void Method_2_3CAB3F134E5CEF52()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_3CAB3F134E5CEF52_OFFSET))(this);
	}

	::System::UInt32 Method_2_B2D0C393C5A33FA5(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_B2D0C393C5A33FA5_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_88BEF7B7499FDBAA(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_88BEF7B7499FDBAA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CCD88C0D86A5A786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_CCD88C0D86A5A786_OFFSET))(this);
	}

	::System::Void Method_2_87A84693C939DE46(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_87A84693C939DE46_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_67622E8270A5AACD(::RPG::GameCore::BattleEventDataComponent* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::BattleEventDataComponent*))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_67622E8270A5AACD_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_C1C0CB2C8B6124DE(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_C1C0CB2C8B6124DE_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_A27D06F9481FAFDB_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_C1C0CB2C8B6124DE_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_C1C0CB2C8B6124DE_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_A27D06F9481FAFDB_4_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void _PlayFade_b__8_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B__PLAYFADE_B__8_0_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
