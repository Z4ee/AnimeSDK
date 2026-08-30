#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Terrain; }

#define HOUDINIENGINEUNITY_TEST_TERRAIN_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x1EEEFBE0)
#define HOUDINIENGINEUNITY_TEST_TERRAIN_ISNULL_OFFSET UNITYSDK_OFFSET(0x1EEEFBC0)
#define HOUDINIENGINEUNITY_TEST_TERRAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEEFBB0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_Terrain_TypeDefinitionIndex = 39466;

	class Test_Terrain : public ::System::Object
	{
	public:
		::UnityEngine::Terrain* self; // 0x10

		::System::Void _ctor(::UnityEngine::Terrain* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Terrain*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TERRAIN__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TERRAIN_ISNULL_OFFSET))(this);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::Test_Terrain* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::Test_Terrain*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TERRAIN_ISEQUIVALENTTO_OFFSET))(this, a1);
		}
	};
}
