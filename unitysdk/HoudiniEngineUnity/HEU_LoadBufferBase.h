#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_GeneratedOutput; }
namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_LOADBUFFERBASE_INITIALIZEBUFFER_OFFSET UNITYSDK_OFFSET(0x11A66EA0)
#define HOUDINIENGINEUNITY_HEU_LOADBUFFERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x11A66EC0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_LoadBufferBase_TypeDefinitionIndex = 39310;

	class HEU_LoadBufferBase : public ::System::Object
	{
	public:
		::HoudiniEngineUnity::HEU_GeneratedOutput* _generatedOutput; // 0x10
		::System::String* _name; // 0x18
		::System::Boolean _bInstancer; // 0x20
		::System::Boolean _bInstanced; // 0x21
		::System::Int32 _id; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_LOADBUFFERBASE__CTOR_OFFSET))(this);
		}

		::System::Void InitializeBuffer(::System::Int32 a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_LOADBUFFERBASE_INITIALIZEBUFFER_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
