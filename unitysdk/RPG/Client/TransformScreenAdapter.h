#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TransformScreenAdapter_ScreenAdaptionKeyframe.h"
#include "unitysdk/RPG/Client/TransformScreenAdapter_ScreenAdaptionMode.h"
#include "unitysdk/RPG/Client/TransformScreenAdapter_ScreenAdaptionTarget.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }

#define RPG_CLIENT_TRANSFORMSCREENADAPTER_METHOD_1_03634C321C72FBE4_OFFSET UNITYSDK_OFFSET(0xB374550)
#define RPG_CLIENT_TRANSFORMSCREENADAPTER__CTOR_OFFSET UNITYSDK_OFFSET(0xB3761E0)

namespace RPG::Client
{
	inline static constexpr unsigned int TransformScreenAdapter_TypeDefinitionIndex = 64844;

	class TransformScreenAdapter : public ::System::Object
	{
	public:
		::RPG::Client::TransformScreenAdapter_ScreenAdaptionMode AdaptionMode; // 0x10
		::RPG::Client::TransformScreenAdapter_ScreenAdaptionTarget AdaptionTarget; // 0x14
		::System::Single StandardFieldOfView; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::TransformScreenAdapter_ScreenAdaptionKeyframe>* AdaptionKeyframes; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMSCREENADAPTER__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_03634C321C72FBE4(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Camera* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMSCREENADAPTER_METHOD_1_03634C321C72FBE4_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
