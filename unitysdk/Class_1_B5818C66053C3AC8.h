#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0273F17990DD7925;
class Class_1_068EAC6B51178745;
class Class_1_20D743894CDF214D_1;
class Class_1_777F514A924455D9;
class Class_1_A0E178FC9445316D;
class Class_1_BB4B99DE4C2501EC_6;
class Class_1_C58549E83E2A95B6;
class Class_1_E30528F4CB67FD3D;
class Class_1_EF452C8E9A5D3122;
class Class_2_D905714C1E15C1C8;
namespace Proto { class EntitySnapshot; }
namespace Proto { class GroupSnapshot; }
namespace Proto { class SceneEntityInfo; }
namespace RPG::Client { class MapAnchorDef; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class MapPlayerDef; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::GameCore { class BattleAreaReferenceInfo; }
namespace RPG::GameCore { class LevelBattleAreaInfo; }
namespace RPG::GameCore { class LevelMonsterInfo; }
namespace RPG::GameCore { class LevelNPCInfo; }
namespace RPG::GameCore { class LevelPathwayInfo; }
namespace RPG::GameCore { class LevelPropInfo; }
namespace RPG::GameCore { class MapPropConditionConfigRow; }
namespace RPG::GameCore { class NamedLevelObjectInfo; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B5818C66053C3AC8_METHOD_1_074387FF74F8B6F7_OFFSET UNITYSDK_OFFSET(0x1700FB30)
#define CLASS_1_B5818C66053C3AC8_METHOD_1_0CA074C22A5FDB07_OFFSET UNITYSDK_OFFSET(0x17F2F3F0)
#define CLASS_1_B5818C66053C3AC8_METHOD_1_10867B69EFBCA83E_1_OFFSET UNITYSDK_OFFSET(0x1700FC70)
#define CLASS_1_B5818C66053C3AC8_METHOD_1_10867B69EFBCA83E_OFFSET UNITYSDK_OFFSET(0x1700FBE0)
#define CLASS_1_B5818C66053C3AC8_METHOD_1_123DFB09BD2C9B9E_OFFSET UNITYSDK_OFFSET(0x17F2FE00)
#define CLASS_1_B5818C66053C3AC8_METHOD_1_19AD8A21662D13E3_OFFSET UNITYSDK_OFFSET(0x17011610)
#define CLASS_1_B5818C66053C3AC8_METHOD_1_1C5BBE805BDD3443_OFFSET UNITYSDK_OFFSET(0x1700F830)
#define CLASS_1_B5818C66053C3AC8_METHOD_1_26D1711D68379752_OFFSET UNITYSDK_OFFSET(0x17F2D820)
#define CLASS_1_B5818C66053C3AC8_METHOD_1_2A8EA7D53E28B096_OFFSET UNITYSDK_OFFSET(0x17F2ADE0)
#define CLASS_1_B5818C66053C3AC8_METHOD_1_31F172C3FE879C3F_OFFSET UNITYSDK_OFFSET(0x17F2D2A0)
#define CLASS_1_B5818C66053C3AC8_METHOD_1_32E236168AEB38DD_OFFSET UNITYSDK_OFFSET(0x1700FDE0)
#define CLASS_1_B5818C66053C3AC8_METHOD_1_37CE836823CD41B7_OFFSET UNITYSDK_OFFSET(0x17F2CDC0)
#define CLASS_1_B5818C66053C3AC8_METHOD_1_3D067C62B2AD6002_OFFSET UNITYSDK_OFFSET(0x17012BE0)
#define CLASS_1_B5818C66053C3AC8_METHOD_1_3DF3376E0D3A8329_OFFSET UNITYSDK_OFFSET(0x17F2F640)
#define CLASS_1_B5818C66053C3AC8_METHOD_1_41EDD8E1739552E2_1_OFFSET UNITYSDK_OFFSET(0x17F2C0A0)
#define CLASS_1_B5818C66053C3AC8_METHOD_1_41EDD8E1739552E2_OFFSET UNITYSDK_OFFSET(0x17F2B350)
#define CLASS_1_B5818C66053C3AC8_METHOD_1_446CA9C1B850DDCE_OFFSET UNITYSDK_OFFSET(0x17F2C520)
#define CLASS_1_B5818C66053C3AC8_METHOD_1_57149A5CE7D5C490_OFFSET UNITYSDK_OFFSET(0x17011DE0)
#define CLASS_1_B5818C66053C3AC8_METHOD_1_5B97DF150A66C843_OFFSET UNITYSDK_OFFSET(0x1700FD00)
#define CLASS_1_B5818C66053C3AC8_METHOD_1_63E0FB99C8DB9902_OFFSET UNITYSDK_OFFSET(0x17010390)
#define CLASS_1_B5818C66053C3AC8_METHOD_1_6C93AB7B5BF2DA5C_OFFSET UNITYSDK_OFFSET(0x17F2E2D0)
#define CLASS_1_B5818C66053C3AC8_METHOD_1_705B6FE7471181BF_OFFSET UNITYSDK_OFFSET(0x1700FEA0)
#define CLASS_1_B5818C66053C3AC8_METHOD_1_7215BAF69C096F97_OFFSET UNITYSDK_OFFSET(0x1700F990)
#define CLASS_1_B5818C66053C3AC8_METHOD_1_721A263C1CC0B6D1_1_OFFSET UNITYSDK_OFFSET(0x17F2BFC0)
#define CLASS_1_B5818C66053C3AC8_METHOD_1_721A263C1CC0B6D1_OFFSET UNITYSDK_OFFSET(0x17F2B270)
#define CLASS_1_B5818C66053C3AC8_METHOD_1_78407BF2C3806964_OFFSET UNITYSDK_OFFSET(0x17F2DB20)
#define CLASS_1_B5818C66053C3AC8_METHOD_1_78C9660B6571DCF1_OFFSET UNITYSDK_OFFSET(0x17F2CB50)
#define CLASS_1_B5818C66053C3AC8_METHOD_1_7E89CC2A41C030D9_1_OFFSET UNITYSDK_OFFSET(0x17F2F710)
#define CLASS_1_B5818C66053C3AC8_METHOD_1_7E89CC2A41C030D9_2_OFFSET UNITYSDK_OFFSET(0x17F2F8E0)
#define CLASS_1_B5818C66053C3AC8_METHOD_1_7E89CC2A41C030D9_OFFSET UNITYSDK_OFFSET(0x17F2DBA0)
#define CLASS_1_B5818C66053C3AC8_METHOD_1_8449F3478A8AFFCA_OFFSET UNITYSDK_OFFSET(0x17012390)
#define CLASS_1_B5818C66053C3AC8_METHOD_1_878BFF1D1D3DC040_OFFSET UNITYSDK_OFFSET(0x17010680)
#define CLASS_1_B5818C66053C3AC8_METHOD_1_8BC5618D003AEF82_OFFSET UNITYSDK_OFFSET(0x17F2AC30)
#define CLASS_1_B5818C66053C3AC8_METHOD_1_96189EDEF38976A6_OFFSET UNITYSDK_OFFSET(0x170107D0)
#define CLASS_1_B5818C66053C3AC8_METHOD_1_99B414C1FB540F4E_OFFSET UNITYSDK_OFFSET(0x17F2C180)
#define CLASS_1_B5818C66053C3AC8_METHOD_1_C956994B1EE5E40B_OFFSET UNITYSDK_OFFSET(0x17F2EB90)
#define CLASS_1_B5818C66053C3AC8_METHOD_1_CB03659FEA979E3B_OFFSET UNITYSDK_OFFSET(0x17010070)
#define CLASS_1_B5818C66053C3AC8_METHOD_1_CB13873CCE37EB69_OFFSET UNITYSDK_OFFSET(0x17F2D2E0)
#define CLASS_1_B5818C66053C3AC8_METHOD_1_D41059BB825399DF_OFFSET UNITYSDK_OFFSET(0x17F2DD70)
#define CLASS_1_B5818C66053C3AC8_METHOD_1_DD154B1F82DC625E_OFFSET UNITYSDK_OFFSET(0x170122F0)
#define CLASS_1_B5818C66053C3AC8_METHOD_1_E6F481C90577DC3F_OFFSET UNITYSDK_OFFSET(0x170118D0)
#define CLASS_1_B5818C66053C3AC8_METHOD_1_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0x17F2FD80)
#define CLASS_1_B5818C66053C3AC8_METHOD_1_EC9F590238D9BC2F_OFFSET UNITYSDK_OFFSET(0x17F2AFB0)
#define CLASS_1_B5818C66053C3AC8_METHOD_1_ECF9F4BA47AEB464_OFFSET UNITYSDK_OFFSET(0x17F2EF30)
#define CLASS_1_B5818C66053C3AC8_METHOD_1_F277173625E36A8C_OFFSET UNITYSDK_OFFSET(0x17F2B430)
#define CLASS_1_B5818C66053C3AC8_METHOD_1_F5522FBA0429020C_OFFSET UNITYSDK_OFFSET(0x17F2BEE0)
#define CLASS_1_B5818C66053C3AC8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17F2FB80)
#define CLASS_1_B5818C66053C3AC8__CTOR_OFFSET UNITYSDK_OFFSET(0x17F2FAB0)

inline static constexpr unsigned int Class_1_B5818C66053C3AC8_TypeDefinitionIndex = 59344;

class Class_1_B5818C66053C3AC8 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x3E8; // 0x0
	::RPG::GameCore::BattleAreaReferenceInfo* Field_1_1; // 0x10
	::RPG::Client::MapDef* Field_1_2; // 0x18
	::System::UInt32 Field_1_3; // 0x20

