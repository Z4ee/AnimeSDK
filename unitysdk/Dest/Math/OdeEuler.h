#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/OdeSolver.h"

namespace Dest::Math { class OdeFunction; }

#define DEST_MATH_ODEEULER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BB1A2C0)
#define DEST_MATH_ODEEULER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB1A260)

namespace Dest::Math
{
	inline static constexpr unsigned int OdeEuler_TypeDefinitionIndex = 33194;

	class OdeEuler : public ::Dest::Math::OdeSolver
	{
	public:
		::System::Void _ctor(::System::Int32 dim, ::System::Single step, ::Dest::Math::OdeFunction* function)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::Dest::Math::OdeFunction*))((::PBYTE)hIl2Cpp + DEST_MATH_ODEEULER__CTOR_OFFSET))(this, dim, step, function);
		}

		::System::Void Update(::System::Single tIn, ::Il2CppArray<::System::Single>* yIn, ::System::Single& tOut, ::Il2CppArray<::System::Single>* yOut)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::System::Single>*, ::System::Single&, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + DEST_MATH_ODEEULER_UPDATE_OFFSET))(this, tIn, yIn, tOut, yOut);
		}
	};
}
