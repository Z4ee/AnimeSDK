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

#define CLASS_2_507B716954ADF175_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x11831DF0)
#define CLASS_2_507B716954ADF175_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x118320B0)
#define CLASS_2_507B716954ADF175_GET_PROGRESSCHANGEANIMENDPROMISE_OFFSET UNITYSDK_OFFSET(0x11831B50)
#define CLASS_2_507B716954ADF175_GET_SCEPTERDATA_OFFSET UNITYSDK_OFFSET(0x11831980)
#define CLASS_2_507B716954ADF175_METHOD_2_1C6AD2DA62FB6EB1_OFFSET UNITYSDK_OFFSET(0x11830DD0)
#define CLASS_2_507B716954ADF175_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x11831A70)
#define CLASS_2_507B716954ADF175_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x118325B0)
#define CLASS_2_507B716954ADF175_METHOD_2_6774EDC23D24BE2B_OFFSET UNITYSDK_OFFSET(0x11831380)
#define CLASS_2_507B716954ADF175_METHOD_2_7AD1599C042263A6_OFFSET UNITYSDK_OFFSET(0x11830EF0)
#define CLASS_2_507B716954ADF175_METHOD_2_7BBBC241D67B44B9_OFFSET UNITYSDK_OFFSET(0x11831410)
#define CLASS_2_507B716954ADF175_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x11831D30)
#define CLASS_2_507B716954ADF175_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x11831C70)
#define CLASS_2_507B716954ADF175_METHOD_2_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0x118314B0)
#define CLASS_2_507B716954ADF175_METHOD_2_DA4B4F9A7740A91B_OFFSET UNITYSDK_OFFSET(0x11831150)
#define CLASS_2_507B716954ADF175_METHOD_2_DF2A78D8DB25ED05_1_OFFSET UNITYSDK_OFFSET(0x11831C10)
#define CLASS_2_507B716954ADF175_METHOD_2_DF2A78D8DB25ED05_OFFSET UNITYSDK_OFFSET(0x11831A10)
#define CLASS_2_507B716954ADF175_METHOD_2_E9A5CB8132825E13_OFFSET UNITYSDK_OFFSET(0x11831B70)
#define CLASS_2_507B716954ADF175_METHOD_2_ED5FC1D8B47FC436_OFFSET UNITYSDK_OFFSET(0x118319A0)
#define CLASS_2_507B716954ADF175_METHOD_2_F867677DC9D486C7_OFFSET UNITYSDK_OFFSET(0x11831670)
#define CLASS_2_507B716954ADF175_SET_PROGRESSCHANGEANIMENDPROMISE_OFFSET UNITYSDK_OFFSET(0x11831B60)
#define CLASS_2_507B716954ADF175_SET_SCEPTERDATA_OFFSET UNITYSDK_OFFSET(0x11831990)
#define CLASS_2_507B716954ADF175__CTOR_OFFSET UNITYSDK_OFFSET(0x11832330)
#define CLASS_2_507B716954ADF175__ONBIND_OFFSET UNITYSDK_OFFSET(0x11830AA0)
#define CLASS_2_507B716954ADF175___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x11832610)
#define CLASS_2_507B716954ADF175___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x11832670)
#define CLASS_2_507B716954ADF175___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x11832550)
#define CLASS_2_507B716954ADF175___PLAYSPCHANGEANIM_B__22_0_OFFSET UNITYSDK_OFFSET(0x11832360)

inline static constexpr unsigned int Class_2_507B716954ADF175_TypeDefinitionIndex = 66618;

