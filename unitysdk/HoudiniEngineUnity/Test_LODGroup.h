#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class LODGroup; }

#define HOUDINIENGINEUNITY_TEST_LODGROUP_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x1B4B05E0)
#define HOUDINIENGINEUNITY_TEST_LODGROUP_ISNULL_OFFSET UNITYSDK_OFFSET(0x1B4B05C0)
#define HOUDINIENGINEUNITY_TEST_LODGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4B05B0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_LODGroup_TypeDefinitionIndex = 39413;

	class Test_LODGroup : public ::System::Object
	{
	public:
		::UnityEngine::LODGroup* self; // 0x10

		::System::Void _ctor(::UnityEngine::LODGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LODGroup*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_LODGROUP__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_LODGROUP_ISNULL_OFFSET))(this);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::Test_LODGroup* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::Test_LODGroup*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_LODGROUP_ISEQUIVALENTTO_OFFSET))(this, a1);
		}
	};
}
