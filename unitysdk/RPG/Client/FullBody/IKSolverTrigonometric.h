#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FullBody/IKSolver.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::FullBody { class IKSolverTrigonometric_TrigonometricBone; }
namespace RPG::Client::FullBody { class IKSolver_Point; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_03100CB4894A3883_OFFSET UNITYSDK_OFFSET(0xD0E6EE0)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_0B46B29B42A81C6F_OFFSET UNITYSDK_OFFSET(0xD0E7080)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xD0E8110)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_2E9EFD1763526B05_OFFSET UNITYSDK_OFFSET(0xD0E72D0)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_33C4B285E4B1271C_OFFSET UNITYSDK_OFFSET(0xD0E91B0)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_383F5EE18A2A3914_OFFSET UNITYSDK_OFFSET(0xD0E7D80)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_412F2CEBDE691C81_OFFSET UNITYSDK_OFFSET(0xD0E6D50)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0xD0E6DB0)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_5A6EAD1FC0CCA71D_OFFSET UNITYSDK_OFFSET(0xD0E7580)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_7970C5CAFFD9CDA1_OFFSET UNITYSDK_OFFSET(0xD0E6880)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_A0C2164E6BC7E6E6_OFFSET UNITYSDK_OFFSET(0xD0E8490)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_A1C7122184516C18_OFFSET UNITYSDK_OFFSET(0xD0E85B0)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0xD0E6E90)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_A742B18FC98A9593_OFFSET UNITYSDK_OFFSET(0xD0E7640)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_B768DA94E3FD91D9_OFFSET UNITYSDK_OFFSET(0xD0E6AE0)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_C34AC80B04BCFF1B_OFFSET UNITYSDK_OFFSET(0xD0E6E30)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xD0E97C0)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xD0E9800)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD0E9780)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0xD0E71C0)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_E52129E82CD2D7F8_OFFSET UNITYSDK_OFFSET(0xD0E7240)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0xD0E82F0)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC__CTOR_OFFSET UNITYSDK_OFFSET(0xD0E6540)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int IKSolverTrigonometric_TypeDefinitionIndex = 74169;

	class IKSolverTrigonometric : public ::RPG::Client::FullBody::IKSolver
	{
	public:
		::UnityEngine::Transform* target; // 0x58
		::System::Single IKRotationWeight; // 0x60
		::UnityEngine::Quaternion IKRotation; // 0x64
		::UnityEngine::Vector3 bendNormal; // 0x74
		::RPG::Client::FullBody::IKSolverTrigonometric_TrigonometricBone* bone1; // 0x80
		::RPG::Client::FullBody::IKSolverTrigonometric_TrigonometricBone* bone2; // 0x88
		::RPG::Client::FullBody::IKSolverTrigonometric_TrigonometricBone* bone3; // 0x90
		::UnityEngine::Vector3 weightIKPosition; // 0x98
		::System::Boolean directHierarchy; // 0xA4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_7970C5CAFFD9CDA1(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_7970C5CAFFD9CDA1_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_B768DA94E3FD91D9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_B768DA94E3FD91D9_OFFSET))(this);
		}

		::System::Void Method_2_412F2CEBDE691C81(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_412F2CEBDE691C81_OFFSET))(this, a1);
		}

		::System::Void Method_2_479759059E440327(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_479759059E440327_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion Method_2_C34AC80B04BCFF1B()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_C34AC80B04BCFF1B_OFFSET))(this);
		}

		::System::Single Method_2_A36150C5DCC8409E()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_A36150C5DCC8409E_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::FullBody::IKSolver_Point*>* Method_2_03100CB4894A3883()
		{
			return ((::Il2CppArray<::RPG::Client::FullBody::IKSolver_Point*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_03100CB4894A3883_OFFSET))(this);
		}

		::RPG::Client::FullBody::IKSolver_Point* Method_2_0B46B29B42A81C6F(::UnityEngine::Transform* a1)
		{
			return ((::RPG::Client::FullBody::IKSolver_Point*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_0B46B29B42A81C6F_OFFSET))(this, a1);
		}

		::System::Void Method_2_D3129FE8DF635B48()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_D3129FE8DF635B48_OFFSET))(this);
		}

		::System::Void Method_2_E52129E82CD2D7F8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_E52129E82CD2D7F8_OFFSET))(this);
		}

		::System::Boolean Method_2_2E9EFD1763526B05(::System::String*& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_2E9EFD1763526B05_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_5A6EAD1FC0CCA71D(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3, ::UnityEngine::Transform* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_5A6EAD1FC0CCA71D_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void Method_2_A742B18FC98A9593(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_A742B18FC98A9593_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::UnityEngine::Vector3 Method_2_383F5EE18A2A3914(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_383F5EE18A2A3914_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Void Method_2_1290EA767C459179()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_1290EA767C459179_OFFSET))(this);
		}

		::System::Boolean Method_2_A0C2164E6BC7E6E6()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_A0C2164E6BC7E6E6_OFFSET))(this);
		}

		::System::Void Method_2_E7EF6BC52B28648C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_E7EF6BC52B28648C_OFFSET))(this);
		}

		::System::Void Method_2_A1C7122184516C18()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_A1C7122184516C18_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_2_33C4B285E4B1271C(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_33C4B285E4B1271C_OFFSET))(this, a1, a2);
		}
	};
}
