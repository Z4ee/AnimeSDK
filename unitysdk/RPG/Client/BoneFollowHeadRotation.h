#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class BoneFollowHeadRotation_HeadFollowBoneEntry; }
namespace RPG::Client { class LookAtIK; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_BONEFOLLOWHEADROTATION_AWAKE_OFFSET UNITYSDK_OFFSET(0x1BD90FF0)
#define RPG_CLIENT_BONEFOLLOWHEADROTATION_METHOD_5_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0x1BD90770)
#define RPG_CLIENT_BONEFOLLOWHEADROTATION_METHOD_5_4BE99DDCF7F1FD88_OFFSET UNITYSDK_OFFSET(0x1BD90D10)
#define RPG_CLIENT_BONEFOLLOWHEADROTATION_METHOD_5_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x1BD90760)
#define RPG_CLIENT_BONEFOLLOWHEADROTATION_METHOD_5_56552A5762FD2EFD_OFFSET UNITYSDK_OFFSET(0x1BD914E0)
#define RPG_CLIENT_BONEFOLLOWHEADROTATION_METHOD_5_5D54C30F452105AE_OFFSET UNITYSDK_OFFSET(0x1BD91CF0)
#define RPG_CLIENT_BONEFOLLOWHEADROTATION_METHOD_5_6D71CC7A9DF62322_OFFSET UNITYSDK_OFFSET(0x1BD90CC0)
#define RPG_CLIENT_BONEFOLLOWHEADROTATION_METHOD_5_7B5CF29097D2700A_OFFSET UNITYSDK_OFFSET(0x1BD92100)
#define RPG_CLIENT_BONEFOLLOWHEADROTATION_METHOD_5_90EC931103FB6F31_OFFSET UNITYSDK_OFFSET(0x1BD90F90)
#define RPG_CLIENT_BONEFOLLOWHEADROTATION_METHOD_5_A29740DEFAF9052D_OFFSET UNITYSDK_OFFSET(0x1BD91C00)
#define RPG_CLIENT_BONEFOLLOWHEADROTATION_METHOD_5_AA9368B26B643FC9_OFFSET UNITYSDK_OFFSET(0x1BD91680)
#define RPG_CLIENT_BONEFOLLOWHEADROTATION_METHOD_5_B93A9FB8A3E13C83_OFFSET UNITYSDK_OFFSET(0x1BD90F40)
#define RPG_CLIENT_BONEFOLLOWHEADROTATION_METHOD_5_D12F8A06E3A6D25D_OFFSET UNITYSDK_OFFSET(0x1BD917A0)
#define RPG_CLIENT_BONEFOLLOWHEADROTATION_METHOD_5_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x1BD90740)
#define RPG_CLIENT_BONEFOLLOWHEADROTATION_METHOD_5_EC130DFB9EDACA56_OFFSET UNITYSDK_OFFSET(0x1BD907E0)
#define RPG_CLIENT_BONEFOLLOWHEADROTATION_METHOD_5_EFF275E2C18C04F2_OFFSET UNITYSDK_OFFSET(0x1BD908F0)
#define RPG_CLIENT_BONEFOLLOWHEADROTATION_METHOD_5_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1BD90730)
#define RPG_CLIENT_BONEFOLLOWHEADROTATION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1BD91040)
#define RPG_CLIENT_BONEFOLLOWHEADROTATION_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1BD910A0)
#define RPG_CLIENT_BONEFOLLOWHEADROTATION_UPDATEFOLLOW_OFFSET UNITYSDK_OFFSET(0x1BD910F0)
#define RPG_CLIENT_BONEFOLLOWHEADROTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD92190)

namespace RPG::Client
{
	inline static constexpr unsigned int BoneFollowHeadRotation_TypeDefinitionIndex = 68409;

