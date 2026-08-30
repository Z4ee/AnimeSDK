#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FullBody/Grounder.h"
#include "unitysdk/RPG/Client/FullBody/GrounderQuadruped_Struct_2_F13462FCC9C87AA9.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::FullBody { class Grounding; }
namespace RPG::Client::FullBody { class NewIK; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_FORCERESET_OFFSET UNITYSDK_OFFSET(0xD0C81D0)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_GET_FINALWEIGHT_OFFSET UNITYSDK_OFFSET(0xD0C7C20)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_GET_ISIKUPDATEENABLED_OFFSET UNITYSDK_OFFSET(0xD0C7BD0)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD0C93B0)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_MANUALUPDATE_OFFSET UNITYSDK_OFFSET(0xD0C7C70)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_METHOD_6_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xD0C9500)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_METHOD_6_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0xD0CAC50)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_METHOD_6_218124418542E081_OFFSET UNITYSDK_OFFSET(0xD0CA160)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_METHOD_6_2A74484E06FA28B1_OFFSET UNITYSDK_OFFSET(0xD0C8260)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_METHOD_6_2C4180681033D073_OFFSET UNITYSDK_OFFSET(0xD0C8330)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_METHOD_6_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xD0C7B60)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_METHOD_6_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xD0C7AF0)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_METHOD_6_5E6D8BB697956401_OFFSET UNITYSDK_OFFSET(0xD0CB3A0)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_METHOD_6_5EAB2C5E0D76A6B7_OFFSET UNITYSDK_OFFSET(0xD0C7D40)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_METHOD_6_627C7524E98F4AC5_1_OFFSET UNITYSDK_OFFSET(0xD0CBEA0)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_METHOD_6_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0xD0CBE10)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_METHOD_6_8F0FFD4F86CFEC1A_OFFSET UNITYSDK_OFFSET(0xD0C8B00)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_METHOD_6_AE80CBC984AADFD5_OFFSET UNITYSDK_OFFSET(0xD0CB5C0)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_METHOD_6_CA780F692BF1CA71_OFFSET UNITYSDK_OFFSET(0xD0CBB10)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_METHOD_6_CD28994AFE636FFF_OFFSET UNITYSDK_OFFSET(0xD0C8680)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_METHOD_6_F91F0A5E0D7E03BF_OFFSET UNITYSDK_OFFSET(0xD0C9F30)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD0CBAA0)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD0C8460)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD0C83C0)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_REFRESH_OFFSET UNITYSDK_OFFSET(0xD0CBF30)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_RESETPOSITION_OFFSET UNITYSDK_OFFSET(0xD0C7DF0)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_UPDATE_OFFSET UNITYSDK_OFFSET(0xD0C8590)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED__CTOR_OFFSET UNITYSDK_OFFSET(0xD0CC110)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int GrounderQuadruped_TypeDefinitionIndex = 74135;

	class GrounderQuadruped : public ::RPG::Client::FullBody::Grounder
	{
	public:
		::RPG::Client::FullBody::Grounding* forelegSolver; // 0x50
		::System::Single rootRotationWeight; // 0x58
		::System::Single minRootRotation; // 0x5C
		::System::Single maxRootRotation; // 0x60
		::System::Single rootRotationSpeed; // 0x64
		::System::Single maxLegOffset; // 0x68
		::System::Single maxForeLegOffset; // 0x6C
		::System::Single maintainHeadRotationWeight; // 0x70
		::UnityEngine::Transform* characterRoot; // 0x78
		::UnityEngine::Transform* pelvis; // 0x80
		::UnityEngine::Transform* lastSpineBone; // 0x88
		::UnityEngine::Transform* head; // 0x90
		::Il2CppArray<::RPG::Client::FullBody::NewIK*>* legs; // 0x98
		::Il2CppArray<::RPG::Client::FullBody::NewIK*>* forelegs; // 0xA0
		::UnityEngine::Vector3 gravity; // 0xA8
		::System::Single BlendInTime; // 0xB4
		::System::Single BlendOutTime; // 0xB8
		::System::Single ICFAFBBLJPG; // 0xBC
		::Il2CppArray<::RPG::Client::FullBody::GrounderQuadruped_Struct_2_F13462FCC9C87AA9>* BKFPKONBHJM; // 0xC0
		::UnityEngine::Vector3 IFBHPFNOMCC; // 0xC8
		::UnityEngine::Quaternion NJPHNPJMMKH; // 0xD4
		::UnityEngine::Quaternion HJPEPEBANAI; // 0xE4
		::UnityEngine::Vector3 BCLJMBJAJGK; // 0xF4
		::UnityEngine::Quaternion FKKEPDGBJGN; // 0x100
		::UnityEngine::Quaternion AEJEFGFHJCI; // 0x110
		::System::Int32 OKBAGLLKLHF; // 0x120
		::System::Boolean HDGAJBNDMLK; // 0x124
		::System::Single JEJPHFEPFPN; // 0x128
		::UnityEngine::Transform* JHMEBMOPHKC; // 0x130
		::UnityEngine::Quaternion ICAKHEBFIPE; // 0x138
		::System::Single FALEKIMKIIM; // 0x148
		::UnityEngine::Rigidbody* ADFHLPONDMA; // 0x150

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED__CTOR_OFFSET))(this);
		}

		::System::Void Method_6_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_METHOD_6_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_6_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_METHOD_6_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Boolean get_IsIKUpdateEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_GET_ISIKUPDATEENABLED_OFFSET))(this);
		}

		::System::Single get_FinalWeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_GET_FINALWEIGHT_OFFSET))(this);
		}

		::System::Void ManualUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_MANUALUPDATE_OFFSET))(this, a1);
		}

		::System::Void ResetPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_RESETPOSITION_OFFSET))(this);
		}

		::System::Void ForceReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_FORCERESET_OFFSET))(this);
		}

		::System::Boolean Method_6_2A74484E06FA28B1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_METHOD_6_2A74484E06FA28B1_OFFSET))(this);
		}

		::System::Boolean Method_6_2C4180681033D073(::Il2CppArray<::RPG::Client::FullBody::NewIK*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::Client::FullBody::NewIK*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_METHOD_6_2C4180681033D073_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_UPDATE_OFFSET))(this);
		}

		::System::Void Method_6_5EAB2C5E0D76A6B7(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_METHOD_6_5EAB2C5E0D76A6B7_OFFSET))(this, a1);
		}

		::System::Void Method_6_CD28994AFE636FFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_METHOD_6_CD28994AFE636FFF_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Transform*>* Method_6_8F0FFD4F86CFEC1A(::Il2CppArray<::RPG::Client::FullBody::NewIK*>* a1, ::Il2CppArray<::RPG::Client::FullBody::GrounderQuadruped_Struct_2_F13462FCC9C87AA9>*& a2, ::System::Int32 a3)
		{
			return ((::Il2CppArray<::UnityEngine::Transform*>*(*)(::PVOID, ::Il2CppArray<::RPG::Client::FullBody::NewIK*>*, ::Il2CppArray<::RPG::Client::FullBody::GrounderQuadruped_Struct_2_F13462FCC9C87AA9>*&, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_METHOD_6_8F0FFD4F86CFEC1A_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Method_6_151E25A63D14DDB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_METHOD_6_151E25A63D14DDB0_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_6_F91F0A5E0D7E03BF(::RPG::Client::FullBody::Grounding* a1, ::RPG::Client::FullBody::Grounding* a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::FullBody::Grounding*, ::RPG::Client::FullBody::Grounding*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_METHOD_6_F91F0A5E0D7E03BF_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_218124418542E081()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_METHOD_6_218124418542E081_OFFSET))(this);
		}

		::System::Void Method_6_18982EFD3B740683()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_METHOD_6_18982EFD3B740683_OFFSET))(this);
		}

		::System::Void Method_6_5E6D8BB697956401(::RPG::Client::FullBody::GrounderQuadruped_Struct_2_F13462FCC9C87AA9 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::GrounderQuadruped_Struct_2_F13462FCC9C87AA9, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_METHOD_6_5E6D8BB697956401_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_AE80CBC984AADFD5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_METHOD_6_AE80CBC984AADFD5_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_6_CA780F692BF1CA71(::Il2CppArray<::RPG::Client::FullBody::NewIK*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::FullBody::NewIK*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_METHOD_6_CA780F692BF1CA71_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* Method_6_627C7524E98F4AC5()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_METHOD_6_627C7524E98F4AC5_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Method_6_627C7524E98F4AC5_1()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_METHOD_6_627C7524E98F4AC5_1_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_REFRESH_OFFSET))(this);
		}
	};
}
