#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
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

#define CLASS_2_51DFF45DE59A87BF_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC28AE30)
#define CLASS_2_51DFF45DE59A87BF_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC28B0F0)
#define CLASS_2_51DFF45DE59A87BF_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xC289620)
#define CLASS_2_51DFF45DE59A87BF_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xC289640)
#define CLASS_2_51DFF45DE59A87BF_METHOD_2_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0xC289680)
#define CLASS_2_51DFF45DE59A87BF_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xC289890)
#define CLASS_2_51DFF45DE59A87BF_METHOD_2_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0xC289AF0)
#define CLASS_2_51DFF45DE59A87BF_METHOD_2_5CF73781B7545C72_OFFSET UNITYSDK_OFFSET(0xC28A6B0)
#define CLASS_2_51DFF45DE59A87BF_METHOD_2_658B76B8CF96D59E_OFFSET UNITYSDK_OFFSET(0xC289C20)
#define CLASS_2_51DFF45DE59A87BF_METHOD_2_6A0EBEECA245A27C_OFFSET UNITYSDK_OFFSET(0xC289FB0)
#define CLASS_2_51DFF45DE59A87BF_METHOD_2_9C6D2B954901D0C7_OFFSET UNITYSDK_OFFSET(0xC289B40)
#define CLASS_2_51DFF45DE59A87BF_METHOD_2_AAD864A9DF964170_1_OFFSET UNITYSDK_OFFSET(0xC289F60)
#define CLASS_2_51DFF45DE59A87BF_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0xC289840)
#define CLASS_2_51DFF45DE59A87BF_METHOD_2_AB073ECD10D969B0_OFFSET UNITYSDK_OFFSET(0xC28A900)
#define CLASS_2_51DFF45DE59A87BF_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0xC28ABC0)
#define CLASS_2_51DFF45DE59A87BF_METHOD_2_CAC975060A1DCEDB_1_OFFSET UNITYSDK_OFFSET(0xC28AA20)
#define CLASS_2_51DFF45DE59A87BF_METHOD_2_CAC975060A1DCEDB_OFFSET UNITYSDK_OFFSET(0xC28A760)
#define CLASS_2_51DFF45DE59A87BF_METHOD_2_DA98A755D87DE119_OFFSET UNITYSDK_OFFSET(0xC289EE0)
#define CLASS_2_51DFF45DE59A87BF_METHOD_2_DF2A78D8DB25ED05_OFFSET UNITYSDK_OFFSET(0xC289970)
#define CLASS_2_51DFF45DE59A87BF_METHOD_2_EFA0E042661826A2_OFFSET UNITYSDK_OFFSET(0xC28A9D0)
#define CLASS_2_51DFF45DE59A87BF_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0xC28AD70)
#define CLASS_2_51DFF45DE59A87BF_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xC28ACB0)
#define CLASS_2_51DFF45DE59A87BF_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xC289630)
#define CLASS_2_51DFF45DE59A87BF__CTOR_OFFSET UNITYSDK_OFFSET(0xC28B380)
#define CLASS_2_51DFF45DE59A87BF__ONBIND_OFFSET UNITYSDK_OFFSET(0xC289450)

inline static constexpr unsigned int Class_2_51DFF45DE59A87BF_TypeDefinitionIndex = 72203;

class Class_2_51DFF45DE59A87BF : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	::UnityEngine::RectTransform* COEJPMFOOHP; // 0x60
	::RPG::GameCore::LevelDataComponent* KEKOPPIHDLJ; // 0x68
	::UnityEngine::Transform* OHILBJNLHNM; // 0x70
	::System::Collections::Generic::List_1<::Class_2_C52E4901222B45AB*>* AGHFEGGHEJI; // 0x78
	::RPG::Client::LocalizedText* FMMNHDOAFKO; // 0x80
	::RPG::Client::PrefabLoadMeta* BFHFJPGOCHN; // 0x88
	::RPG::GameCore::TurnBasedGameMode* GICHGNGMBGD; // 0x90
	::UnityEngine::Animation* PMOJILOJEPE; // 0x98
	::System::Int32 _Index_k__BackingField; // 0xA0
	::System::Single CJEKOPIKOKD; // 0xA4
	::System::Int32 JMBIILLKGDC; // 0xA8
	::System::Boolean ALGPHGKKOCA; // 0xAC
	::System::Int32 BBBAIHDEEMP; // 0xB0

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
