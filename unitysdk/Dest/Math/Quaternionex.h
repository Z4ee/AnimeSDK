#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace System { class String; }

#define DEST_MATH_QUATERNIONEX_DELTATO_OFFSET UNITYSDK_OFFSET(0x1DAB1100)
#define DEST_MATH_QUATERNIONEX_TOSTRINGEX_OFFSET UNITYSDK_OFFSET(0x1DAB11E0)

namespace Dest::Math
{
	inline static constexpr unsigned int Quaternionex_TypeDefinitionIndex = 34741;

	class Quaternionex : public ::System::Object
	{
	public:
		static ::UnityEngine::Quaternion DeltaTo(::UnityEngine::Quaternion quat, ::UnityEngine::Quaternion target)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + DEST_MATH_QUATERNIONEX_DELTATO_OFFSET))(quat, target);
		}

		static ::System::String* ToStringEx(::UnityEngine::Quaternion quat)
		{
			return ((::System::String*(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + DEST_MATH_QUATERNIONEX_TOSTRINGEX_OFFSET))(quat);
		}
	};
}
