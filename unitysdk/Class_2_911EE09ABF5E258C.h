#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D9FAA3DCCFE14DB8_19.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_218.h"

class Class_0_16E4307DCC419505_13;
class Class_2_208CC9941471731A_131;

#define CLASS_2_911EE09ABF5E258C_METHOD_2_C7AAAB9EAC7964F7_OFFSET UNITYSDK_OFFSET(0x11D012F0)
#define CLASS_2_911EE09ABF5E258C__CTOR_OFFSET UNITYSDK_OFFSET(0x11D012E0)

inline static constexpr unsigned int Class_2_911EE09ABF5E258C_TypeDefinitionIndex = 10242;

class Class_2_911EE09ABF5E258C : public ::Class_1_D9FAA3DCCFE14DB8_19
{
public:
	::Il2CppArray<::Class_2_208CC9941471731A_131*>* Field_2_0; // 0x58

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_218 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_218, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_911EE09ABF5E258C__CTOR_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::Class_2_208CC9941471731A_131*>* Method_2_C7AAAB9EAC7964F7()
	{
		return ((::Il2CppArray<::Class_2_208CC9941471731A_131*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_911EE09ABF5E258C_METHOD_2_C7AAAB9EAC7964F7_OFFSET))(this);
	}
};
