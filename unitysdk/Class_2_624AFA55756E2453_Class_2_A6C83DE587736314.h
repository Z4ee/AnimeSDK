#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_624AFA55756E2453_Class_1_BA95C86B072044FD.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoMapRotationVolumeV2; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MapRotationVolumeConfig; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_624AFA55756E2453_CLASS_2_A6C83DE587736314_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8BF8E70)
#define CLASS_2_624AFA55756E2453_CLASS_2_A6C83DE587736314_GET_POSESWITCHERANCHORNAME_OFFSET UNITYSDK_OFFSET(0x8BF8EC0)
#define CLASS_2_624AFA55756E2453_CLASS_2_A6C83DE587736314_GET_POSESWITCHERROOT_OFFSET UNITYSDK_OFFSET(0x8BF8EE0)
#define CLASS_2_624AFA55756E2453_CLASS_2_A6C83DE587736314_METHOD_2_27592B75ABD7B555_OFFSET UNITYSDK_OFFSET(0x8BF7F80)
#define CLASS_2_624AFA55756E2453_CLASS_2_A6C83DE587736314_METHOD_2_3FEAB2F99F1368DD_OFFSET UNITYSDK_OFFSET(0x8BF6FD0)
#define CLASS_2_624AFA55756E2453_CLASS_2_A6C83DE587736314_METHOD_2_49726A0317FA2747_OFFSET UNITYSDK_OFFSET(0x8BF5FC0)
#define CLASS_2_624AFA55756E2453_CLASS_2_A6C83DE587736314_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x8BF88E0)
#define CLASS_2_624AFA55756E2453_CLASS_2_A6C83DE587736314_SET_POSESWITCHERANCHORNAME_OFFSET UNITYSDK_OFFSET(0x8BF8ED0)
#define CLASS_2_624AFA55756E2453_CLASS_2_A6C83DE587736314_SET_POSESWITCHERROOT_OFFSET UNITYSDK_OFFSET(0x8BF8EF0)
#define CLASS_2_624AFA55756E2453_CLASS_2_A6C83DE587736314__CTOR_OFFSET UNITYSDK_OFFSET(0x8BF5BA0)
#define CLASS_2_624AFA55756E2453_CLASS_2_A6C83DE587736314___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8BF8F00)

inline static constexpr unsigned int Class_2_624AFA55756E2453_Class_2_A6C83DE587736314_TypeDefinitionIndex = 49111;

class Class_2_624AFA55756E2453_Class_2_A6C83DE587736314 : public ::Class_2_624AFA55756E2453_Class_1_BA95C86B072044FD
{
public:
	::System::String* _PoseSwitcherAnchorName_k__BackingField; // 0x40
	::RPG::Client::MonoMapRotationVolumeV2* Field_2_3; // 0x48
	::UnityEngine::Transform* _PoseSwitcherRoot_k__BackingField; // 0x50
	::RPG::GameCore::MapRotationVolumeConfig* Field_2_2; // 0x58

	::System::Void _ctor(::RPG::Client::MonoMapRotationVolumeV2* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::GameCore::GameEntity* a4, ::RPG::GameCore::MapRotationVolumeConfig* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoMapRotationVolumeV2*, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::MapRotationVolumeConfig*))((::PBYTE)hIl2Cpp + CLASS_2_624AFA55756E2453_CLASS_2_A6C83DE587736314__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_624AFA55756E2453_CLASS_2_A6C83DE587736314_DISPOSE_OFFSET))(this);
	}

	::System::Single Method_2_27592B75ABD7B555(::UnityEngine::Vector3 a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_624AFA55756E2453_CLASS_2_A6C83DE587736314_METHOD_2_27592B75ABD7B555_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_2_3FEAB2F99F1368DD(::System::Single a1, ::System::Action_1<::RPG::GameCore::GameEntity*>* a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Quaternion& a4)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::Single, ::System::Action_1<::RPG::GameCore::GameEntity*>*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_2_624AFA55756E2453_CLASS_2_A6C83DE587736314_METHOD_2_3FEAB2F99F1368DD_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_49726A0317FA2747(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_624AFA55756E2453_CLASS_2_A6C83DE587736314_METHOD_2_49726A0317FA2747_OFFSET))(this, a1);
	}

	::System::String* get_PoseSwitcherAnchorName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_624AFA55756E2453_CLASS_2_A6C83DE587736314_GET_POSESWITCHERANCHORNAME_OFFSET))(this);
	}

	::System::Void set_PoseSwitcherAnchorName(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_624AFA55756E2453_CLASS_2_A6C83DE587736314_SET_POSESWITCHERANCHORNAME_OFFSET))(this, value);
	}

	::UnityEngine::Transform* get_PoseSwitcherRoot()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_624AFA55756E2453_CLASS_2_A6C83DE587736314_GET_POSESWITCHERROOT_OFFSET))(this);
	}

	::System::Void set_PoseSwitcherRoot(::UnityEngine::Transform* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_624AFA55756E2453_CLASS_2_A6C83DE587736314_SET_POSESWITCHERROOT_OFFSET))(this, value);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_624AFA55756E2453_CLASS_2_A6C83DE587736314_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_624AFA55756E2453_CLASS_2_A6C83DE587736314___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
