#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define PIPELINECAMERA_EXTENSION___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D87B5F0)
#define PIPELINECAMERA_EXTENSION___C__DISPLAYCLASS6_0__DRAWRECTANGLE_G__GENERATOR_0_OFFSET UNITYSDK_OFFSET(0x1D87B600)

namespace PipelineCamera
{
	inline static constexpr unsigned int Extension___c__DisplayClass6_0_TypeDefinitionIndex = 37569;

	class Extension___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Vector2>* vertices; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>* _DrawRectangle_g__Generator_0(::System::Int32 startIndex)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION___C__DISPLAYCLASS6_0__DRAWRECTANGLE_G__GENERATOR_0_OFFSET))(this, startIndex);
		}
	};
}
