#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/MonsterRank.h"

class Class_2_C52E4901222B45AB;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class LevelDataComponent; }
namespace RPG::GameCore { class LevelInfiniteWaveProgressChange; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_51DFF45DE59A87BF_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x16471CA0)
#define CLASS_2_51DFF45DE59A87BF_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x16471F60)
#define CLASS_2_51DFF45DE59A87BF_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x16470490)
#define CLASS_2_51DFF45DE59A87BF_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x164704B0)
#define CLASS_2_51DFF45DE59A87BF_METHOD_2_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0x164704F0)
#define CLASS_2_51DFF45DE59A87BF_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x16470700)
#define CLASS_2_51DFF45DE59A87BF_METHOD_2_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x16470960)
#define CLASS_2_51DFF45DE59A87BF_METHOD_2_5CF73781B7545C72_OFFSET UNITYSDK_OFFSET(0x16471510)
#define CLASS_2_51DFF45DE59A87BF_METHOD_2_658B76B8CF96D59E_OFFSET UNITYSDK_OFFSET(0x16470A80)
#define CLASS_2_51DFF45DE59A87BF_METHOD_2_6A0EBEECA245A27C_OFFSET UNITYSDK_OFFSET(0x16470E10)
#define CLASS_2_51DFF45DE59A87BF_METHOD_2_9C6D2B954901D0C7_OFFSET UNITYSDK_OFFSET(0x164709B0)
#define CLASS_2_51DFF45DE59A87BF_METHOD_2_AAD864A9DF964170_1_OFFSET UNITYSDK_OFFSET(0x16470DC0)
#define CLASS_2_51DFF45DE59A87BF_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x164706B0)
#define CLASS_2_51DFF45DE59A87BF_METHOD_2_AB073ECD10D969B0_OFFSET UNITYSDK_OFFSET(0x16471760)
#define CLASS_2_51DFF45DE59A87BF_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x16471A30)
#define CLASS_2_51DFF45DE59A87BF_METHOD_2_CAC975060A1DCEDB_1_OFFSET UNITYSDK_OFFSET(0x16471890)
#define CLASS_2_51DFF45DE59A87BF_METHOD_2_CAC975060A1DCEDB_OFFSET UNITYSDK_OFFSET(0x164715C0)
#define CLASS_2_51DFF45DE59A87BF_METHOD_2_DA98A755D87DE119_OFFSET UNITYSDK_OFFSET(0x16470D40)
#define CLASS_2_51DFF45DE59A87BF_METHOD_2_DF2A78D8DB25ED05_OFFSET UNITYSDK_OFFSET(0x164707E0)
#define CLASS_2_51DFF45DE59A87BF_METHOD_2_EFA0E042661826A2_OFFSET UNITYSDK_OFFSET(0x16471840)
#define CLASS_2_51DFF45DE59A87BF_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x16471BE0)
#define CLASS_2_51DFF45DE59A87BF_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x16471B20)
#define CLASS_2_51DFF45DE59A87BF_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x164704A0)
#define CLASS_2_51DFF45DE59A87BF__CTOR_OFFSET UNITYSDK_OFFSET(0x164721E0)
#define CLASS_2_51DFF45DE59A87BF__ONBIND_OFFSET UNITYSDK_OFFSET(0x164702C0)

inline static constexpr unsigned int Class_2_51DFF45DE59A87BF_TypeDefinitionIndex = 68930;

class Class_2_51DFF45DE59A87BF : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::System::Collections::Generic::List_1<::Class_2_C52E4901222B45AB*>* Field_2_1; // 0x60
	::UnityEngine::Transform* Field_2_2; // 0x68
	::RPG::GameCore::TurnBasedGameMode* Field_2_3; // 0x70
	::RPG::Client::LocalizedText* Field_2_4; // 0x78
	::UnityEngine::RectTransform* Field_2_5; // 0x80
	::RPG::Client::PrefabLoadMeta* Field_2_6; // 0x88
	::RPG::GameCore::LevelDataComponent* Field_2_7; // 0x90
	::UnityEngine::Animation* Field_2_8; // 0x98
	::System::Int32 _Index_k__BackingField; // 0xA0
	::System::Single Field_2_10; // 0xA4
	::System::Int32 Field_2_11; // 0xA8
	::System::Boolean Field_2_12; // 0xAC
	::System::Int32 Field_2_13; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51DFF45DE59A87BF__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51DFF45DE59A87BF__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51DFF45DE59A87BF_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_51DFF45DE59A87BF_SET_INDEX_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51DFF45DE59A87BF_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_0D7638DBC93E5002()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51DFF45DE59A87BF_METHOD_2_0D7638DBC93E5002_OFFSET))(this);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51DFF45DE59A87BF_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}

	::System::Void Method_2_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51DFF45DE59A87BF_METHOD_2_56CE4AFC5339F746_OFFSET))(this);
	}

	::System::Void Method_2_9C6D2B954901D0C7(::RPG::GameCore::LevelInfiniteWaveProgressChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelInfiniteWaveProgressChange*))((::PBYTE)hIl2Cpp + CLASS_2_51DFF45DE59A87BF_METHOD_2_9C6D2B954901D0C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_AAD864A9DF964170_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51DFF45DE59A87BF_METHOD_2_AAD864A9DF964170_1_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51DFF45DE59A87BF_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_6A0EBEECA245A27C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51DFF45DE59A87BF_METHOD_2_6A0EBEECA245A27C_OFFSET))(this);
	}

	::System::Void Method_2_DF2A78D8DB25ED05()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51DFF45DE59A87BF_METHOD_2_DF2A78D8DB25ED05_OFFSET))(this);
	}

	::System::Void Method_2_658B76B8CF96D59E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_51DFF45DE59A87BF_METHOD_2_658B76B8CF96D59E_OFFSET))(this, a1);
	}

	::System::Void Method_2_DA98A755D87DE119(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_51DFF45DE59A87BF_METHOD_2_DA98A755D87DE119_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_EFA0E042661826A2(::RPG::GameCore::MonsterRank a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MonsterRank))((::PBYTE)hIl2Cpp + CLASS_2_51DFF45DE59A87BF_METHOD_2_EFA0E042661826A2_OFFSET))(this, a1);
	}

	::RPG::GameCore::MonsterRank Method_2_5CF73781B7545C72(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::MonsterRank(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_51DFF45DE59A87BF_METHOD_2_5CF73781B7545C72_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_AB073ECD10D969B0(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_51DFF45DE59A87BF_METHOD_2_AB073ECD10D969B0_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_CAC975060A1DCEDB(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_51DFF45DE59A87BF_METHOD_2_CAC975060A1DCEDB_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_CAC975060A1DCEDB_1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_51DFF45DE59A87BF_METHOD_2_CAC975060A1DCEDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_51DFF45DE59A87BF_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_51DFF45DE59A87BF_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_51DFF45DE59A87BF_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51DFF45DE59A87BF_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51DFF45DE59A87BF_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
