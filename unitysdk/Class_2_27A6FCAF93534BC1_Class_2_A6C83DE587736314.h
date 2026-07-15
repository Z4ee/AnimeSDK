#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_27A6FCAF93534BC1_Class_1_BA95C86B072044FD.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoMapRotationVolumeV2; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MapRotationVolumeConfig; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_27A6FCAF93534BC1_CLASS_2_A6C83DE587736314_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17565F10)
#define CLASS_2_27A6FCAF93534BC1_CLASS_2_A6C83DE587736314_GET_POSESWITCHERANCHORNAME_OFFSET UNITYSDK_OFFSET(0x17565F60)
#define CLASS_2_27A6FCAF93534BC1_CLASS_2_A6C83DE587736314_GET_POSESWITCHERROOT_OFFSET UNITYSDK_OFFSET(0x17565F80)
#define CLASS_2_27A6FCAF93534BC1_CLASS_2_A6C83DE587736314_METHOD_2_27592B75ABD7B555_OFFSET UNITYSDK_OFFSET(0x17565300)
#define CLASS_2_27A6FCAF93534BC1_CLASS_2_A6C83DE587736314_METHOD_2_49726A0317FA2747_OFFSET UNITYSDK_OFFSET(0x17563510)
#define CLASS_2_27A6FCAF93534BC1_CLASS_2_A6C83DE587736314_METHOD_2_5C52A09B921F9423_OFFSET UNITYSDK_OFFSET(0x175644B0)
#define CLASS_2_27A6FCAF93534BC1_CLASS_2_A6C83DE587736314_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x17565B30)
#define CLASS_2_27A6FCAF93534BC1_CLASS_2_A6C83DE587736314_SET_POSESWITCHERANCHORNAME_OFFSET UNITYSDK_OFFSET(0x17565F70)
#define CLASS_2_27A6FCAF93534BC1_CLASS_2_A6C83DE587736314_SET_POSESWITCHERROOT_OFFSET UNITYSDK_OFFSET(0x17565F90)
#define CLASS_2_27A6FCAF93534BC1_CLASS_2_A6C83DE587736314__CTOR_OFFSET UNITYSDK_OFFSET(0x17563100)

inline static constexpr unsigned int Class_2_27A6FCAF93534BC1_Class_2_A6C83DE587736314_TypeDefinitionIndex = 57907;

class Class_2_27A6FCAF93534BC1_Class_2_A6C83DE587736314 : public ::Class_2_27A6FCAF93534BC1_Class_1_BA95C86B072044FD
{
public:
	::RPG::GameCore::MapRotationVolumeConfig* Field_2_0; // 0x40
	::UnityEngine::Transform* _PoseSwitcherRoot_k__BackingField; // 0x48
	::System::String* _PoseSwitcherAnchorName_k__BackingField; // 0x50
	::RPG::Client::MonoMapRotationVolumeV2* Field_2_3; // 0x58

	::System::Void _ctor(::RPG::Client::MonoMapRotationVolumeV2* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::GameCore::GameEntity* a4, ::RPG::GameCore::MapRotationVolumeConfig* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoMapRotationVolumeV2*, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::MapRotationVolumeConfig*))((::PBYTE)hIl2Cpp + CLASS_2_27A6FCAF93534BC1_CLASS_2_A6C83DE587736314__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27A6FCAF93534BC1_CLASS_2_A6C83DE587736314_DISPOSE_OFFSET))(this);
	}

	::System::Single Method_2_27592B75ABD7B555(::UnityEngine::Vector3 a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_27A6FCAF93534BC1_CLASS_2_A6C83DE587736314_METHOD_2_27592B75ABD7B555_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_2_5C52A09B921F9423(::System::Single a1, ::System::Action_1<::RPG::GameCore::GameEntity*>* a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Quaternion& a4)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::Single, ::System::Action_1<::RPG::GameCore::GameEntity*>*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_2_27A6FCAF93534BC1_CLASS_2_A6C83DE587736314_METHOD_2_5C52A09B921F9423_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_49726A0317FA2747(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_27A6FCAF93534BC1_CLASS_2_A6C83DE587736314_METHOD_2_49726A0317FA2747_OFFSET))(this, a1);
	}

	::System::String* get_PoseSwitcherAnchorName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27A6FCAF93534BC1_CLASS_2_A6C83DE587736314_GET_POSESWITCHERANCHORNAME_OFFSET))(this);
	}

	::System::Void set_PoseSwitcherAnchorName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_27A6FCAF93534BC1_CLASS_2_A6C83DE587736314_SET_POSESWITCHERANCHORNAME_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_PoseSwitcherRoot()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27A6FCAF93534BC1_CLASS_2_A6C83DE587736314_GET_POSESWITCHERROOT_OFFSET))(this);
	}

	::System::Void set_PoseSwitcherRoot(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_27A6FCAF93534BC1_CLASS_2_A6C83DE587736314_SET_POSESWITCHERROOT_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27A6FCAF93534BC1_CLASS_2_A6C83DE587736314_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}
};
