#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy::Generator { class CGModule; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__DISPLAYCLASS88_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB0D5B0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__DISPLAYCLASS88_0__UPDATEMODULESRECURSIVEINPUTS_B__1_OFFSET UNITYSDK_OFFSET(0x1DB0D5C0)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CurvyGenerator___c__DisplayClass88_0_TypeDefinitionIndex = 38912;

	class CurvyGenerator___c__DisplayClass88_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::FluffyUnderware::Curvy::Generator::CGModule*, ::System::Collections::Generic::HashSet_1<::FluffyUnderware::Curvy::Generator::CGModule*>*>* modulesRecursiveInputs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__DISPLAYCLASS88_0__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::FluffyUnderware::Curvy::Generator::CGModule*>* _UpdateModulesRecursiveInputs_b__1(::FluffyUnderware::Curvy::Generator::CGModule* i)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::FluffyUnderware::Curvy::Generator::CGModule*>*(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModule*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__DISPLAYCLASS88_0__UPDATEMODULESRECURSIVEINPUTS_B__1_OFFSET))(this, i);
		}
	};
}
