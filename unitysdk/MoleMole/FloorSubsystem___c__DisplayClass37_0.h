#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace MoleMole { class FloorSubsystem; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_FLOORSUBSYSTEM___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12BAB320)
#define MOLEMOLE_FLOORSUBSYSTEM___C__DISPLAYCLASS37_0__ONSPLINEADDED_B__0_OFFSET UNITYSDK_OFFSET(0x12BAB330)

namespace MoleMole
{
	inline static constexpr unsigned int FloorSubsystem___c__DisplayClass37_0_TypeDefinitionIndex = 40438;

	class FloorSubsystem___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::MoleMole::FloorSubsystem* __4__this; // 0x10
		::System::Action_1<::Foundation::Unreal::FGameplayTag>* __9__0; // 0x18
		::FluffyUnderware::Curvy::CurvySpline* spline; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnSplineAdded_b__0(::Foundation::Unreal::FGameplayTag tag)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM___C__DISPLAYCLASS37_0__ONSPLINEADDED_B__0_OFFSET))(this, tag);
		}
	};
}
