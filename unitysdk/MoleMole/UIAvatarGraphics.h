#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoRenderHandlerForAvatar.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_UIAVATARGRAPHICS_CLEARRENDERERS_OFFSET UNITYSDK_OFFSET(0x15AB2A60)
#define MOLEMOLE_UIAVATARGRAPHICS_DISABLEOVERRIDEHAIRSHADOWMAINLIGHT_OFFSET UNITYSDK_OFFSET(0x15AB2860)
#define MOLEMOLE_UIAVATARGRAPHICS_DISABLEOVERRIDEMAINLIGHT_OFFSET UNITYSDK_OFFSET(0x15AB2260)
#define MOLEMOLE_UIAVATARGRAPHICS_ENABLEOVERRIDEHAIRSHADOWMAINLIGHT_OFFSET UNITYSDK_OFFSET(0x15AB2490)
#define MOLEMOLE_UIAVATARGRAPHICS_ENABLEOVERRIDEMAINLIGHT_1_OFFSET UNITYSDK_OFFSET(0x15AB1E90)
#define MOLEMOLE_UIAVATARGRAPHICS_ENABLEOVERRIDEMAINLIGHT_OFFSET UNITYSDK_OFFSET(0x15AB1990)
#define MOLEMOLE_UIAVATARGRAPHICS_GETHAIRSHADOWOFFSETS_OFFSET UNITYSDK_OFFSET(0x15AB0AD0)
#define MOLEMOLE_UIAVATARGRAPHICS_GETOVERRIDEMAINLIGHTDIR_OFFSET UNITYSDK_OFFSET(0x15AB14F0)
#define MOLEMOLE_UIAVATARGRAPHICS_GETOVERRIDEMAINLIGHT_OFFSET UNITYSDK_OFFSET(0x15AB1810)
#define MOLEMOLE_UIAVATARGRAPHICS_GET_ALLINSTANCEDMATS_OFFSET UNITYSDK_OFFSET(0x15AB0520)
#define MOLEMOLE_UIAVATARGRAPHICS_GET_AVATARRENDERERS_OFFSET UNITYSDK_OFFSET(0x15AB04C0)
#define MOLEMOLE_UIAVATARGRAPHICS_METHOD_7_823487C6AE347D01_OFFSET UNITYSDK_OFFSET(0x15AB1BD0)
#define MOLEMOLE_UIAVATARGRAPHICS_METHOD_7_95CD76A019E3B038_OFFSET UNITYSDK_OFFSET(0x15AB1720)
#define MOLEMOLE_UIAVATARGRAPHICS_METHOD_7_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x15AB2B10)
#define MOLEMOLE_UIAVATARGRAPHICS_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x15AB05C0)
#define MOLEMOLE_UIAVATARGRAPHICS_RESETHAIRSHADOWOFFSETS_OFFSET UNITYSDK_OFFSET(0x15AB1070)
#define MOLEMOLE_UIAVATARGRAPHICS_SETHAIRSHADOWOFFSETS_OFFSET UNITYSDK_OFFSET(0x15AB0610)
#define MOLEMOLE_UIAVATARGRAPHICS__CTOR_OFFSET UNITYSDK_OFFSET(0x15AB2AB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarGraphics_TypeDefinitionIndex = 68925;

	class UIAvatarGraphics : public ::MoleMole::MonoRenderHandlerForAvatar
	{
	public:
		::Il2CppArray<::UnityEngine::Renderer*>* Field_7_0; // 0x2AA8
		::Il2CppArray<::UnityEngine::Material*>* Field_7_1; // 0x2AB0
		::System::Boolean Field_7_2; // 0x2AB8
		::System::Boolean Field_7_3; // 0x2AB9
		::System::Boolean Field_7_4; // 0x2ABA

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARGRAPHICS__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Renderer*>* get_avatarRenderers()
		{
			return ((::Il2CppArray<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARGRAPHICS_GET_AVATARRENDERERS_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Material*>* get_allInstancedMats()
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARGRAPHICS_GET_ALLINSTANCEDMATS_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARGRAPHICS_ONDESTROY_OFFSET))(this);
		}

		::System::Void SetHairShadowOffsets(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARGRAPHICS_SETHAIRSHADOWOFFSETS_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 GetHairShadowOffsets()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARGRAPHICS_GETHAIRSHADOWOFFSETS_OFFSET))(this);
		}

		::System::Void ResetHairShadowOffsets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARGRAPHICS_RESETHAIRSHADOWOFFSETS_OFFSET))(this);
		}

		::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> GetOverrideMainLightDir(::UnityEngine::Vector4 a1)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARGRAPHICS_GETOVERRIDEMAINLIGHTDIR_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::UnityEngine::Quaternion, ::UnityEngine::Quaternion> GetOverrideMainLight(::UnityEngine::Vector4 a1)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Quaternion, ::UnityEngine::Quaternion>(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARGRAPHICS_GETOVERRIDEMAINLIGHT_OFFSET))(this, a1);
		}

		::System::Void EnableOverrideMainLight(::System::Boolean a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARGRAPHICS_ENABLEOVERRIDEMAINLIGHT_OFFSET))(this, a1, a2);
		}

		::System::Void EnableOverrideMainLight_1(::System::Boolean a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARGRAPHICS_ENABLEOVERRIDEMAINLIGHT_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DisableOverrideMainLight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARGRAPHICS_DISABLEOVERRIDEMAINLIGHT_OFFSET))(this);
		}

		::System::Void EnableOverrideHairShadowMainLight(::System::Boolean a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARGRAPHICS_ENABLEOVERRIDEHAIRSHADOWMAINLIGHT_OFFSET))(this, a1, a2);
		}

		::System::Void DisableOverrideHairShadowMainLight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARGRAPHICS_DISABLEOVERRIDEHAIRSHADOWMAINLIGHT_OFFSET))(this);
		}

		::System::Void ClearRenderers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARGRAPHICS_CLEARRENDERERS_OFFSET))(this);
		}

		::System::Void Method_7_823487C6AE347D01(::System::Boolean a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARGRAPHICS_METHOD_7_823487C6AE347D01_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 Method_7_95CD76A019E3B038(::System::Single a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARGRAPHICS_METHOD_7_95CD76A019E3B038_OFFSET))(this, a1, a2);
		}

		::System::Void Method_7_E3DE31A03057E055()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARGRAPHICS_METHOD_7_E3DE31A03057E055_OFFSET))(this);
		}
	};
}
