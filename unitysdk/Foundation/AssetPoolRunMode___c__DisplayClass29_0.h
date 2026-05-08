#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define FOUNDATION_ASSETPOOLRUNMODE___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B613F10)
#define FOUNDATION_ASSETPOOLRUNMODE___C__DISPLAYCLASS29_0__GETINSTANCEASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1B613F20)
#define FOUNDATION_ASSETPOOLRUNMODE___C__DISPLAYCLASS29_0__GETINSTANCEASYNC_B__1_OFFSET UNITYSDK_OFFSET(0x1B6140E0)
#define FOUNDATION_ASSETPOOLRUNMODE___C__DISPLAYCLASS29_0__GETINSTANCEASYNC_B__2_OFFSET UNITYSDK_OFFSET(0x1B6141C0)

namespace Foundation
{
	inline static constexpr unsigned int AssetPoolRunMode___c__DisplayClass29_0_TypeDefinitionIndex = 7813;

	class AssetPoolRunMode___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::Foundation::AssetPath assetPath; // 0x10
		::Foundation::AssetRequestHandle request; // 0x20
		::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* completed; // 0x40
		::UnityEngine::Transform* parent; // 0x48
		::System::Boolean activeState; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLRUNMODE___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetInstanceAsync_b__0(::UnityEngine::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLRUNMODE___C__DISPLAYCLASS29_0__GETINSTANCEASYNC_B__0_OFFSET))(this, obj);
		}

		::System::Void _GetInstanceAsync_b__1(::UnityEngine::Object* _p0_, ::Foundation::AssetRequestHandle _p1_)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLRUNMODE___C__DISPLAYCLASS29_0__GETINSTANCEASYNC_B__1_OFFSET))(this, _p0_, _p1_);
		}

		::System::Void _GetInstanceAsync_b__2(::UnityEngine::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLRUNMODE___C__DISPLAYCLASS29_0__GETINSTANCEASYNC_B__2_OFFSET))(this, obj);
		}
	};
}
