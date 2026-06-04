#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::Client { class RogueMagicScepterDataItem; }
namespace RPG::Client { class UIValueChangeAnimation; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelBattleEventCreate; }
namespace RPG::GameCore { class LevelEntitySPChange; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_781A24D57CD122C5_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x13626640)
#define CLASS_2_781A24D57CD122C5_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x13626930)
#define CLASS_2_781A24D57CD122C5_GET_PROGRESSCHANGEANIMENDPROMISE_OFFSET UNITYSDK_OFFSET(0x136263E0)
#define CLASS_2_781A24D57CD122C5_GET_SCEPTERDATA_OFFSET UNITYSDK_OFFSET(0x13626130)
#define CLASS_2_781A24D57CD122C5_METHOD_2_18D9238B9C310BFF_OFFSET UNITYSDK_OFFSET(0x136262A0)
#define CLASS_2_781A24D57CD122C5_METHOD_2_1C6AD2DA62FB6EB1_OFFSET UNITYSDK_OFFSET(0x136253C0)
#define CLASS_2_781A24D57CD122C5_METHOD_2_307A59CF13188EC9_OFFSET UNITYSDK_OFFSET(0x13625DF0)
#define CLASS_2_781A24D57CD122C5_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x13626E90)
#define CLASS_2_781A24D57CD122C5_METHOD_2_57D5ED2C4C06D908_OFFSET UNITYSDK_OFFSET(0x13625B80)
#define CLASS_2_781A24D57CD122C5_METHOD_2_6774EDC23D24BE2B_OFFSET UNITYSDK_OFFSET(0x13625A50)
#define CLASS_2_781A24D57CD122C5_METHOD_2_7BBBC241D67B44B9_OFFSET UNITYSDK_OFFSET(0x13625AE0)
#define CLASS_2_781A24D57CD122C5_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x136265A0)
#define CLASS_2_781A24D57CD122C5_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x13626500)
#define CLASS_2_781A24D57CD122C5_METHOD_2_D2A08F3D951A0C1D_OFFSET UNITYSDK_OFFSET(0x13626150)
#define CLASS_2_781A24D57CD122C5_METHOD_2_DA4B4F9A7740A91B_OFFSET UNITYSDK_OFFSET(0x13625750)
#define CLASS_2_781A24D57CD122C5_METHOD_2_DAEB67F34AF80609_1_OFFSET UNITYSDK_OFFSET(0x136264A0)
#define CLASS_2_781A24D57CD122C5_METHOD_2_DAEB67F34AF80609_OFFSET UNITYSDK_OFFSET(0x13626240)
#define CLASS_2_781A24D57CD122C5_METHOD_2_E9A5CB8132825E13_OFFSET UNITYSDK_OFFSET(0x13626400)
#define CLASS_2_781A24D57CD122C5_METHOD_2_F927290E0B896A8F_OFFSET UNITYSDK_OFFSET(0x136254F0)
#define CLASS_2_781A24D57CD122C5_SET_PROGRESSCHANGEANIMENDPROMISE_OFFSET UNITYSDK_OFFSET(0x136263F0)
#define CLASS_2_781A24D57CD122C5_SET_SCEPTERDATA_OFFSET UNITYSDK_OFFSET(0x13626140)
#define CLASS_2_781A24D57CD122C5__CTOR_OFFSET UNITYSDK_OFFSET(0x13626BF0)
#define CLASS_2_781A24D57CD122C5__ONBIND_OFFSET UNITYSDK_OFFSET(0x13625090)
#define CLASS_2_781A24D57CD122C5___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x13626EF0)
#define CLASS_2_781A24D57CD122C5___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x13626F50)
#define CLASS_2_781A24D57CD122C5___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x13626E30)
#define CLASS_2_781A24D57CD122C5___PLAYSPCHANGEANIM_B__22_0_OFFSET UNITYSDK_OFFSET(0x13626C20)

inline static constexpr unsigned int Class_2_781A24D57CD122C5_TypeDefinitionIndex = 67558;

