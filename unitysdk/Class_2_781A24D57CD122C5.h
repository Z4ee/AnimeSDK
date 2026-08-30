#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

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

#define CLASS_2_781A24D57CD122C5_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x153E5580)
#define CLASS_2_781A24D57CD122C5_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x153E5880)
#define CLASS_2_781A24D57CD122C5_GET_PROGRESSCHANGEANIMENDPROMISE_OFFSET UNITYSDK_OFFSET(0x153E52E0)
#define CLASS_2_781A24D57CD122C5_GET_SCEPTERDATA_OFFSET UNITYSDK_OFFSET(0x153E5020)
#define CLASS_2_781A24D57CD122C5_METHOD_2_017C915772AE00E9_OFFSET UNITYSDK_OFFSET(0x153E42B0)
#define CLASS_2_781A24D57CD122C5_METHOD_2_18D9238B9C310BFF_OFFSET UNITYSDK_OFFSET(0x153E5190)
#define CLASS_2_781A24D57CD122C5_METHOD_2_307A59CF13188EC9_OFFSET UNITYSDK_OFFSET(0x153E4CE0)
#define CLASS_2_781A24D57CD122C5_METHOD_2_57D5ED2C4C06D908_OFFSET UNITYSDK_OFFSET(0x153E4A70)
#define CLASS_2_781A24D57CD122C5_METHOD_2_6774EDC23D24BE2B_OFFSET UNITYSDK_OFFSET(0x153E4940)
#define CLASS_2_781A24D57CD122C5_METHOD_2_7BBBC241D67B44B9_OFFSET UNITYSDK_OFFSET(0x153E49D0)
#define CLASS_2_781A24D57CD122C5_METHOD_2_D2A08F3D951A0C1D_OFFSET UNITYSDK_OFFSET(0x153E5040)
#define CLASS_2_781A24D57CD122C5_METHOD_2_DA4B4F9A7740A91B_OFFSET UNITYSDK_OFFSET(0x153E4640)
#define CLASS_2_781A24D57CD122C5_METHOD_2_DAEB67F34AF80609_1_OFFSET UNITYSDK_OFFSET(0x153E53A0)
#define CLASS_2_781A24D57CD122C5_METHOD_2_DAEB67F34AF80609_OFFSET UNITYSDK_OFFSET(0x153E5130)
#define CLASS_2_781A24D57CD122C5_METHOD_2_E9A5CB8132825E13_OFFSET UNITYSDK_OFFSET(0x153E5300)
#define CLASS_2_781A24D57CD122C5_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x153E54C0)
#define CLASS_2_781A24D57CD122C5_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x153E5400)
#define CLASS_2_781A24D57CD122C5_METHOD_2_F927290E0B896A8F_OFFSET UNITYSDK_OFFSET(0x153E43E0)
#define CLASS_2_781A24D57CD122C5_SET_PROGRESSCHANGEANIMENDPROMISE_OFFSET UNITYSDK_OFFSET(0x153E52F0)
#define CLASS_2_781A24D57CD122C5_SET_SCEPTERDATA_OFFSET UNITYSDK_OFFSET(0x153E5030)
#define CLASS_2_781A24D57CD122C5__CTOR_OFFSET UNITYSDK_OFFSET(0x153E5B40)
#define CLASS_2_781A24D57CD122C5__ONBIND_OFFSET UNITYSDK_OFFSET(0x153E3F80)
#define CLASS_2_781A24D57CD122C5___PLAYSPCHANGEANIM_B__22_0_OFFSET UNITYSDK_OFFSET(0x153E5B70)

inline static constexpr unsigned int Class_2_781A24D57CD122C5_TypeDefinitionIndex = 72240;

class Class_2_781A24D57CD122C5 : public ::Class_1_34917908B7833130
{
public:
	::RPG::Client::Promises::Promise* _ProgressChangeAnimEndPromise_k__BackingField; // 0x60
	::RPG::Client::RPGAnimationEvent* MEDGLNFKGDC; // 0x68
	::RPG::Client::RogueMagicScepterDataItem* _ScepterData_k__BackingField; // 0x70
	::UnityEngine::Coroutine* KCECMFCDFBA; // 0x78
	::UnityEngine::UI::Image* JBGEKBONKCA; // 0x80
	::UnityEngine::Transform* GCAOHACNIBF; // 0x88
	::UnityEngine::Transform* AOKHJDHAAKP; // 0x90
	::RPG::Client::UIValueChangeAnimation* KFMOAHDECGM; // 0x98
	::RPG::Client::UIValueChangeAnimation* OCNAAJKIENE; // 0xA0
	::UnityEngine::Transform* COGOPBJHLME; // 0xA8
	::UnityEngine::UI::Image* LKAOENJHMHA; // 0xB0
	::UnityEngine::Transform* NJFPFGJBLMK; // 0xB8
	::UnityEngine::Animation* PMOJILOJEPE; // 0xC0
	::UnityEngine::Transform* LKHHMNJKLJH; // 0xC8
	::UnityEngine::UI::Image* HPCAJDKDMEI; // 0xD0
	::RPG::Client::Promises::Promise* BFMFIDCGGNF; // 0xD8
	::System::Single CCOPIDJMDFP; // 0xE0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_781A24D57CD122C5__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_781A24D57CD122C5__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_017C915772AE00E9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_781A24D57CD122C5_METHOD_2_017C915772AE00E9_OFFSET))(this);
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

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_781A24D57CD122C5_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_781A24D57CD122C5_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
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
};
