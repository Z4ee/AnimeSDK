#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FullBody/Grounding_Quality.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::FullBody { class Grounding_Class_1_2B3895D93BBCAAD0; }
namespace RPG::Client::FullBody { class Grounding_Class_1_BF264403995EDA8F; }
namespace RPG::Client::FullBody { class Grounding_Class_3_25BFA3B13C8F2459; }
namespace RPG::Client::FullBody { class Grounding_Class_3_443CA02E4E068003; }
namespace RPG::Client::FullBody { class Grounding_Class_3_594C4D3848A7A3AB; }
namespace RPG::Client::FullBody { class Grounding_Class_3_6D36CA8DB48257A4; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FULLBODY_GROUNDING_GET_ISGROUNDED_OFFSET UNITYSDK_OFFSET(0x193733D0)
#define RPG_CLIENT_FULLBODY_GROUNDING_GET_LEGS_OFFSET UNITYSDK_OFFSET(0x19373390)
#define RPG_CLIENT_FULLBODY_GROUNDING_GET_PELVIS_OFFSET UNITYSDK_OFFSET(0x193733B0)
#define RPG_CLIENT_FULLBODY_GROUNDING_GET_ROOTGROUNDED_OFFSET UNITYSDK_OFFSET(0x19373470)
#define RPG_CLIENT_FULLBODY_GROUNDING_GET_ROOTHIT_OFFSET UNITYSDK_OFFSET(0x19373410)
#define RPG_CLIENT_FULLBODY_GROUNDING_GET_ROOT_OFFSET UNITYSDK_OFFSET(0x193733F0)
#define RPG_CLIENT_FULLBODY_GROUNDING_GET_UP_OFFSET UNITYSDK_OFFSET(0x193738F0)
#define RPG_CLIENT_FULLBODY_GROUNDING_GET_USEROOTROTATION_OFFSET UNITYSDK_OFFSET(0x193756D0)
#define RPG_CLIENT_FULLBODY_GROUNDING_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x19373E70)
#define RPG_CLIENT_FULLBODY_GROUNDING_METHOD_1_2BE9489A09D4AB3D_OFFSET UNITYSDK_OFFSET(0x1936FD10)
#define RPG_CLIENT_FULLBODY_GROUNDING_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x1936EE30)
#define RPG_CLIENT_FULLBODY_GROUNDING_METHOD_1_611142A6ECF0D805_OFFSET UNITYSDK_OFFSET(0x19373BD0)
#define RPG_CLIENT_FULLBODY_GROUNDING_METHOD_1_753A3CECCA76D6CD_OFFSET UNITYSDK_OFFSET(0x193758B0)
#define RPG_CLIENT_FULLBODY_GROUNDING_METHOD_1_9317D1B3EB9B664A_OFFSET UNITYSDK_OFFSET(0x193734D0)
#define RPG_CLIENT_FULLBODY_GROUNDING_METHOD_1_96A53A17AC5D0E93_OFFSET UNITYSDK_OFFSET(0x19371E00)
#define RPG_CLIENT_FULLBODY_GROUNDING_METHOD_1_A1C464B05BB7A5C1_OFFSET UNITYSDK_OFFSET(0x19375CD0)
#define RPG_CLIENT_FULLBODY_GROUNDING_METHOD_1_B81930E0C3DB546E_OFFSET UNITYSDK_OFFSET(0x19375120)
#define RPG_CLIENT_FULLBODY_GROUNDING_METHOD_1_C1B25D3B3F94E126_OFFSET UNITYSDK_OFFSET(0x19375A30)
#define RPG_CLIENT_FULLBODY_GROUNDING_SET_ISGROUNDED_OFFSET UNITYSDK_OFFSET(0x193733E0)
#define RPG_CLIENT_FULLBODY_GROUNDING_SET_LEGS_OFFSET UNITYSDK_OFFSET(0x193733A0)
#define RPG_CLIENT_FULLBODY_GROUNDING_SET_PELVIS_OFFSET UNITYSDK_OFFSET(0x193733C0)
#define RPG_CLIENT_FULLBODY_GROUNDING_SET_ROOTHIT_OFFSET UNITYSDK_OFFSET(0x19373440)
#define RPG_CLIENT_FULLBODY_GROUNDING_SET_ROOT_OFFSET UNITYSDK_OFFSET(0x19373400)
#define RPG_CLIENT_FULLBODY_GROUNDING__CTOR_OFFSET UNITYSDK_OFFSET(0x1936E3A0)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int Grounding_TypeDefinitionIndex = 74138;

