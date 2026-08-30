#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_ParmInfo.h"
#include "unitysdk/System/Object.h"

#define HOUDINIENGINEUNITY_TEST_HAPI_PARMINFO_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x1B4AFC00)
#define HOUDINIENGINEUNITY_TEST_HAPI_PARMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4AFBF0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_HAPI_ParmInfo_TypeDefinitionIndex = 39411;

	class Test_HAPI_ParmInfo : public ::System::Object
	{
	public:
		::HoudiniEngineUnity::HAPI_ParmInfo self; // 0x10

		::System::Void _ctor(::HoudiniEngineUnity::HAPI_ParmInfo a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HAPI_ParmInfo))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_HAPI_PARMINFO__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::Test_HAPI_ParmInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::Test_HAPI_ParmInfo*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_HAPI_PARMINFO_ISEQUIVALENTTO_OFFSET))(this, a1);
		}
	};
}
