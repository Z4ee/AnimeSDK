#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_AttributeOwner.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_GroupType.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_PartType.h"
#include "unitysdk/System/ValueType.h"

#define HOUDINIENGINEUNITY_HAPI_PARTINFO_GETELEMENTCOUNTBYATTRIBUTEOWNER_OFFSET UNITYSDK_OFFSET(0x2D4AAA0)
#define HOUDINIENGINEUNITY_HAPI_PARTINFO_GETELEMENTCOUNTBYGROUPTYPE_OFFSET UNITYSDK_OFFSET(0x2D4AAE0)
#define HOUDINIENGINEUNITY_HAPI_PARTINFO_GET_DETAILATTRIBUTECOUNT_OFFSET UNITYSDK_OFFSET(0x2D4AD10)
#define HOUDINIENGINEUNITY_HAPI_PARTINFO_GET_POINTATTRIBUTECOUNT_OFFSET UNITYSDK_OFFSET(0x2D4AB30)
#define HOUDINIENGINEUNITY_HAPI_PARTINFO_GET_PRIMITIVEATTRIBUTECOUNT_OFFSET UNITYSDK_OFFSET(0x2D4ABD0)
#define HOUDINIENGINEUNITY_HAPI_PARTINFO_GET_VERTEXATTRIBUTECOUNT_OFFSET UNITYSDK_OFFSET(0x2D4AC70)
#define HOUDINIENGINEUNITY_HAPI_PARTINFO_INIT_OFFSET UNITYSDK_OFFSET(0x2D4AB00)
#define HOUDINIENGINEUNITY_HAPI_PARTINFO_SET_DETAILATTRIBUTECOUNT_OFFSET UNITYSDK_OFFSET(0x2D4AD60)
#define HOUDINIENGINEUNITY_HAPI_PARTINFO_SET_POINTATTRIBUTECOUNT_OFFSET UNITYSDK_OFFSET(0x2D4AB80)
#define HOUDINIENGINEUNITY_HAPI_PARTINFO_SET_PRIMITIVEATTRIBUTECOUNT_OFFSET UNITYSDK_OFFSET(0x2D4AC20)
#define HOUDINIENGINEUNITY_HAPI_PARTINFO_SET_VERTEXATTRIBUTECOUNT_OFFSET UNITYSDK_OFFSET(0x2D4ACC0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_PartInfo_TypeDefinitionIndex = 37541;

	struct alignas(8) HAPI_PartInfo
	{
		::System::Int32 id; // 0x10
		::System::Int32 nameSH; // 0x14
		::HoudiniEngineUnity::HAPI_PartType type; // 0x18
		::System::Int32 faceCount; // 0x1C
		::System::Int32 vertexCount; // 0x20
		::System::Int32 pointCount; // 0x24
		::Il2CppArray<::System::Int32>* attributeCounts; // 0x28
		::System::Boolean isInstanced; // 0x30
		::System::Int32 instancedPartCount; // 0x34
		::System::Int32 instanceCount; // 0x38
		::System::Boolean hasChanged; // 0x3C

		::System::Int32 getElementCountByAttributeOwner(::HoudiniEngineUnity::HAPI_AttributeOwner a1)
		{
			return ((::System::Int32(*)(::PVOID, ::HoudiniEngineUnity::HAPI_AttributeOwner))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HAPI_PARTINFO_GETELEMENTCOUNTBYATTRIBUTEOWNER_OFFSET))(this, a1);
		}

		::System::Int32 getElementCountByGroupType(::HoudiniEngineUnity::HAPI_GroupType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::HoudiniEngineUnity::HAPI_GroupType))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HAPI_PARTINFO_GETELEMENTCOUNTBYGROUPTYPE_OFFSET))(this, a1);
		}

		::System::Void init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HAPI_PARTINFO_INIT_OFFSET))(this);
		}

		::System::Int32 get_pointAttributeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HAPI_PARTINFO_GET_POINTATTRIBUTECOUNT_OFFSET))(this);
		}

		::System::Void set_pointAttributeCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HAPI_PARTINFO_SET_POINTATTRIBUTECOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_primitiveAttributeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HAPI_PARTINFO_GET_PRIMITIVEATTRIBUTECOUNT_OFFSET))(this);
		}

		::System::Void set_primitiveAttributeCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HAPI_PARTINFO_SET_PRIMITIVEATTRIBUTECOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_vertexAttributeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HAPI_PARTINFO_GET_VERTEXATTRIBUTECOUNT_OFFSET))(this);
		}

		::System::Void set_vertexAttributeCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HAPI_PARTINFO_SET_VERTEXATTRIBUTECOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_detailAttributeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HAPI_PARTINFO_GET_DETAILATTRIBUTECOUNT_OFFSET))(this);
		}

		::System::Void set_detailAttributeCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HAPI_PARTINFO_SET_DETAILATTRIBUTECOUNT_OFFSET))(this, a1);
		}
	};
}
