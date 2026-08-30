#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/TreeInstance.h"

#define HOUDINIENGINEUNITY_TEST_TREEINSTANCE_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x1EEF2170)
#define HOUDINIENGINEUNITY_TEST_TREEINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEF2150)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_TreeInstance_TypeDefinitionIndex = 39460;

	class Test_TreeInstance : public ::System::Object
	{
	public:
		::UnityEngine::TreeInstance self; // 0x10

		::System::Void _ctor(::UnityEngine::TreeInstance a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TreeInstance))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TREEINSTANCE__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::Test_TreeInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::Test_TreeInstance*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TREEINSTANCE_ISEQUIVALENTTO_OFFSET))(this, a1);
		}
	};
}
