#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HOUDINIENGINEUNITY_HEU_VERTEXENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x84A4920)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_VertexEntry_TypeDefinitionIndex = 37820;

	class HEU_VertexEntry : public ::System::Object
	{
	public:
		::System::Int32 _meshKey; // 0x10
		::System::Int32 _normalIndex; // 0x14
		::System::Int32 _vertexIndex; // 0x18

		::System::Void _ctor(::System::Int32 meshKey, ::System::Int32 vertexIndex, ::System::Int32 normalIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VERTEXENTRY__CTOR_OFFSET))(this, meshKey, vertexIndex, normalIndex);
		}
	};
}
