#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define FOUNDATION_ASSETPOOLEDITORMODE___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD327D0)
#define FOUNDATION_ASSETPOOLEDITORMODE___C__DISPLAYCLASS6_0__GETINSTANCEASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1BD327E0)

namespace Foundation
{
	inline static constexpr unsigned int AssetPoolEditorMode___c__DisplayClass6_0_TypeDefinitionIndex = 7887;

	class AssetPoolEditorMode___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::Foundation::AssetPath assetPath; // 0x10
		::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* completed; // 0x20
		::UnityEngine::Transform* parent; // 0x28
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
