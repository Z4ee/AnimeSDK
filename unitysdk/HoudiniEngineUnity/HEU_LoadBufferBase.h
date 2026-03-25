#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_GeneratedOutput; }
namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_LOADBUFFERBASE_INITIALIZEBUFFER_OFFSET UNITYSDK_OFFSET(0x8469BB0)
#define HOUDINIENGINEUNITY_HEU_LOADBUFFERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x8469BD0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_LoadBufferBase_TypeDefinitionIndex = 37790;

	class HEU_LoadBufferBase : public ::System::Object
	{
	public:
		::System::String* _name; // 0x10
		::HoudiniEngineUnity::HEU_GeneratedOutput* _generatedOutput; // 0x18
		::System::Int32 _id; // 0x20
		::System::Boolean _bInstancer; // 0x24
		::System::Boolean _bInstanced; // 0x25

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_LOADBUFFERBASE__CTOR_OFFSET))(this);
		}

		::System::Void InitializeBuffer(::System::Int32 id, ::System::String* name, ::System::Boolean bInstanced, ::System::Boolean bInstancer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_LOADBUFFERBASE_INITIALIZEBUFFER_OFFSET))(this, id, name, bInstanced, bInstancer);
		}
	};
}
