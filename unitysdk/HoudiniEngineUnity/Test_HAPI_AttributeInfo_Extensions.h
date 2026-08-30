#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_AttributeInfo.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class Test_HAPI_AttributeInfo; }

#define HOUDINIENGINEUNITY_TEST_HAPI_ATTRIBUTEINFO_EXTENSIONS_TOTESTOBJECT_OFFSET UNITYSDK_OFFSET(0x1EEEBDF0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_HAPI_AttributeInfo_Extensions_TypeDefinitionIndex = 39408;

	class Test_HAPI_AttributeInfo_Extensions : public ::System::Object
	{
	public:
		static ::HoudiniEngineUnity::Test_HAPI_AttributeInfo* ToTestObject(::HoudiniEngineUnity::HAPI_AttributeInfo a1)
		{
			return ((::HoudiniEngineUnity::Test_HAPI_AttributeInfo*(*)(::HoudiniEngineUnity::HAPI_AttributeInfo))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_HAPI_ATTRIBUTEINFO_EXTENSIONS_TOTESTOBJECT_OFFSET))(a1);
		}
	};
}
