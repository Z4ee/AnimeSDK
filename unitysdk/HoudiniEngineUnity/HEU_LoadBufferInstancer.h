#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_Transform.h"
#include "unitysdk/HoudiniEngineUnity/HEU_LoadBufferBase.h"

namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_LOADBUFFERINSTANCER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B443C10)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_LoadBufferInstancer_TypeDefinitionIndex = 39314;

	class HEU_LoadBufferInstancer : public ::HoudiniEngineUnity::HEU_LoadBufferBase
	{
	public:
		::Il2CppArray<::System::String*>* _instancePrefixes; // 0x28
		::Il2CppArray<::System::String*>* _collisionAssetPaths; // 0x30
		::Il2CppArray<::System::String*>* _assetPaths; // 0x38
		::Il2CppArray<::HoudiniEngineUnity::HAPI_Transform>* _instanceTransforms; // 0x40
		::Il2CppArray<::System::Int32>* _instanceNodeIDs; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_LOADBUFFERINSTANCER__CTOR_OFFSET))(this);
		}
	};
}
