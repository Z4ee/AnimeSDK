#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::FullBody { class IKSolver_Bone; }
namespace RPG::Client::FullBody { class IKSolver_Class_3_50D343C44D28BEFB_10; }
namespace RPG::Client::FullBody { class IKSolver_Point; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FULLBODY_IKSOLVER_GET_INITIATED_OFFSET UNITYSDK_OFFSET(0xBA94EE0)
#define RPG_CLIENT_FULLBODY_IKSOLVER_METHOD_1_03E2B9212B4B6EAF_OFFSET UNITYSDK_OFFSET(0xBA94EA0)
#define RPG_CLIENT_FULLBODY_IKSOLVER_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0xBA94F00)
#define RPG_CLIENT_FULLBODY_IKSOLVER_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xBA94C70)
#define RPG_CLIENT_FULLBODY_IKSOLVER_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xBA94B10)
#define RPG_CLIENT_FULLBODY_IKSOLVER_METHOD_1_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0xBA94D70)
#define RPG_CLIENT_FULLBODY_IKSOLVER_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0xBA94E20)
#define RPG_CLIENT_FULLBODY_IKSOLVER_METHOD_1_48312DE5F57AE9EE_OFFSET UNITYSDK_OFFSET(0xBA94F50)
#define RPG_CLIENT_FULLBODY_IKSOLVER_METHOD_1_8D103DA3EDA22B8C_OFFSET UNITYSDK_OFFSET(0xBA95070)
#define RPG_CLIENT_FULLBODY_IKSOLVER_METHOD_1_9AD47D8DC12F1689_OFFSET UNITYSDK_OFFSET(0xBA94B70)
#define RPG_CLIENT_FULLBODY_IKSOLVER_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0xBA94DD0)
#define RPG_CLIENT_FULLBODY_IKSOLVER_METHOD_1_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0xBA94D10)
#define RPG_CLIENT_FULLBODY_IKSOLVER_SET_INITIATED_OFFSET UNITYSDK_OFFSET(0xBA94EF0)
#define RPG_CLIENT_FULLBODY_IKSOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0xBA955E0)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int IKSolver_TypeDefinitionIndex = 69335;

	class IKSolver : public ::System::Object
	{
	public:
		::System::Boolean executedInEditor; // 0x10
		::UnityEngine::Vector3 IKPosition; // 0x14
		::System::Single IKPositionWeight; // 0x20
		::System::Boolean _initiated_k__BackingField; // 0x24
		::RPG::Client::FullBody::IKSolver_Class_3_50D343C44D28BEFB_10* OnPreInitiate; // 0x28
		::RPG::Client::FullBody::IKSolver_Class_3_50D343C44D28BEFB_10* OnPostInitiate; // 0x30
		::RPG::Client::FullBody::IKSolver_Class_3_50D343C44D28BEFB_10* OnPreUpdate; // 0x38
		::RPG::Client::FullBody::IKSolver_Class_3_50D343C44D28BEFB_10* OnPostUpdate; // 0x40
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

		::System::Void Method_1_9AD47D8DC12F1689(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_METHOD_1_9AD47D8DC12F1689_OFFSET))(this, a1);
		}

		::System::Void Method_1_30D1209326FA87FC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_METHOD_1_30D1209326FA87FC_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_1_F10A0D072D26C4BF()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_METHOD_1_F10A0D072D26C4BF_OFFSET))(this);
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

		::System::Void set_initiated(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_SET_INITIATED_OFFSET))(this, a1);
		}

		::System::Void Method_1_050E70FEDB783306(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
		}

		static ::UnityEngine::Transform* Method_1_48312DE5F57AE9EE(::Il2CppArray<::RPG::Client::FullBody::IKSolver_Bone*>* a1)
		{
			return ((::UnityEngine::Transform*(*)(::Il2CppArray<::RPG::Client::FullBody::IKSolver_Bone*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_METHOD_1_48312DE5F57AE9EE_OFFSET))(a1);
		}

		static ::System::Single Method_1_8D103DA3EDA22B8C(::Il2CppArray<::RPG::Client::FullBody::IKSolver_Bone*>*& a1)
		{
			return ((::System::Single(*)(::Il2CppArray<::RPG::Client::FullBody::IKSolver_Bone*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_METHOD_1_8D103DA3EDA22B8C_OFFSET))(a1);
		}
	};
}
