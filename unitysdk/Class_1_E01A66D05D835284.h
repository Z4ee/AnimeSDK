#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_E01A66D05D835284__CTOR_OFFSET UNITYSDK_OFFSET(0x12DB0710)

inline static constexpr unsigned int Class_1_E01A66D05D835284_TypeDefinitionIndex = 49843;

class Class_1_E01A66D05D835284 : public ::System::Object
{
public:
	::System::Int32 Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x14
	::System::Boolean Field_1_7; // 0x18

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E01A66D05D835284__CTOR_OFFSET))(this, a1, a2, a3);
	}
};
