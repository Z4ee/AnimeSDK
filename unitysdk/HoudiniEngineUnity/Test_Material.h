#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }

#define HOUDINIENGINEUNITY_TEST_MATERIAL_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x17F812E0)
#define HOUDINIENGINEUNITY_TEST_MATERIAL_ISNULL_OFFSET UNITYSDK_OFFSET(0x17F812C0)
#define HOUDINIENGINEUNITY_TEST_MATERIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x17F812B0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_Material_TypeDefinitionIndex = 37752;

	class Test_Material : public ::System::Object
	{
	public:
		::UnityEngine::Material* self; // 0x10

		::System::Void _ctor(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MATERIAL__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MATERIAL_ISNULL_OFFSET))(this);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::Test_Material* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::Test_Material*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MATERIAL_ISEQUIVALENTTO_OFFSET))(this, a1);
		}
	};
}
