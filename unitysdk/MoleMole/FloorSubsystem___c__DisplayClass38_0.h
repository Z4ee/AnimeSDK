#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace MoleMole { class FloorSubsystem; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_FLOORSUBSYSTEM___C__DISPLAYCLASS38_0__CTOR_OFFSET UNITYSDK_OFFSET(0x170F7490)
#define MOLEMOLE_FLOORSUBSYSTEM___C__DISPLAYCLASS38_0__ONSPLINEDISPOSED_B__0_OFFSET UNITYSDK_OFFSET(0x170F74A0)

namespace MoleMole
{
	inline static constexpr unsigned int FloorSubsystem___c__DisplayClass38_0_TypeDefinitionIndex = 40439;

	class FloorSubsystem___c__DisplayClass38_0 : public ::System::Object
	{
	public:
		::FluffyUnderware::Curvy::CurvySpline* spline; // 0x10
		::System::Action_1<::Foundation::Unreal::FGameplayTag>* __9__0; // 0x18
		::MoleMole::FloorSubsystem* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM___C__DISPLAYCLASS38_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnSplineDisposed_b__0(::Foundation::Unreal::FGameplayTag tag)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM___C__DISPLAYCLASS38_0__ONSPLINEDISPOSED_B__0_OFFSET))(this, tag);
		}
	};
}
