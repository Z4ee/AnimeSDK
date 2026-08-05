#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define CINEMACHINE_NAPINPUTAXISPROVIDER_GETAXISVALUE_OFFSET UNITYSDK_OFFSET(0x1F6D2EF0)
#define CINEMACHINE_NAPINPUTAXISPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6D2F30)

namespace Cinemachine
{
	inline static constexpr unsigned int NapInputAxisProvider_TypeDefinitionIndex = 34722;

	class NapInputAxisProvider : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPINPUTAXISPROVIDER__CTOR_OFFSET))(this);
		}

		::System::Single GetAxisValue(::System::Int32 axis)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPINPUTAXISPROVIDER_GETAXISVALUE_OFFSET))(this, axis);
		}
	};
}
