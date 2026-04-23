#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FullBody/IKSolver.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::FullBody { class IKSolverTrigonometric_TrigonometricBone; }
namespace RPG::Client::FullBody { class IKSolver_Point; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_0B46B29B42A81C6F_OFFSET UNITYSDK_OFFSET(0xA406770)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_2E9EFD1763526B05_OFFSET UNITYSDK_OFFSET(0xA4069C0)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_33C4B285E4B1271C_OFFSET UNITYSDK_OFFSET(0xA408760)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_383F5EE18A2A3914_OFFSET UNITYSDK_OFFSET(0xA407470)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_412F2CEBDE691C81_OFFSET UNITYSDK_OFFSET(0xA4063E0)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0xA406440)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_5A6EAD1FC0CCA71D_OFFSET UNITYSDK_OFFSET(0xA406C70)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_65E5A1C0105C0B9E_OFFSET UNITYSDK_OFFSET(0xA406570)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_7970C5CAFFD9CDA1_OFFSET UNITYSDK_OFFSET(0xA405F10)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_8EE6C10C77964FB6_OFFSET UNITYSDK_OFFSET(0xA4064C0)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_A0C2164E6BC7E6E6_OFFSET UNITYSDK_OFFSET(0xA407B10)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0xA406520)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_A742B18FC98A9593_OFFSET UNITYSDK_OFFSET(0xA406D30)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_A84CEAF7AFA573B3_OFFSET UNITYSDK_OFFSET(0xA407C30)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_B768DA94E3FD91D9_OFFSET UNITYSDK_OFFSET(0xA406170)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xA405E50)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xA405ED0)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA405DD0)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xA407800)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0xA4068B0)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_E52129E82CD2D7F8_OFFSET UNITYSDK_OFFSET(0xA406930)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0xA407970)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC__CTOR_OFFSET UNITYSDK_OFFSET(0xA405A30)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int IKSolverTrigonometric_TypeDefinitionIndex = 68374;

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

		::UnityEngine::Quaternion Method_2_8EE6C10C77964FB6()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_8EE6C10C77964FB6_OFFSET))(this);
		}

		::System::Single Method_2_A36150C5DCC8409E()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_A36150C5DCC8409E_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::FullBody::IKSolver_Point*>* Method_2_65E5A1C0105C0B9E()
		{
			return ((::Il2CppArray<::RPG::Client::FullBody::IKSolver_Point*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_65E5A1C0105C0B9E_OFFSET))(this);
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

		::System::Void Method_2_D0BD1377F2594D33()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
		}

		::System::Boolean Method_2_A0C2164E6BC7E6E6()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_A0C2164E6BC7E6E6_OFFSET))(this);
		}

		::System::Void Method_2_E7EF6BC52B28648C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_E7EF6BC52B28648C_OFFSET))(this);
		}

		::System::Void Method_2_A84CEAF7AFA573B3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_METHOD_2_A84CEAF7AFA573B3_OFFSET))(this);
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
