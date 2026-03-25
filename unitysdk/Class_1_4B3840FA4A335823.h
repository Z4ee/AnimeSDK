#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_068EAC6B51178745;
class Class_1_14E02E1F6D70E487_1;
class Class_1_3DE734113B1E313B_2;
class Class_1_5F77BB6F5FCE2E0B;
class Class_1_777F514A924455D9;
class Class_1_A9C466B0994F2417;
class Class_1_C58549E83E2A95B6;
class Class_1_EF452C8E9A5D3122;
class Class_1_FA54B6DFA559D20B;
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

#define CLASS_1_4B3840FA4A335823_METHOD_1_074387FF74F8B6F7_OFFSET UNITYSDK_OFFSET(0x10C68010)
#define CLASS_1_4B3840FA4A335823_METHOD_1_0CA074C22A5FDB07_OFFSET UNITYSDK_OFFSET(0x10C68190)
#define CLASS_1_4B3840FA4A335823_METHOD_1_10867B69EFBCA83E_1_OFFSET UNITYSDK_OFFSET(0x10C65B70)
#define CLASS_1_4B3840FA4A335823_METHOD_1_10867B69EFBCA83E_OFFSET UNITYSDK_OFFSET(0x10C69670)
#define CLASS_1_4B3840FA4A335823_METHOD_1_123DFB09BD2C9B9E_OFFSET UNITYSDK_OFFSET(0x10C69610)
#define CLASS_1_4B3840FA4A335823_METHOD_1_130BE9A6F4294C48_OFFSET UNITYSDK_OFFSET(0x10C660D0)
#define CLASS_1_4B3840FA4A335823_METHOD_1_1C5BBE805BDD3443_OFFSET UNITYSDK_OFFSET(0x10C65DA0)
#define CLASS_1_4B3840FA4A335823_METHOD_1_2175029C2F213988_OFFSET UNITYSDK_OFFSET(0x10C63FB0)
#define CLASS_1_4B3840FA4A335823_METHOD_1_2A8EA7D53E28B096_OFFSET UNITYSDK_OFFSET(0x10C63B40)
#define CLASS_1_4B3840FA4A335823_METHOD_1_31F172C3FE879C3F_OFFSET UNITYSDK_OFFSET(0x10C66480)
#define CLASS_1_4B3840FA4A335823_METHOD_1_32E236168AEB38DD_OFFSET UNITYSDK_OFFSET(0x10C69700)
#define CLASS_1_4B3840FA4A335823_METHOD_1_380CFE37751D47CD_OFFSET UNITYSDK_OFFSET(0x10C69E00)
#define CLASS_1_4B3840FA4A335823_METHOD_1_3DF3376E0D3A8329_OFFSET UNITYSDK_OFFSET(0x10C683F0)
#define CLASS_1_4B3840FA4A335823_METHOD_1_3F19B5FC7F82E0CD_OFFSET UNITYSDK_OFFSET(0x10C668D0)
#define CLASS_1_4B3840FA4A335823_METHOD_1_5B97DF150A66C843_OFFSET UNITYSDK_OFFSET(0x10C680B0)
#define CLASS_1_4B3840FA4A335823_METHOD_1_6156DDAC9414D4D4_OFFSET UNITYSDK_OFFSET(0x10C664C0)
#define CLASS_1_4B3840FA4A335823_METHOD_1_62A7CB663006B9AC_OFFSET UNITYSDK_OFFSET(0x10C69B90)
#define CLASS_1_4B3840FA4A335823_METHOD_1_63E0FB99C8DB9902_OFFSET UNITYSDK_OFFSET(0x10C697C0)
#define CLASS_1_4B3840FA4A335823_METHOD_1_705B6FE7471181BF_OFFSET UNITYSDK_OFFSET(0x10C65F00)
#define CLASS_1_4B3840FA4A335823_METHOD_1_7215BAF69C096F97_OFFSET UNITYSDK_OFFSET(0x10C65C00)
#define CLASS_1_4B3840FA4A335823_METHOD_1_7683B4A166B4A2D2_OFFSET UNITYSDK_OFFSET(0x10C67980)
#define CLASS_1_4B3840FA4A335823_METHOD_1_78C9660B6571DCF1_OFFSET UNITYSDK_OFFSET(0x10C65900)
#define CLASS_1_4B3840FA4A335823_METHOD_1_7E89CC2A41C030D9_1_OFFSET UNITYSDK_OFFSET(0x10C684D0)
#define CLASS_1_4B3840FA4A335823_METHOD_1_7E89CC2A41C030D9_2_OFFSET UNITYSDK_OFFSET(0x10C686A0)
#define CLASS_1_4B3840FA4A335823_METHOD_1_7E89CC2A41C030D9_OFFSET UNITYSDK_OFFSET(0x10C66B70)
#define CLASS_1_4B3840FA4A335823_METHOD_1_7EE261D36278BE71_OFFSET UNITYSDK_OFFSET(0x10C652A0)
#define CLASS_1_4B3840FA4A335823_METHOD_1_878BFF1D1D3DC040_OFFSET UNITYSDK_OFFSET(0x10C69A40)
#define CLASS_1_4B3840FA4A335823_METHOD_1_8AC3ED29FD7696AC_OFFSET UNITYSDK_OFFSET(0x10C63D10)
#define CLASS_1_4B3840FA4A335823_METHOD_1_8BC5618D003AEF82_OFFSET UNITYSDK_OFFSET(0x10C63990)
#define CLASS_1_4B3840FA4A335823_METHOD_1_92E41B736054C456_OFFSET UNITYSDK_OFFSET(0x10C67180)
#define CLASS_1_4B3840FA4A335823_METHOD_1_99B414C1FB540F4E_OFFSET UNITYSDK_OFFSET(0x10C64F40)
#define CLASS_1_4B3840FA4A335823_METHOD_1_A5A7E4D8F0A5A87E_OFFSET UNITYSDK_OFFSET(0x10C6A6F0)
#define CLASS_1_4B3840FA4A335823_METHOD_1_B13CF5BAC46EE7D2_OFFSET UNITYSDK_OFFSET(0x10C6A210)
#define CLASS_1_4B3840FA4A335823_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x10C69590)
#define CLASS_1_4B3840FA4A335823_METHOD_1_B776F3A9F40F6DD4_1_OFFSET UNITYSDK_OFFSET(0x10C64E60)
#define CLASS_1_4B3840FA4A335823_METHOD_1_B776F3A9F40F6DD4_OFFSET UNITYSDK_OFFSET(0x10C642C0)
#define CLASS_1_4B3840FA4A335823_METHOD_1_C41AF73950188953_OFFSET UNITYSDK_OFFSET(0x10C64CA0)
#define CLASS_1_4B3840FA4A335823_METHOD_1_CA4C57228B6E0F7F_OFFSET UNITYSDK_OFFSET(0x10C67C50)
#define CLASS_1_4B3840FA4A335823_METHOD_1_D28ADCE6E40CB7F5_OFFSET UNITYSDK_OFFSET(0x10C6AD20)
#define CLASS_1_4B3840FA4A335823_METHOD_1_D3142B8C80CF658C_OFFSET UNITYSDK_OFFSET(0x10C66AF0)
#define CLASS_1_4B3840FA4A335823_METHOD_1_DA37DFE3A5BDA9F4_OFFSET UNITYSDK_OFFSET(0x10C68930)
#define CLASS_1_4B3840FA4A335823_METHOD_1_DD154B1F82DC625E_OFFSET UNITYSDK_OFFSET(0x10C6A650)
#define CLASS_1_4B3840FA4A335823_METHOD_1_E6A464C09590E175_OFFSET UNITYSDK_OFFSET(0x10C66D40)
#define CLASS_1_4B3840FA4A335823_METHOD_1_EBC74FDD7FF5B0C2_1_OFFSET UNITYSDK_OFFSET(0x10C64D80)
#define CLASS_1_4B3840FA4A335823_METHOD_1_EBC74FDD7FF5B0C2_OFFSET UNITYSDK_OFFSET(0x10C641E0)
#define CLASS_1_4B3840FA4A335823_METHOD_1_F277173625E36A8C_OFFSET UNITYSDK_OFFSET(0x10C643A0)
#define CLASS_1_4B3840FA4A335823__CTOR_1_OFFSET UNITYSDK_OFFSET(0x10C694C0)
#define CLASS_1_4B3840FA4A335823__CTOR_OFFSET UNITYSDK_OFFSET(0x10C68870)

