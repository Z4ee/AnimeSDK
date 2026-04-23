#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Collision2DUpdateType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/RPG/MColor.h"
#include "unitysdk/Struct_2_4AF9BC2DDB90BD8E.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_397;
class Class_0_16E4307DCC419505_398;
class Class_1_98133438BFCB56ED;
class Class_1_D30B741E780CB2FD;
class Class_1_E7BD46EB43F1A06F;
namespace RPG::GameCore { class GameWorld; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_365F1A3885A69C82_METHOD_1_0F385A3C5FDF01D9_OFFSET UNITYSDK_OFFSET(0x975F500)
#define CLASS_1_365F1A3885A69C82_METHOD_1_123DFB09BD2C9B9E_OFFSET UNITYSDK_OFFSET(0x9762000)
#define CLASS_1_365F1A3885A69C82_METHOD_1_2372762F4122DEB8_OFFSET UNITYSDK_OFFSET(0x975FB80)
#define CLASS_1_365F1A3885A69C82_METHOD_1_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0x9761460)
#define CLASS_1_365F1A3885A69C82_METHOD_1_368884BBCA3D2697_OFFSET UNITYSDK_OFFSET(0x975FC10)
#define CLASS_1_365F1A3885A69C82_METHOD_1_3D77B6BAE19A8F3C_OFFSET UNITYSDK_OFFSET(0x975F640)
#define CLASS_1_365F1A3885A69C82_METHOD_1_6C59A3F6161F332D_OFFSET UNITYSDK_OFFSET(0x9762570)
#define CLASS_1_365F1A3885A69C82_METHOD_1_6CE45A9FDCC08974_OFFSET UNITYSDK_OFFSET(0x975FE00)
#define CLASS_1_365F1A3885A69C82_METHOD_1_82ACE10628ED793E_OFFSET UNITYSDK_OFFSET(0x9762070)
#define CLASS_1_365F1A3885A69C82_METHOD_1_83BE0299944D0F77_OFFSET UNITYSDK_OFFSET(0x9761E30)
#define CLASS_1_365F1A3885A69C82_METHOD_1_945282646BBF7AEA_OFFSET UNITYSDK_OFFSET(0x975FE70)
#define CLASS_1_365F1A3885A69C82_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x975FED0)
#define CLASS_1_365F1A3885A69C82_METHOD_1_AAEF4AFC2144FCF8_OFFSET UNITYSDK_OFFSET(0x975F980)
#define CLASS_1_365F1A3885A69C82_METHOD_1_AB7ED27CAB69BE58_OFFSET UNITYSDK_OFFSET(0x97602D0)
#define CLASS_1_365F1A3885A69C82_METHOD_1_AF338721792188C4_OFFSET UNITYSDK_OFFSET(0x975F3C0)
#define CLASS_1_365F1A3885A69C82_METHOD_1_C46E6CD6AE9E1B86_OFFSET UNITYSDK_OFFSET(0x975F470)
#define CLASS_1_365F1A3885A69C82_METHOD_1_C9AD03BD3B583EEE_OFFSET UNITYSDK_OFFSET(0x9762750)
#define CLASS_1_365F1A3885A69C82_METHOD_1_DAE8DBED9D81F8BB_OFFSET UNITYSDK_OFFSET(0x975FF90)
#define CLASS_1_365F1A3885A69C82_METHOD_1_E378D9A7A36FC561_OFFSET UNITYSDK_OFFSET(0x9762B40)
#define CLASS_1_365F1A3885A69C82_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x975F5A0)
#define CLASS_1_365F1A3885A69C82_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x975F5F0)
#define CLASS_1_365F1A3885A69C82_TICK_OFFSET UNITYSDK_OFFSET(0x975FD90)
#define CLASS_1_365F1A3885A69C82__CTOR_OFFSET UNITYSDK_OFFSET(0x9762BA0)

inline static constexpr unsigned int Class_1_365F1A3885A69C82_TypeDefinitionIndex = 49453;

class Class_1_365F1A3885A69C82 : public ::System::Object
{
public:
	::RPG::GameCore::GameWorld* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_D30B741E780CB2FD*>* Field_1_8; // 0x18
	::System::Collections::Generic::List_1<::Class_1_98133438BFCB56ED*>* Field_1_3; // 0x20
	::System::Collections::Generic::List_1<::Class_1_98133438BFCB56ED*>* Field_1_2; // 0x28
	::System::Collections::Generic::SortedDictionary_2<::System::UInt64, ::Class_1_D30B741E780CB2FD*>* Field_1_5; // 0x30
	::System::Collections::Generic::List_1<::Class_1_D30B741E780CB2FD*>* Field_1_6; // 0x38
	::System::Collections::Generic::List_1<::Class_1_D30B741E780CB2FD*>* Field_1_7; // 0x40
	::System::Collections::Generic::List_1<::Class_1_98133438BFCB56ED*>* Field_1_4; // 0x48
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_10; // 0x50
	::System::UInt32 Field_1_9; // 0x58
	::RPG::GameCore::Collision2DUpdateType Field_1_1; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_365F1A3885A69C82__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_AF338721792188C4(::Class_0_16E4307DCC419505_397* a1, ::RPG::GameCore::FixVec2 a2, ::RPG::GameCore::FixVec2 a3, ::RPG::MColor a4, ::System::Single a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_397*, ::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2, ::RPG::MColor, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_365F1A3885A69C82_METHOD_1_AF338721792188C4_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_C46E6CD6AE9E1B86(::RPG::GameCore::FixVec2 a1, ::System::Single a2, ::RPG::MColor a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixVec2, ::System::Single, ::RPG::MColor, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_365F1A3885A69C82_METHOD_1_C46E6CD6AE9E1B86_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_0F385A3C5FDF01D9(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2, ::RPG::MColor a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2, ::RPG::MColor, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_365F1A3885A69C82_METHOD_1_0F385A3C5FDF01D9_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_365F1A3885A69C82_ONPLUGININIT_OFFSET))(this, a1);
	}