	class Grounding : public ::System::Object
	{
	public:
		::UnityEngine::LayerMask layers; // 0x10
		::System::Single maxStep; // 0x14
		::System::Single heightOffset; // 0x18
		::System::Single footSpeed; // 0x1C
		::System::Single footLerpHalfTime; // 0x20
		::System::Single footRadius; // 0x24
		::System::Single footCenterOffset; // 0x28
		::System::Single prediction; // 0x2C
		::System::Single footRotationWeight; // 0x30
		::System::Single footRotationSpeed; // 0x34
		::System::Single maxFootRotationAngle; // 0x38
		::System::Boolean rotateSolver; // 0x3C
		::System::Single pelvisSpeed; // 0x40
		::System::Single pelvisDamper; // 0x44
		::System::Single lowerPelvisWeight; // 0x48
		::System::Single liftPelvisWeight; // 0x4C
		::System::Single rootSphereCastRadius; // 0x50
		::System::Boolean overstepFallsDown; // 0x54
		::RPG::Client::FullBody::Grounding_Quality quality; // 0x58
		::System::Boolean forceUseWorldRotateUp; // 0x5C
		::Il2CppArray<::RPG::Client::FullBody::Grounding_Class_1_BF264403995EDA8F*>* _legs_k__BackingField; // 0x60
		::RPG::Client::FullBody::Grounding_Class_1_2B3895D93BBCAAD0* _pelvis_k__BackingField; // 0x68
		::System::Boolean _isGrounded_k__BackingField; // 0x70
		::UnityEngine::Transform* _root_k__BackingField; // 0x78
		::UnityEngine::RaycastHit _rootHit_k__BackingField; // 0x80
		::RPG::Client::FullBody::Grounding_Class_3_443CA02E4E068003* Raycast; // 0xB0
		::RPG::Client::FullBody::Grounding_Class_3_594C4D3848A7A3AB* CapsuleCast; // 0xB8
		::RPG::Client::FullBody::Grounding_Class_3_25BFA3B13C8F2459* SphereCast; // 0xC0
		::RPG::Client::FullBody::Grounding_Class_3_6D36CA8DB48257A4* BoxCast; // 0xC8
		::System::Boolean initiated; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::FullBody::Grounding_Class_1_BF264403995EDA8F*>* get_legs()
		{
			return ((::Il2CppArray<::RPG::Client::FullBody::Grounding_Class_1_BF264403995EDA8F*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_GET_LEGS_OFFSET))(this);
		}

		::System::Void set_legs(::Il2CppArray<::RPG::Client::FullBody::Grounding_Class_1_BF264403995EDA8F*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::FullBody::Grounding_Class_1_BF264403995EDA8F*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_SET_LEGS_OFFSET))(this, a1);
		}

		::RPG::Client::FullBody::Grounding_Class_1_2B3895D93BBCAAD0* get_pelvis()
		{
			return ((::RPG::Client::FullBody::Grounding_Class_1_2B3895D93BBCAAD0*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_GET_PELVIS_OFFSET))(this);
		}

		::System::Void set_pelvis(::RPG::Client::FullBody::Grounding_Class_1_2B3895D93BBCAAD0* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::Grounding_Class_1_2B3895D93BBCAAD0*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_SET_PELVIS_OFFSET))(this, a1);
		}

		::System::Boolean get_isGrounded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_GET_ISGROUNDED_OFFSET))(this);
		}

		::System::Void set_isGrounded(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_SET_ISGROUNDED_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_root()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_GET_ROOT_OFFSET))(this);
		}

		::System::Void set_root(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_SET_ROOT_OFFSET))(this, a1);
		}

		::UnityEngine::RaycastHit get_rootHit()
		{
			return ((::UnityEngine::RaycastHit(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_GET_ROOTHIT_OFFSET))(this);
		}

		::System::Void set_rootHit(::UnityEngine::RaycastHit a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_SET_ROOTHIT_OFFSET))(this, a1);
		}

		::System::Boolean get_rootGrounded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_GET_ROOTGROUNDED_OFFSET))(this);
		}

		::UnityEngine::RaycastHit Method_1_9317D1B3EB9B664A(::System::Single a1)
		{
			return ((::UnityEngine::RaycastHit(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_METHOD_1_9317D1B3EB9B664A_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_611142A6ECF0D805(::System::String*& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_METHOD_1_611142A6ECF0D805_OFFSET))(this, a1);
		}

		::System::Void Method_1_2BE9489A09D4AB3D(::UnityEngine::Transform* a1, ::Il2CppArray<::UnityEngine::Transform*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::Il2CppArray<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_METHOD_1_2BE9489A09D4AB3D_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_96A53A17AC5D0E93()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_METHOD_1_96A53A17AC5D0E93_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_1_B81930E0C3DB546E()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_METHOD_1_B81930E0C3DB546E_OFFSET))(this);
		}

		::System::Void Method_1_4307B2A4B4A12C1A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
		}

		::System::Void Method_1_050E70FEDB783306(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_up()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_GET_UP_OFFSET))(this);
		}

		::System::Single Method_1_753A3CECCA76D6CD(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_METHOD_1_753A3CECCA76D6CD_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 Method_1_C1B25D3B3F94E126(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_METHOD_1_C1B25D3B3F94E126_OFFSET))(this, a1);
		}

		::System::Boolean get_useRootRotation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_GET_USEROOTROTATION_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_1_A1C464B05BB7A5C1()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_METHOD_1_A1C464B05BB7A5C1_OFFSET))(this);
		}
	};
}
