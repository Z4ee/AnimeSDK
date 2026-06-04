#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2CDF619C23140440;
class Class_1_EE559462F37DF929;
class Class_1_EF3A653417469661_Class_3_C0D189AA62C8FC80_1;
class Class_2_B8E38BF47138A2E5;
class Class_3_D6E9A038FA23103A;
namespace Entitas { class IComponent; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG::Client { class QuestData; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelAnimalAttachBillboardData; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelGlobalData; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelProgressTipsData; }
namespace RPG::GameCore { class FourRotateVoxelEntranceConfig; }
namespace RPG::GameCore { class FourRotateVoxelPortalConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EF3A653417469661_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA774DD0)
#define CLASS_1_EF3A653417469661_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xA774070)
#define CLASS_1_EF3A653417469661_METHOD_1_00DC6C482249EA10_OFFSET UNITYSDK_OFFSET(0xA7755E0)
#define CLASS_1_EF3A653417469661_METHOD_1_01509228E3A9577B_OFFSET UNITYSDK_OFFSET(0xA774A80)
#define CLASS_1_EF3A653417469661_METHOD_1_0BCA929F38D4D7DB_OFFSET UNITYSDK_OFFSET(0xA776080)
#define CLASS_1_EF3A653417469661_METHOD_1_125126BF7ACBDD51_OFFSET UNITYSDK_OFFSET(0xA772960)
#define CLASS_1_EF3A653417469661_METHOD_1_1615E74BDA0D0348_OFFSET UNITYSDK_OFFSET(0xA773B30)
#define CLASS_1_EF3A653417469661_METHOD_1_168CDBBDB08BE45E_OFFSET UNITYSDK_OFFSET(0xA773D60)
#define CLASS_1_EF3A653417469661_METHOD_1_2416EE8102DF21CF_OFFSET UNITYSDK_OFFSET(0xA7737C0)
#define CLASS_1_EF3A653417469661_METHOD_1_2DC2C8C0FD03A63B_OFFSET UNITYSDK_OFFSET(0xA772AE0)
#define CLASS_1_EF3A653417469661_METHOD_1_370656FAA772EE39_OFFSET UNITYSDK_OFFSET(0xA7764D0)
#define CLASS_1_EF3A653417469661_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xA775C00)
#define CLASS_1_EF3A653417469661_METHOD_1_3956F98173A4FAEA_OFFSET UNITYSDK_OFFSET(0xA776120)
#define CLASS_1_EF3A653417469661_METHOD_1_3A2C43EC5E188AEB_OFFSET UNITYSDK_OFFSET(0xA775C40)
#define CLASS_1_EF3A653417469661_METHOD_1_48CB2A397A1C56C8_OFFSET UNITYSDK_OFFSET(0xA775E10)
#define CLASS_1_EF3A653417469661_METHOD_1_8714CF4AE9195CA2_OFFSET UNITYSDK_OFFSET(0xA774640)
#define CLASS_1_EF3A653417469661_METHOD_1_94CBD0C21A609187_OFFSET UNITYSDK_OFFSET(0xA772B70)
#define CLASS_1_EF3A653417469661_METHOD_1_C75A94AFCA1341AB_OFFSET UNITYSDK_OFFSET(0xA773AB0)
#define CLASS_1_EF3A653417469661_METHOD_1_CD64FADAE3A9747A_OFFSET UNITYSDK_OFFSET(0xA773E70)
#define CLASS_1_EF3A653417469661_METHOD_1_DC8592C913491D4B_OFFSET UNITYSDK_OFFSET(0xA774820)
#define CLASS_1_EF3A653417469661_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xA774CF0)
#define CLASS_1_EF3A653417469661_METHOD_1_FC15BAFC5717F4C6_OFFSET UNITYSDK_OFFSET(0xA7732B0)
#define CLASS_1_EF3A653417469661_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xA7758E0)
#define CLASS_1_EF3A653417469661__CCTOR_OFFSET UNITYSDK_OFFSET(0xA776740)
#define CLASS_1_EF3A653417469661__CTOR_OFFSET UNITYSDK_OFFSET(0xA772560)
#define CLASS_1_EF3A653417469661__EXECUTE_B__13_0_OFFSET UNITYSDK_OFFSET(0xA7767A0)
#define CLASS_1_EF3A653417469661___ONSHOWRAREREWARDHINTDIALOG_B__12_0_OFFSET UNITYSDK_OFFSET(0xA776780)

inline static constexpr unsigned int Class_1_EF3A653417469661_TypeDefinitionIndex = 71308;

class Class_1_EF3A653417469661 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EF3A653417469661_TypeDefinitionIndex)->GetStaticField(0x60AC0);
	}
	::System::Collections::Generic::Dictionary_2<::Class_2_B8E38BF47138A2E5*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelAnimalAttachBillboardData*>* Field_1_1; // 0x10
	::Entitas::IGroup_1<::Class_2_B8E38BF47138A2E5*>* Field_1_2; // 0x18
	::Entitas::IGroup_1<::Class_2_B8E38BF47138A2E5*>* Field_1_3; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_EF3A653417469661_Class_3_C0D189AA62C8FC80_1*>* Field_1_4; // 0x28
	::Class_3_D6E9A038FA23103A* Field_1_5; // 0x30
	::Class_1_2CDF619C23140440* Field_1_6; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_B8E38BF47138A2E5*>* Field_1_7; // 0x40
	::System::Collections::Generic::List_1<::Class_2_B8E38BF47138A2E5*>* Field_1_8; // 0x48
	::RPG::GameCore::FourRotateVoxelPortalConfig* Field_1_9; // 0x50
	::System::Collections::Generic::Dictionary_2<::Class_2_B8E38BF47138A2E5*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelProgressTipsData*>* Field_1_10; // 0x58
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGlobalData* Field_1_11; // 0x60
	::System::Single Field_1_12; // 0x68
	::System::Boolean Field_1_13; // 0x6C
	::System::Boolean Field_1_14; // 0x6D
	::System::Boolean Field_1_15; // 0x6E
	::System::Boolean Field_1_16; // 0x6F
	::System::UInt32 Field_1_17; // 0x70
	::System::Single Field_1_18; // 0x74
	::System::Int32 Field_1_19; // 0x78

	::System::Void _ctor(::Class_1_2CDF619C23140440* a1, ::Class_3_D6E9A038FA23103A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2CDF619C23140440*, ::Class_3_D6E9A038FA23103A*))((::PBYTE)hIl2Cpp + CLASS_1_EF3A653417469661__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EF3A653417469661__CCTOR_OFFSET))();
	}

	::System::Void Method_1_125126BF7ACBDD51(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_EF3A653417469661_METHOD_1_125126BF7ACBDD51_OFFSET))(this, a1);
	}

	::System::Void Method_1_94CBD0C21A609187(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EF3A653417469661_METHOD_1_94CBD0C21A609187_OFFSET))(this, a1);
	}

	::System::Void Method_1_1615E74BDA0D0348(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EF3A653417469661_METHOD_1_1615E74BDA0D0348_OFFSET))(this, a1);
	}

	::System::Void Method_1_168CDBBDB08BE45E(::RPG::GameCore::FourRotateVoxelEntranceConfig* a1, ::System::Int32& a2, ::System::Int32& a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FourRotateVoxelEntranceConfig*, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_EF3A653417469661_METHOD_1_168CDBBDB08BE45E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_FC15BAFC5717F4C6(::Class_2_B8E38BF47138A2E5* a1, ::RPG::Client::QuestData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + CLASS_1_EF3A653417469661_METHOD_1_FC15BAFC5717F4C6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CD64FADAE3A9747A(::Class_1_EE559462F37DF929* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EE559462F37DF929*))((::PBYTE)hIl2Cpp + CLASS_1_EF3A653417469661_METHOD_1_CD64FADAE3A9747A_OFFSET))(this, a1);
	}

	::System::Void Method_1_2DC2C8C0FD03A63B(::Class_2_B8E38BF47138A2E5* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EF3A653417469661_METHOD_1_2DC2C8C0FD03A63B_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF3A653417469661_INITIALIZE_OFFSET))(this);
	}

	::System::Void Method_1_8714CF4AE9195CA2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF3A653417469661_METHOD_1_8714CF4AE9195CA2_OFFSET))(this);
	}

	::System::Void Method_1_DC8592C913491D4B(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EF3A653417469661_METHOD_1_DC8592C913491D4B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_01509228E3A9577B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EF3A653417469661_METHOD_1_01509228E3A9577B_OFFSET))(this, a1);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF3A653417469661_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_00DC6C482249EA10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF3A653417469661_METHOD_1_00DC6C482249EA10_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF3A653417469661_TEARDOWN_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF3A653417469661_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF3A653417469661_METHOD_1_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_1_3A2C43EC5E188AEB(::Entitas::IGroup_1<::Class_2_B8E38BF47138A2E5*>* a1, ::Class_2_B8E38BF47138A2E5* a2, ::System::Int32 a3, ::Entitas::IComponent* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IGroup_1<::Class_2_B8E38BF47138A2E5*>*, ::Class_2_B8E38BF47138A2E5*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_EF3A653417469661_METHOD_1_3A2C43EC5E188AEB_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_0BCA929F38D4D7DB(::Class_2_B8E38BF47138A2E5* a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_EF3A653417469661_METHOD_1_0BCA929F38D4D7DB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C75A94AFCA1341AB(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_EF3A653417469661_METHOD_1_C75A94AFCA1341AB_OFFSET))(this, a1);
	}

	::System::Void Method_1_3956F98173A4FAEA(::Class_2_B8E38BF47138A2E5* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EF3A653417469661_METHOD_1_3956F98173A4FAEA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_48CB2A397A1C56C8(::Class_2_B8E38BF47138A2E5* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EF3A653417469661_METHOD_1_48CB2A397A1C56C8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_370656FAA772EE39(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EF3A653417469661_METHOD_1_370656FAA772EE39_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_2416EE8102DF21CF(::Class_2_B8E38BF47138A2E5* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EF3A653417469661_METHOD_1_2416EE8102DF21CF_OFFSET))(this, a1, a2);
	}

	::System::Void __OnShowRareRewardHintDialog_b__12_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF3A653417469661___ONSHOWRAREREWARDHINTDIALOG_B__12_0_OFFSET))(this);
	}

	::System::Void _Execute_b__13_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF3A653417469661__EXECUTE_B__13_0_OFFSET))(this);
	}
};
