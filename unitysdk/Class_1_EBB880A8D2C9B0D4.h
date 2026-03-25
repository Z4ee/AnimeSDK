#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_EAC1BB0F093534A5.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_16783D700FF01CF4;
class Class_1_2EAB25208BF9561B;
class Class_1_4393199F378B6118;
class Class_1_99D526797741C2F2;
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

#define CLASS_1_EBB880A8D2C9B0D4_GET_REQUIRESUBMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x11398BB0)
#define CLASS_1_EBB880A8D2C9B0D4_GET_SUBNAVGRAPHINFO_OFFSET UNITYSDK_OFFSET(0x11398B90)
#define CLASS_1_EBB880A8D2C9B0D4_GET_SURFACELIST_OFFSET UNITYSDK_OFFSET(0x11398B80)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_09A1BD26EB158047_OFFSET UNITYSDK_OFFSET(0x11395EB0)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_0A33F6FE49CC944A_OFFSET UNITYSDK_OFFSET(0x11397F90)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_243BEAA857EE5299_OFFSET UNITYSDK_OFFSET(0x11394A40)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_283DA224BE06DA9F_OFFSET UNITYSDK_OFFSET(0x1138FEC0)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_2D84C0C580E710CA_OFFSET UNITYSDK_OFFSET(0x11398790)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_316098F2824CF764_OFFSET UNITYSDK_OFFSET(0x11397860)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_3254D409AD76C2E2_OFFSET UNITYSDK_OFFSET(0x11398600)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_37641CB56E59A096_OFFSET UNITYSDK_OFFSET(0x113973F0)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_414C8F92528E4746_OFFSET UNITYSDK_OFFSET(0x11390280)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0x11391CA0)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_4DE65AB3A4860CEB_OFFSET UNITYSDK_OFFSET(0x113924C0)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_4FD30F236AB3F0D4_OFFSET UNITYSDK_OFFSET(0x11390F20)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_525C11E1C03A03AA_OFFSET UNITYSDK_OFFSET(0x11396150)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_5427D429B5D2766F_OFFSET UNITYSDK_OFFSET(0x11398BC0)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_55F2BCAC640061D3_OFFSET UNITYSDK_OFFSET(0x11397080)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_5CD57035BDDE5369_OFFSET UNITYSDK_OFFSET(0x113971C0)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_5F2528715070ADC0_OFFSET UNITYSDK_OFFSET(0x11395900)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_602E1CCD3AA8E1F1_OFFSET UNITYSDK_OFFSET(0x113953E0)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_67D262B21B9B459D_OFFSET UNITYSDK_OFFSET(0x11396950)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_7A097E7EF929F289_OFFSET UNITYSDK_OFFSET(0x11391430)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_7B02396350AF3AC1_OFFSET UNITYSDK_OFFSET(0x11395300)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_809094DEBF13B21A_OFFSET UNITYSDK_OFFSET(0x11390D20)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_81D122F3EBFE3B2D_OFFSET UNITYSDK_OFFSET(0x113984E0)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_85B87F15DE7D9577_OFFSET UNITYSDK_OFFSET(0x11396BC0)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_8EB834389429CDAD_OFFSET UNITYSDK_OFFSET(0x11396440)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_94F202012C4866F0_OFFSET UNITYSDK_OFFSET(0x1138FC30)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_956F8BBA61BA4CBA_OFFSET UNITYSDK_OFFSET(0x11397C40)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_95FF180A965BC00B_OFFSET UNITYSDK_OFFSET(0x11398120)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_96087D675A0A6BF2_OFFSET UNITYSDK_OFFSET(0x11398920)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_9B4043903C569F54_OFFSET UNITYSDK_OFFSET(0x11395450)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_9DF520971B8F09EA_OFFSET UNITYSDK_OFFSET(0x11397E70)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_A9F21234A9F13159_OFFSET UNITYSDK_OFFSET(0x113974C0)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_AE80CBC984AADFD5_OFFSET UNITYSDK_OFFSET(0x113926E0)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_BBD36158AE50EC8B_OFFSET UNITYSDK_OFFSET(0x11392680)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_BF07FECBF7CF9E7C_1_OFFSET UNITYSDK_OFFSET(0x11395760)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_BF07FECBF7CF9E7C_OFFSET UNITYSDK_OFFSET(0x113955C0)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_CA99028638214CFF_OFFSET UNITYSDK_OFFSET(0x11394860)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_D1399A66B0D2643C_OFFSET UNITYSDK_OFFSET(0x11394300)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_D29CB62E2602F1AC_OFFSET UNITYSDK_OFFSET(0x11396200)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_D308836DB54415C3_OFFSET UNITYSDK_OFFSET(0x113917B0)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_D826D49B6EAB49B3_OFFSET UNITYSDK_OFFSET(0x11397120)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0x11398B60)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_DA5C74D0B5008ECB_OFFSET UNITYSDK_OFFSET(0x11396AD0)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_DAECDCD3FF53DE14_OFFSET UNITYSDK_OFFSET(0x11397AE0)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_DC76497A3CA272B5_OFFSET UNITYSDK_OFFSET(0x11395B30)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_E41A0A8438B1F519_OFFSET UNITYSDK_OFFSET(0x11398BD0)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_E643356DEDBA29E8_OFFSET UNITYSDK_OFFSET(0x11395D10)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_E68DE488B377F0FA_OFFSET UNITYSDK_OFFSET(0x113942B0)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_EF79C60756C35D5F_OFFSET UNITYSDK_OFFSET(0x11398AA0)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_F4AD6DE35B09EAA8_OFFSET UNITYSDK_OFFSET(0x11394A00)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_F7300E87EC49A206_OFFSET UNITYSDK_OFFSET(0x113915F0)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_F8C816D8A562BDA9_OFFSET UNITYSDK_OFFSET(0x11396520)
#define CLASS_1_EBB880A8D2C9B0D4_METHOD_1_F9C90F9ECA68885E_OFFSET UNITYSDK_OFFSET(0x11390460)
#define CLASS_1_EBB880A8D2C9B0D4_SET_SUBNAVGRAPHINFO_OFFSET UNITYSDK_OFFSET(0x11398BA0)
#define CLASS_1_EBB880A8D2C9B0D4__CCTOR_OFFSET UNITYSDK_OFFSET(0x11398E20)
#define CLASS_1_EBB880A8D2C9B0D4__CTOR_OFFSET UNITYSDK_OFFSET(0x11398BE0)

