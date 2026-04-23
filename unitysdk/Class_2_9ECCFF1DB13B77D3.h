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

#define CLASS_2_9ECCFF1DB13B77D3_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x123DFDE0)
#define CLASS_2_9ECCFF1DB13B77D3_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x123E0050)
#define CLASS_2_9ECCFF1DB13B77D3_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x123DE800)
#define CLASS_2_9ECCFF1DB13B77D3_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x123DE820)
#define CLASS_2_9ECCFF1DB13B77D3_METHOD_2_0EAFE72DD9AA7D3A_OFFSET UNITYSDK_OFFSET(0x123DF070)
#define CLASS_2_9ECCFF1DB13B77D3_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x123DEA40)
#define CLASS_2_9ECCFF1DB13B77D3_METHOD_2_1BC949E3966093D2_1_OFFSET UNITYSDK_OFFSET(0x123DFA40)
#define CLASS_2_9ECCFF1DB13B77D3_METHOD_2_1BC949E3966093D2_OFFSET UNITYSDK_OFFSET(0x123DF7B0)
#define CLASS_2_9ECCFF1DB13B77D3_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x123DE830)
#define CLASS_2_9ECCFF1DB13B77D3_METHOD_2_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x123DECB0)
#define CLASS_2_9ECCFF1DB13B77D3_METHOD_2_572E53F76E315839_1_OFFSET UNITYSDK_OFFSET(0x123DF0F0)
#define CLASS_2_9ECCFF1DB13B77D3_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x123DE9F0)
#define CLASS_2_9ECCFF1DB13B77D3_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x123E0370)
#define CLASS_2_9ECCFF1DB13B77D3_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x123E0310)
#define CLASS_2_9ECCFF1DB13B77D3_METHOD_2_5CF73781B7545C72_OFFSET UNITYSDK_OFFSET(0x123DF700)
#define CLASS_2_9ECCFF1DB13B77D3_METHOD_2_721B9F460AD6053E_OFFSET UNITYSDK_OFFSET(0x123DED00)
#define CLASS_2_9ECCFF1DB13B77D3_METHOD_2_9879FF951B7059E0_OFFSET UNITYSDK_OFFSET(0x123DEDE0)
#define CLASS_2_9ECCFF1DB13B77D3_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x123DFD50)
#define CLASS_2_9ECCFF1DB13B77D3_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x123DFCC0)
#define CLASS_2_9ECCFF1DB13B77D3_METHOD_2_C9801CF0D9918144_OFFSET UNITYSDK_OFFSET(0x123DF940)
#define CLASS_2_9ECCFF1DB13B77D3_METHOD_2_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0x123DEB20)
#define CLASS_2_9ECCFF1DB13B77D3_METHOD_2_DAEB67F34AF80609_OFFSET UNITYSDK_OFFSET(0x123DF140)
#define CLASS_2_9ECCFF1DB13B77D3_METHOD_2_EFA0E042661826A2_OFFSET UNITYSDK_OFFSET(0x123DF9F0)
#define CLASS_2_9ECCFF1DB13B77D3_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x123DFBD0)
#define CLASS_2_9ECCFF1DB13B77D3_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x123DE810)
#define CLASS_2_9ECCFF1DB13B77D3__CTOR_OFFSET UNITYSDK_OFFSET(0x123E0280)
#define CLASS_2_9ECCFF1DB13B77D3__ONBIND_OFFSET UNITYSDK_OFFSET(0x123DE630)
#define CLASS_2_9ECCFF1DB13B77D3___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x123E03D0)
#define CLASS_2_9ECCFF1DB13B77D3___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x123E0430)
#define CLASS_2_9ECCFF1DB13B77D3___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x123E02B0)

inline static constexpr unsigned int Class_2_9ECCFF1DB13B77D3_TypeDefinitionIndex = 66517;

