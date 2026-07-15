#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/RPG/Client/TransformPatrolAnimBehavior_ControlledAnimatorParameter.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class TransformPatrolAnim; }
namespace RPG::Client { class TransformPatrolAnimBehavior_PatrolPoint; }

#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_GET_ARTBOUNDFULL_OFFSET UNITYSDK_OFFSET(0x1989CE70)
#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_GET_ARTBOUND_OFFSET UNITYSDK_OFFSET(0x1989D5D0)
#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0x1989DD80)
#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_METHOD_3_13D8773148BD1DCD_OFFSET UNITYSDK_OFFSET(0x198A0640)
#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_METHOD_3_3C56C1AF247AC1EC_OFFSET UNITYSDK_OFFSET(0x1989DDC0)
#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x1989DE10)
#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1989DAB0)
#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_METHOD_3_48EE6F8CA58AC368_OFFSET UNITYSDK_OFFSET(0x1989DFC0)
#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_METHOD_3_5587AE4B03E68C58_OFFSET UNITYSDK_OFFSET(0x198A04D0)
#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_METHOD_3_62167C28EC14CC63_OFFSET UNITYSDK_OFFSET(0x1989DB20)
#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_METHOD_3_6A8EC1C1458586F1_1_OFFSET UNITYSDK_OFFSET(0x1989F950)
#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_METHOD_3_6A8EC1C1458586F1_OFFSET UNITYSDK_OFFSET(0x1989F1B0)
#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_METHOD_3_9F8F6511E8EF1235_OFFSET UNITYSDK_OFFSET(0x1989E360)
#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_METHOD_3_A9A50625EA2594BB_OFFSET UNITYSDK_OFFSET(0x1989E540)
#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_METHOD_3_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0x198A03F0)
#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x198A0460)
#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_METHOD_3_B1EA412ACAE87C15_OFFSET UNITYSDK_OFFSET(0x198A00F0)
#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1989DEE0)
#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x1989DF20)
#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_METHOD_3_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x198A03B0)
#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_METHOD_3_CA373AA1C7054598_4_OFFSET UNITYSDK_OFFSET(0x198A0970)
#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1989DEA0)
#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0x1989DF60)
#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x198A0A30)
#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x198A09C0)

namespace RPG::Client
{
	inline static constexpr unsigned int TransformPatrolAnimBehavior_TypeDefinitionIndex = 67183;

	class TransformPatrolAnimBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Int32* StaticGet__SpeedRatioAnimatorHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TransformPatrolAnimBehavior_TypeDefinitionIndex)->GetStaticField(0xCA20);
		}
		static ::System::Int32* StaticGet__StayAnimatorHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TransformPatrolAnimBehavior_TypeDefinitionIndex)->GetStaticField(0xCA24);
		}
		static ::System::Int32* StaticGet__CurrentPatrolPointAnimatorHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TransformPatrolAnimBehavior_TypeDefinitionIndex)->GetStaticField(0xCA28);
		}
		::System::Single _StayTime; // 0x38
		::System::Single _MaxSpeed; // 0x3C
		::System::Single _CurrentSpeed; // 0x40
		::System::Single _CurrentProgress; // 0x44
		::RPG::Client::TransformPatrolAnimBehavior_PatrolPoint* _LastPatrolPoint; // 0x48
		::RPG::Client::TransformPatrolAnimBehavior_PatrolPoint* _NextPatrolPoint; // 0x50
		::System::Single _DistanceToLastStop; // 0x58
		::System::Single _DistanceToNextStop; // 0x5C
		::UnityEngine::Vector3 _LastPointPosition; // 0x60
		::UnityEngine::Quaternion _LastPointRotation; // 0x6C
		::UnityEngine::Vector3 _RelativeTransition; // 0x7C
		::UnityEngine::Quaternion _RelativeRotation; // 0x88
		::UnityEngine::Vector3 _RelativeScale; // 0x98
		::System::Boolean _Inited; // 0xA4
		::System::Boolean _Staying; // 0xA5
		::System::Boolean _Backing; // 0xA6
		::System::Single _DelayTime; // 0xA8
		::RPG::Client::TransformPatrolAnimBehavior_ControlledAnimatorParameter _ControlledAnimatorParametersChecked; // 0xAC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR__CCTOR_OFFSET))();
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_62167C28EC14CC63()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_METHOD_3_62167C28EC14CC63_OFFSET))(this);
		}

		::System::Void Method_3_3C56C1AF247AC1EC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_METHOD_3_3C56C1AF247AC1EC_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_METHOD_3_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_METHOD_3_CA373AA1C7054598_2_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void Method_3_48EE6F8CA58AC368(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_METHOD_3_48EE6F8CA58AC368_OFFSET))(this, a1);
		}

		::System::Void Method_3_6A8EC1C1458586F1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_METHOD_3_6A8EC1C1458586F1_OFFSET))(this, a1);
		}

		::System::Void Method_3_6A8EC1C1458586F1_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_METHOD_3_6A8EC1C1458586F1_1_OFFSET))(this, a1);
		}

		::System::Void Method_3_A9A50625EA2594BB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_METHOD_3_A9A50625EA2594BB_OFFSET))(this, a1);
		}

		::System::Void Method_3_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_METHOD_3_CA373AA1C7054598_3_OFFSET))(this);
		}

		::System::Void Method_3_B1936CE4DA97AA45_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_METHOD_3_B1936CE4DA97AA45_1_OFFSET))(this);
		}

		::System::Void Method_3_9F8F6511E8EF1235()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_METHOD_3_9F8F6511E8EF1235_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_3_5587AE4B03E68C58()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_METHOD_3_5587AE4B03E68C58_OFFSET))(this);
		}

		::System::Void Method_3_13D8773148BD1DCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_METHOD_3_13D8773148BD1DCD_OFFSET))(this);
		}

		::System::Void Method_3_B1EA412ACAE87C15()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_METHOD_3_B1EA412ACAE87C15_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_METHOD_3_CA373AA1C7054598_4_OFFSET))(this);
		}

		::UnityEngine::Bounds get_ArtBoundFull()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_GET_ARTBOUNDFULL_OFFSET))(this);
		}

		::System::Single get_ArtBound()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_GET_ARTBOUND_OFFSET))(this);
		}

		::RPG::Client::TransformPatrolAnim* get__Owner()
		{
			return ((::RPG::Client::TransformPatrolAnim*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_GET__OWNER_OFFSET))(this);
		}
	};
}
