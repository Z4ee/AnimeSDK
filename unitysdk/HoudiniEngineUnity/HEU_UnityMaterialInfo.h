#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_UNITYMATERIALINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x197DE540)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_UnityMaterialInfo_TypeDefinitionIndex = 38425;

	class HEU_UnityMaterialInfo : public ::System::Object
	{
	public:
		::System::String* _unityMaterialPath; // 0x10
		::System::String* _substancePath; // 0x18
		::System::Int32 _substanceIndex; // 0x20

		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_UNITYMATERIALINFO__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