	class BoneFollowHeadRotation : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* HeadBone; // 0x18
		::System::Boolean AutoResolveHeadFromLookAtIk; // 0x20
		::UnityEngine::Transform* RotationReference; // 0x28
		::System::Boolean AutoFindFollowBoneByName; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::BoneFollowHeadRotation_HeadFollowBoneEntry*>* FollowBones; // 0x38
		::System::Boolean RecaptureBindPoseOnEnable; // 0x40
		::System::Boolean EnableFollow; // 0x41
		::System::Single GlobalCoefficientMultiplier; // 0x44
		::System::Boolean DrawRuntimeGizmos; // 0x48
		::UnityEngine::Quaternion LHAHADFKJHH; // 0x4C
		::System::Boolean NAOAJNBMPBM; // 0x5C
		::UnityEngine::Vector3 OCOPNMLPOAM; // 0x60
		::System::Single CDBFEOGMOAJ; // 0x6C
		::RPG::Client::LookAtIK* FEIPKPLMKDO; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BONEFOLLOWHEADROTATION__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_5_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BONEFOLLOWHEADROTATION_METHOD_5_F0088C88851A7DFB_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_5_D37FAD0A6AA04B25()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BONEFOLLOWHEADROTATION_METHOD_5_D37FAD0A6AA04B25_OFFSET))(this);
		}

		::System::Single Method_5_5323F2DF46A044DA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BONEFOLLOWHEADROTATION_METHOD_5_5323F2DF46A044DA_OFFSET))(this);
		}

		::System::Void Method_5_00DEF5A164D9A9D5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BONEFOLLOWHEADROTATION_METHOD_5_00DEF5A164D9A9D5_OFFSET))(this);
		}

		::System::Void Method_5_6D71CC7A9DF62322()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BONEFOLLOWHEADROTATION_METHOD_5_6D71CC7A9DF62322_OFFSET))(this);
		}

		::System::Void Method_5_B93A9FB8A3E13C83()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BONEFOLLOWHEADROTATION_METHOD_5_B93A9FB8A3E13C83_OFFSET))(this);
		}

		::UnityEngine::Transform* Method_5_90EC931103FB6F31()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BONEFOLLOWHEADROTATION_METHOD_5_90EC931103FB6F31_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BONEFOLLOWHEADROTATION_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BONEFOLLOWHEADROTATION_ONENABLE_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BONEFOLLOWHEADROTATION_ONVALIDATE_OFFSET))(this);
		}

		::System::Void UpdateFollow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BONEFOLLOWHEADROTATION_UPDATEFOLLOW_OFFSET))(this);
		}

		::System::Void Method_5_56552A5762FD2EFD(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_BONEFOLLOWHEADROTATION_METHOD_5_56552A5762FD2EFD_OFFSET))(this, a1);
		}

		::System::Void Method_5_AA9368B26B643FC9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BONEFOLLOWHEADROTATION_METHOD_5_AA9368B26B643FC9_OFFSET))(this);
		}

		::System::Void Method_5_4BE99DDCF7F1FD88()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BONEFOLLOWHEADROTATION_METHOD_5_4BE99DDCF7F1FD88_OFFSET))(this);
		}

		::System::Void Method_5_EFF275E2C18C04F2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BONEFOLLOWHEADROTATION_METHOD_5_EFF275E2C18C04F2_OFFSET))(this);
		}

		::System::Void Method_5_EC130DFB9EDACA56()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BONEFOLLOWHEADROTATION_METHOD_5_EC130DFB9EDACA56_OFFSET))(this);
		}

		::System::Void Method_5_D12F8A06E3A6D25D(::RPG::Client::BoneFollowHeadRotation_HeadFollowBoneEntry* a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BoneFollowHeadRotation_HeadFollowBoneEntry*, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_BONEFOLLOWHEADROTATION_METHOD_5_D12F8A06E3A6D25D_OFFSET))(this, a1, a2, a3);
		}

		static ::UnityEngine::Quaternion Method_5_5D54C30F452105AE(::UnityEngine::Quaternion a1, ::RPG::Client::BoneFollowHeadRotation_HeadFollowBoneEntry* a2, ::System::Single a3)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::RPG::Client::BoneFollowHeadRotation_HeadFollowBoneEntry*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BONEFOLLOWHEADROTATION_METHOD_5_5D54C30F452105AE_OFFSET))(a1, a2, a3);
		}

		static ::System::Single Method_5_7B5CF29097D2700A(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BONEFOLLOWHEADROTATION_METHOD_5_7B5CF29097D2700A_OFFSET))(a1);
		}

		static ::UnityEngine::Transform* Method_5_A29740DEFAF9052D(::UnityEngine::Transform* a1, ::System::String* a2)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BONEFOLLOWHEADROTATION_METHOD_5_A29740DEFAF9052D_OFFSET))(a1, a2);
		}
	};
}
