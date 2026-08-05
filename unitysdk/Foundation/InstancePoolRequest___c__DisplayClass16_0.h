#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class InstancePoolRequest; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Object; }

#define FOUNDATION_INSTANCEPOOLREQUEST___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F663820)
#define FOUNDATION_INSTANCEPOOLREQUEST___C__DISPLAYCLASS16_0__GETINSTANCEASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1F663830)

namespace Foundation
{
	inline static constexpr unsigned int InstancePoolRequest___c__DisplayClass16_0_TypeDefinitionIndex = 7970;

	class InstancePoolRequest___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::System::Action_1<::UnityEngine::Object*>* completed; // 0x10
		::Foundation::InstancePoolRequest* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetInstanceAsync_b__0(::UnityEngine::Object* gameobject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST___C__DISPLAYCLASS16_0__GETINSTANCEASYNC_B__0_OFFSET))(this, gameobject);
		}
	};
}
