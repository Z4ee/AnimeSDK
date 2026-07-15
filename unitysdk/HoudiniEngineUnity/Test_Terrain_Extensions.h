#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class Test_Terrain; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Terrain; }

#define HOUDINIENGINEUNITY_TEST_TERRAIN_EXTENSIONS_TOTESTOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1D2111E0)
#define HOUDINIENGINEUNITY_TEST_TERRAIN_EXTENSIONS_TOTESTOBJECT_2_OFFSET UNITYSDK_OFFSET(0x1D211300)
#define HOUDINIENGINEUNITY_TEST_TERRAIN_EXTENSIONS_TOTESTOBJECT_OFFSET UNITYSDK_OFFSET(0x1D2111A0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_Terrain_Extensions_TypeDefinitionIndex = 38608;

	class Test_Terrain_Extensions : public ::System::Object
	{
	public:
		static ::HoudiniEngineUnity::Test_Terrain* ToTestObject(::UnityEngine::Terrain* a1)
		{
			return ((::HoudiniEngineUnity::Test_Terrain*(*)(::UnityEngine::Terrain*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TERRAIN_EXTENSIONS_TOTESTOBJECT_OFFSET))(a1);
		}

		static ::Il2CppArray<::HoudiniEngineUnity::Test_Terrain*>* ToTestObject_1(::Il2CppArray<::UnityEngine::Terrain*>* a1)
		{
			return ((::Il2CppArray<::HoudiniEngineUnity::Test_Terrain*>*(*)(::Il2CppArray<::UnityEngine::Terrain*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TERRAIN_EXTENSIONS_TOTESTOBJECT_1_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::HoudiniEngineUnity::Test_Terrain*>* ToTestObject_2(::System::Collections::Generic::List_1<::UnityEngine::Terrain*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::HoudiniEngineUnity::Test_Terrain*>*(*)(::System::Collections::Generic::List_1<::UnityEngine::Terrain*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TERRAIN_EXTENSIONS_TOTESTOBJECT_2_OFFSET))(a1);
		}
	};
}
