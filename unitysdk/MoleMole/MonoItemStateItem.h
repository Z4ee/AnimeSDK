#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOITEMSTATEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x136DD870)

namespace MoleMole
{
	inline static constexpr unsigned int MonoItemStateItem_TypeDefinitionIndex = 69428;

	class MonoItemStateItem : public ::System::Object
	{
	public:
		::System::String* key; // 0x10
		::UnityEngine::Transform* tran; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOITEMSTATEITEM__CTOR_OFFSET))(this);
		}
	};
}