class Class_2_507B716954ADF175 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::Transform* Field_2_5; // 0x60
	::RPG::Client::Promises::Promise* _ProgressChangeAnimEndPromise_k__BackingField; // 0x68
	::UnityEngine::UI::Image* Field_2_2; // 0x70
	::UnityEngine::Animation* Field_2_7; // 0x78
	::UnityEngine::Transform* Field_2_1; // 0x80
	::UnityEngine::Transform* Field_2_11; // 0x88
	::RPG::Client::RPGAnimationEvent* Field_2_10; // 0x90
	::UnityEngine::UI::Image* Field_2_4; // 0x98
	::RPG::Client::Promises::Promise* Field_2_16; // 0xA0
	::UnityEngine::UI::Image* Field_2_3; // 0xA8
	::RPG::Client::UIValueChangeAnimation* Field_2_9; // 0xB0
	::RPG::Client::RogueMagicScepterDataItem* _ScepterData_k__BackingField; // 0xB8
	::RPG::Client::UIValueChangeAnimation* Field_2_8; // 0xC0
	::UnityEngine::Coroutine* Field_2_15; // 0xC8
	::UnityEngine::Transform* Field_2_6; // 0xD0
	::UnityEngine::Transform* Field_2_0; // 0xD8
	::System::Single Field_2_14; // 0xE0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507B716954ADF175__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507B716954ADF175__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_1C6AD2DA62FB6EB1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507B716954ADF175_METHOD_2_1C6AD2DA62FB6EB1_OFFSET))(this);
	}

	::System::Void Method_2_7AD1599C042263A6(::RPG::Client::RogueMagicScepterDataItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicScepterDataItem*))((::PBYTE)hIl2Cpp + CLASS_2_507B716954ADF175_METHOD_2_7AD1599C042263A6_OFFSET))(this, a1);
	}

	::System::Void Method_2_6774EDC23D24BE2B(::RPG::GameCore::LevelBattleEventCreate* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelBattleEventCreate*))((::PBYTE)hIl2Cpp + CLASS_2_507B716954ADF175_METHOD_2_6774EDC23D24BE2B_OFFSET))(this, a1);
	}

	::System::Void Method_2_7BBBC241D67B44B9(::RPG::GameCore::LevelEntitySPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntitySPChange*))((::PBYTE)hIl2Cpp + CLASS_2_507B716954ADF175_METHOD_2_7BBBC241D67B44B9_OFFSET))(this, a1);
	}

	::System::Void Method_2_DA4B4F9A7740A91B(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_507B716954ADF175_METHOD_2_DA4B4F9A7740A91B_OFFSET))(this, a1, a2);
	}

	::RPG::Client::RogueMagicScepterDataItem* get_ScepterData()
	{
		return ((::RPG::Client::RogueMagicScepterDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507B716954ADF175_GET_SCEPTERDATA_OFFSET))(this);
	}

	::System::Void set_ScepterData(::RPG::Client::RogueMagicScepterDataItem* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicScepterDataItem*))((::PBYTE)hIl2Cpp + CLASS_2_507B716954ADF175_SET_SCEPTERDATA_OFFSET))(this, value);
	}

	::System::Void Method_2_F867677DC9D486C7(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_507B716954ADF175_METHOD_2_F867677DC9D486C7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C706B1EC6D2E1C64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507B716954ADF175_METHOD_2_C706B1EC6D2E1C64_OFFSET))(this);
	}

	::System::Void Method_2_ED5FC1D8B47FC436(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_507B716954ADF175_METHOD_2_ED5FC1D8B47FC436_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF2A78D8DB25ED05()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507B716954ADF175_METHOD_2_DF2A78D8DB25ED05_OFFSET))(this);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_507B716954ADF175_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::Promise* get_ProgressChangeAnimEndPromise()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507B716954ADF175_GET_PROGRESSCHANGEANIMENDPROMISE_OFFSET))(this);
	}

	::System::Void set_ProgressChangeAnimEndPromise(::RPG::Client::Promises::Promise* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + CLASS_2_507B716954ADF175_SET_PROGRESSCHANGEANIMENDPROMISE_OFFSET))(this, value);
	}

	::RPG::Client::Promises::Promise* Method_2_E9A5CB8132825E13()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507B716954ADF175_METHOD_2_E9A5CB8132825E13_OFFSET))(this);
	}

	::System::Void Method_2_DF2A78D8DB25ED05_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507B716954ADF175_METHOD_2_DF2A78D8DB25ED05_1_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_507B716954ADF175_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_507B716954ADF175_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507B716954ADF175_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507B716954ADF175_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __PlaySPChangeAnim_b__22_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507B716954ADF175___PLAYSPCHANGEANIM_B__22_0_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507B716954ADF175___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507B716954ADF175_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507B716954ADF175___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_507B716954ADF175___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
