#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_UNITYMATERIALINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x84A40F0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_UnityMaterialInfo_TypeDefinitionIndex = 37765;

	class HEU_UnityMaterialInfo : public ::System::Object
	{
	public:
		::System::String* _substancePath; // 0x10
		::System::String* _unityMaterialPath; // 0x18
		::System::Int32 _substanceIndex; // 0x20

		::System::Void _ctor(::System::String* unityMaterialPath, ::System::String* substancePath, ::System::Int32 substanceIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_UNITYMATERIALINFO__CTOR_OFFSET))(this, unityMaterialPath, substancePath, substanceIndex);
		}
	};
}
