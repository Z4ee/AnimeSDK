#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TALENTTREEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x18913BD0)

namespace MoleMole
{
	inline static constexpr unsigned int TalentTreeItem_TypeDefinitionIndex = 91064;

	class TalentTreeItem : public ::System::Object
	{
	public:
		::System::Int32 ItemModelType; // 0x10
		::UnityEngine::GameObject* ModelObj; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TALENTTREEITEM__CTOR_OFFSET))(this);
		}
	};
}
