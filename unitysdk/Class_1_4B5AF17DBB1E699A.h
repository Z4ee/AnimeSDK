#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_97041AE90E3B2214;
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::GameCore { class ChenLingFesBuff; }
namespace RPG::GameCore { class ChenLingFesBuffConfig; }
namespace RPG::GameCore { class ChenLingFesGameConfig; }
namespace RPG::GameCore { class ChenLingFesItemAbilityConfig; }
namespace RPG::GameCore { class ChenLingFesLevelAbilityConfig; }
namespace RPG::GameCore { class ChenLingFesLevelConfigRow; }
namespace RPG::GameCore { class ChenLingFesLevelSettings; }
namespace RPG::GameCore { class ChenLingFesRegionConfig; }
namespace RPG::GameCore { class ChenLingFesVCameraConfig; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4B5AF17DBB1E699A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18B8FC50)
#define CLASS_1_4B5AF17DBB1E699A_GET_BUFFCONFIG_OFFSET UNITYSDK_OFFSET(0x18B903F0)
#define CLASS_1_4B5AF17DBB1E699A_GET_CELLCONFIGMAP_OFFSET UNITYSDK_OFFSET(0x18B90370)
#define CLASS_1_4B5AF17DBB1E699A_GET_CHENLINGCONFIGMAP_OFFSET UNITYSDK_OFFSET(0x18B90350)
#define CLASS_1_4B5AF17DBB1E699A_GET_FIELDCONFIG_OFFSET UNITYSDK_OFFSET(0x18B90310)
#define CLASS_1_4B5AF17DBB1E699A_GET_GAMECONFIG_OFFSET UNITYSDK_OFFSET(0x18B90410)
#define CLASS_1_4B5AF17DBB1E699A_GET_ITEMCONFIGMAP_OFFSET UNITYSDK_OFFSET(0x18B90330)
#define CLASS_1_4B5AF17DBB1E699A_GET_ITEMRULEGROUPIDMAP_OFFSET UNITYSDK_OFFSET(0x18B90390)
#define CLASS_1_4B5AF17DBB1E699A_GET_REGIONCONFIG_OFFSET UNITYSDK_OFFSET(0x18B903D0)
#define CLASS_1_4B5AF17DBB1E699A_GET_UNLOCKNORMALCELLPREFABPATH_OFFSET UNITYSDK_OFFSET(0x18B903B0)
#define CLASS_1_4B5AF17DBB1E699A_METHOD_1_0E6A03665498E7FE_1_OFFSET UNITYSDK_OFFSET(0x18B901C0)
#define CLASS_1_4B5AF17DBB1E699A_METHOD_1_0E6A03665498E7FE_OFFSET UNITYSDK_OFFSET(0x18B90070)
#define CLASS_1_4B5AF17DBB1E699A_METHOD_1_1624976974349EA1_OFFSET UNITYSDK_OFFSET(0x18B8FE60)
#define CLASS_1_4B5AF17DBB1E699A_METHOD_1_7BDBE8E7DCCDC6EB_OFFSET UNITYSDK_OFFSET(0x18B8FDC0)
#define CLASS_1_4B5AF17DBB1E699A_METHOD_1_AA041EC2967F998A_OFFSET UNITYSDK_OFFSET(0x18B8FF80)
#define CLASS_1_4B5AF17DBB1E699A_METHOD_1_B13A68870DC37DD0_OFFSET UNITYSDK_OFFSET(0x18B90430)
#define CLASS_1_4B5AF17DBB1E699A_METHOD_1_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0x18B8F850)
#define CLASS_1_4B5AF17DBB1E699A_METHOD_1_C35E27D6493C2262_OFFSET UNITYSDK_OFFSET(0x18B8FE10)
#define CLASS_1_4B5AF17DBB1E699A_METHOD_1_D81AF5D2D64FAA0F_OFFSET UNITYSDK_OFFSET(0x18B90010)
#define CLASS_1_4B5AF17DBB1E699A_METHOD_1_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0x18B8F120)
#define CLASS_1_4B5AF17DBB1E699A_SET_BUFFCONFIG_OFFSET UNITYSDK_OFFSET(0x18B90400)
#define CLASS_1_4B5AF17DBB1E699A_SET_CELLCONFIGMAP_OFFSET UNITYSDK_OFFSET(0x18B90380)
#define CLASS_1_4B5AF17DBB1E699A_SET_CHENLINGCONFIGMAP_OFFSET UNITYSDK_OFFSET(0x18B90360)
#define CLASS_1_4B5AF17DBB1E699A_SET_FIELDCONFIG_OFFSET UNITYSDK_OFFSET(0x18B90320)
#define CLASS_1_4B5AF17DBB1E699A_SET_GAMECONFIG_OFFSET UNITYSDK_OFFSET(0x18B90420)
#define CLASS_1_4B5AF17DBB1E699A_SET_ITEMCONFIGMAP_OFFSET UNITYSDK_OFFSET(0x18B90340)
#define CLASS_1_4B5AF17DBB1E699A_SET_ITEMRULEGROUPIDMAP_OFFSET UNITYSDK_OFFSET(0x18B903A0)
#define CLASS_1_4B5AF17DBB1E699A_SET_REGIONCONFIG_OFFSET UNITYSDK_OFFSET(0x18B903E0)
#define CLASS_1_4B5AF17DBB1E699A_SET_UNLOCKNORMALCELLPREFABPATH_OFFSET UNITYSDK_OFFSET(0x18B903C0)
#define CLASS_1_4B5AF17DBB1E699A__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B90440)
#define CLASS_1_4B5AF17DBB1E699A__CTOR_OFFSET UNITYSDK_OFFSET(0x18B8EF00)

