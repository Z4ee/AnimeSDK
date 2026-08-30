#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_UI3DRECTMASK2D_METHOD_5_092CD57850778EFC_1_OFFSET UNITYSDK_OFFSET(0x1B139B20)
#define RPG_CLIENT_UI3DRECTMASK2D_METHOD_5_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0x1B1398F0)
#define RPG_CLIENT_UI3DRECTMASK2D_METHOD_5_907E24F785836BA0_OFFSET UNITYSDK_OFFSET(0x1B139060)
#define RPG_CLIENT_UI3DRECTMASK2D_METHOD_5_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x1B139280)
#define RPG_CLIENT_UI3DRECTMASK2D_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B139E40)
#define RPG_CLIENT_UI3DRECTMASK2D_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B139D90)
#define RPG_CLIENT_UI3DRECTMASK2D_START_OFFSET UNITYSDK_OFFSET(0x1B139D40)
#define RPG_CLIENT_UI3DRECTMASK2D_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B139DF0)
#define RPG_CLIENT_UI3DRECTMASK2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1B139E90)

namespace RPG::Client
{
	inline static constexpr unsigned int UI3DRectMask2D_TypeDefinitionIndex = 71021;

	class UI3DRectMask2D : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 IAIOMAAIGNG; // 0x18
		::System::Int32 PJNJNHOJEJC; // 0x1C
		::UnityEngine::RectTransform* IGLNACMFMHF; // 0x20
		::Il2CppArray<::UnityEngine::Renderer*>* MOECGMPCECP; // 0x28
		::UnityEngine::Camera* GLCKFPKNEIM; // 0x30
		::UnityEngine::Vector4 _AABB; // 0x38
		::UnityEngine::Vector4 _SoftAABB; // 0x48
		::UnityEngine::Vector4 Padding; // 0x58
		::UnityEngine::Vector4 Softness; // 0x68
		::System::Boolean NeedRefreshRenderers; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DRECTMASK2D__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_907E24F785836BA0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DRECTMASK2D_METHOD_5_907E24F785836BA0_OFFSET))(this);
		}

		::System::Void Method_5_AA169839CB93802A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DRECTMASK2D_METHOD_5_AA169839CB93802A_OFFSET))(this);
		}

		::System::Void Method_5_092CD57850778EFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DRECTMASK2D_METHOD_5_092CD57850778EFC_OFFSET))(this);
		}

		::System::Void Method_5_092CD57850778EFC_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DRECTMASK2D_METHOD_5_092CD57850778EFC_1_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DRECTMASK2D_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DRECTMASK2D_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DRECTMASK2D_UPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DRECTMASK2D_ONDISABLE_OFFSET))(this);
		}
	};
}
