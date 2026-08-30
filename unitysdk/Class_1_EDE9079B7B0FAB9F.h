#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PhotoGraphAimUnitType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class PhotoGraphAimContainer_PhotoGraphAim; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PhotoGraphAimContainerConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_EDE9079B7B0FAB9F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1586B550)
#define CLASS_1_EDE9079B7B0FAB9F_GET_IGNORECOLLIDER_OFFSET UNITYSDK_OFFSET(0x1586B530)
#define CLASS_1_EDE9079B7B0FAB9F_GET_SHOWTIPANGLE_OFFSET UNITYSDK_OFFSET(0x1586B510)
#define CLASS_1_EDE9079B7B0FAB9F_METHOD_1_86914B28476494AF_OFFSET UNITYSDK_OFFSET(0x1586B5B0)
#define CLASS_1_EDE9079B7B0FAB9F_METHOD_1_9AA4DBC6AF81E918_OFFSET UNITYSDK_OFFSET(0x1586BD20)
#define CLASS_1_EDE9079B7B0FAB9F_METHOD_1_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0x1586C3A0)
#define CLASS_1_EDE9079B7B0FAB9F_METHOD_1_A2106EF38347E6B0_OFFSET UNITYSDK_OFFSET(0x1586C0C0)
#define CLASS_1_EDE9079B7B0FAB9F_METHOD_1_AE0B725AB77F7E6F_OFFSET UNITYSDK_OFFSET(0x1586BA60)
#define CLASS_1_EDE9079B7B0FAB9F_METHOD_1_B26489FBF7E741EE_OFFSET UNITYSDK_OFFSET(0x1586B7E0)
#define CLASS_1_EDE9079B7B0FAB9F_METHOD_1_FAFB449B84E5ACD9_OFFSET UNITYSDK_OFFSET(0x1586B930)
#define CLASS_1_EDE9079B7B0FAB9F_METHOD_1_FC5E6AB32946621C_OFFSET UNITYSDK_OFFSET(0x1586BDD0)
#define CLASS_1_EDE9079B7B0FAB9F_SET_IGNORECOLLIDER_OFFSET UNITYSDK_OFFSET(0x1586B540)
#define CLASS_1_EDE9079B7B0FAB9F_SET_SHOWTIPANGLE_OFFSET UNITYSDK_OFFSET(0x1586B520)
#define CLASS_1_EDE9079B7B0FAB9F__CTOR_OFFSET UNITYSDK_OFFSET(0x1586C4B0)

inline static constexpr unsigned int Class_1_EDE9079B7B0FAB9F_TypeDefinitionIndex = 69398;

class Class_1_EDE9079B7B0FAB9F : public ::System::Object
{
public:
	::UnityEngine::Collider* PEKFHKFKONB; // 0x10
	::UnityEngine::Transform* KPHKGBGMLNN; // 0x18
	::UnityEngine::Transform* NGOPIKCKJMA; // 0x20
	::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x28
	::RPG::GameCore::PhotoGraphAimContainerConfig* IGHAHBNLIJA; // 0x30
	::System::String* LJHHCNINPKG; // 0x38
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x40
	::System::Int32 HIBKMEDOBKG; // 0x48
	::UnityEngine::Vector3 KMONLGNFDMC; // 0x4C
	::System::Int32 KCELONKJELI; // 0x58
	::RPG::Client::PhotoGraphAimUnitType ILLOBAKBDPB; // 0x5C
	::System::Int32 IDFIOEBNPJF; // 0x60
	::System::Single DDNMNEIGGND; // 0x64
	::System::Boolean PFKKPAPFEKE; // 0x68
	::System::Boolean _IgnoreCollider_k__BackingField; // 0x69
	::System::Boolean DMLFAFMGPMH; // 0x6A
	::System::Boolean NJHMFDPILDI; // 0x6B
	::System::Int32 DOEFKPCDIIP; // 0x6C
	::System::Int32 MNDJCEFFCIC; // 0x70
	::System::Single _ShowTipAngle_k__BackingField; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDE9079B7B0FAB9F__CTOR_OFFSET))(this);
	}

	::System::Single get_ShowTipAngle()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDE9079B7B0FAB9F_GET_SHOWTIPANGLE_OFFSET))(this);
	}

	::System::Void set_ShowTipAngle(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EDE9079B7B0FAB9F_SET_SHOWTIPANGLE_OFFSET))(this, a1);
	}

	::System::Boolean get_IgnoreCollider()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDE9079B7B0FAB9F_GET_IGNORECOLLIDER_OFFSET))(this);
	}

	::System::Void set_IgnoreCollider(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EDE9079B7B0FAB9F_SET_IGNORECOLLIDER_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDE9079B7B0FAB9F_DISPOSE_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_86914B28476494AF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDE9079B7B0FAB9F_METHOD_1_86914B28476494AF_OFFSET))(this);
	}

	::System::Void Method_1_FAFB449B84E5ACD9(::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*))((::PBYTE)hIl2Cpp + CLASS_1_EDE9079B7B0FAB9F_METHOD_1_FAFB449B84E5ACD9_OFFSET))(this, a1);
	}

	::System::Void Method_1_AE0B725AB77F7E6F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDE9079B7B0FAB9F_METHOD_1_AE0B725AB77F7E6F_OFFSET))(this);
	}

	::System::Void Method_1_9AA4DBC6AF81E918(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PhotoGraphAimContainerConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PhotoGraphAimContainerConfig*))((::PBYTE)hIl2Cpp + CLASS_1_EDE9079B7B0FAB9F_METHOD_1_9AA4DBC6AF81E918_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_FC5E6AB32946621C(::UnityEngine::GameObject* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PhotoGraphAimContainerConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PhotoGraphAimContainerConfig*))((::PBYTE)hIl2Cpp + CLASS_1_EDE9079B7B0FAB9F_METHOD_1_FC5E6AB32946621C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_A2106EF38347E6B0(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PhotoGraphAimContainerConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PhotoGraphAimContainerConfig*))((::PBYTE)hIl2Cpp + CLASS_1_EDE9079B7B0FAB9F_METHOD_1_A2106EF38347E6B0_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Transform* Method_1_B26489FBF7E741EE()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDE9079B7B0FAB9F_METHOD_1_B26489FBF7E741EE_OFFSET))(this);
	}

	::System::Void Method_1_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDE9079B7B0FAB9F_METHOD_1_A1781348F0A89177_OFFSET))(this);
	}
};