inline static constexpr unsigned int Class_1_4B5AF17DBB1E699A_TypeDefinitionIndex = 73794;

class Class_1_4B5AF17DBB1E699A : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4B5AF17DBB1E699A_TypeDefinitionIndex)->GetStaticField(0x59CF0);
	}
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>* _CellConfigMap_k__BackingField; // 0x10
	::RPG::GameCore::ChenLingFesBuffConfig* _BuffConfig_k__BackingField; // 0x18
	::RPG::GameCore::ChenLingFesLevelConfigRow* Field_1_3; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>* _ItemConfigMap_k__BackingField; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _ItemRuleGroupIDMap_k__BackingField; // 0x30
	::System::String* _UnlockNormalCellPrefabPath_k__BackingField; // 0x38
	::RPG::GameCore::LittleGameLevelConfig* Field_1_7; // 0x40
	::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>* _ChenLingConfigMap_k__BackingField; // 0x48
	::RPG::GameCore::LittleGameLevelConfig* Field_1_9; // 0x50
	::RPG::GameCore::ChenLingFesRegionConfig* _RegionConfig_k__BackingField; // 0x58
	::RPG::GameCore::LittleGameLevelConfig* Field_1_11; // 0x60
	::RPG::GameCore::ChenLingFesBuffConfig* Field_1_12; // 0x68
	::RPG::GameCore::LittleGameEntityConfig* _FieldConfig_k__BackingField; // 0x70
	::Class_3_97041AE90E3B2214* Field_1_14; // 0x78
	::RPG::GameCore::ChenLingFesGameConfig* _GameConfig_k__BackingField; // 0x80

	::System::Void _ctor(::Class_3_97041AE90E3B2214* a1, ::RPG::GameCore::LittleGameLevelConfig* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_97041AE90E3B2214*, ::RPG::GameCore::LittleGameLevelConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4B5AF17DBB1E699A__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4B5AF17DBB1E699A__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B5AF17DBB1E699A_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::ChenLingFesItemAbilityConfig* Method_1_7BDBE8E7DCCDC6EB(::System::String* a1)
	{
		return ((::RPG::GameCore::ChenLingFesItemAbilityConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4B5AF17DBB1E699A_METHOD_1_7BDBE8E7DCCDC6EB_OFFSET))(this, a1);
	}

	::RPG::GameCore::ChenLingFesLevelAbilityConfig* Method_1_C35E27D6493C2262(::System::String* a1)
	{
		return ((::RPG::GameCore::ChenLingFesLevelAbilityConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4B5AF17DBB1E699A_METHOD_1_C35E27D6493C2262_OFFSET))(this, a1);
	}

	::System::Void Method_1_E876C8B6D3B840A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B5AF17DBB1E699A_METHOD_1_E876C8B6D3B840A6_OFFSET))(this);
	}

	::System::Void Method_1_BBA49FAB086F388D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B5AF17DBB1E699A_METHOD_1_BBA49FAB086F388D_OFFSET))(this);
	}

	::System::Boolean Method_1_1624976974349EA1(::System::String* a1, ::RPG::GameCore::ChenLingFesBuff*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::GameCore::ChenLingFesBuff*&))((::PBYTE)hIl2Cpp + CLASS_1_4B5AF17DBB1E699A_METHOD_1_1624976974349EA1_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_AA041EC2967F998A()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B5AF17DBB1E699A_METHOD_1_AA041EC2967F998A_OFFSET))(this);
	}

	::RPG::GameCore::ChenLingFesVCameraConfig* Method_1_0E6A03665498E7FE()
	{
		return ((::RPG::GameCore::ChenLingFesVCameraConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B5AF17DBB1E699A_METHOD_1_0E6A03665498E7FE_OFFSET))(this);
	}

	::RPG::GameCore::ChenLingFesVCameraConfig* Method_1_0E6A03665498E7FE_1()
	{
		return ((::RPG::GameCore::ChenLingFesVCameraConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B5AF17DBB1E699A_METHOD_1_0E6A03665498E7FE_1_OFFSET))(this);
	}

	::RPG::GameCore::LittleGameEntityConfig* get_FieldConfig()
	{
		return ((::RPG::GameCore::LittleGameEntityConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B5AF17DBB1E699A_GET_FIELDCONFIG_OFFSET))(this);
	}

	::System::Void set_FieldConfig(::RPG::GameCore::LittleGameEntityConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_4B5AF17DBB1E699A_SET_FIELDCONFIG_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>* get_ItemConfigMap()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B5AF17DBB1E699A_GET_ITEMCONFIGMAP_OFFSET))(this);
	}

	::System::Void set_ItemConfigMap(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_4B5AF17DBB1E699A_SET_ITEMCONFIGMAP_OFFSET))(this, a1);
	}

	::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>* get_ChenLingConfigMap()
	{
		return ((::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B5AF17DBB1E699A_GET_CHENLINGCONFIGMAP_OFFSET))(this);
	}

	::System::Void set_ChenLingConfigMap(::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_4B5AF17DBB1E699A_SET_CHENLINGCONFIGMAP_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>* get_CellConfigMap()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B5AF17DBB1E699A_GET_CELLCONFIGMAP_OFFSET))(this);
	}

	::System::Void set_CellConfigMap(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_4B5AF17DBB1E699A_SET_CELLCONFIGMAP_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* get_ItemRuleGroupIDMap()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B5AF17DBB1E699A_GET_ITEMRULEGROUPIDMAP_OFFSET))(this);
	}

	::System::Void set_ItemRuleGroupIDMap(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + CLASS_1_4B5AF17DBB1E699A_SET_ITEMRULEGROUPIDMAP_OFFSET))(this, a1);
	}

	::System::String* get_UnlockNormalCellPrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B5AF17DBB1E699A_GET_UNLOCKNORMALCELLPREFABPATH_OFFSET))(this);
	}

	::System::Void set_UnlockNormalCellPrefabPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4B5AF17DBB1E699A_SET_UNLOCKNORMALCELLPREFABPATH_OFFSET))(this, a1);
	}

	::RPG::GameCore::ChenLingFesRegionConfig* get_RegionConfig()
	{
		return ((::RPG::GameCore::ChenLingFesRegionConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B5AF17DBB1E699A_GET_REGIONCONFIG_OFFSET))(this);
	}

	::System::Void set_RegionConfig(::RPG::GameCore::ChenLingFesRegionConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingFesRegionConfig*))((::PBYTE)hIl2Cpp + CLASS_1_4B5AF17DBB1E699A_SET_REGIONCONFIG_OFFSET))(this, a1);
	}

	::RPG::GameCore::ChenLingFesBuffConfig* get_BuffConfig()
	{
		return ((::RPG::GameCore::ChenLingFesBuffConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B5AF17DBB1E699A_GET_BUFFCONFIG_OFFSET))(this);
	}

	::System::Void set_BuffConfig(::RPG::GameCore::ChenLingFesBuffConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingFesBuffConfig*))((::PBYTE)hIl2Cpp + CLASS_1_4B5AF17DBB1E699A_SET_BUFFCONFIG_OFFSET))(this, a1);
	}

	::RPG::GameCore::ChenLingFesGameConfig* get_GameConfig()
	{
		return ((::RPG::GameCore::ChenLingFesGameConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B5AF17DBB1E699A_GET_GAMECONFIG_OFFSET))(this);
	}

	::System::Void set_GameConfig(::RPG::GameCore::ChenLingFesGameConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingFesGameConfig*))((::PBYTE)hIl2Cpp + CLASS_1_4B5AF17DBB1E699A_SET_GAMECONFIG_OFFSET))(this, a1);
	}

	::RPG::GameCore::ChenLingFesLevelConfigRow* Method_1_B13A68870DC37DD0()
	{
		return ((::RPG::GameCore::ChenLingFesLevelConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B5AF17DBB1E699A_METHOD_1_B13A68870DC37DD0_OFFSET))(this);
	}

	::RPG::GameCore::ChenLingFesLevelSettings* Method_1_D81AF5D2D64FAA0F()
	{
		return ((::RPG::GameCore::ChenLingFesLevelSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B5AF17DBB1E699A_METHOD_1_D81AF5D2D64FAA0F_OFFSET))(this);
	}
};
