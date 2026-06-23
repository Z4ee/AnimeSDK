#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine { class Renderer; }

#define DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERBEHAVIOUR___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE848B0)
#define DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERBEHAVIOUR___C__DISPLAYCLASS2_0__DOCLUSTERING_B__0_OFFSET UNITYSDK_OFFSET(0x1DE848C0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_MeshBakerGrouperBehaviour___c__DisplayClass2_0_TypeDefinitionIndex = 90568;

	class MB3_MeshBakerGrouperBehaviour___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::UnityEngine::Renderer* r; // 0x10
		::System::Predicate_1<::UnityEngine::Renderer*>* __9__0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERBEHAVIOUR___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _DoClustering_b__0(::UnityEngine::Renderer* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERBEHAVIOUR___C__DISPLAYCLASS2_0__DOCLUSTERING_B__0_OFFSET))(this, x);
		}
	};
}
