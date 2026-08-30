#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PriorityQueue_1.h"

#define CLASS_2_74B1F4B989D8EA57_METHOD_2_C3AACF0C1EF2348D_OFFSET UNITYSDK_OFFSET(0x15CC7F00)
#define CLASS_2_74B1F4B989D8EA57__CTOR_OFFSET UNITYSDK_OFFSET(0x15CC7EF0)

inline static constexpr unsigned int Class_2_74B1F4B989D8EA57_TypeDefinitionIndex = 59204;

class Class_2_74B1F4B989D8EA57 : public ::RPG::GameCore::PriorityQueue_1<::System::Boolean>
{
public:
	::System::Void _ctor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_74B1F4B989D8EA57__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_C3AACF0C1EF2348D(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_74B1F4B989D8EA57_METHOD_2_C3AACF0C1EF2348D_OFFSET))(this, a1, a2);
	}
};
