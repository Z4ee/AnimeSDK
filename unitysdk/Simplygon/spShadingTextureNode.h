#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Simplygon/spShadingNode.h"
#include "unitysdk/System/Runtime/InteropServices/HandleRef.h"

namespace System { class String; }

#define SIMPLYGON_SPSHADINGTEXTURENODE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18377310)
#define SIMPLYGON_SPSHADINGTEXTURENODE_SETTEXCOORDLEVEL_OFFSET UNITYSDK_OFFSET(0x183776B0)
#define SIMPLYGON_SPSHADINGTEXTURENODE_SETTEXTURENAME_OFFSET UNITYSDK_OFFSET(0x183774A0)
#define SIMPLYGON_SPSHADINGTEXTURENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x18361BA0)

namespace Simplygon
{
	inline static constexpr unsigned int spShadingTextureNode_TypeDefinitionIndex = 29575;

	class spShadingTextureNode : public ::Simplygon::spShadingNode
	{
	public:
		::System::Runtime::InteropServices::HandleRef swigCPtr; // 0x38

		::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPSHADINGTEXTURENODE__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPSHADINGTEXTURENODE_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void SetTextureName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SPSHADINGTEXTURENODE_SETTEXTURENAME_OFFSET))(this, value);
		}

		::System::Void SetTexCoordLevel(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIMPLYGON_SPSHADINGTEXTURENODE_SETTEXCOORDLEVEL_OFFSET))(this, value);
		}
	};
}
