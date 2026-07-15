#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Texture2D; }

#define HOUDINIENGINEUNITY_TEST_TEXTURE2D_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x1D211530)
#define HOUDINIENGINEUNITY_TEST_TEXTURE2D_ISNULL_OFFSET UNITYSDK_OFFSET(0x1D211510)
#define HOUDINIENGINEUNITY_TEST_TEXTURE2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1D211500)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_Texture2D_TypeDefinitionIndex = 38598;

	class Test_Texture2D : public ::System::Object
	{
	public:
		::UnityEngine::Texture2D* self; // 0x10

		::System::Void _ctor(::UnityEngine::Texture2D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TEXTURE2D__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TEXTURE2D_ISNULL_OFFSET))(this);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::Test_Texture2D* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::Test_Texture2D*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TEXTURE2D_ISEQUIVALENTTO_OFFSET))(this, a1);
		}
	};
}
