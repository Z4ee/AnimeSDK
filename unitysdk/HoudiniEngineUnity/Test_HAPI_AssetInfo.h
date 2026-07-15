#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_AssetInfo.h"
#include "unitysdk/System/Object.h"

#define HOUDINIENGINEUNITY_TEST_HAPI_ASSETINFO_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x1D20B870)
#define HOUDINIENGINEUNITY_TEST_HAPI_ASSETINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D20B850)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_HAPI_AssetInfo_TypeDefinitionIndex = 38538;

	class Test_HAPI_AssetInfo : public ::System::Object
	{
	public:
		::HoudiniEngineUnity::HAPI_AssetInfo self; // 0x10

		::System::Void _ctor(::HoudiniEngineUnity::HAPI_AssetInfo a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HAPI_AssetInfo))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_HAPI_ASSETINFO__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::Test_HAPI_AssetInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::Test_HAPI_AssetInfo*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_HAPI_ASSETINFO_ISEQUIVALENTTO_OFFSET))(this, a1);
		}
	};
}
