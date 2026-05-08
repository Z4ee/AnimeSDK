#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/OdeSolver.h"

namespace Dest::Math { class OdeFunction; }

#define DEST_MATH_ODEMIDPOINT_GET_STEP_OFFSET UNITYSDK_OFFSET(0x1C55A630)
#define DEST_MATH_ODEMIDPOINT_SET_STEP_OFFSET UNITYSDK_OFFSET(0x1C55A640)
#define DEST_MATH_ODEMIDPOINT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C55A710)
#define DEST_MATH_ODEMIDPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C55A660)

namespace Dest::Math
{
	inline static constexpr unsigned int OdeMidpoint_TypeDefinitionIndex = 33195;

	class OdeMidpoint : public ::Dest::Math::OdeSolver
	{
	public:
		::Il2CppArray<::System::Single>* _yTemp; // 0x28
		::System::Single _halfStep; // 0x30

		::System::Void _ctor(::System::Int32 dim, ::System::Single step, ::Dest::Math::OdeFunction* function)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::Dest::Math::OdeFunction*))((::PBYTE)hIl2Cpp + DEST_MATH_ODEMIDPOINT__CTOR_OFFSET))(this, dim, step, function);
		}

		::System::Single get_Step()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_ODEMIDPOINT_GET_STEP_OFFSET))(this);
		}

		::System::Void set_Step(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_ODEMIDPOINT_SET_STEP_OFFSET))(this, value);
		}

		::System::Void Update(::System::Single tIn, ::Il2CppArray<::System::Single>* yIn, ::System::Single& tOut, ::Il2CppArray<::System::Single>* yOut)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::System::Single>*, ::System::Single&, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + DEST_MATH_ODEMIDPOINT_UPDATE_OFFSET))(this, tIn, yIn, tOut, yOut);
		}
	};
}