	::System::Void _ctor(::System::UInt64 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::UInt32 a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B5818C66053C3AC8__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void _ctor_1(::Class_1_BB4B99DE4C2501EC_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_6*))((::PBYTE)hIl2Cpp + CLASS_1_B5818C66053C3AC8__CTOR_1_OFFSET))(this, a1);
	}

	::RPG::Client::MapNpcDef* Method_1_8BC5618D003AEF82(::Class_1_E30528F4CB67FD3D* a1, ::System::UInt32 a2, ::RPG::GameCore::LevelMonsterInfo* a3)
	{
		return ((::RPG::Client::MapNpcDef*(*)(::PVOID, ::Class_1_E30528F4CB67FD3D*, ::System::UInt32, ::RPG::GameCore::LevelMonsterInfo*))((::PBYTE)hIl2Cpp + CLASS_1_B5818C66053C3AC8_METHOD_1_8BC5618D003AEF82_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::MapNpcDef* Method_1_2A8EA7D53E28B096(::Class_1_E30528F4CB67FD3D* a1, ::System::UInt32 a2, ::RPG::GameCore::LevelNPCInfo* a3)
	{
		return ((::RPG::Client::MapNpcDef*(*)(::PVOID, ::Class_1_E30528F4CB67FD3D*, ::System::UInt32, ::RPG::GameCore::LevelNPCInfo*))((::PBYTE)hIl2Cpp + CLASS_1_B5818C66053C3AC8_METHOD_1_2A8EA7D53E28B096_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::MapPropDef* Method_1_EC9F590238D9BC2F(::Class_1_E30528F4CB67FD3D* a1, ::System::UInt32 a2, ::RPG::GameCore::LevelPropInfo* a3)
	{
		return ((::RPG::Client::MapPropDef*(*)(::PVOID, ::Class_1_E30528F4CB67FD3D*, ::System::UInt32, ::RPG::GameCore::LevelPropInfo*))((::PBYTE)hIl2Cpp + CLASS_1_B5818C66053C3AC8_METHOD_1_EC9F590238D9BC2F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_721A263C1CC0B6D1(::System::UInt32 a1, ::RPG::GameCore::LevelNPCInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelNPCInfo*))((::PBYTE)hIl2Cpp + CLASS_1_B5818C66053C3AC8_METHOD_1_721A263C1CC0B6D1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_41EDD8E1739552E2(::System::UInt32 a1, ::RPG::GameCore::LevelPropInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelPropInfo*))((::PBYTE)hIl2Cpp + CLASS_1_B5818C66053C3AC8_METHOD_1_41EDD8E1739552E2_OFFSET))(this, a1, a2);
	}

	::RPG::Client::MapNpcDef* Method_1_F277173625E36A8C(::Proto::SceneEntityInfo* a1)
	{
		return ((::RPG::Client::MapNpcDef*(*)(::PVOID, ::Proto::SceneEntityInfo*))((::PBYTE)hIl2Cpp + CLASS_1_B5818C66053C3AC8_METHOD_1_F277173625E36A8C_OFFSET))(this, a1);
	}

	::System::Void Method_1_F5522FBA0429020C(::System::UInt32 a1, ::RPG::GameCore::LevelMonsterInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelMonsterInfo*))((::PBYTE)hIl2Cpp + CLASS_1_B5818C66053C3AC8_METHOD_1_F5522FBA0429020C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_721A263C1CC0B6D1_1(::System::UInt32 a1, ::RPG::GameCore::LevelNPCInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelNPCInfo*))((::PBYTE)hIl2Cpp + CLASS_1_B5818C66053C3AC8_METHOD_1_721A263C1CC0B6D1_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_41EDD8E1739552E2_1(::System::UInt32 a1, ::RPG::GameCore::LevelPropInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelPropInfo*))((::PBYTE)hIl2Cpp + CLASS_1_B5818C66053C3AC8_METHOD_1_41EDD8E1739552E2_1_OFFSET))(this, a1, a2);
	}

	static ::Proto::SceneEntityInfo* Method_1_99B414C1FB540F4E(::RPG::Client::MapDef* a1, ::Proto::GroupSnapshot* a2, ::Proto::EntitySnapshot* a3)
	{
		return ((::Proto::SceneEntityInfo*(*)(::RPG::Client::MapDef*, ::Proto::GroupSnapshot*, ::Proto::EntitySnapshot*))((::PBYTE)hIl2Cpp + CLASS_1_B5818C66053C3AC8_METHOD_1_99B414C1FB540F4E_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_20D743894CDF214D_1* Method_1_446CA9C1B850DDCE(::Proto::EntitySnapshot* a1, ::RPG::GameCore::RuntimeGroupInfo* a2, ::RPG::GameCore::NamedLevelObjectInfo* a3)
	{
		return ((::Class_1_20D743894CDF214D_1*(*)(::Proto::EntitySnapshot*, ::RPG::GameCore::RuntimeGroupInfo*, ::RPG::GameCore::NamedLevelObjectInfo*))((::PBYTE)hIl2Cpp + CLASS_1_B5818C66053C3AC8_METHOD_1_446CA9C1B850DDCE_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_0273F17990DD7925* Method_1_37CE836823CD41B7(::Class_1_B5818C66053C3AC8* a1, ::Proto::GroupSnapshot* a2)
	{
		return ((::Class_1_0273F17990DD7925*(*)(::Class_1_B5818C66053C3AC8*, ::Proto::GroupSnapshot*))((::PBYTE)hIl2Cpp + CLASS_1_B5818C66053C3AC8_METHOD_1_37CE836823CD41B7_OFFSET))(a1, a2);
	}

	::System::Void Method_1_CB13873CCE37EB69(::Class_1_BB4B99DE4C2501EC_6* a1, ::Class_1_0273F17990DD7925* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_6*, ::Class_1_0273F17990DD7925*))((::PBYTE)hIl2Cpp + CLASS_1_B5818C66053C3AC8_METHOD_1_CB13873CCE37EB69_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D41059BB825399DF(::Class_1_0273F17990DD7925* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0273F17990DD7925*))((::PBYTE)hIl2Cpp + CLASS_1_B5818C66053C3AC8_METHOD_1_D41059BB825399DF_OFFSET))(this, a1);
	}

	::RPG::Client::MapNpcDef* Method_1_ECF9F4BA47AEB464(::Class_1_E30528F4CB67FD3D* a1, ::Proto::SceneEntityInfo* a2)
	{
		return ((::RPG::Client::MapNpcDef*(*)(::PVOID, ::Class_1_E30528F4CB67FD3D*, ::Proto::SceneEntityInfo*))((::PBYTE)hIl2Cpp + CLASS_1_B5818C66053C3AC8_METHOD_1_ECF9F4BA47AEB464_OFFSET))(this, a1, a2);
	}

	::RPG::Client::MapNpcDef* Method_1_C956994B1EE5E40B(::Class_1_E30528F4CB67FD3D* a1, ::Proto::SceneEntityInfo* a2)
	{
		return ((::RPG::Client::MapNpcDef*(*)(::PVOID, ::Class_1_E30528F4CB67FD3D*, ::Proto::SceneEntityInfo*))((::PBYTE)hIl2Cpp + CLASS_1_B5818C66053C3AC8_METHOD_1_C956994B1EE5E40B_OFFSET))(this, a1, a2);
	}

	::RPG::Client::MapPropDef* Method_1_6C93AB7B5BF2DA5C(::Class_1_E30528F4CB67FD3D* a1, ::Proto::SceneEntityInfo* a2, ::Class_1_EF452C8E9A5D3122* a3)
	{
		return ((::RPG::Client::MapPropDef*(*)(::PVOID, ::Class_1_E30528F4CB67FD3D*, ::Proto::SceneEntityInfo*, ::Class_1_EF452C8E9A5D3122*))((::PBYTE)hIl2Cpp + CLASS_1_B5818C66053C3AC8_METHOD_1_6C93AB7B5BF2DA5C_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_D905714C1E15C1C8* Method_1_0CA074C22A5FDB07(::Proto::SceneEntityInfo* a1)
	{
		return ((::Class_2_D905714C1E15C1C8*(*)(::PVOID, ::Proto::SceneEntityInfo*))((::PBYTE)hIl2Cpp + CLASS_1_B5818C66053C3AC8_METHOD_1_0CA074C22A5FDB07_OFFSET))(this, a1);
	}

	::RPG::Client::MapPlayerDef* Method_1_3DF3376E0D3A8329(::Proto::SceneEntityInfo* a1)
	{
		return ((::RPG::Client::MapPlayerDef*(*)(::PVOID, ::Proto::SceneEntityInfo*))((::PBYTE)hIl2Cpp + CLASS_1_B5818C66053C3AC8_METHOD_1_3DF3376E0D3A8329_OFFSET))(this, a1);
	}

	::System::Void Method_1_7E89CC2A41C030D9(::Proto::SceneEntityInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::SceneEntityInfo*))((::PBYTE)hIl2Cpp + CLASS_1_B5818C66053C3AC8_METHOD_1_7E89CC2A41C030D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_7E89CC2A41C030D9_1(::Proto::SceneEntityInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::SceneEntityInfo*))((::PBYTE)hIl2Cpp + CLASS_1_B5818C66053C3AC8_METHOD_1_7E89CC2A41C030D9_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_7E89CC2A41C030D9_2(::Proto::SceneEntityInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::SceneEntityInfo*))((::PBYTE)hIl2Cpp + CLASS_1_B5818C66053C3AC8_METHOD_1_7E89CC2A41C030D9_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_78407BF2C3806964(::Proto::SceneEntityInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::SceneEntityInfo*))((::PBYTE)hIl2Cpp + CLASS_1_B5818C66053C3AC8_METHOD_1_78407BF2C3806964_OFFSET))(this, a1);
	}

	::System::Void Method_1_26D1711D68379752(::Proto::SceneEntityInfo* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::SceneEntityInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B5818C66053C3AC8_METHOD_1_26D1711D68379752_OFFSET))(this, a1, a2);
	}

	::RPG::Client::MapDef* Method_1_31F172C3FE879C3F()
	{
		return ((::RPG::Client::MapDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5818C66053C3AC8_METHOD_1_31F172C3FE879C3F_OFFSET))(this);
	}

	::System::Void Method_1_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5818C66053C3AC8_METHOD_1_EBEE0D0A222A8264_OFFSET))(this);
	}

	::System::Void Method_1_123DFB09BD2C9B9E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B5818C66053C3AC8_METHOD_1_123DFB09BD2C9B9E_OFFSET))(this, a1);
	}

	static ::UnityEngine::Vector3 Method_1_78C9660B6571DCF1(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B5818C66053C3AC8_METHOD_1_78C9660B6571DCF1_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::UnityEngine::Quaternion Method_1_1C5BBE805BDD3443(::UnityEngine::Quaternion a1, ::System::Single a2)
	{
		return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B5818C66053C3AC8_METHOD_1_1C5BBE805BDD3443_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Quaternion Method_1_7215BAF69C096F97(::UnityEngine::Quaternion a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B5818C66053C3AC8_METHOD_1_7215BAF69C096F97_OFFSET))(a1, a2, a3, a4);
	}

	static ::UnityEngine::Vector3 Method_1_074387FF74F8B6F7(::Class_1_20D743894CDF214D_1* a1)
	{
		return ((::UnityEngine::Vector3(*)(::Class_1_20D743894CDF214D_1*))((::PBYTE)hIl2Cpp + CLASS_1_B5818C66053C3AC8_METHOD_1_074387FF74F8B6F7_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_10867B69EFBCA83E(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_B5818C66053C3AC8_METHOD_1_10867B69EFBCA83E_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_10867B69EFBCA83E_1(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_B5818C66053C3AC8_METHOD_1_10867B69EFBCA83E_1_OFFSET))(a1);
	}

	static ::UnityEngine::Quaternion Method_1_5B97DF150A66C843(::Class_1_20D743894CDF214D_1* a1)
	{
		return ((::UnityEngine::Quaternion(*)(::Class_1_20D743894CDF214D_1*))((::PBYTE)hIl2Cpp + CLASS_1_B5818C66053C3AC8_METHOD_1_5B97DF150A66C843_OFFSET))(a1);
	}

	static ::UnityEngine::Quaternion Method_1_32E236168AEB38DD(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_B5818C66053C3AC8_METHOD_1_32E236168AEB38DD_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_705B6FE7471181BF(::UnityEngine::Quaternion a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_B5818C66053C3AC8_METHOD_1_705B6FE7471181BF_OFFSET))(a1);
	}

	static ::System::Void Method_1_CB03659FEA979E3B(::Class_1_068EAC6B51178745* a1, ::Il2CppArray<::System::UInt32>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_1_068EAC6B51178745*, ::Il2CppArray<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B5818C66053C3AC8_METHOD_1_CB03659FEA979E3B_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::List_1<::RPG::GameCore::MapPropConditionConfigRow*>* Method_1_63E0FB99C8DB9902(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::MapPropConditionConfigRow*>*(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_B5818C66053C3AC8_METHOD_1_63E0FB99C8DB9902_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_878BFF1D1D3DC040(::RPG::GameCore::MapPropConditionConfigRow* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::MapPropConditionConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_B5818C66053C3AC8_METHOD_1_878BFF1D1D3DC040_OFFSET))(a1);
	}

	::System::Void Method_1_96189EDEF38976A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5818C66053C3AC8_METHOD_1_96189EDEF38976A6_OFFSET))(this);
	}

	static ::System::Void Method_1_E6F481C90577DC3F(::RPG::GameCore::RuntimeGroupInfo* a1, ::System::Collections::Generic::List_1<::Class_1_777F514A924455D9*>* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::RuntimeGroupInfo*, ::System::Collections::Generic::List_1<::Class_1_777F514A924455D9*>*))((::PBYTE)hIl2Cpp + CLASS_1_B5818C66053C3AC8_METHOD_1_E6F481C90577DC3F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_19AD8A21662D13E3(::Il2CppArray<::RPG::GameCore::LevelBattleAreaInfo*>* a1, ::System::Collections::Generic::List_1<::Class_1_777F514A924455D9*>* a2)
	{
		return ((::System::Void(*)(::Il2CppArray<::RPG::GameCore::LevelBattleAreaInfo*>*, ::System::Collections::Generic::List_1<::Class_1_777F514A924455D9*>*))((::PBYTE)hIl2Cpp + CLASS_1_B5818C66053C3AC8_METHOD_1_19AD8A21662D13E3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_57149A5CE7D5C490(::RPG::GameCore::RuntimeGroupInfo* a1, ::System::Collections::Generic::List_1<::RPG::Client::MapAnchorDef*>* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::RuntimeGroupInfo*, ::System::Collections::Generic::List_1<::RPG::Client::MapAnchorDef*>*))((::PBYTE)hIl2Cpp + CLASS_1_B5818C66053C3AC8_METHOD_1_57149A5CE7D5C490_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DD154B1F82DC625E(::System::String* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_B5818C66053C3AC8_METHOD_1_DD154B1F82DC625E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8449F3478A8AFFCA(::RPG::GameCore::RuntimeGroupInfo* a1, ::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::Class_1_C58549E83E2A95B6*>* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::RuntimeGroupInfo*, ::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::Class_1_C58549E83E2A95B6*>*))((::PBYTE)hIl2Cpp + CLASS_1_B5818C66053C3AC8_METHOD_1_8449F3478A8AFFCA_OFFSET))(a1, a2);
	}

	static ::Class_1_C58549E83E2A95B6* Method_1_3D067C62B2AD6002(::RPG::GameCore::LevelPathwayInfo* a1, ::System::Collections::Generic::SortedList_2<::System::UInt32, ::Class_1_A0E178FC9445316D*>* a2)
	{
		return ((::Class_1_C58549E83E2A95B6*(*)(::RPG::GameCore::LevelPathwayInfo*, ::System::Collections::Generic::SortedList_2<::System::UInt32, ::Class_1_A0E178FC9445316D*>*))((::PBYTE)hIl2Cpp + CLASS_1_B5818C66053C3AC8_METHOD_1_3D067C62B2AD6002_OFFSET))(a1, a2);
	}
};
