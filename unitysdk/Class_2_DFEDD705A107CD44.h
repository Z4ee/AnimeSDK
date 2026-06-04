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

#define CLASS_2_DFEDD705A107CD44_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xAF46500)
#define CLASS_2_DFEDD705A107CD44_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xAF467C0)
#define CLASS_2_DFEDD705A107CD44_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xAF44DA0)
#define CLASS_2_DFEDD705A107CD44_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xAF44DC0)
#define CLASS_2_DFEDD705A107CD44_METHOD_2_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0xAF44DD0)
#define CLASS_2_DFEDD705A107CD44_METHOD_2_0EAFE72DD9AA7D3A_OFFSET UNITYSDK_OFFSET(0xAF45630)
#define CLASS_2_DFEDD705A107CD44_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xAF44FE0)
#define CLASS_2_DFEDD705A107CD44_METHOD_2_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0xAF45240)
#define CLASS_2_DFEDD705A107CD44_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xAF46B40)
#define CLASS_2_DFEDD705A107CD44_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xAF46AE0)
#define CLASS_2_DFEDD705A107CD44_METHOD_2_5CF73781B7545C72_OFFSET UNITYSDK_OFFSET(0xAF45E10)
#define CLASS_2_DFEDD705A107CD44_METHOD_2_658B76B8CF96D59E_OFFSET UNITYSDK_OFFSET(0xAF45370)
#define CLASS_2_DFEDD705A107CD44_METHOD_2_6A0EBEECA245A27C_OFFSET UNITYSDK_OFFSET(0xAF45700)
#define CLASS_2_DFEDD705A107CD44_METHOD_2_721B9F460AD6053E_OFFSET UNITYSDK_OFFSET(0xAF45290)
#define CLASS_2_DFEDD705A107CD44_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0xAF46470)
#define CLASS_2_DFEDD705A107CD44_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xAF463E0)
#define CLASS_2_DFEDD705A107CD44_METHOD_2_AAD864A9DF964170_1_OFFSET UNITYSDK_OFFSET(0xAF456B0)
#define CLASS_2_DFEDD705A107CD44_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0xAF44F90)
#define CLASS_2_DFEDD705A107CD44_METHOD_2_AB073ECD10D969B0_OFFSET UNITYSDK_OFFSET(0xAF46060)
#define CLASS_2_DFEDD705A107CD44_METHOD_2_CAC975060A1DCEDB_1_OFFSET UNITYSDK_OFFSET(0xAF46180)
#define CLASS_2_DFEDD705A107CD44_METHOD_2_CAC975060A1DCEDB_OFFSET UNITYSDK_OFFSET(0xAF45EC0)
#define CLASS_2_DFEDD705A107CD44_METHOD_2_DF2A78D8DB25ED05_OFFSET UNITYSDK_OFFSET(0xAF450C0)
#define CLASS_2_DFEDD705A107CD44_METHOD_2_EFA0E042661826A2_OFFSET UNITYSDK_OFFSET(0xAF46130)
#define CLASS_2_DFEDD705A107CD44_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xAF46320)
#define CLASS_2_DFEDD705A107CD44_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xAF44DB0)
#define CLASS_2_DFEDD705A107CD44__CTOR_OFFSET UNITYSDK_OFFSET(0xAF46A50)
#define CLASS_2_DFEDD705A107CD44__ONBIND_OFFSET UNITYSDK_OFFSET(0xAF44BD0)
#define CLASS_2_DFEDD705A107CD44___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xAF46BA0)
#define CLASS_2_DFEDD705A107CD44___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xAF46C00)
#define CLASS_2_DFEDD705A107CD44___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xAF46A80)

inline static constexpr unsigned int Class_2_DFEDD705A107CD44_TypeDefinitionIndex = 67456;

class Class_2_DFEDD705A107CD44 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::RPG::GameCore::TurnBasedGameMode* Field_2_1; // 0x60
	::RPG::Client::PrefabLoadMeta* Field_2_2; // 0x68
	::UnityEngine::RectTransform* Field_2_3; // 0x70
	::RPG::Client::LocalizedText* Field_2_4; // 0x78
	::RPG::GameCore::LevelDataComponent* Field_2_5; // 0x80
	::UnityEngine::Animation* Field_2_6; // 0x88
	::System::Collections::Generic::List_1<::Class_2_C52E4901222B45AB*>* Field_2_7; // 0x90
	::UnityEngine::Transform* Field_2_8; // 0x98
	::System::Single Field_2_9; // 0xA0
	::System::Boolean Field_2_10; // 0xA4
	::System::Int32 Field_2_11; // 0xA8
	::System::Int32 _Index_k__BackingField; // 0xAC
	::System::Int32 Field_2_13; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFEDD705A107CD44__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFEDD705A107CD44__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFEDD705A107CD44_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_DFEDD705A107CD44_SET_INDEX_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFEDD705A107CD44_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_0D7638DBC93E5002()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFEDD705A107CD44_METHOD_2_0D7638DBC93E5002_OFFSET))(this);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFEDD705A107CD44_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}

	::System::Void Method_2_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFEDD705A107CD44_METHOD_2_56CE4AFC5339F746_OFFSET))(this);
	}

	::System::Void Method_2_721B9F460AD6053E(::RPG::GameCore::LevelInfiniteWaveProgressChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelInfiniteWaveProgressChange*))((::PBYTE)hIl2Cpp + CLASS_2_DFEDD705A107CD44_METHOD_2_721B9F460AD6053E_OFFSET))(this, a1);
	}

	::System::Void Method_2_AAD864A9DF964170_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFEDD705A107CD44_METHOD_2_AAD864A9DF964170_1_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFEDD705A107CD44_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_6A0EBEECA245A27C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFEDD705A107CD44_METHOD_2_6A0EBEECA245A27C_OFFSET))(this);
	}

	::System::Void Method_2_DF2A78D8DB25ED05()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFEDD705A107CD44_METHOD_2_DF2A78D8DB25ED05_OFFSET))(this);
	}

	::System::Void Method_2_658B76B8CF96D59E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_DFEDD705A107CD44_METHOD_2_658B76B8CF96D59E_OFFSET))(this, a1);
	}

	::System::Void Method_2_0EAFE72DD9AA7D3A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_DFEDD705A107CD44_METHOD_2_0EAFE72DD9AA7D3A_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_EFA0E042661826A2(::RPG::GameCore::MonsterRank a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MonsterRank))((::PBYTE)hIl2Cpp + CLASS_2_DFEDD705A107CD44_METHOD_2_EFA0E042661826A2_OFFSET))(this, a1);
	}

	::RPG::GameCore::MonsterRank Method_2_5CF73781B7545C72(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::MonsterRank(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_DFEDD705A107CD44_METHOD_2_5CF73781B7545C72_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_AB073ECD10D969B0(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_DFEDD705A107CD44_METHOD_2_AB073ECD10D969B0_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_CAC975060A1DCEDB(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_DFEDD705A107CD44_METHOD_2_CAC975060A1DCEDB_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_CAC975060A1DCEDB_1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_DFEDD705A107CD44_METHOD_2_CAC975060A1DCEDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_DFEDD705A107CD44_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_DFEDD705A107CD44_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_DFEDD705A107CD44_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFEDD705A107CD44_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFEDD705A107CD44_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFEDD705A107CD44___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFEDD705A107CD44_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFEDD705A107CD44_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFEDD705A107CD44___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFEDD705A107CD44___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
