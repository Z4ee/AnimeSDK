#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_AD28E7CF47263F50_METHOD_1_CF8BA38996D09531_OFFSET UNITYSDK_OFFSET(0x14526950)
#define CLASS_1_AD28E7CF47263F50__CTOR_OFFSET UNITYSDK_OFFSET(0x14526940)

inline static constexpr unsigned int Class_1_AD28E7CF47263F50_TypeDefinitionIndex = 47418;

class Class_1_AD28E7CF47263F50 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x1C

	::System::Void _ctor(::System::Int32 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_AD28E7CF47263F50__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_CF8BA38996D09531()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD28E7CF47263F50_METHOD_1_CF8BA38996D09531_OFFSET))(this);
	}
};
