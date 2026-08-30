#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_ObjectInfo.h"
#include "unitysdk/System/Object.h"

#define HOUDINIENGINEUNITY_TEST_HAPI_OBJECTINFO_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x1EEEC4B0)
#define HOUDINIENGINEUNITY_TEST_HAPI_OBJECTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEEC490)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_HAPI_ObjectInfo_TypeDefinitionIndex = 39401;

	class Test_HAPI_ObjectInfo : public ::System::Object
	{
	public:
		::HoudiniEngineUnity::HAPI_ObjectInfo self; // 0x10

		::System::Void _ctor(::HoudiniEngineUnity::HAPI_ObjectInfo a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HAPI_ObjectInfo))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_HAPI_OBJECTINFO__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::Test_HAPI_ObjectInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::Test_HAPI_ObjectInfo*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_HAPI_OBJECTINFO_ISEQUIVALENTTO_OFFSET))(this, a1);
		}
	};
}
