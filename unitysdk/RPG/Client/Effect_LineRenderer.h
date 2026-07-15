#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_LineRenderer_PointAttr.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_83A4037BA4BD389C;
namespace UnityEngine { class LineRenderer; }

#define RPG_CLIENT_EFFECT_LINERENDERER_LATETICK_OFFSET UNITYSDK_OFFSET(0x15100FF0)
#define RPG_CLIENT_EFFECT_LINERENDERER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x15101060)
#define RPG_CLIENT_EFFECT_LINERENDERER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x15100F60)
#define RPG_CLIENT_EFFECT_LINERENDERER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15100E90)
#define RPG_CLIENT_EFFECT_LINERENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x151010B0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_LineRenderer_TypeDefinitionIndex = 67339;

	class Effect_LineRenderer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::RPG::Client::Effect_LineRenderer_PointAttr>* PointAttrs; // 0x18
		::UnityEngine::LineRenderer* LineRenderer; // 0x20
		::Class_2_83A4037BA4BD389C* Field_5_2; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERER_ONDISABLE_OFFSET))(this);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERER_LATETICK_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERER_ONDESTROY_OFFSET))(this);
		}
	};
}
