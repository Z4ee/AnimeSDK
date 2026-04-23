#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::Prop { class ChimeraEvaluationMockAnimator; }
namespace RPG::Client::Prop { class ChimeraGameObjectBuilder; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_E1EB622698969937_GET_CHIMERAID_OFFSET UNITYSDK_OFFSET(0x11767040)
#define CLASS_1_E1EB622698969937_GET_UNITYGO_OFFSET UNITYSDK_OFFSET(0x11767060)
#define CLASS_1_E1EB622698969937_METHOD_1_2CE52CE032F120BC_OFFSET UNITYSDK_OFFSET(0x11766FC0)
#define CLASS_1_E1EB622698969937_METHOD_1_2DC57A98C12C3B08_OFFSET UNITYSDK_OFFSET(0x11766F30)
#define CLASS_1_E1EB622698969937_METHOD_1_2DF312D8F1F2AEB0_OFFSET UNITYSDK_OFFSET(0x11766AC0)
#define CLASS_1_E1EB622698969937_METHOD_1_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0x11766E90)
#define CLASS_1_E1EB622698969937_METHOD_1_B0DCF29309694C5D_OFFSET UNITYSDK_OFFSET(0x11766DC0)
#define CLASS_1_E1EB622698969937_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11766E40)
#define CLASS_1_E1EB622698969937_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x11766EE0)
#define CLASS_1_E1EB622698969937_SET_CHIMERAID_OFFSET UNITYSDK_OFFSET(0x11767050)
#define CLASS_1_E1EB622698969937_SET_UNITYGO_OFFSET UNITYSDK_OFFSET(0x11767070)
#define CLASS_1_E1EB622698969937__CTOR_OFFSET UNITYSDK_OFFSET(0x11766A60)

inline static constexpr unsigned int Class_1_E1EB622698969937_TypeDefinitionIndex = 71943;

class Class_1_E1EB622698969937 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_8; // 0x0
	::UnityEngine::Transform* Field_1_6; // 0x10
	::RPG::Client::Prop::ChimeraGameObjectBuilder* Field_1_2; // 0x18
	::UnityEngine::Transform* Field_1_4; // 0x20
	::RPG::Client::Prop::ChimeraEvaluationMockAnimator* Field_1_3; // 0x28
	::UnityEngine::GameObject* Field_1_5; // 0x30
	::UnityEngine::GameObject* _UnityGO_k__BackingField; // 0x38
	::UnityEngine::Transform* Field_1_7; // 0x40
	::System::UInt32 _ChimeraID_k__BackingField; // 0x48

	::System::Void _ctor(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_E1EB622698969937__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2DF312D8F1F2AEB0(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E1EB622698969937_METHOD_1_2DF312D8F1F2AEB0_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1EB622698969937_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1EB622698969937_METHOD_1_A1781348F0A89177_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1EB622698969937_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_1_B0DCF29309694C5D(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E1EB622698969937_METHOD_1_B0DCF29309694C5D_OFFSET))(this, a1);
	}

	::System::Void Method_1_2DC57A98C12C3B08(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E1EB622698969937_METHOD_1_2DC57A98C12C3B08_OFFSET))(this, a1);
	}

	::System::Void Method_1_2CE52CE032F120BC(::UnityEngine::Quaternion a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_E1EB622698969937_METHOD_1_2CE52CE032F120BC_OFFSET))(this, a1);
	}

	::System::UInt32 get_ChimeraID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1EB622698969937_GET_CHIMERAID_OFFSET))(this);
	}

	::System::Void set_ChimeraID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E1EB622698969937_SET_CHIMERAID_OFFSET))(this, value);
	}

	::UnityEngine::GameObject* get_UnityGO()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1EB622698969937_GET_UNITYGO_OFFSET))(this);
	}

	::System::Void set_UnityGO(::UnityEngine::GameObject* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_E1EB622698969937_SET_UNITYGO_OFFSET))(this, value);
	}
};
