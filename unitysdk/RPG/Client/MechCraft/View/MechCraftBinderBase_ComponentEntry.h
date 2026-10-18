#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/ValueDropdownItem_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTBINDERBASE_COMPONENTENTRY_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0xD5E5860)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTBINDERBASE_COMPONENTENTRY_METHOD_1_D478E250CD6FFF4B_OFFSET UNITYSDK_OFFSET(0xD5E57B0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTBINDERBASE_COMPONENTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xD5E5910)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftBinderBase_ComponentEntry_TypeDefinitionIndex = 79977;

	class MechCraftBinderBase_ComponentEntry : public ::System::Object
	{
	public:
		::System::String* Id; // 0x10
		::UnityEngine::GameObject* _Node; // 0x18
		::UnityEngine::Component* Cmpt; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTBINDERBASE_COMPONENTENTRY__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::UnityEngine::Component*>>* Method_1_D478E250CD6FFF4B()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::UnityEngine::Component*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTBINDERBASE_COMPONENTENTRY_METHOD_1_D478E250CD6FFF4B_OFFSET))(this);
		}

		::System::Void Method_1_AA169839CB93802A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTBINDERBASE_COMPONENTENTRY_METHOD_1_AA169839CB93802A_OFFSET))(this);
		}
	};
}
