#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define FOUNDATION_ASSETPOOLEDITORMODE___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F016690)
#define FOUNDATION_ASSETPOOLEDITORMODE___C__DISPLAYCLASS6_0__GETINSTANCEASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1F0166A0)

namespace Foundation
{
	inline static constexpr unsigned int AssetPoolEditorMode___c__DisplayClass6_0_TypeDefinitionIndex = 8104;

	class AssetPoolEditorMode___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* completed; // 0x10
		::UnityEngine::Transform* parent; // 0x18
		::Foundation::AssetPath assetPath; // 0x20
		::System::Boolean activeState; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLEDITORMODE___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetInstanceAsync_b__0(::UnityEngine::Object* asset, ::Foundation::AssetRequestHandle req)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLEDITORMODE___C__DISPLAYCLASS6_0__GETINSTANCEASYNC_B__0_OFFSET))(this, asset, req);
		}
	};
}
