#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_1_37DF30C8B3AA0F39_CLASS_1_954DFF4DBC596DCF_METHOD_1_220CC2AD34DC0DCD_OFFSET UNITYSDK_OFFSET(0x1599F110)
#define CLASS_1_37DF30C8B3AA0F39_CLASS_1_954DFF4DBC596DCF__CTOR_OFFSET UNITYSDK_OFFSET(0x1599F100)

inline static constexpr unsigned int Class_1_37DF30C8B3AA0F39_Class_1_954DFF4DBC596DCF_TypeDefinitionIndex = 65423;

class Class_1_37DF30C8B3AA0F39_Class_1_954DFF4DBC596DCF : public ::System::Object
{
public:
	::UnityEngine::Events::UnityAction* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37DF30C8B3AA0F39_CLASS_1_954DFF4DBC596DCF__CTOR_OFFSET))(this);
	}

	::UnityEngine::Events::UnityAction* Method_1_220CC2AD34DC0DCD()
	{
		return ((::UnityEngine::Events::UnityAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37DF30C8B3AA0F39_CLASS_1_954DFF4DBC596DCF_METHOD_1_220CC2AD34DC0DCD_OFFSET))(this);
	}
};
