#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine { class AtlasPage; }
namespace System { class String; }

#define SPINE_UNITY_NOOPTEXTURELOADER_LOAD_OFFSET UNITYSDK_OFFSET(0x1E647D70)
#define SPINE_UNITY_NOOPTEXTURELOADER_UNLOAD_OFFSET UNITYSDK_OFFSET(0x1E647D80)
#define SPINE_UNITY_NOOPTEXTURELOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E647D90)

namespace Spine::Unity
{
	inline static constexpr unsigned int NoOpTextureLoader_TypeDefinitionIndex = 43817;

	class NoOpTextureLoader : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_NOOPTEXTURELOADER__CTOR_OFFSET))(this);
		}

		::System::Void Load(::Spine::AtlasPage* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AtlasPage*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_UNITY_NOOPTEXTURELOADER_LOAD_OFFSET))(this, a1, a2);
		}

		::System::Void Unload(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SPINE_UNITY_NOOPTEXTURELOADER_UNLOAD_OFFSET))(this, a1);
		}
	};
}
