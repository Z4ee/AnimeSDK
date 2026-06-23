#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy::Generator { class CGModule; }
namespace UnityEngine { class GameObject; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__DISPLAYCLASS93_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D616B40)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__DISPLAYCLASS93_0__SAVEALLOUTPUTMANAGEDRESOURCES_B__1_OFFSET UNITYSDK_OFFSET(0x1D616B50)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CurvyGenerator___c__DisplayClass93_0_TypeDefinitionIndex = 38915;

	class CurvyGenerator___c__DisplayClass93_0 : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* result; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__DISPLAYCLASS93_0__CTOR_OFFSET))(this);
		}

		::System::Void _SaveAllOutputManagedResources_b__1(::FluffyUnderware::Curvy::Generator::CGModule* m)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModule*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__DISPLAYCLASS93_0__SAVEALLOUTPUTMANAGEDRESOURCES_B__1_OFFSET))(this, m);
		}
	};
}
