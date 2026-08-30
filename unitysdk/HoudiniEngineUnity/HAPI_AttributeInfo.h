#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_AttributeOwner.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_AttributeTypeInfo.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_StorageType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define HOUDINIENGINEUNITY_HAPI_ATTRIBUTEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x3A96280)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_AttributeInfo_TypeDefinitionIndex = 39209;

	struct alignas(8) HAPI_AttributeInfo
	{
		::System::Boolean exists; // 0x10
		::HoudiniEngineUnity::HAPI_AttributeOwner owner; // 0x14
		::HoudiniEngineUnity::HAPI_StorageType storage; // 0x18
		::HoudiniEngineUnity::HAPI_AttributeOwner originalOwner; // 0x1C
		::System::Int32 count; // 0x20
		::System::Int32 tupleSize; // 0x24
		::System::Int64 totalArrayElements; // 0x28
		::HoudiniEngineUnity::HAPI_AttributeTypeInfo typeInfo; // 0x30

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HAPI_ATTRIBUTEINFO__CTOR_OFFSET))(this, a1);
		}
	};
}
