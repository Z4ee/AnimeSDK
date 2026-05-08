#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_274;

#define CLASS_1_5002A338EA6818A8_1__CTOR_OFFSET UNITYSDK_OFFSET(0x10DB8510)

inline static constexpr unsigned int Class_1_5002A338EA6818A8_1_TypeDefinitionIndex = 65637;

class Class_1_5002A338EA6818A8_1 : public ::System::Object
{
public:
	::Class_2_208CC9941471731A_274* Field_1_1; // 0x10
	::System::Boolean Field_1_2; // 0x18
	::System::Int32 Field_1_0; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5002A338EA6818A8_1__CTOR_OFFSET))(this);
	}
};
