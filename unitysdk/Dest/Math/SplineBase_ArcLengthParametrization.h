#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DEST_MATH_SPLINEBASE_ARCLENGTHPARAMETRIZATION_GETAPPROXIMATETIMEPARAMETER_OFFSET UNITYSDK_OFFSET(0x1FAD4DB0)
#define DEST_MATH_SPLINEBASE_ARCLENGTHPARAMETRIZATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAD4F10)

namespace Dest::Math
{
	inline static constexpr unsigned int SplineBase_ArcLengthParametrization_TypeDefinitionIndex = 35457;

	class SplineBase_ArcLengthParametrization : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* sSample; // 0x10
		::Il2CppArray<::System::Single>* tSample; // 0x18
		::Il2CppArray<::System::Single>* tsSlope; // 0x20
		::System::Single L; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_SPLINEBASE_ARCLENGTHPARAMETRIZATION__CTOR_OFFSET))(this);
		}

		::System::Single GetApproximateTimeParameter(::System::Single s)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_SPLINEBASE_ARCLENGTHPARAMETRIZATION_GETAPPROXIMATETIMEPARAMETER_OFFSET))(this, s);
		}
	};
}
