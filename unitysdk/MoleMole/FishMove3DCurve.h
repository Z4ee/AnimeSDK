#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class CurveAndValue; }

#define MOLEMOLE_FISHMOVE3DCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x17E665C0)

namespace MoleMole
{
	inline static constexpr unsigned int FishMove3DCurve_TypeDefinitionIndex = 83128;

	class FishMove3DCurve : public ::System::Object
	{
	public:
		::MoleMole::CurveAndValue* MoveForwardCurve; // 0x10
		::MoleMole::CurveAndValue* MoveProjectCurve; // 0x18
		::MoleMole::CurveAndValue* MoveHeightCurve; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FISHMOVE3DCURVE__CTOR_OFFSET))(this);
		}
	};
}
