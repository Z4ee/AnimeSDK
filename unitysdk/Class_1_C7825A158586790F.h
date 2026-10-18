#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_0_16E4307DCC419505_111;
class Class_1_FD893FD36F6A3A6D_2;

#define CLASS_1_C7825A158586790F_METHOD_1_7B886FF91188AB37_OFFSET UNITYSDK_OFFSET(0x1C51DF00)
#define CLASS_1_C7825A158586790F__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5279B0)

inline static constexpr unsigned int Class_1_C7825A158586790F_TypeDefinitionIndex = 41785;

class Class_1_C7825A158586790F : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7825A158586790F__CTOR_OFFSET))(this);
	}

	::Class_1_FD893FD36F6A3A6D_2* Method_1_7B886FF91188AB37(::Class_0_16E4307DCC419505_111* a1, ::UnityEngine::Vector2Int a2)
	{
		return ((::Class_1_FD893FD36F6A3A6D_2*(*)(::PVOID, ::Class_0_16E4307DCC419505_111*, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_C7825A158586790F_METHOD_1_7B886FF91188AB37_OFFSET))(this, a1, a2);
	}
};
