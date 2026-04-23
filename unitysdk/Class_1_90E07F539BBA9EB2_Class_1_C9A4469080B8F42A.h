#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_90E07F539BBA9EB2_CLASS_1_C9A4469080B8F42A__CTOR_OFFSET UNITYSDK_OFFSET(0x12351E30)

inline static constexpr unsigned int Class_1_90E07F539BBA9EB2_Class_1_C9A4469080B8F42A_TypeDefinitionIndex = 59620;

class Class_1_90E07F539BBA9EB2_Class_1_C9A4469080B8F42A : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* PrimaryEquips; // 0x10
	::System::UInt32 Star; // 0x18
	::System::Boolean IsCarry; // 0x1C
	::System::UInt32 PosIndex; // 0x20
	::System::UInt32 RoleID; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90E07F539BBA9EB2_CLASS_1_C9A4469080B8F42A__CTOR_OFFSET))(this);
	}
};
