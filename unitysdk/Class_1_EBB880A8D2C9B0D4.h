#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_EAC1BB0F093534A5.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_16783D700FF01CF4;
class Class_1_4393199F378B6118;
class Class_1_6D7D407F4E59D5BB;
class Class_1_A1EDFD8801F68886;
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::GameCore { class FiveDimCustomLoadConfig; }
namespace RPG::GameCore { class FiveDimEntityVarConfig; }
namespace RPG::GameCore { class FiveDimLevelSettings; }
namespace RPG::GameCore { class FiveDimNavMapConfig; }
namespace RPG::GameCore { class FiveDimPortalConfig; }
namespace RPG::GameCore { class FiveDimPortalTarget; }
namespace RPG::GameCore { class LGameEntityRef; }
namespace RPG::GameCore { class LevelAnchorInfo; }
namespace RPG::GameCore { class LevelEntityRef; }
namespace RPG::GameCore { class LevelFloorBakedInfo; }
namespace RPG::GameCore { class LevelLittleGameInfo; }
namespace RPG::GameCore { class LevelNavNodeConditionInfos; }
namespace RPG::GameCore { class LevelNavNodeInfo; }
namespace RPG::GameCore { class LevelPropInfo; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace RPG::GameCore { class LittleGameLevelVarBinding; }
namespace RPG::GameCore { class LittleGameNavConnectInfo; }
namespace RPG::GameCore { class LittleGameNavMapIconConfig; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EBB880A8D2C9B0D4_GET_REQUIRESUBMISSIONIDS_OFFSET UNITYSDK_OFFSET(0xAFA6E80)
#define CLASS_1_EBB880A8D2C9B0D4_GET_SUBNAVGRAPHINFO_OFFSET UNITYSDK_OFFSET(0xAFA6E60)
#define CLASS_1_EBB880A8D2C9B0D4_GET_SURFACELIST_OFFSET UNITYSDK_OFFSET(0xAFA6E50)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_029507C9854F63E7_OFFSET UNITYSDK_OFFSET(0xAFA31D0)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_09A1BD26EB158047_OFFSET UNITYSDK_OFFSET(0xAFA4060)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_15ECFC1966D216D9_OFFSET UNITYSDK_OFFSET(0xAFA1FB0)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0xAF9FFF0)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_2747314AC091C528_OFFSET UNITYSDK_OFFSET(0xAFA6420)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_28695814746C5E4E_OFFSET UNITYSDK_OFFSET(0xAFA47E0)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_2930745D6F02D733_OFFSET UNITYSDK_OFFSET(0xAFA3DF0)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_297321ACFDDF5650_OFFSET UNITYSDK_OFFSET(0xAFA28B0)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_2AA2AEA4ADAE7DAC_1_OFFSET UNITYSDK_OFFSET(0xAFA33E0)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_2AA2AEA4ADAE7DAC_OFFSET UNITYSDK_OFFSET(0xAFA3240)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_35C22FC4636C6636_OFFSET UNITYSDK_OFFSET(0xAFA51E0)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_37641CB56E59A096_OFFSET UNITYSDK_OFFSET(0xAFA4710)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_3BC8B8F2BB08C1C2_OFFSET UNITYSDK_OFFSET(0xAF9F930)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_3C713D5FB6FF9D5F_OFFSET UNITYSDK_OFFSET(0xAFA5FD0)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_4147F14EBAE37DB9_OFFSET UNITYSDK_OFFSET(0xAF9DCC0)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_414C8F92528E4746_OFFSET UNITYSDK_OFFSET(0xAF9E530)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_4FD30F236AB3F0D4_OFFSET UNITYSDK_OFFSET(0xAF9F240)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_513B28E8F5D79998_OFFSET UNITYSDK_OFFSET(0xAFA3120)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_525C11E1C03A03AA_OFFSET UNITYSDK_OFFSET(0xAFA42F0)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_5427D429B5D2766F_OFFSET UNITYSDK_OFFSET(0xAFA6E90)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_55F2BCAC640061D3_OFFSET UNITYSDK_OFFSET(0xAFA5AC0)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_56E0415ED61DFBD8_OFFSET UNITYSDK_OFFSET(0xAFA2700)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_5CDE1879A5E27BE2_OFFSET UNITYSDK_OFFSET(0xAFA5530)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_5F2528715070ADC0_OFFSET UNITYSDK_OFFSET(0xAFA3820)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_809094DEBF13B21A_OFFSET UNITYSDK_OFFSET(0xAF9F000)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_816DE7054F759A6D_OFFSET UNITYSDK_OFFSET(0xAFA6230)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_81D122F3EBFE3B2D_OFFSET UNITYSDK_OFFSET(0xAFA6880)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_89EF21CA0414B145_OFFSET UNITYSDK_OFFSET(0xAF9E180)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_902E5094ED6E20A2_OFFSET UNITYSDK_OFFSET(0xAF9E700)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_96087D675A0A6BF2_OFFSET UNITYSDK_OFFSET(0xAFA6CB0)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_AE80CBC984AADFD5_OFFSET UNITYSDK_OFFSET(0xAFA0970)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0xAF9F750)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_BB71BF1E162694DE_OFFSET UNITYSDK_OFFSET(0xAFA4EB0)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_BBD36158AE50EC8B_OFFSET UNITYSDK_OFFSET(0xAFA0910)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_C2CB9E57ED704256_OFFSET UNITYSDK_OFFSET(0xAFA45E0)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_C3A97DC040BD7DD3_OFFSET UNITYSDK_OFFSET(0xAFA5C00)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_C3EAACDE46DF8E59_1_OFFSET UNITYSDK_OFFSET(0xAFA36D0)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_C3EAACDE46DF8E59_OFFSET UNITYSDK_OFFSET(0xAFA3580)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_C6F6C6236F015996_OFFSET UNITYSDK_OFFSET(0xAFA6570)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_CE76B71EB4CF1D47_OFFSET UNITYSDK_OFFSET(0xAFA3C30)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_D29CB62E2602F1AC_OFFSET UNITYSDK_OFFSET(0xAFA43A0)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_D308836DB54415C3_OFFSET UNITYSDK_OFFSET(0xAF9FAF0)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_D826D49B6EAB49B3_OFFSET UNITYSDK_OFFSET(0xAFA5B60)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0xAFA6E30)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_DA5C74D0B5008ECB_OFFSET UNITYSDK_OFFSET(0xAFA5440)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_DC76497A3CA272B5_OFFSET UNITYSDK_OFFSET(0xAFA3A50)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_DDC113A5E50536E5_OFFSET UNITYSDK_OFFSET(0xAFA4C40)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_E043C8441683C3E5_OFFSET UNITYSDK_OFFSET(0xAFA6B20)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_E05D8B64DF84735B_OFFSET UNITYSDK_OFFSET(0xAFA5050)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_E41A0A8438B1F519_OFFSET UNITYSDK_OFFSET(0xAFA6EA0)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_E4E4DA7D7BA3197D_OFFSET UNITYSDK_OFFSET(0xAFA6990)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_E824431C22EF9361_OFFSET UNITYSDK_OFFSET(0xAFA0760)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_E837E0D7D3838D2B_OFFSET UNITYSDK_OFFSET(0xAFA2000)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_EF79C60756C35D5F_OFFSET UNITYSDK_OFFSET(0xAFA4DF0)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_F4AD6DE35B09EAA8_OFFSET UNITYSDK_OFFSET(0xAFA2870)
#define CLASS_1_EBB880A8D2C9B0D4_SET_SUBNAVGRAPHINFO_OFFSET UNITYSDK_OFFSET(0xAFA6E70)
#define CLASS_1_EBB880A8D2C9B0D4__CCTOR_OFFSET UNITYSDK_OFFSET(0xAFA6EB0)
#define CLASS_1_EBB880A8D2C9B0D4__CTOR_OFFSET UNITYSDK_OFFSET(0xAF9DF40)

inline static constexpr unsigned int Class_1_EBB880A8D2C9B0D4_TypeDefinitionIndex = 58183;

class Class_1_EBB880A8D2C9B0D4 : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_EBB880A8D2C9B0D4_TypeDefinitionIndex)->GetStaticField(0xC310);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int16>* Field_1_1; // 0x10
	::System::Collections::Generic::HashSet_1<::System::UInt32>* _RequireSubMissionIDs_k__BackingField; // 0x18
	::RPG::GameCore::FiveDimLevelSettings* Field_1_3; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_4; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_1_5; // 0x30
	::System::Collections::Generic::List_1<::Class_1_A1EDFD8801F68886*>* _SurfaceList_k__BackingField; // 0x38
	::RPG::GameCore::LittleGameLevelConfig* Field_1_7; // 0x40
	::RPG::GameCore::RuntimeGroupInfo* Field_1_8; // 0x48
	::RPG::GameCore::LevelLittleGameInfo* Field_1_9; // 0x50
	::Class_1_6D7D407F4E59D5BB* _SubNavGraphInfo_k__BackingField; // 0x58
	::RPG::GameCore::FiveDimNavMapConfig* Field_1_11; // 0x60
	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* Field_1_12; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_A1EDFD8801F68886*>* Field_1_13; // 0x70
	::Struct_2_EAC1BB0F093534A5 Field_1_14; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4__CCTOR_OFFSET))();
	}

	static ::Class_1_EBB880A8D2C9B0D4* Method_1_4147F14EBAE37DB9(::RPG::GameCore::RuntimeGroupInfo* a1, ::RPG::GameCore::LevelLittleGameInfo* a2, ::RPG::GameCore::LittleGameLevelConfig* a3)
	{
		return ((::Class_1_EBB880A8D2C9B0D4*(*)(::RPG::GameCore::RuntimeGroupInfo*, ::RPG::GameCore::LevelLittleGameInfo*, ::RPG::GameCore::LittleGameLevelConfig*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_4147F14EBAE37DB9_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_15ECFC1966D216D9(::RPG::GameCore::LevelFloorBakedInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelFloorBakedInfo*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_15ECFC1966D216D9_OFFSET))(this, a1);
	}

	static ::System::String* Method_1_BBD36158AE50EC8B(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_BBD36158AE50EC8B_OFFSET))(a1);
	}

	::Class_1_A1EDFD8801F68886* Method_1_56E0415ED61DFBD8(::System::UInt32 a1)
	{
		return ((::Class_1_A1EDFD8801F68886*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_56E0415ED61DFBD8_OFFSET))(this, a1);
	}

	::RPG::GameCore::FiveDimNavMapConfig* Method_1_F4AD6DE35B09EAA8()
	{
		return ((::RPG::GameCore::FiveDimNavMapConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_F4AD6DE35B09EAA8_OFFSET))(this);
	}

	::System::Boolean Method_1_297321ACFDDF5650(::System::UInt32 a1, ::System::String* a2, ::Struct_2_EAC1BB0F093534A5& a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::String*, ::Struct_2_EAC1BB0F093534A5&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_297321ACFDDF5650_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_513B28E8F5D79998(::System::UInt32 a1, ::RPG::GameCore::LittleGameNavMapIconConfig*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LittleGameNavMapIconConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_513B28E8F5D79998_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_029507C9854F63E7(::RPG::Client::NavMap::IMapDataSource* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_029507C9854F63E7_OFFSET))(this, a1);
	}

	::System::Void Method_1_C3EAACDE46DF8E59(::RPG::Client::NavMap::IMapDataSource* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_C3EAACDE46DF8E59_OFFSET))(this, a1);
	}

	::System::Void Method_1_C3EAACDE46DF8E59_1(::RPG::Client::NavMap::IMapDataSource* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_C3EAACDE46DF8E59_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_2AA2AEA4ADAE7DAC(::RPG::Client::NavMap::IMapDataSource* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_2AA2AEA4ADAE7DAC_OFFSET))(this, a1);
	}

	::System::Void Method_1_2AA2AEA4ADAE7DAC_1(::RPG::Client::NavMap::IMapDataSource* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_2AA2AEA4ADAE7DAC_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_E824431C22EF9361()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_E824431C22EF9361_OFFSET))(this);
	}

	::System::Void Method_1_414C8F92528E4746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_414C8F92528E4746_OFFSET))(this);
	}

	::System::Void Method_1_89EF21CA0414B145()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_89EF21CA0414B145_OFFSET))(this);
	}

	::System::Boolean Method_1_5F2528715070ADC0(::Class_1_A1EDFD8801F68886* a1, ::RPG::Client::NavMap::IMapDataSource* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A1EDFD8801F68886*, ::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_5F2528715070ADC0_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_DC76497A3CA272B5(::Class_1_A1EDFD8801F68886* a1, ::RPG::Client::NavMap::IMapDataSource* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A1EDFD8801F68886*, ::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_DC76497A3CA272B5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CE76B71EB4CF1D47(::Class_1_A1EDFD8801F68886* a1, ::System::Boolean a2, ::RPG::Client::NavMap::IMapDataSource* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A1EDFD8801F68886*, ::System::Boolean, ::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_CE76B71EB4CF1D47_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_2930745D6F02D733(::Class_1_A1EDFD8801F68886* a1, ::System::Boolean a2, ::RPG::Client::NavMap::IMapDataSource* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A1EDFD8801F68886*, ::System::Boolean, ::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_2930745D6F02D733_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_525C11E1C03A03AA(::Class_1_A1EDFD8801F68886* a1, ::System::Boolean a2, ::RPG::Client::NavMap::IMapDataSource* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A1EDFD8801F68886*, ::System::Boolean, ::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_525C11E1C03A03AA_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_D29CB62E2602F1AC(::Class_1_A1EDFD8801F68886* a1, ::RPG::GameCore::FiveDimCustomLoadConfig* a2, ::RPG::Client::NavMap::IMapDataSource* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A1EDFD8801F68886*, ::RPG::GameCore::FiveDimCustomLoadConfig*, ::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_D29CB62E2602F1AC_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_09A1BD26EB158047(::System::String* a1, ::RPG::Client::NavMap::IMapDataSource* a2, ::System::Int16& a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::NavMap::IMapDataSource*, ::System::Int16&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_09A1BD26EB158047_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_C2CB9E57ED704256(::Class_1_A1EDFD8801F68886* a1, ::RPG::GameCore::FiveDimCustomLoadConfig* a2, ::RPG::Client::NavMap::IMapDataSource* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A1EDFD8801F68886*, ::RPG::GameCore::FiveDimCustomLoadConfig*, ::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_C2CB9E57ED704256_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_902E5094ED6E20A2(::RPG::GameCore::LittleGameEntityConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_902E5094ED6E20A2_OFFSET))(this, a1);
	}

	::System::Void Method_1_809094DEBF13B21A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_809094DEBF13B21A_OFFSET))(this);
	}

	::System::Void Method_1_4FD30F236AB3F0D4(::RPG::GameCore::RuntimeGroupInfo* a1, ::RPG::GameCore::LevelLittleGameInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*, ::RPG::GameCore::LevelLittleGameInfo*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_4FD30F236AB3F0D4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_B43C848B078B3C34_OFFSET))(this);
	}

	::System::Void Method_1_28695814746C5E4E(::Class_1_A1EDFD8801F68886* a1, ::Struct_2_EAC1BB0F093534A5 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A1EDFD8801F68886*, ::Struct_2_EAC1BB0F093534A5))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_28695814746C5E4E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3BC8B8F2BB08C1C2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_3BC8B8F2BB08C1C2_OFFSET))(this);
	}

	::System::Void Method_1_DDC113A5E50536E5(::Class_1_A1EDFD8801F68886* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A1EDFD8801F68886*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_DDC113A5E50536E5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D308836DB54415C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_D308836DB54415C3_OFFSET))(this);
	}

	::System::Void Method_1_2566AD459572DFC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_2566AD459572DFC3_OFFSET))(this);
	}

	::System::Void Method_1_AE80CBC984AADFD5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_AE80CBC984AADFD5_OFFSET))(this);
	}

	::RPG::GameCore::LevelNavNodeInfo* Method_1_DA5C74D0B5008ECB(::RPG::GameCore::LevelFloorBakedInfo* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::RPG::GameCore::LevelNavNodeInfo*(*)(::PVOID, ::RPG::GameCore::LevelFloorBakedInfo*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_DA5C74D0B5008ECB_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_5CDE1879A5E27BE2(::RPG::GameCore::LevelNavNodeInfo* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelNavNodeInfo*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_5CDE1879A5E27BE2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E837E0D7D3838D2B(::RPG::GameCore::LevelFloorBakedInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelFloorBakedInfo*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_E837E0D7D3838D2B_OFFSET))(this, a1);
	}

	::RPG::GameCore::LevelAnchorInfo* Method_1_55F2BCAC640061D3(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::LevelAnchorInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_55F2BCAC640061D3_OFFSET))(this, a1);
	}

	::RPG::GameCore::LevelPropInfo* Method_1_D826D49B6EAB49B3(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::LevelPropInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_D826D49B6EAB49B3_OFFSET))(this, a1);
	}

	::Class_1_4393199F378B6118* Method_1_BB71BF1E162694DE(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_4393199F378B6118*>* a1, ::System::UInt32 a2)
	{
		return ((::Class_1_4393199F378B6118*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_4393199F378B6118*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_BB71BF1E162694DE_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_37641CB56E59A096(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_37641CB56E59A096_OFFSET))(this, a1);
	}

	::RPG::GameCore::LevelNavNodeConditionInfos* Method_1_C3A97DC040BD7DD3(::RPG::GameCore::FiveDimCustomLoadConfig* a1, ::RPG::GameCore::FiveDimEntityVarConfig* a2)
	{
		return ((::RPG::GameCore::LevelNavNodeConditionInfos*(*)(::PVOID, ::RPG::GameCore::FiveDimCustomLoadConfig*, ::RPG::GameCore::FiveDimEntityVarConfig*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_C3A97DC040BD7DD3_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::LevelNavNodeConditionInfos* Method_1_3C713D5FB6FF9D5F(::RPG::GameCore::FiveDimPortalConfig* a1, ::RPG::GameCore::FiveDimEntityVarConfig* a2)
	{
		return ((::RPG::GameCore::LevelNavNodeConditionInfos*(*)(::PVOID, ::RPG::GameCore::FiveDimPortalConfig*, ::RPG::GameCore::FiveDimEntityVarConfig*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_3C713D5FB6FF9D5F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_816DE7054F759A6D(::Class_1_A1EDFD8801F68886* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelNavNodeConditionInfos*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A1EDFD8801F68886*, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelNavNodeConditionInfos*>*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_816DE7054F759A6D_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::RPG::GameCore::LevelNavNodeConditionInfos*>* Method_1_35C22FC4636C6636(::System::UInt32 a1)
	{
		return ((::Il2CppArray<::RPG::GameCore::LevelNavNodeConditionInfos*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_35C22FC4636C6636_OFFSET))(this, a1);
	}

	::System::Void Method_1_E05D8B64DF84735B(::Class_1_4393199F378B6118* a1, ::Class_1_A1EDFD8801F68886* a2, ::RPG::GameCore::FiveDimPortalTarget* a3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_4393199F378B6118*>* a4, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_4393199F378B6118*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4393199F378B6118*, ::Class_1_A1EDFD8801F68886*, ::RPG::GameCore::FiveDimPortalTarget*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_4393199F378B6118*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_4393199F378B6118*>*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_E05D8B64DF84735B_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::GameCore::LittleGameLevelVarBinding* Method_1_81D122F3EBFE3B2D(::System::String* a1)
	{
		return ((::RPG::GameCore::LittleGameLevelVarBinding*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_81D122F3EBFE3B2D_OFFSET))(this, a1);
	}

	::RPG::GameCore::LittleGameNavConnectInfo* Method_1_2747314AC091C528(::Class_1_A1EDFD8801F68886* a1, ::RPG::GameCore::FiveDimPortalTarget* a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_4393199F378B6118*>* a3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_4393199F378B6118*>* a4)
	{
		return ((::RPG::GameCore::LittleGameNavConnectInfo*(*)(::PVOID, ::Class_1_A1EDFD8801F68886*, ::RPG::GameCore::FiveDimPortalTarget*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_4393199F378B6118*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_4393199F378B6118*>*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_2747314AC091C528_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::LevelEntityRef* Method_1_E4E4DA7D7BA3197D(::System::String* a1)
	{
		return ((::RPG::GameCore::LevelEntityRef*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_E4E4DA7D7BA3197D_OFFSET))(this, a1);
	}

	::RPG::GameCore::LGameEntityRef* Method_1_E043C8441683C3E5(::System::String* a1)
	{
		return ((::RPG::GameCore::LGameEntityRef*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_E043C8441683C3E5_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_96087D675A0A6BF2(::Class_1_A1EDFD8801F68886* a1, ::System::UInt32& a2, ::System::UInt32& a3, ::System::UInt32& a4, ::System::Boolean& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A1EDFD8801F68886*, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_96087D675A0A6BF2_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Class_1_16783D700FF01CF4* Method_1_C6F6C6236F015996(::Class_1_A1EDFD8801F68886* a1, ::RPG::GameCore::FiveDimPortalTarget* a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_4393199F378B6118*>* a3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_4393199F378B6118*>* a4)
	{
		return ((::Class_1_16783D700FF01CF4*(*)(::PVOID, ::Class_1_A1EDFD8801F68886*, ::RPG::GameCore::FiveDimPortalTarget*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_4393199F378B6118*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_4393199F378B6118*>*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_C6F6C6236F015996_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Single Method_1_EF79C60756C35D5F()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_EF79C60756C35D5F_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_A1EDFD8801F68886*>* get_SurfaceList()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_A1EDFD8801F68886*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_GET_SURFACELIST_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_D978819B0A4871A0_OFFSET))(this);
	}

	::Class_1_6D7D407F4E59D5BB* get_SubNavGraphInfo()
	{
		return ((::Class_1_6D7D407F4E59D5BB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_GET_SUBNAVGRAPHINFO_OFFSET))(this);
	}

	::System::Void set_SubNavGraphInfo(::Class_1_6D7D407F4E59D5BB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6D7D407F4E59D5BB*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_SET_SUBNAVGRAPHINFO_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt32>* get_RequireSubMissionIDs()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_GET_REQUIRESUBMISSIONIDS_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimLevelSettings* Method_1_5427D429B5D2766F()
	{
		return ((::RPG::GameCore::FiveDimLevelSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_5427D429B5D2766F_OFFSET))(this);
	}

	::RPG::GameCore::LevelLittleGameInfo* Method_1_E41A0A8438B1F519()
	{
		return ((::RPG::GameCore::LevelLittleGameInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_E41A0A8438B1F519_OFFSET))(this);
	}
};
