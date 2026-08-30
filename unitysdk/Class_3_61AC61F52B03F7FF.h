#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_AF3AF723C478F113.h"

namespace UnityEngine { class GameObject; }

#define CLASS_3_61AC61F52B03F7FF_GETTYPEID_OFFSET UNITYSDK_OFFSET(0xB42EC70)
#define CLASS_3_61AC61F52B03F7FF__CTOR_OFFSET UNITYSDK_OFFSET(0xB42EC60)

inline static constexpr unsigned int Class_3_61AC61F52B03F7FF_TypeDefinitionIndex = 49469;

class Class_3_61AC61F52B03F7FF : public ::Class_2_AF3AF723C478F113
{
public:
	::System::Void _ctor(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_3_61AC61F52B03F7FF__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 GetTypeID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61AC61F52B03F7FF_GETTYPEID_OFFSET))(this);
	}
};
