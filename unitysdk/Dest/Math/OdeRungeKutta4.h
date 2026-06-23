#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/OdeSolver.h"

namespace Dest::Math { class OdeFunction; }

#define DEST_MATH_ODERUNGEKUTTA4_GET_STEP_OFFSET UNITYSDK_OFFSET(0x1DEC7880)
#define DEST_MATH_ODERUNGEKUTTA4_SET_STEP_OFFSET UNITYSDK_OFFSET(0x1DEC7890)
#define DEST_MATH_ODERUNGEKUTTA4_UPDATE_OFFSET UNITYSDK_OFFSET(0x1DEC79D0)
#define DEST_MATH_ODERUNGEKUTTA4__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC78C0)

namespace Dest::Math
{
	inline static constexpr unsigned int OdeRungeKutta4_TypeDefinitionIndex = 34759;

	class OdeRungeKutta4 : public ::Dest::Math::OdeSolver
	{
	public:
		::Il2CppArray<::System::Single>* _temp3; // 0x28
		::Il2CppArray<::System::Single>* _yTemp; // 0x30
		::Il2CppArray<::System::Single>* _temp1; // 0x38
		::Il2CppArray<::System::Single>* _temp2; // 0x40
		::Il2CppArray<::System::Single>* _temp4; // 0x48
		::System::Single _halfStep; // 0x50
		::System::Single _sixthStep; // 0x54

		::System::Void _ctor(::System::Int32 dim, ::System::Single step, ::Dest::Math::OdeFunction* function)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::Dest::Math::OdeFunction*))((::PBYTE)hIl2Cpp + DEST_MATH_ODERUNGEKUTTA4__CTOR_OFFSET))(this, dim, step, function);
		}

		::System::Single get_Step()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_ODERUNGEKUTTA4_GET_STEP_OFFSET))(this);
		}

		::System::Void set_Step(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_ODERUNGEKUTTA4_SET_STEP_OFFSET))(this, value);
		}

		::System::Void Update(::System::Single tIn, ::Il2CppArray<::System::Single>* yIn, ::System::Single& tOut, ::Il2CppArray<::System::Single>* yOut)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::System::Single>*, ::System::Single&, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + DEST_MATH_ODERUNGEKUTTA4_UPDATE_OFFSET))(this, tIn, yIn, tOut, yOut);
		}
	};
}
