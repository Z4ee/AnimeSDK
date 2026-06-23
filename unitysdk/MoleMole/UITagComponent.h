#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_208CC9941471731A_895;
namespace MoleMole { class UIBaseController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_UITAGCOMPONENT_SETHINT_OFFSET UNITYSDK_OFFSET(0x17BB79D0)
#define MOLEMOLE_UITAGCOMPONENT_SETTAG_OFFSET UNITYSDK_OFFSET(0x17BB76D0)
#define MOLEMOLE_UITAGCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x17BB7AC0)

namespace MoleMole
{
	inline static constexpr unsigned int UITagComponent_TypeDefinitionIndex = 78796;

	class UITagComponent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Image* _tagIcon; // 0x18
		::UnityEngine::UI::Text* _tagParam; // 0x20
		::UnityEngine::GameObject* lvGO; // 0x28
		::Class_2_208CC9941471731A_895* Field_5_3; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAGCOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void SetTag(::System::Int32 a1, ::MoleMole::UIBaseController* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAGCOMPONENT_SETTAG_OFFSET))(this, a1, a2);
		}

		::System::Void SetHint(::System::Int32 a1, ::MoleMole::UIBaseController* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAGCOMPONENT_SETHINT_OFFSET))(this, a1, a2);
		}
	};
}