class Class_2_9ECCFF1DB13B77D3 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::RPG::GameCore::TurnBasedGameMode* Field_2_10; // 0x60
	::System::Collections::Generic::List_1<::Class_2_C52E4901222B45AB*>* Field_2_11; // 0x68
	::RPG::Client::PrefabLoadMeta* Field_2_2; // 0x70
	::UnityEngine::Animation* Field_2_6; // 0x78
	::RPG::Client::LocalizedText* Field_2_5; // 0x80
	::RPG::GameCore::LevelDataComponent* Field_2_9; // 0x88
	::UnityEngine::Transform* Field_2_1; // 0x90
	::UnityEngine::RectTransform* Field_2_4; // 0x98
	::System::Boolean Field_2_8; // 0xA0
	::System::Int32 _Index_k__BackingField; // 0xA4
	::System::Int32 Field_2_12; // 0xA8
	::System::Int32 Field_2_13; // 0xAC
	::System::Single Field_2_3; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9ECCFF1DB13B77D3__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9ECCFF1DB13B77D3__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9ECCFF1DB13B77D3_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9ECCFF1DB13B77D3_SET_INDEX_OFFSET))(this, value);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9ECCFF1DB13B77D3_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9ECCFF1DB13B77D3_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9ECCFF1DB13B77D3_METHOD_2_572E53F76E315839_OFFSET))(this);
	}

	::System::Void Method_2_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9ECCFF1DB13B77D3_METHOD_2_56CE4AFC5339F746_OFFSET))(this);
	}

	::System::Void Method_2_721B9F460AD6053E(::RPG::GameCore::LevelInfiniteWaveProgressChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelInfiniteWaveProgressChange*))((::PBYTE)hIl2Cpp + CLASS_2_9ECCFF1DB13B77D3_METHOD_2_721B9F460AD6053E_OFFSET))(this, a1);
	}

	::System::Void Method_2_572E53F76E315839_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9ECCFF1DB13B77D3_METHOD_2_572E53F76E315839_1_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9ECCFF1DB13B77D3_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_DAEB67F34AF80609()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9ECCFF1DB13B77D3_METHOD_2_DAEB67F34AF80609_OFFSET))(this);
	}

	::System::Void Method_2_D799715F2EF979EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9ECCFF1DB13B77D3_METHOD_2_D799715F2EF979EA_OFFSET))(this);
	}

	::System::Void Method_2_9879FF951B7059E0(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9ECCFF1DB13B77D3_METHOD_2_9879FF951B7059E0_OFFSET))(this, a1);
	}

	::System::Void Method_2_0EAFE72DD9AA7D3A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9ECCFF1DB13B77D3_METHOD_2_0EAFE72DD9AA7D3A_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_EFA0E042661826A2(::RPG::GameCore::MonsterRank a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MonsterRank))((::PBYTE)hIl2Cpp + CLASS_2_9ECCFF1DB13B77D3_METHOD_2_EFA0E042661826A2_OFFSET))(this, a1);
	}

	::RPG::GameCore::MonsterRank Method_2_5CF73781B7545C72(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::MonsterRank(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9ECCFF1DB13B77D3_METHOD_2_5CF73781B7545C72_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C9801CF0D9918144(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9ECCFF1DB13B77D3_METHOD_2_C9801CF0D9918144_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_1BC949E3966093D2(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9ECCFF1DB13B77D3_METHOD_2_1BC949E3966093D2_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_1BC949E3966093D2_1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9ECCFF1DB13B77D3_METHOD_2_1BC949E3966093D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_9ECCFF1DB13B77D3_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_9ECCFF1DB13B77D3_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_9ECCFF1DB13B77D3_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9ECCFF1DB13B77D3_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9ECCFF1DB13B77D3_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9ECCFF1DB13B77D3___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9ECCFF1DB13B77D3_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9ECCFF1DB13B77D3_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9ECCFF1DB13B77D3___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9ECCFF1DB13B77D3___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