class Class_2_781A24D57CD122C5 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::Transform* Field_2_0; // 0x60
	::UnityEngine::UI::Image* Field_2_1; // 0x68
	::RPG::Client::Promises::Promise* _ProgressChangeAnimEndPromise_k__BackingField; // 0x70
	::UnityEngine::UI::Image* Field_2_3; // 0x78
	::UnityEngine::UI::Image* Field_2_4; // 0x80
	::UnityEngine::Transform* Field_2_5; // 0x88
	::UnityEngine::Coroutine* Field_2_6; // 0x90
	::RPG::Client::Promises::Promise* Field_2_7; // 0x98
	::RPG::Client::UIValueChangeAnimation* Field_2_8; // 0xA0
	::RPG::Client::RPGAnimationEvent* Field_2_9; // 0xA8
	::RPG::Client::RogueMagicScepterDataItem* _ScepterData_k__BackingField; // 0xB0
	::UnityEngine::Transform* Field_2_11; // 0xB8
	::RPG::Client::UIValueChangeAnimation* Field_2_12; // 0xC0
	::UnityEngine::Animation* Field_2_13; // 0xC8
	::UnityEngine::Transform* Field_2_14; // 0xD0
	::UnityEngine::Transform* Field_2_15; // 0xD8
	::System::Single Field_2_16; // 0xE0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_781A24D57CD122C5__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_781A24D57CD122C5__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_1C6AD2DA62FB6EB1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_781A24D57CD122C5_METHOD_2_1C6AD2DA62FB6EB1_OFFSET))(this);
	}

	::System::Void Method_2_F927290E0B896A8F(::RPG::Client::RogueMagicScepterDataItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicScepterDataItem*))((::PBYTE)hIl2Cpp + CLASS_2_781A24D57CD122C5_METHOD_2_F927290E0B896A8F_OFFSET))(this, a1);
	}

	::System::Void Method_2_6774EDC23D24BE2B(::RPG::GameCore::LevelBattleEventCreate* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelBattleEventCreate*))((::PBYTE)hIl2Cpp + CLASS_2_781A24D57CD122C5_METHOD_2_6774EDC23D24BE2B_OFFSET))(this, a1);
	}

	::System::Void Method_2_7BBBC241D67B44B9(::RPG::GameCore::LevelEntitySPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntitySPChange*))((::PBYTE)hIl2Cpp + CLASS_2_781A24D57CD122C5_METHOD_2_7BBBC241D67B44B9_OFFSET))(this, a1);
	}

	::System::Void Method_2_DA4B4F9A7740A91B(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_781A24D57CD122C5_METHOD_2_DA4B4F9A7740A91B_OFFSET))(this, a1, a2);
	}

	::RPG::Client::RogueMagicScepterDataItem* get_ScepterData()
	{
		return ((::RPG::Client::RogueMagicScepterDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_781A24D57CD122C5_GET_SCEPTERDATA_OFFSET))(this);
	}

	::System::Void set_ScepterData(::RPG::Client::RogueMagicScepterDataItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicScepterDataItem*))((::PBYTE)hIl2Cpp + CLASS_2_781A24D57CD122C5_SET_SCEPTERDATA_OFFSET))(this, a1);
	}

	::System::Void Method_2_307A59CF13188EC9(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_781A24D57CD122C5_METHOD_2_307A59CF13188EC9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_57D5ED2C4C06D908()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_781A24D57CD122C5_METHOD_2_57D5ED2C4C06D908_OFFSET))(this);
	}

	::System::Void Method_2_D2A08F3D951A0C1D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_781A24D57CD122C5_METHOD_2_D2A08F3D951A0C1D_OFFSET))(this, a1);
	}

	::System::Void Method_2_DAEB67F34AF80609()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_781A24D57CD122C5_METHOD_2_DAEB67F34AF80609_OFFSET))(this);
	}

	::System::Void Method_2_18D9238B9C310BFF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_781A24D57CD122C5_METHOD_2_18D9238B9C310BFF_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::Promise* get_ProgressChangeAnimEndPromise()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_781A24D57CD122C5_GET_PROGRESSCHANGEANIMENDPROMISE_OFFSET))(this);
	}

	::System::Void set_ProgressChangeAnimEndPromise(::RPG::Client::Promises::Promise* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + CLASS_2_781A24D57CD122C5_SET_PROGRESSCHANGEANIMENDPROMISE_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::Promise* Method_2_E9A5CB8132825E13()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_781A24D57CD122C5_METHOD_2_E9A5CB8132825E13_OFFSET))(this);
	}

	::System::Void Method_2_DAEB67F34AF80609_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_781A24D57CD122C5_METHOD_2_DAEB67F34AF80609_1_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_781A24D57CD122C5_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_781A24D57CD122C5_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_781A24D57CD122C5_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_781A24D57CD122C5_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __PlaySPChangeAnim_b__22_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_781A24D57CD122C5___PLAYSPCHANGEANIM_B__22_0_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_781A24D57CD122C5___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_781A24D57CD122C5_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_781A24D57CD122C5___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_781A24D57CD122C5___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