inline static constexpr unsigned int Class_1_4B3840FA4A335823_TypeDefinitionIndex = 50429;

class Class_1_4B3840FA4A335823 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_2 = 0x3E8; // 0x0
	::RPG::GameCore::BattleAreaReferenceInfo* Field_1_1; // 0x10
	::RPG::Client::MapDef* Field_1_3; // 0x18
	::System::UInt32 Field_1_0; // 0x20

	::System::Void _ctor(::System::UInt64 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::UInt32 a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4B3840FA4A335823__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void _ctor_1(::Class_1_14E02E1F6D70E487_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_1*))((::PBYTE)hIl2Cpp + CLASS_1_4B3840FA4A335823__CTOR_1_OFFSET))(this, a1);
	}

	::RPG::Client::MapNpcDef* Method_1_8BC5618D003AEF82(::Class_1_A9C466B0994F2417* a1, ::System::UInt32 a2, ::RPG::GameCore::LevelMonsterInfo* a3)
	{
		return ((::RPG::Client::MapNpcDef*(*)(::PVOID, ::Class_1_A9C466B0994F2417*, ::System::UInt32, ::RPG::GameCore::LevelMonsterInfo*))((::PBYTE)hIl2Cpp + CLASS_1_4B3840FA4A335823_METHOD_1_8BC5618D003AEF82_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::MapNpcDef* Method_1_2A8EA7D53E28B096(::Class_1_A9C466B0994F2417* a1, ::System::UInt32 a2, ::RPG::GameCore::LevelNPCInfo* a3)
	{
		return ((::RPG::Client::MapNpcDef*(*)(::PVOID, ::Class_1_A9C466B0994F2417*, ::System::UInt32, ::RPG::GameCore::LevelNPCInfo*))((::PBYTE)hIl2Cpp + CLASS_1_4B3840FA4A335823_METHOD_1_2A8EA7D53E28B096_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::MapPropDef* Method_1_2175029C2F213988(::Class_1_A9C466B0994F2417* a1, ::System::UInt32 a2, ::RPG::GameCore::LevelPropInfo* a3)
	{
		return ((::RPG::Client::MapPropDef*(*)(::PVOID, ::Class_1_A9C466B0994F2417*, ::System::UInt32, ::RPG::GameCore::LevelPropInfo*))((::PBYTE)hIl2Cpp + CLASS_1_4B3840FA4A335823_METHOD_1_2175029C2F213988_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_EBC74FDD7FF5B0C2(::System::UInt32 a1, ::RPG::GameCore::LevelNPCInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelNPCInfo*))((::PBYTE)hIl2Cpp + CLASS_1_4B3840FA4A335823_METHOD_1_EBC74FDD7FF5B0C2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B776F3A9F40F6DD4(::System::UInt32 a1, ::RPG::GameCore::LevelPropInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelPropInfo*))((::PBYTE)hIl2Cpp + CLASS_1_4B3840FA4A335823_METHOD_1_B776F3A9F40F6DD4_OFFSET))(this, a1, a2);
	}

	::RPG::Client::MapNpcDef* Method_1_F277173625E36A8C(::Proto::SceneEntityInfo* a1)
	{
		return ((::RPG::Client::MapNpcDef*(*)(::PVOID, ::Proto::SceneEntityInfo*))((::PBYTE)hIl2Cpp + CLASS_1_4B3840FA4A335823_METHOD_1_F277173625E36A8C_OFFSET))(this, a1);
	}

	::System::Void Method_1_C41AF73950188953(::System::UInt32 a1, ::RPG::GameCore::LevelMonsterInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelMonsterInfo*))((::PBYTE)hIl2Cpp + CLASS_1_4B3840FA4A335823_METHOD_1_C41AF73950188953_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EBC74FDD7FF5B0C2_1(::System::UInt32 a1, ::RPG::GameCore::LevelNPCInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelNPCInfo*))((::PBYTE)hIl2Cpp + CLASS_1_4B3840FA4A335823_METHOD_1_EBC74FDD7FF5B0C2_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B776F3A9F40F6DD4_1(::System::UInt32 a1, ::RPG::GameCore::LevelPropInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelPropInfo*))((::PBYTE)hIl2Cpp + CLASS_1_4B3840FA4A335823_METHOD_1_B776F3A9F40F6DD4_1_OFFSET))(this, a1, a2);
	}

	static ::Proto::SceneEntityInfo* Method_1_99B414C1FB540F4E(::RPG::Client::MapDef* a1, ::Proto::GroupSnapshot* a2, ::Proto::EntitySnapshot* a3)
	{
		return ((::Proto::SceneEntityInfo*(*)(::RPG::Client::MapDef*, ::Proto::GroupSnapshot*, ::Proto::EntitySnapshot*))((::PBYTE)hIl2Cpp + CLASS_1_4B3840FA4A335823_METHOD_1_99B414C1FB540F4E_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_3DE734113B1E313B_2* Method_1_7EE261D36278BE71(::Proto::EntitySnapshot* a1, ::RPG::GameCore::RuntimeGroupInfo* a2, ::RPG::GameCore::NamedLevelObjectInfo* a3)
	{
		return ((::Class_1_3DE734113B1E313B_2*(*)(::Proto::EntitySnapshot*, ::RPG::GameCore::RuntimeGroupInfo*, ::RPG::GameCore::NamedLevelObjectInfo*))((::PBYTE)hIl2Cpp + CLASS_1_4B3840FA4A335823_METHOD_1_7EE261D36278BE71_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_FA54B6DFA559D20B* Method_1_130BE9A6F4294C48(::Class_1_4B3840FA4A335823* a1, ::Proto::GroupSnapshot* a2)
	{
		return ((::Class_1_FA54B6DFA559D20B*(*)(::Class_1_4B3840FA4A335823*, ::Proto::GroupSnapshot*))((::PBYTE)hIl2Cpp + CLASS_1_4B3840FA4A335823_METHOD_1_130BE9A6F4294C48_OFFSET))(a1, a2);
	}

	::System::Void Method_1_6156DDAC9414D4D4(::Class_1_14E02E1F6D70E487_1* a1, ::Class_1_FA54B6DFA559D20B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_1*, ::Class_1_FA54B6DFA559D20B*))((::PBYTE)hIl2Cpp + CLASS_1_4B3840FA4A335823_METHOD_1_6156DDAC9414D4D4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E6A464C09590E175(::Class_1_FA54B6DFA559D20B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA54B6DFA559D20B*))((::PBYTE)hIl2Cpp + CLASS_1_4B3840FA4A335823_METHOD_1_E6A464C09590E175_OFFSET))(this, a1);
	}

	::RPG::Client::MapNpcDef* Method_1_CA4C57228B6E0F7F(::Class_1_A9C466B0994F2417* a1, ::Proto::SceneEntityInfo* a2)
	{
		return ((::RPG::Client::MapNpcDef*(*)(::PVOID, ::Class_1_A9C466B0994F2417*, ::Proto::SceneEntityInfo*))((::PBYTE)hIl2Cpp + CLASS_1_4B3840FA4A335823_METHOD_1_CA4C57228B6E0F7F_OFFSET))(this, a1, a2);
	}

	::RPG::Client::MapNpcDef* Method_1_7683B4A166B4A2D2(::Class_1_A9C466B0994F2417* a1, ::Proto::SceneEntityInfo* a2)
	{
		return ((::RPG::Client::MapNpcDef*(*)(::PVOID, ::Class_1_A9C466B0994F2417*, ::Proto::SceneEntityInfo*))((::PBYTE)hIl2Cpp + CLASS_1_4B3840FA4A335823_METHOD_1_7683B4A166B4A2D2_OFFSET))(this, a1, a2);
	}

	::RPG::Client::MapPropDef* Method_1_92E41B736054C456(::Class_1_A9C466B0994F2417* a1, ::Proto::SceneEntityInfo* a2, ::Class_1_EF452C8E9A5D3122* a3)
	{
		return ((::RPG::Client::MapPropDef*(*)(::PVOID, ::Class_1_A9C466B0994F2417*, ::Proto::SceneEntityInfo*, ::Class_1_EF452C8E9A5D3122*))((::PBYTE)hIl2Cpp + CLASS_1_4B3840FA4A335823_METHOD_1_92E41B736054C456_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_D905714C1E15C1C8* Method_1_0CA074C22A5FDB07(::Proto::SceneEntityInfo* a1)
	{
		return ((::Class_2_D905714C1E15C1C8*(*)(::PVOID, ::Proto::SceneEntityInfo*))((::PBYTE)hIl2Cpp + CLASS_1_4B3840FA4A335823_METHOD_1_0CA074C22A5FDB07_OFFSET))(this, a1);
	}

	::RPG::Client::MapPlayerDef* Method_1_3DF3376E0D3A8329(::Proto::SceneEntityInfo* a1)
	{
		return ((::RPG::Client::MapPlayerDef*(*)(::PVOID, ::Proto::SceneEntityInfo*))((::PBYTE)hIl2Cpp + CLASS_1_4B3840FA4A335823_METHOD_1_3DF3376E0D3A8329_OFFSET))(this, a1);
	}

	::System::Void Method_1_7E89CC2A41C030D9(::Proto::SceneEntityInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::SceneEntityInfo*))((::PBYTE)hIl2Cpp + CLASS_1_4B3840FA4A335823_METHOD_1_7E89CC2A41C030D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_7E89CC2A41C030D9_1(::Proto::SceneEntityInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::SceneEntityInfo*))((::PBYTE)hIl2Cpp + CLASS_1_4B3840FA4A335823_METHOD_1_7E89CC2A41C030D9_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_7E89CC2A41C030D9_2(::Proto::SceneEntityInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::SceneEntityInfo*))((::PBYTE)hIl2Cpp + CLASS_1_4B3840FA4A335823_METHOD_1_7E89CC2A41C030D9_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_D3142B8C80CF658C(::Proto::SceneEntityInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::SceneEntityInfo*))((::PBYTE)hIl2Cpp + CLASS_1_4B3840FA4A335823_METHOD_1_D3142B8C80CF658C_OFFSET))(this, a1);
	}

	::System::Void Method_1_3F19B5FC7F82E0CD(::Proto::SceneEntityInfo* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::SceneEntityInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4B3840FA4A335823_METHOD_1_3F19B5FC7F82E0CD_OFFSET))(this, a1, a2);
	}

	::RPG::Client::MapDef* Method_1_31F172C3FE879C3F()
	{
		return ((::RPG::Client::MapDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B3840FA4A335823_METHOD_1_31F172C3FE879C3F_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B3840FA4A335823_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_123DFB09BD2C9B9E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4B3840FA4A335823_METHOD_1_123DFB09BD2C9B9E_OFFSET))(this, a1);
	}

	static ::UnityEngine::Vector3 Method_1_78C9660B6571DCF1(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4B3840FA4A335823_METHOD_1_78C9660B6571DCF1_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::UnityEngine::Quaternion Method_1_1C5BBE805BDD3443(::UnityEngine::Quaternion a1, ::System::Single a2)
	{
		return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4B3840FA4A335823_METHOD_1_1C5BBE805BDD3443_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Quaternion Method_1_7215BAF69C096F97(::UnityEngine::Quaternion a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4B3840FA4A335823_METHOD_1_7215BAF69C096F97_OFFSET))(a1, a2, a3, a4);
	}

	static ::UnityEngine::Vector3 Method_1_074387FF74F8B6F7(::Class_1_3DE734113B1E313B_2* a1)
	{
		return ((::UnityEngine::Vector3(*)(::Class_1_3DE734113B1E313B_2*))((::PBYTE)hIl2Cpp + CLASS_1_4B3840FA4A335823_METHOD_1_074387FF74F8B6F7_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_10867B69EFBCA83E(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_4B3840FA4A335823_METHOD_1_10867B69EFBCA83E_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_10867B69EFBCA83E_1(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_4B3840FA4A335823_METHOD_1_10867B69EFBCA83E_1_OFFSET))(a1);
	}

	static ::UnityEngine::Quaternion Method_1_5B97DF150A66C843(::Class_1_3DE734113B1E313B_2* a1)
	{
		return ((::UnityEngine::Quaternion(*)(::Class_1_3DE734113B1E313B_2*))((::PBYTE)hIl2Cpp + CLASS_1_4B3840FA4A335823_METHOD_1_5B97DF150A66C843_OFFSET))(a1);
	}

	static ::UnityEngine::Quaternion Method_1_32E236168AEB38DD(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_4B3840FA4A335823_METHOD_1_32E236168AEB38DD_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_705B6FE7471181BF(::UnityEngine::Quaternion a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_4B3840FA4A335823_METHOD_1_705B6FE7471181BF_OFFSET))(a1);
	}

	static ::System::Void Method_1_8AC3ED29FD7696AC(::Class_1_068EAC6B51178745* a1, ::Il2CppArray<::System::UInt32>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_1_068EAC6B51178745*, ::Il2CppArray<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4B3840FA4A335823_METHOD_1_8AC3ED29FD7696AC_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::List_1<::RPG::GameCore::MapPropConditionConfigRow*>* Method_1_63E0FB99C8DB9902(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::MapPropConditionConfigRow*>*(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_4B3840FA4A335823_METHOD_1_63E0FB99C8DB9902_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_878BFF1D1D3DC040(::RPG::GameCore::MapPropConditionConfigRow* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::MapPropConditionConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_4B3840FA4A335823_METHOD_1_878BFF1D1D3DC040_OFFSET))(a1);
	}

	::System::Void Method_1_DA37DFE3A5BDA9F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B3840FA4A335823_METHOD_1_DA37DFE3A5BDA9F4_OFFSET))(this);
	}

	static ::System::Void Method_1_380CFE37751D47CD(::RPG::GameCore::RuntimeGroupInfo* a1, ::System::Collections::Generic::List_1<::Class_1_777F514A924455D9*>* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::RuntimeGroupInfo*, ::System::Collections::Generic::List_1<::Class_1_777F514A924455D9*>*))((::PBYTE)hIl2Cpp + CLASS_1_4B3840FA4A335823_METHOD_1_380CFE37751D47CD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_62A7CB663006B9AC(::Il2CppArray<::RPG::GameCore::LevelBattleAreaInfo*>* a1, ::System::Collections::Generic::List_1<::Class_1_777F514A924455D9*>* a2)
	{
		return ((::System::Void(*)(::Il2CppArray<::RPG::GameCore::LevelBattleAreaInfo*>*, ::System::Collections::Generic::List_1<::Class_1_777F514A924455D9*>*))((::PBYTE)hIl2Cpp + CLASS_1_4B3840FA4A335823_METHOD_1_62A7CB663006B9AC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B13CF5BAC46EE7D2(::RPG::GameCore::RuntimeGroupInfo* a1, ::System::Collections::Generic::List_1<::RPG::Client::MapAnchorDef*>* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::RuntimeGroupInfo*, ::System::Collections::Generic::List_1<::RPG::Client::MapAnchorDef*>*))((::PBYTE)hIl2Cpp + CLASS_1_4B3840FA4A335823_METHOD_1_B13CF5BAC46EE7D2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DD154B1F82DC625E(::System::String* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_4B3840FA4A335823_METHOD_1_DD154B1F82DC625E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A5A7E4D8F0A5A87E(::RPG::GameCore::RuntimeGroupInfo* a1, ::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::Class_1_C58549E83E2A95B6*>* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::RuntimeGroupInfo*, ::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::Class_1_C58549E83E2A95B6*>*))((::PBYTE)hIl2Cpp + CLASS_1_4B3840FA4A335823_METHOD_1_A5A7E4D8F0A5A87E_OFFSET))(a1, a2);
	}

	static ::Class_1_C58549E83E2A95B6* Method_1_D28ADCE6E40CB7F5(::RPG::GameCore::LevelPathwayInfo* a1, ::System::Collections::Generic::SortedList_2<::System::UInt32, ::Class_1_5F77BB6F5FCE2E0B*>* a2)
	{
		return ((::Class_1_C58549E83E2A95B6*(*)(::RPG::GameCore::LevelPathwayInfo*, ::System::Collections::Generic::SortedList_2<::System::UInt32, ::Class_1_5F77BB6F5FCE2E0B*>*))((::PBYTE)hIl2Cpp + CLASS_1_4B3840FA4A335823_METHOD_1_D28ADCE6E40CB7F5_OFFSET))(a1, a2);
	}
};
