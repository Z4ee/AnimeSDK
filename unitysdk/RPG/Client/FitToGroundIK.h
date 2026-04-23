#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class AttachPointMapping; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FITTOGROUNDIK_GET_IKENABLED_OFFSET UNITYSDK_OFFSET(0xA38BEB0)
#define RPG_CLIENT_FITTOGROUNDIK_GET_ISPROCESSABLE_OFFSET UNITYSDK_OFFSET(0xA38A5D0)
#define RPG_CLIENT_FITTOGROUNDIK_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0xA38BED0)
#define RPG_CLIENT_FITTOGROUNDIK_METHOD_5_627557CE4CD0ABB4_OFFSET UNITYSDK_OFFSET(0xA38BCA0)
#define RPG_CLIENT_FITTOGROUNDIK_METHOD_5_A09A43A7C670BAC3_OFFSET UNITYSDK_OFFSET(0xA38AB90)
#define RPG_CLIENT_FITTOGROUNDIK_METHOD_5_A63D06F4304A4527_OFFSET UNITYSDK_OFFSET(0xA38BD60)
#define RPG_CLIENT_FITTOGROUNDIK_PREPROCESS_OFFSET UNITYSDK_OFFSET(0xA38A630)
#define RPG_CLIENT_FITTOGROUNDIK_PROCESS_OFFSET UNITYSDK_OFFSET(0xA38A740)
#define RPG_CLIENT_FITTOGROUNDIK_SAFEINIT_OFFSET UNITYSDK_OFFSET(0xA38A580)
#define RPG_CLIENT_FITTOGROUNDIK_SET_IKENABLED_OFFSET UNITYSDK_OFFSET(0xA38BEC0)
#define RPG_CLIENT_FITTOGROUNDIK__CTOR_OFFSET UNITYSDK_OFFSET(0xA38BEE0)

namespace RPG::Client
{
	inline static constexpr unsigned int FitToGroundIK_TypeDefinitionIndex = 63118;

	class FitToGroundIK : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single blendInTime; // 0x18
		::System::Single blendOutTime; // 0x1C
		::UnityEngine::Vector2 fitAngleRange; // 0x20
		::UnityEngine::Vector2 fitOffsetRange; // 0x28
		::System::Single fitLerpHalfTime; // 0x30
		::UnityEngine::Transform* rootPoint; // 0x38
		::Il2CppArray<::UnityEngine::Transform*>* detectPoints; // 0x40
		::System::Single raycastDistance; // 0x48
		::UnityEngine::LayerMask raycastLayerMask; // 0x4C
		::System::Single boxCastHalfWidth; // 0x50
		::System::Single Field_5_10; // 0x54
		::System::Boolean Field_5_11; // 0x58
		::System::Single Field_5_12; // 0x5C
		::System::Single Field_5_13; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FITTOGROUNDIK__CTOR_OFFSET))(this);
		}

		::System::Void SafeInit(::RPG::Client::AttachPointMapping* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AttachPointMapping*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FITTOGROUNDIK_SAFEINIT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsProcessable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FITTOGROUNDIK_GET_ISPROCESSABLE_OFFSET))(this);
		}

		::System::Void PreProcess(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FITTOGROUNDIK_PREPROCESS_OFFSET))(this, a1);
		}

		::System::Boolean Process(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FITTOGROUNDIK_PROCESS_OFFSET))(this, a1);
		}

		::System::Single Method_5_627557CE4CD0ABB4(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FITTOGROUNDIK_METHOD_5_627557CE4CD0ABB4_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_A09A43A7C670BAC3(::System::Single& a1, ::System::Single& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FITTOGROUNDIK_METHOD_5_A09A43A7C670BAC3_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 Method_5_A63D06F4304A4527()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FITTOGROUNDIK_METHOD_5_A63D06F4304A4527_OFFSET))(this);
		}

		::System::Boolean get_IKEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FITTOGROUNDIK_GET_IKENABLED_OFFSET))(this);
		}

		::System::Void set_IKEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FITTOGROUNDIK_SET_IKENABLED_OFFSET))(this, a1);
		}

		::System::Single get_Weight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FITTOGROUNDIK_GET_WEIGHT_OFFSET))(this);
		}
	};
}
