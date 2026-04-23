#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PhotoGraphUtils_StorageFormatType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Rendering/AsyncGPUReadbackRequest.h"

namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace UnityEngine { class RenderTexture; }

#define RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS134_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAC90950)
#define RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS134_0__GENERATESCREENCAPTURECOROUTINE_B__0_OFFSET UNITYSDK_OFFSET(0xAC90960)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphUtils___c__DisplayClass134_0_TypeDefinitionIndex = 64017;

	class PhotoGraphUtils___c__DisplayClass134_0 : public ::System::Object
	{
	public:
		::UnityEngine::RenderTexture* filterRT; // 0x10
		::RPG::Client::Promises::Promise_1<::Unity::Collections::NativeArray_1<::System::Byte>>* promise; // 0x18
		::RPG::Client::PhotoGraphUtils_StorageFormatType formatType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS134_0__CTOR_OFFSET))(this);
		}

		::System::Void _GenerateScreenCaptureCoroutine_b__0(::UnityEngine::Rendering::AsyncGPUReadbackRequest request)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::AsyncGPUReadbackRequest))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS134_0__GENERATESCREENCAPTURECOROUTINE_B__0_OFFSET))(this, request);
		}
	};
}
