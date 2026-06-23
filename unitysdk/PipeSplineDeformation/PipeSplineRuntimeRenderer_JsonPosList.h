#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_JSONPOSLIST_FROMJSON_OFFSET UNITYSDK_OFFSET(0x1B85A3E0)
#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_JSONPOSLIST_TOJSON_OFFSET UNITYSDK_OFFSET(0x1B85A190)
#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_JSONPOSLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1B85A180)

namespace PipeSplineDeformation
{
	inline static constexpr unsigned int PipeSplineRuntimeRenderer_JsonPosList_TypeDefinitionIndex = 27254;

	class PipeSplineRuntimeRenderer_JsonPosList : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* positions; // 0x10

		::System::Void _ctor(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* positions)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_JSONPOSLIST__CTOR_OFFSET))(this, positions);
		}

		static ::System::String* ToJson(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* positions, ::UnityEngine::Transform* creatorTransform)
		{
			return ((::System::String*(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_JSONPOSLIST_TOJSON_OFFSET))(positions, creatorTransform);
		}

		static ::PipeSplineDeformation::PipeSplineRuntimeRenderer_JsonPosList* FromJson(::System::String* json)
		{
			return ((::PipeSplineDeformation::PipeSplineRuntimeRenderer_JsonPosList*(*)(::System::String*))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_JSONPOSLIST_FROMJSON_OFFSET))(json);
		}
	};
}
