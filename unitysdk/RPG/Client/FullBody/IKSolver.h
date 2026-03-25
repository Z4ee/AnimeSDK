#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::FullBody { class IKSolver_Bone; }
namespace RPG::Client::FullBody { class IKSolver_Class_3_50D343C44D28BEFB_9; }
namespace RPG::Client::FullBody { class IKSolver_Point; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FULLBODY_IKSOLVER_GET_INITIATED_OFFSET UNITYSDK_OFFSET(0x9739360)
#define RPG_CLIENT_FULLBODY_IKSOLVER_METHOD_1_03E2B9212B4B6EAF_OFFSET UNITYSDK_OFFSET(0x9739320)
#define RPG_CLIENT_FULLBODY_IKSOLVER_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x9739380)
#define RPG_CLIENT_FULLBODY_IKSOLVER_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x9738CF0)
#define RPG_CLIENT_FULLBODY_IKSOLVER_METHOD_1_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0x97391F0)
#define RPG_CLIENT_FULLBODY_IKSOLVER_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x97392A0)
#define RPG_CLIENT_FULLBODY_IKSOLVER_METHOD_1_48312DE5F57AE9EE_OFFSET UNITYSDK_OFFSET(0x97393D0)
#define RPG_CLIENT_FULLBODY_IKSOLVER_METHOD_1_8FD0952225841B46_OFFSET UNITYSDK_OFFSET(0x9739100)
#define RPG_CLIENT_FULLBODY_IKSOLVER_METHOD_1_A33D4C2DBD15AB2A_OFFSET UNITYSDK_OFFSET(0x9738D50)
#define RPG_CLIENT_FULLBODY_IKSOLVER_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x9739250)
#define RPG_CLIENT_FULLBODY_IKSOLVER_METHOD_1_AD86BB23236ADD43_OFFSET UNITYSDK_OFFSET(0x97394F0)
#define RPG_CLIENT_FULLBODY_IKSOLVER_METHOD_1_FA662896843C137A_OFFSET UNITYSDK_OFFSET(0x9739190)
#define RPG_CLIENT_FULLBODY_IKSOLVER_SET_INITIATED_OFFSET UNITYSDK_OFFSET(0x9739370)
#define RPG_CLIENT_FULLBODY_IKSOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x9739AC0)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int IKSolver_TypeDefinitionIndex = 60912;

	class IKSolver : public ::System::Object
	{
	public:
		::System::Boolean executedInEditor; // 0x10
		::UnityEngine::Vector3 IKPosition; // 0x14
		::System::Single IKPositionWeight; // 0x20
		::System::Boolean _initiated_k__BackingField; // 0x24
		::RPG::Client::FullBody::IKSolver_Class_3_50D343C44D28BEFB_9* OnPreInitiate; // 0x28
		::RPG::Client::FullBody::IKSolver_Class_3_50D343C44D28BEFB_9* OnPostInitiate; // 0x30
		::RPG::Client::FullBody::IKSolver_Class_3_50D343C44D28BEFB_9* OnPreUpdate; // 0x38
		::RPG::Client::FullBody::IKSolver_Class_3_50D343C44D28BEFB_9* OnPostUpdate; // 0x40
		::System::Boolean firstInitiation; // 0x48
		::UnityEngine::Transform* root; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_METHOD_1_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_1_A33D4C2DBD15AB2A(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_METHOD_1_A33D4C2DBD15AB2A_OFFSET))(this, a1);
		}

		::System::Void Method_1_8FD0952225841B46()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_METHOD_1_8FD0952225841B46_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_1_FA662896843C137A()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_METHOD_1_FA662896843C137A_OFFSET))(this);
		}

		::System::Void Method_1_40E490E2772D5D75(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_METHOD_1_40E490E2772D5D75_OFFSET))(this, a1);
		}

		::System::Single Method_1_A36150C5DCC8409E()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
		}

		::System::Void Method_1_479759059E440327(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_METHOD_1_479759059E440327_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* Method_1_03E2B9212B4B6EAF()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_METHOD_1_03E2B9212B4B6EAF_OFFSET))(this);
		}

		::System::Boolean get_initiated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_GET_INITIATED_OFFSET))(this);
		}

		::System::Void set_initiated(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_SET_INITIATED_OFFSET))(this, value);
		}

		::System::Void Method_1_050E70FEDB783306(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
		}

		static ::UnityEngine::Transform* Method_1_48312DE5F57AE9EE(::Il2CppArray<::RPG::Client::FullBody::IKSolver_Bone*>* a1)
		{
			return ((::UnityEngine::Transform*(*)(::Il2CppArray<::RPG::Client::FullBody::IKSolver_Bone*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_METHOD_1_48312DE5F57AE9EE_OFFSET))(a1);
		}

		static ::System::Single Method_1_AD86BB23236ADD43(::Il2CppArray<::RPG::Client::FullBody::IKSolver_Bone*>*& a1)
		{
			return ((::System::Single(*)(::Il2CppArray<::RPG::Client::FullBody::IKSolver_Bone*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_METHOD_1_AD86BB23236ADD43_OFFSET))(a1);
		}
	};
}