	::System::Void OnPluginUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_365F1A3885A69C82_ONPLUGINUNINIT_OFFSET))(this);
	}

	::Class_1_365F1A3885A69C82* Method_1_3D77B6BAE19A8F3C(::RPG::GameCore::Collision2DUpdateType a1)
	{
		return ((::Class_1_365F1A3885A69C82*(*)(::PVOID, ::RPG::GameCore::Collision2DUpdateType))((::PBYTE)hIl2Cpp + CLASS_1_365F1A3885A69C82_METHOD_1_3D77B6BAE19A8F3C_OFFSET))(this, a1);
	}

	::Class_1_98133438BFCB56ED* Method_1_AAEF4AFC2144FCF8(::Class_0_16E4307DCC419505_397* a1, ::RPG::GameCore::FixVec2 a2, ::RPG::GameCore::FixVec2 a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::Object* a6, ::Class_0_16E4307DCC419505_398* a7)
	{
		return ((::Class_1_98133438BFCB56ED*(*)(::PVOID, ::Class_0_16E4307DCC419505_397*, ::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2, ::System::UInt32, ::System::UInt32, ::System::Object*, ::Class_0_16E4307DCC419505_398*))((::PBYTE)hIl2Cpp + CLASS_1_365F1A3885A69C82_METHOD_1_AAEF4AFC2144FCF8_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_368884BBCA3D2697(::Class_1_98133438BFCB56ED* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_98133438BFCB56ED*))((::PBYTE)hIl2Cpp + CLASS_1_365F1A3885A69C82_METHOD_1_368884BBCA3D2697_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_365F1A3885A69C82_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_1_945282646BBF7AEA(::Class_1_E7BD46EB43F1A06F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7BD46EB43F1A06F*))((::PBYTE)hIl2Cpp + CLASS_1_365F1A3885A69C82_METHOD_1_945282646BBF7AEA_OFFSET))(this, a1);
	}

	::System::Void Method_1_6CE45A9FDCC08974(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_365F1A3885A69C82_METHOD_1_6CE45A9FDCC08974_OFFSET))(this, a1);
	}

	::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_365F1A3885A69C82_METHOD_1_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void Method_1_33E2FA8E6403B93D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_365F1A3885A69C82_METHOD_1_33E2FA8E6403B93D_OFFSET))(this);
	}

	::System::Void Method_1_AB7ED27CAB69BE58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_365F1A3885A69C82_METHOD_1_AB7ED27CAB69BE58_OFFSET))(this);
	}

	::System::Void Method_1_83BE0299944D0F77()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_365F1A3885A69C82_METHOD_1_83BE0299944D0F77_OFFSET))(this);
	}

	::System::Void Method_1_DAE8DBED9D81F8BB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_365F1A3885A69C82_METHOD_1_DAE8DBED9D81F8BB_OFFSET))(this);
	}

	::System::Void Method_1_82ACE10628ED793E(::Class_1_98133438BFCB56ED* a1, ::Class_1_98133438BFCB56ED* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_98133438BFCB56ED*, ::Class_1_98133438BFCB56ED*))((::PBYTE)hIl2Cpp + CLASS_1_365F1A3885A69C82_METHOD_1_82ACE10628ED793E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_C9AD03BD3B583EEE(::Class_1_98133438BFCB56ED* a1, ::Class_1_98133438BFCB56ED* a2, ::Struct_2_4AF9BC2DDB90BD8E& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_98133438BFCB56ED*, ::Class_1_98133438BFCB56ED*, ::Struct_2_4AF9BC2DDB90BD8E&))((::PBYTE)hIl2Cpp + CLASS_1_365F1A3885A69C82_METHOD_1_C9AD03BD3B583EEE_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_1_2372762F4122DEB8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_365F1A3885A69C82_METHOD_1_2372762F4122DEB8_OFFSET))(this);
	}

	::System::Void Method_1_123DFB09BD2C9B9E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_365F1A3885A69C82_METHOD_1_123DFB09BD2C9B9E_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_E378D9A7A36FC561(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::UInt64(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_365F1A3885A69C82_METHOD_1_E378D9A7A36FC561_OFFSET))(this, a1, a2);
	}

	::Class_1_D30B741E780CB2FD* Method_1_6C59A3F6161F332D(::Class_1_98133438BFCB56ED* a1, ::Class_1_98133438BFCB56ED* a2, ::System::Boolean a3)
	{
		return ((::Class_1_D30B741E780CB2FD*(*)(::PVOID, ::Class_1_98133438BFCB56ED*, ::Class_1_98133438BFCB56ED*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_365F1A3885A69C82_METHOD_1_6C59A3F6161F332D_OFFSET))(this, a1, a2, a3);
	}
};
