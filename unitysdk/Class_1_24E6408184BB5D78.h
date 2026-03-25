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

#define CLASS_1_24E6408184BB5D78_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10B1CE10)
#define CLASS_1_24E6408184BB5D78_GET_IGNORECOLLIDER_OFFSET UNITYSDK_OFFSET(0x10B1CDF0)
#define CLASS_1_24E6408184BB5D78_GET_SHOWTIPANGLE_OFFSET UNITYSDK_OFFSET(0x10B1CDD0)
#define CLASS_1_24E6408184BB5D78_METHOD_1_3B23822ABA59AE79_OFFSET UNITYSDK_OFFSET(0x10B1D0A0)
#define CLASS_1_24E6408184BB5D78_METHOD_1_45D95D957F3363D3_OFFSET UNITYSDK_OFFSET(0x10B1D670)
#define CLASS_1_24E6408184BB5D78_METHOD_1_86914B28476494AF_OFFSET UNITYSDK_OFFSET(0x10B1CE70)
#define CLASS_1_24E6408184BB5D78_METHOD_1_8C704EC832EDEFC8_OFFSET UNITYSDK_OFFSET(0x10B1D320)
#define CLASS_1_24E6408184BB5D78_METHOD_1_9AA4DBC6AF81E918_OFFSET UNITYSDK_OFFSET(0x10B1D5B0)
#define CLASS_1_24E6408184BB5D78_METHOD_1_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0x10B1DC00)
#define CLASS_1_24E6408184BB5D78_METHOD_1_CFF9FBF1FAD4351A_OFFSET UNITYSDK_OFFSET(0x10B1D940)
#define CLASS_1_24E6408184BB5D78_METHOD_1_FAFB449B84E5ACD9_OFFSET UNITYSDK_OFFSET(0x10B1D1F0)
#define CLASS_1_24E6408184BB5D78_SET_IGNORECOLLIDER_OFFSET UNITYSDK_OFFSET(0x10B1CE00)
#define CLASS_1_24E6408184BB5D78_SET_SHOWTIPANGLE_OFFSET UNITYSDK_OFFSET(0x10B1CDE0)
#define CLASS_1_24E6408184BB5D78__CTOR_OFFSET UNITYSDK_OFFSET(0x10B1DD20)

inline static constexpr unsigned int Class_1_24E6408184BB5D78_TypeDefinitionIndex = 56738;

class Class_1_24E6408184BB5D78 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_17; // 0x10
	::RPG::GameCore::PhotoGraphAimContainerConfig* Field_1_19; // 0x18
	::UnityEngine::Transform* Field_1_3; // 0x20
	::RPG::GameCore::GameEntity* Field_1_1; // 0x28
	::System::String* Field_1_16; // 0x30
	::RPG::GameCore::TaskContext* Field_1_18; // 0x38
	::UnityEngine::Collider* Field_1_2; // 0x40
	::System::Int32 Field_1_5; // 0x48
	::System::Int32 Field_1_6; // 0x4C
	::System::Single Field_1_15; // 0x50
	::System::Int32 Field_1_8; // 0x54
	::System::Int32 Field_1_11; // 0x58
	::UnityEngine::Vector3 Field_1_4; // 0x5C
	::System::Boolean _IgnoreCollider_k__BackingField; // 0x68
	::System::Boolean Field_1_12; // 0x69
	::System::Boolean Field_1_10; // 0x6A
	::System::Boolean Field_1_9; // 0x6B
	::RPG::Client::PhotoGraphAimUnitType Field_1_0; // 0x6C
	::System::Single _ShowTipAngle_k__BackingField; // 0x70
	::System::Int32 Field_1_7; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24E6408184BB5D78__CTOR_OFFSET))(this);
	}

	::System::Single get_ShowTipAngle()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24E6408184BB5D78_GET_SHOWTIPANGLE_OFFSET))(this);
	}

	::System::Void set_ShowTipAngle(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_24E6408184BB5D78_SET_SHOWTIPANGLE_OFFSET))(this, value);
	}

	::System::Boolean get_IgnoreCollider()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24E6408184BB5D78_GET_IGNORECOLLIDER_OFFSET))(this);
	}

	::System::Void set_IgnoreCollider(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_24E6408184BB5D78_SET_IGNORECOLLIDER_OFFSET))(this, value);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24E6408184BB5D78_DISPOSE_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_86914B28476494AF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24E6408184BB5D78_METHOD_1_86914B28476494AF_OFFSET))(this);
	}

	::System::Void Method_1_FAFB449B84E5ACD9(::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*))((::PBYTE)hIl2Cpp + CLASS_1_24E6408184BB5D78_METHOD_1_FAFB449B84E5ACD9_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C704EC832EDEFC8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24E6408184BB5D78_METHOD_1_8C704EC832EDEFC8_OFFSET))(this);
	}

	::System::Void Method_1_9AA4DBC6AF81E918(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PhotoGraphAimContainerConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PhotoGraphAimContainerConfig*))((::PBYTE)hIl2Cpp + CLASS_1_24E6408184BB5D78_METHOD_1_9AA4DBC6AF81E918_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_45D95D957F3363D3(::UnityEngine::GameObject* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PhotoGraphAimContainerConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PhotoGraphAimContainerConfig*))((::PBYTE)hIl2Cpp + CLASS_1_24E6408184BB5D78_METHOD_1_45D95D957F3363D3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CFF9FBF1FAD4351A(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PhotoGraphAimContainerConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PhotoGraphAimContainerConfig*))((::PBYTE)hIl2Cpp + CLASS_1_24E6408184BB5D78_METHOD_1_CFF9FBF1FAD4351A_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Transform* Method_1_3B23822ABA59AE79()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24E6408184BB5D78_METHOD_1_3B23822ABA59AE79_OFFSET))(this);
	}

	::System::Void Method_1_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24E6408184BB5D78_METHOD_1_A1781348F0A89177_OFFSET))(this);
	}
};
