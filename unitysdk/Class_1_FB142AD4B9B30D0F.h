#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/EventSystems/RaycastResult.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class UIDropTarget; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define CLASS_1_FB142AD4B9B30D0F_METHOD_1_3A9A76967CE2B9D5_OFFSET UNITYSDK_OFFSET(0xFEC2600)
#define CLASS_1_FB142AD4B9B30D0F_METHOD_1_D3EDA9D30684D65C_OFFSET UNITYSDK_OFFSET(0xFEC28B0)
#define CLASS_1_FB142AD4B9B30D0F__CTOR_OFFSET UNITYSDK_OFFSET(0xFEC29D0)

inline static constexpr unsigned int Class_1_FB142AD4B9B30D0F_TypeDefinitionIndex = 73061;

class Class_1_FB142AD4B9B30D0F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* DAAEFLHHLHD; // 0x10
	::UnityEngine::EventSystems::PointerEventData* EPJJGFNHKEM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB142AD4B9B30D0F__CTOR_OFFSET))(this);
	}

	::RPG::Client::UIDropTarget* Method_1_3A9A76967CE2B9D5(::UnityEngine::Vector2 a1)
	{
		return ((::RPG::Client::UIDropTarget*(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_FB142AD4B9B30D0F_METHOD_1_3A9A76967CE2B9D5_OFFSET))(this, a1);
	}

	static ::RPG::Client::UIDropTarget* Method_1_D3EDA9D30684D65C(::UnityEngine::Transform* a1)
	{
		return ((::RPG::Client::UIDropTarget*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_FB142AD4B9B30D0F_METHOD_1_D3EDA9D30684D65C_OFFSET))(a1);
	}
};
