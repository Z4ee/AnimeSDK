#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Dest::Math { class OdeFunction; }

#define DEST_MATH_ODESOLVER_GET_STEP_OFFSET UNITYSDK_OFFSET(0x1E890610)
#define DEST_MATH_ODESOLVER_SET_STEP_OFFSET UNITYSDK_OFFSET(0x1E890620)
#define DEST_MATH_ODESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E890630)

namespace Dest::Math
{
	inline static constexpr unsigned int OdeSolver_TypeDefinitionIndex = 34756;

	class OdeSolver : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* _FValue; // 0x10
		::Dest::Math::OdeFunction* _function; // 0x18
		::System::Int32 _dim; // 0x20
		::System::Single _step; // 0x24

		::System::Void _ctor(::System::Int32 dim, ::System::Single step, ::Dest::Math::OdeFunction* function)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::Dest::Math::OdeFunction*))((::PBYTE)hIl2Cpp + DEST_MATH_ODESOLVER__CTOR_OFFSET))(this, dim, step, function);
		}

		::System::Single get_Step()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_ODESOLVER_GET_STEP_OFFSET))(this);
		}

		::System::Void set_Step(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_ODESOLVER_SET_STEP_OFFSET))(this, value);
		}
	};
}
