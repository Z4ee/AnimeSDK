#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_AttributeInfo.h"
#include "unitysdk/System/Object.h"

#define HOUDINIENGINEUNITY_TEST_HAPI_ATTRIBUTEINFO_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x1EEEBD00)
#define HOUDINIENGINEUNITY_TEST_HAPI_ATTRIBUTEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEEBCE0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_HAPI_AttributeInfo_TypeDefinitionIndex = 39407;

	class Test_HAPI_AttributeInfo : public ::System::Object
	{
	public:
		::HoudiniEngineUnity::HAPI_AttributeInfo self; // 0x10

		::System::Void _ctor(::HoudiniEngineUnity::HAPI_AttributeInfo a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HAPI_AttributeInfo))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_HAPI_ATTRIBUTEINFO__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::Test_HAPI_AttributeInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::Test_HAPI_AttributeInfo*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_HAPI_ATTRIBUTEINFO_ISEQUIVALENTTO_OFFSET))(this, a1);
		}
	};
}
