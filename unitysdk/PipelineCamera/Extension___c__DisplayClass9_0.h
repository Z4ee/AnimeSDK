#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define PIPELINECAMERA_EXTENSION___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A5D00)
#define PIPELINECAMERA_EXTENSION___C__DISPLAYCLASS9_0__DRAWELLIPSE_G__GENERATOR_0_OFFSET UNITYSDK_OFFSET(0x1B8A5D10)

namespace PipelineCamera
{
	inline static constexpr unsigned int Extension___c__DisplayClass9_0_TypeDefinitionIndex = 35963;

	class Extension___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2>* directions; // 0x10
		::UnityEngine::Vector2 axes; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>* _DrawEllipse_g__Generator_0(::System::Int32 startIndex)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION___C__DISPLAYCLASS9_0__DRAWELLIPSE_G__GENERATOR_0_OFFSET))(this, startIndex);
		}
	};
}
