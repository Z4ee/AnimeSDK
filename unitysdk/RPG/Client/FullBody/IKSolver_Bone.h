#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FullBody/IKSolver_Point.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FULLBODY_IKSOLVER_BONE_METHOD_2_0EC9AEC5DC94C3DD_1_OFFSET UNITYSDK_OFFSET(0x973A410)
#define RPG_CLIENT_FULLBODY_IKSOLVER_BONE_METHOD_2_0EC9AEC5DC94C3DD_OFFSET UNITYSDK_OFFSET(0x9739AD0)
#define RPG_CLIENT_FULLBODY_IKSOLVER_BONE_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x973A7B0)
#define RPG_CLIENT_FULLBODY_IKSOLVER_BONE_METHOD_2_F4F7B088C1B5D6D7_OFFSET UNITYSDK_OFFSET(0x9739F60)
#define RPG_CLIENT_FULLBODY_IKSOLVER_BONE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x973A880)
#define RPG_CLIENT_FULLBODY_IKSOLVER_BONE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x973A8C0)
#define RPG_CLIENT_FULLBODY_IKSOLVER_BONE__CTOR_OFFSET UNITYSDK_OFFSET(0x973A820)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int IKSolver_Bone_TypeDefinitionIndex = 60914;

	class IKSolver_Bone : public ::RPG::Client::FullBody::IKSolver_Point
	{
	public:
		::System::Single length; // 0x58
		::System::Single sqrMag; // 0x5C
		::UnityEngine::Vector3 axis; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_BONE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_BONE__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::UnityEngine::Transform* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_BONE__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_0EC9AEC5DC94C3DD(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_BONE_METHOD_2_0EC9AEC5DC94C3DD_OFFSET))(this, a1, a2);
		}

		static ::System::Void Method_2_F4F7B088C1B5D6D7(::Il2CppArray<::RPG::Client::FullBody::IKSolver_Bone*>* a1, ::System::Int32 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::Il2CppArray<::RPG::Client::FullBody::IKSolver_Bone*>*, ::System::Int32, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_BONE_METHOD_2_F4F7B088C1B5D6D7_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void Method_2_0EC9AEC5DC94C3DD_1(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_BONE_METHOD_2_0EC9AEC5DC94C3DD_1_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_BONE_METHOD_2_4343F372F34C05BF_OFFSET))(this);
		}
	};
}
