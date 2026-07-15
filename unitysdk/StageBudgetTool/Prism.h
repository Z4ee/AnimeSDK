#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }

#define STAGEBUDGETTOOL_PRISM_METHOD_1_4C02A9C832395D7A_OFFSET UNITYSDK_OFFSET(0x14EC4FD0)
#define STAGEBUDGETTOOL_PRISM_METHOD_1_57B996E880F6A8CA_OFFSET UNITYSDK_OFFSET(0x14EC4E60)
#define STAGEBUDGETTOOL_PRISM_METHOD_1_E6E9E20688D7143D_OFFSET UNITYSDK_OFFSET(0x14EC4E30)
#define STAGEBUDGETTOOL_PRISM__CTOR_OFFSET UNITYSDK_OFFSET(0x14EC5540)

namespace StageBudgetTool
{
	inline static constexpr unsigned int Prism_TypeDefinitionIndex = 45953;

	class Prism : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* PrismPointList; // 0x10
		::System::Single PrismHeight; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEBUDGETTOOL_PRISM__CTOR_OFFSET))(this);
		}

		::System::Single Method_1_E6E9E20688D7143D(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + STAGEBUDGETTOOL_PRISM_METHOD_1_E6E9E20688D7143D_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_57B996E880F6A8CA(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STAGEBUDGETTOOL_PRISM_METHOD_1_57B996E880F6A8CA_OFFSET))(this, a1);
		}

		::UnityEngine::Mesh* Method_1_4C02A9C832395D7A()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEBUDGETTOOL_PRISM_METHOD_1_4C02A9C832395D7A_OFFSET))(this);
		}
	};
}
