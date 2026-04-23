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

#define CLASS_1_EDE9079B7B0FAB9F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12956CE0)
#define CLASS_1_EDE9079B7B0FAB9F_GET_IGNORECOLLIDER_OFFSET UNITYSDK_OFFSET(0x12956CC0)
#define CLASS_1_EDE9079B7B0FAB9F_GET_SHOWTIPANGLE_OFFSET UNITYSDK_OFFSET(0x12956CA0)
#define CLASS_1_EDE9079B7B0FAB9F_METHOD_1_86914B28476494AF_OFFSET UNITYSDK_OFFSET(0x12956D40)
#define CLASS_1_EDE9079B7B0FAB9F_METHOD_1_9AA4DBC6AF81E918_OFFSET UNITYSDK_OFFSET(0x129574B0)
#define CLASS_1_EDE9079B7B0FAB9F_METHOD_1_9F8333C3C2789A79_OFFSET UNITYSDK_OFFSET(0x12957860)
#define CLASS_1_EDE9079B7B0FAB9F_METHOD_1_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0x12957B40)
#define CLASS_1_EDE9079B7B0FAB9F_METHOD_1_AE0B725AB77F7E6F_OFFSET UNITYSDK_OFFSET(0x129571F0)
#define CLASS_1_EDE9079B7B0FAB9F_METHOD_1_B26489FBF7E741EE_OFFSET UNITYSDK_OFFSET(0x12956F70)
#define CLASS_1_EDE9079B7B0FAB9F_METHOD_1_FAFB449B84E5ACD9_OFFSET UNITYSDK_OFFSET(0x129570C0)
#define CLASS_1_EDE9079B7B0FAB9F_METHOD_1_FC5E6AB32946621C_OFFSET UNITYSDK_OFFSET(0x12957560)
#define CLASS_1_EDE9079B7B0FAB9F_SET_IGNORECOLLIDER_OFFSET UNITYSDK_OFFSET(0x12956CD0)
#define CLASS_1_EDE9079B7B0FAB9F_SET_SHOWTIPANGLE_OFFSET UNITYSDK_OFFSET(0x12956CB0)
#define CLASS_1_EDE9079B7B0FAB9F__CTOR_OFFSET UNITYSDK_OFFSET(0x12957C60)

inline static constexpr unsigned int Class_1_EDE9079B7B0FAB9F_TypeDefinitionIndex = 63983;

class Class_1_EDE9079B7B0FAB9F : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_17; // 0x10
	::System::String* Field_1_16; // 0x18
	::RPG::GameCore::TaskContext* Field_1_18; // 0x20
	::RPG::GameCore::GameEntity* Field_1_1; // 0x28
	::RPG::GameCore::PhotoGraphAimContainerConfig* Field_1_19; // 0x30
	::UnityEngine::Transform* Field_1_3; // 0x38
	::UnityEngine::Collider* Field_1_2; // 0x40
	::System::Int32 Field_1_8; // 0x48
	::System::Single _ShowTipAngle_k__BackingField; // 0x4C
	::System::Boolean _IgnoreCollider_k__BackingField; // 0x50
	::System::Boolean Field_1_12; // 0x51
	::System::Boolean Field_1_9; // 0x52
	::System::Boolean Field_1_10; // 0x53
	::System::Int32 Field_1_11; // 0x54
	::UnityEngine::Vector3 Field_1_4; // 0x58
	::System::Int32 Field_1_6; // 0x64
	::System::Int32 Field_1_7; // 0x68
	::System::Single Field_1_15; // 0x6C
	::RPG::Client::PhotoGraphAimUnitType Field_1_0; // 0x70
	::System::Int32 Field_1_5; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDE9079B7B0FAB9F__CTOR_OFFSET))(this);
	}

	::System::Single get_ShowTipAngle()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDE9079B7B0FAB9F_GET_SHOWTIPANGLE_OFFSET))(this);
	}

	::System::Void set_ShowTipAngle(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EDE9079B7B0FAB9F_SET_SHOWTIPANGLE_OFFSET))(this, value);
	}

	::System::Boolean get_IgnoreCollider()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDE9079B7B0FAB9F_GET_IGNORECOLLIDER_OFFSET))(this);
	}

	::System::Void set_IgnoreCollider(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EDE9079B7B0FAB9F_SET_IGNORECOLLIDER_OFFSET))(this, value);
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

	::System::Void Method_1_9F8333C3C2789A79(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PhotoGraphAimContainerConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PhotoGraphAimContainerConfig*))((::PBYTE)hIl2Cpp + CLASS_1_EDE9079B7B0FAB9F_METHOD_1_9F8333C3C2789A79_OFFSET))(this, a1, a2, a3);
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
