#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UpStairFootIK_Struct_2_35D545A47615098D.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class AttachPointMapping; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UPSTAIRFOOTIK_GET_ISPROCESSABLE_OFFSET UNITYSDK_OFFSET(0x1DDC2DD0)
#define RPG_CLIENT_UPSTAIRFOOTIK_METHOD_5_301EC52F4A09A83B_OFFSET UNITYSDK_OFFSET(0x1DDC40A0)
#define RPG_CLIENT_UPSTAIRFOOTIK_METHOD_5_6900CC9794727188_OFFSET UNITYSDK_OFFSET(0x1DDC3BC0)
#define RPG_CLIENT_UPSTAIRFOOTIK_METHOD_5_F92EA6C247440E32_OFFSET UNITYSDK_OFFSET(0x1DDC42E0)
#define RPG_CLIENT_UPSTAIRFOOTIK_PREPROCESS_OFFSET UNITYSDK_OFFSET(0x1DDC3600)
#define RPG_CLIENT_UPSTAIRFOOTIK_PROCESS_OFFSET UNITYSDK_OFFSET(0x1DDC3720)
#define RPG_CLIENT_UPSTAIRFOOTIK_RESETUPSTAIR_OFFSET UNITYSDK_OFFSET(0x1DDC2D80)
#define RPG_CLIENT_UPSTAIRFOOTIK_SAFEINIT_OFFSET UNITYSDK_OFFSET(0x1DDC2E30)
#define RPG_CLIENT_UPSTAIRFOOTIK_SETUPUPSTAIR_OFFSET UNITYSDK_OFFSET(0x1DDC2D00)
#define RPG_CLIENT_UPSTAIRFOOTIK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDC4650)

namespace RPG::Client
{
	inline static constexpr unsigned int UpStairFootIK_TypeDefinitionIndex = 68466;

	class UpStairFootIK : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single fadeInTime; // 0x18
		::System::Single fadeOutTime; // 0x1C
		::System::Boolean forceRotateFoot; // 0x20
		::System::Single footRotateSpeed; // 0x24
		::System::Single footRotationLerpSpeed; // 0x28
		::UnityEngine::LayerMask groundLayer; // 0x2C
		::System::Single raycastHeightOffset; // 0x30
		::System::Single raycastDistance; // 0x34
		::System::Single toeRaycastForwardOffset; // 0x38
		::UnityEngine::Transform* leftFoot; // 0x40
		::UnityEngine::Transform* rightFoot; // 0x48
		::RPG::Client::UpStairFootIK_Struct_2_35D545A47615098D BCIGLMIFAGH; // 0x50
		::RPG::Client::UpStairFootIK_Struct_2_35D545A47615098D CALBKJHDIJK; // 0x70
		::UnityEngine::Quaternion ECNOFNODAIL; // 0x90
		::UnityEngine::Quaternion DBHDMEHGGKF; // 0xA0
		::System::Boolean AMDJLAFJKFA; // 0xB0
		::System::Single CLKJEOCKGKE; // 0xB4
		::System::Single PKAKHOMGDLK; // 0xB8
		::System::Single GLJNEGLADEC; // 0xBC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPSTAIRFOOTIK__CTOR_OFFSET))(this);
		}

		::System::Void SetupUpStair(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPSTAIRFOOTIK_SETUPUPSTAIR_OFFSET))(this, a1, a2);
		}

		::System::Void ResetUpStair()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPSTAIRFOOTIK_RESETUPSTAIR_OFFSET))(this);
		}

		::System::Boolean get_IsProcessable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPSTAIRFOOTIK_GET_ISPROCESSABLE_OFFSET))(this);
		}

		::System::Void SafeInit(::RPG::Client::AttachPointMapping* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AttachPointMapping*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPSTAIRFOOTIK_SAFEINIT_OFFSET))(this, a1);
		}

		::System::Void PreProcess(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPSTAIRFOOTIK_PREPROCESS_OFFSET))(this, a1);
		}

		::System::Boolean Process(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPSTAIRFOOTIK_PROCESS_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion Method_5_F92EA6C247440E32(::UnityEngine::Quaternion a1, ::UnityEngine::Quaternion a2, ::System::Single a3)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPSTAIRFOOTIK_METHOD_5_F92EA6C247440E32_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Quaternion Method_5_301EC52F4A09A83B(::RPG::Client::UpStairFootIK_Struct_2_35D545A47615098D& a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::RPG::Client::UpStairFootIK_Struct_2_35D545A47615098D&, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPSTAIRFOOTIK_METHOD_5_301EC52F4A09A83B_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 Method_5_6900CC9794727188(::RPG::Client::UpStairFootIK_Struct_2_35D545A47615098D& a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::UpStairFootIK_Struct_2_35D545A47615098D&))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPSTAIRFOOTIK_METHOD_5_6900CC9794727188_OFFSET))(this, a1);
		}
	};
}
