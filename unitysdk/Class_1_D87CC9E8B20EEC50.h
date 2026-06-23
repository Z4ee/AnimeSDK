#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_247;
class Class_3_AA32EAE205D9293B_2;

#define CLASS_1_D87CC9E8B20EEC50_METHOD_1_6B6AE2B3E1C3264F_OFFSET UNITYSDK_OFFSET(0x13889700)
#define CLASS_1_D87CC9E8B20EEC50_METHOD_1_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x138896B0)
#define CLASS_1_D87CC9E8B20EEC50__CTOR_OFFSET UNITYSDK_OFFSET(0x138895E0)

inline static constexpr unsigned int Class_1_D87CC9E8B20EEC50_TypeDefinitionIndex = 43340;

class Class_1_D87CC9E8B20EEC50 : public ::System::Object
{
public:
	::Class_3_AA32EAE205D9293B_2* Field_1_2; // 0x10
	::Class_2_208CC9941471731A_247* Field_1_3; // 0x18
	::System::Int32 Field_1_4; // 0x20
	::System::Int32 Field_1_0; // 0x24
	::System::Int32 Field_1_1; // 0x28

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D87CC9E8B20EEC50__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D87CC9E8B20EEC50_METHOD_1_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void Method_1_6B6AE2B3E1C3264F(::Class_3_AA32EAE205D9293B_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_AA32EAE205D9293B_2*))((::PBYTE)hIl2Cpp + CLASS_1_D87CC9E8B20EEC50_METHOD_1_6B6AE2B3E1C3264F_OFFSET))(this, a1);
	}
};
