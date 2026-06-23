#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D9FAA3DCCFE14DB8_50.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_179.h"

class Class_0_16E4307DCC419505_7;
class Class_2_208CC9941471731A_131;

#define CLASS_2_25D1AF67551598DE_METHOD_2_60381DE8219B0B79_OFFSET UNITYSDK_OFFSET(0x1404EE30)
#define CLASS_2_25D1AF67551598DE__CTOR_OFFSET UNITYSDK_OFFSET(0x1404EE20)

inline static constexpr unsigned int Class_2_25D1AF67551598DE_TypeDefinitionIndex = 11301;

class Class_2_25D1AF67551598DE : public ::Class_1_D9FAA3DCCFE14DB8_50
{
public:
	::Il2CppArray<::Class_2_208CC9941471731A_131*>* Field_2_0; // 0x58

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_179 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_179, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_25D1AF67551598DE__CTOR_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::Class_2_208CC9941471731A_131*>* Method_2_60381DE8219B0B79()
	{
		return ((::Il2CppArray<::Class_2_208CC9941471731A_131*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25D1AF67551598DE_METHOD_2_60381DE8219B0B79_OFFSET))(this);
	}
};
