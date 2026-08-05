#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_JSONPOSLIST___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC52E40)
#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_JSONPOSLIST___C__DISPLAYCLASS2_0__TOJSON_B__0_OFFSET UNITYSDK_OFFSET(0x1BC52E50)

namespace PipeSplineDeformation
{
	inline static constexpr unsigned int PipeSplineRuntimeRenderer_JsonPosList___c__DisplayClass2_0_TypeDefinitionIndex = 27011;

	class PipeSplineRuntimeRenderer_JsonPosList___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::UnityEngine::Transform* creatorTransform; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_JSONPOSLIST___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 _ToJson_b__0(::UnityEngine::Vector3 v)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_JSONPOSLIST___C__DISPLAYCLASS2_0__TOJSON_B__0_OFFSET))(this, v);
		}
	};
}