inline static constexpr unsigned int Class_1_EBB880A8D2C9B0D4_TypeDefinitionIndex = 50508;

class Class_1_EBB880A8D2C9B0D4 : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_14()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_EBB880A8D2C9B0D4_TypeDefinitionIndex)->GetStaticField(0xFD30);
	}
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_5; // 0x10
	::RPG::GameCore::LittleGameLevelConfig* Field_1_6; // 0x18
	::Class_1_2EAB25208BF9561B* _SubNavGraphInfo_k__BackingField; // 0x20
	::System::Collections::Generic::HashSet_1<::System::UInt32>* _RequireSubMissionIDs_k__BackingField; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* Field_1_13; // 0x30
	::RPG::GameCore::LevelLittleGameInfo* Field_1_8; // 0x38
	::RPG::GameCore::FiveDimNavMapConfig* Field_1_12; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_1_4; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_99D526797741C2F2*>* Field_1_3; // 0x50
	::RPG::GameCore::FiveDimLevelSettings* Field_1_7; // 0x58
	::System::Collections::Generic::List_1<::Class_1_99D526797741C2F2*>* _SurfaceList_k__BackingField; // 0x60
	::RPG::GameCore::RuntimeGroupInfo* Field_1_10; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int16>* Field_1_9; // 0x70
	::Struct_2_EAC1BB0F093534A5 Field_1_11; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4__CCTOR_OFFSET))();
	}

	static ::Class_1_EBB880A8D2C9B0D4* Method_1_94F202012C4866F0(::RPG::GameCore::RuntimeGroupInfo* a1, ::RPG::GameCore::LevelLittleGameInfo* a2, ::RPG::GameCore::LittleGameLevelConfig* a3)
	{
		return ((::Class_1_EBB880A8D2C9B0D4*(*)(::RPG::GameCore::RuntimeGroupInfo*, ::RPG::GameCore::LevelLittleGameInfo*, ::RPG::GameCore::LittleGameLevelConfig*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_94F202012C4866F0_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_E68DE488B377F0FA(::RPG::GameCore::LevelFloorBakedInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelFloorBakedInfo*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_E68DE488B377F0FA_OFFSET))(this, a1);
	}

	static ::System::String* Method_1_BBD36158AE50EC8B(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_BBD36158AE50EC8B_OFFSET))(a1);
	}

	::Class_1_99D526797741C2F2* Method_1_CA99028638214CFF(::System::UInt32 a1)
	{
		return ((::Class_1_99D526797741C2F2*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_CA99028638214CFF_OFFSET))(this, a1);
	}

	::RPG::GameCore::FiveDimNavMapConfig* Method_1_F4AD6DE35B09EAA8()
	{
		return ((::RPG::GameCore::FiveDimNavMapConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_F4AD6DE35B09EAA8_OFFSET))(this);
	}

	::System::Boolean Method_1_243BEAA857EE5299(::System::UInt32 a1, ::System::String* a2, ::Struct_2_EAC1BB0F093534A5& a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::String*, ::Struct_2_EAC1BB0F093534A5&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_243BEAA857EE5299_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_7B02396350AF3AC1(::System::UInt32 a1, ::RPG::GameCore::LittleGameNavMapIconConfig*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LittleGameNavMapIconConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_7B02396350AF3AC1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_602E1CCD3AA8E1F1(::RPG::Client::NavMap::IMapDataSource* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_602E1CCD3AA8E1F1_OFFSET))(this, a1);
	}

	::System::Void Method_1_BF07FECBF7CF9E7C(::RPG::Client::NavMap::IMapDataSource* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_BF07FECBF7CF9E7C_OFFSET))(this, a1);
	}

	::System::Void Method_1_BF07FECBF7CF9E7C_1(::RPG::Client::NavMap::IMapDataSource* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_BF07FECBF7CF9E7C_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_9B4043903C569F54(::RPG::Client::NavMap::IMapDataSource* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_9B4043903C569F54_OFFSET))(this, a1);
	}

	::System::Void Method_1_4DE65AB3A4860CEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_4DE65AB3A4860CEB_OFFSET))(this);
	}

	::System::Void Method_1_414C8F92528E4746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_414C8F92528E4746_OFFSET))(this);
	}

	::System::Void Method_1_283DA224BE06DA9F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_283DA224BE06DA9F_OFFSET))(this);
	}

	::System::Boolean Method_1_5F2528715070ADC0(::Class_1_99D526797741C2F2* a1, ::RPG::Client::NavMap::IMapDataSource* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_99D526797741C2F2*, ::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_5F2528715070ADC0_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_DC76497A3CA272B5(::Class_1_99D526797741C2F2* a1, ::RPG::Client::NavMap::IMapDataSource* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_99D526797741C2F2*, ::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_DC76497A3CA272B5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E643356DEDBA29E8(::Class_1_99D526797741C2F2* a1, ::System::Boolean a2, ::RPG::Client::NavMap::IMapDataSource* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_99D526797741C2F2*, ::System::Boolean, ::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_E643356DEDBA29E8_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_525C11E1C03A03AA(::Class_1_99D526797741C2F2* a1, ::System::Boolean a2, ::RPG::Client::NavMap::IMapDataSource* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_99D526797741C2F2*, ::System::Boolean, ::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_525C11E1C03A03AA_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_D29CB62E2602F1AC(::Class_1_99D526797741C2F2* a1, ::RPG::GameCore::FiveDimCustomLoadConfig* a2, ::RPG::Client::NavMap::IMapDataSource* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_99D526797741C2F2*, ::RPG::GameCore::FiveDimCustomLoadConfig*, ::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_D29CB62E2602F1AC_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_09A1BD26EB158047(::System::String* a1, ::RPG::Client::NavMap::IMapDataSource* a2, ::System::Int16& a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::NavMap::IMapDataSource*, ::System::Int16&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_09A1BD26EB158047_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_8EB834389429CDAD(::Class_1_99D526797741C2F2* a1, ::RPG::GameCore::FiveDimCustomLoadConfig* a2, ::RPG::Client::NavMap::IMapDataSource* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_99D526797741C2F2*, ::RPG::GameCore::FiveDimCustomLoadConfig*, ::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_8EB834389429CDAD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F9C90F9ECA68885E(::RPG::GameCore::LittleGameEntityConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_F9C90F9ECA68885E_OFFSET))(this, a1);
	}

	::System::Void Method_1_809094DEBF13B21A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_809094DEBF13B21A_OFFSET))(this);
	}

	::System::Void Method_1_4FD30F236AB3F0D4(::RPG::GameCore::RuntimeGroupInfo* a1, ::RPG::GameCore::LevelLittleGameInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*, ::RPG::GameCore::LevelLittleGameInfo*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_4FD30F236AB3F0D4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7A097E7EF929F289()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_7A097E7EF929F289_OFFSET))(this);
	}

	::System::Void Method_1_F8C816D8A562BDA9(::Class_1_99D526797741C2F2* a1, ::Struct_2_EAC1BB0F093534A5 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_99D526797741C2F2*, ::Struct_2_EAC1BB0F093534A5))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_F8C816D8A562BDA9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F7300E87EC49A206()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_F7300E87EC49A206_OFFSET))(this);
	}

	::System::Void Method_1_67D262B21B9B459D(::Class_1_99D526797741C2F2* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_99D526797741C2F2*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_67D262B21B9B459D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D308836DB54415C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_D308836DB54415C3_OFFSET))(this);
	}

	::System::Void Method_1_489E0B827662C211()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_489E0B827662C211_OFFSET))(this);
	}

	::System::Void Method_1_AE80CBC984AADFD5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_AE80CBC984AADFD5_OFFSET))(this);
	}

	::RPG::GameCore::LevelNavNodeInfo* Method_1_DA5C74D0B5008ECB(::RPG::GameCore::LevelFloorBakedInfo* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::RPG::GameCore::LevelNavNodeInfo*(*)(::PVOID, ::RPG::GameCore::LevelFloorBakedInfo*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_DA5C74D0B5008ECB_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_85B87F15DE7D9577(::RPG::GameCore::LevelNavNodeInfo* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelNavNodeInfo*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_85B87F15DE7D9577_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D1399A66B0D2643C(::RPG::GameCore::LevelFloorBakedInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelFloorBakedInfo*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_D1399A66B0D2643C_OFFSET))(this, a1);
	}

	::RPG::GameCore::LevelAnchorInfo* Method_1_55F2BCAC640061D3(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::LevelAnchorInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_55F2BCAC640061D3_OFFSET))(this, a1);
	}

	::RPG::GameCore::LevelPropInfo* Method_1_D826D49B6EAB49B3(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::LevelPropInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_D826D49B6EAB49B3_OFFSET))(this, a1);
	}

	::Class_1_4393199F378B6118* Method_1_5CD57035BDDE5369(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_4393199F378B6118*>* a1, ::System::UInt32 a2)
	{
		return ((::Class_1_4393199F378B6118*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_4393199F378B6118*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_5CD57035BDDE5369_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_37641CB56E59A096(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_37641CB56E59A096_OFFSET))(this, a1);
	}

	::RPG::GameCore::LevelNavNodeConditionInfos* Method_1_A9F21234A9F13159(::RPG::GameCore::FiveDimCustomLoadConfig* a1, ::RPG::GameCore::FiveDimEntityVarConfig* a2)
	{
		return ((::RPG::GameCore::LevelNavNodeConditionInfos*(*)(::PVOID, ::RPG::GameCore::FiveDimCustomLoadConfig*, ::RPG::GameCore::FiveDimEntityVarConfig*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_A9F21234A9F13159_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::LevelNavNodeConditionInfos* Method_1_316098F2824CF764(::RPG::GameCore::FiveDimPortalConfig* a1, ::RPG::GameCore::FiveDimEntityVarConfig* a2)
	{
		return ((::RPG::GameCore::LevelNavNodeConditionInfos*(*)(::PVOID, ::RPG::GameCore::FiveDimPortalConfig*, ::RPG::GameCore::FiveDimEntityVarConfig*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_316098F2824CF764_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DAECDCD3FF53DE14(::Class_1_99D526797741C2F2* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelNavNodeConditionInfos*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_99D526797741C2F2*, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelNavNodeConditionInfos*>*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_DAECDCD3FF53DE14_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::RPG::GameCore::LevelNavNodeConditionInfos*>* Method_1_956F8BBA61BA4CBA(::System::UInt32 a1)
	{
		return ((::Il2CppArray<::RPG::GameCore::LevelNavNodeConditionInfos*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_956F8BBA61BA4CBA_OFFSET))(this, a1);
	}

	::System::Void Method_1_9DF520971B8F09EA(::Class_1_4393199F378B6118* a1, ::Class_1_99D526797741C2F2* a2, ::RPG::GameCore::FiveDimPortalTarget* a3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_4393199F378B6118*>* a4, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_4393199F378B6118*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4393199F378B6118*, ::Class_1_99D526797741C2F2*, ::RPG::GameCore::FiveDimPortalTarget*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_4393199F378B6118*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_4393199F378B6118*>*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_9DF520971B8F09EA_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::GameCore::LittleGameLevelVarBinding* Method_1_81D122F3EBFE3B2D(::System::String* a1)
	{
		return ((::RPG::GameCore::LittleGameLevelVarBinding*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_81D122F3EBFE3B2D_OFFSET))(this, a1);
	}

	::RPG::GameCore::LittleGameNavConnectInfo* Method_1_0A33F6FE49CC944A(::Class_1_99D526797741C2F2* a1, ::RPG::GameCore::FiveDimPortalTarget* a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_4393199F378B6118*>* a3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_4393199F378B6118*>* a4)
	{
		return ((::RPG::GameCore::LittleGameNavConnectInfo*(*)(::PVOID, ::Class_1_99D526797741C2F2*, ::RPG::GameCore::FiveDimPortalTarget*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_4393199F378B6118*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_4393199F378B6118*>*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_0A33F6FE49CC944A_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::LevelEntityRef* Method_1_3254D409AD76C2E2(::System::String* a1)
	{
		return ((::RPG::GameCore::LevelEntityRef*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_3254D409AD76C2E2_OFFSET))(this, a1);
	}

	::RPG::GameCore::LGameEntityRef* Method_1_2D84C0C580E710CA(::System::String* a1)
	{
		return ((::RPG::GameCore::LGameEntityRef*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_2D84C0C580E710CA_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_96087D675A0A6BF2(::Class_1_99D526797741C2F2* a1, ::System::UInt32& a2, ::System::UInt32& a3, ::System::UInt32& a4, ::System::Boolean& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_99D526797741C2F2*, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_96087D675A0A6BF2_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Class_1_16783D700FF01CF4* Method_1_95FF180A965BC00B(::Class_1_99D526797741C2F2* a1, ::RPG::GameCore::FiveDimPortalTarget* a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_4393199F378B6118*>* a3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_4393199F378B6118*>* a4)
	{
		return ((::Class_1_16783D700FF01CF4*(*)(::PVOID, ::Class_1_99D526797741C2F2*, ::RPG::GameCore::FiveDimPortalTarget*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_4393199F378B6118*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_4393199F378B6118*>*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_95FF180A965BC00B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Single Method_1_EF79C60756C35D5F()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_EF79C60756C35D5F_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_99D526797741C2F2*>* get_SurfaceList()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_99D526797741C2F2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_GET_SURFACELIST_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_METHOD_1_D978819B0A4871A0_OFFSET))(this);
	}

	::Class_1_2EAB25208BF9561B* get_SubNavGraphInfo()
	{
		return ((::Class_1_2EAB25208BF9561B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_GET_SUBNAVGRAPHINFO_OFFSET))(this);
	}

	::System::Void set_SubNavGraphInfo(::Class_1_2EAB25208BF9561B* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2EAB25208BF9561B*))((::PBYTE)hIl2Cpp + CLASS_1_EBB880A8D2C9B0D4_SET_SUBNAVGRAPHINFO_OFFSET))(this, value);
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
